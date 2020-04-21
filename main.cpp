//working with an Array of structures with students
//Dr_T Programming Fundamentals II
//Jennifer Jimenez 4-20-20
#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Point
{
  int x;
  int y;
};
//object Oriented Coding
class Person
{
  private:
    int age;
    string name;
  public: 
    void setAge(int a) {age = a;}
    void setName(string n) {name = n;}
    int getAge() const {return age;}
    string getName() const {return name;}
    void print()
    {
      cout << "\nName: " << name << endl;
      cout << "Age: " << age;
    }
};

int main() 
{
  Point arr[10]; //10 x,y points can be stored

  //place some manual data in the first point
  arr[0].x = 10;
  arr[0].y = 20;

  //print the first two points to screen
  cout << "(" << arr[0].x << ", " << arr[0].y << ")" << endl;

  //DrT Challenge 1
  //use a for loop to automatically populate arr[] x and y
  for(int i = 0; i < 10; i++)
  {
    arr[i].x = i;
    arr[i].y = (i + 1);
  }
  //use a for loop or shortcut to print all values in arr[] x and y
  for(int j = 0; j < 10; j++)
  {
    cout << "(" << arr[j].x << ", " << arr[j].y << ")" << endl;
  }
  //*************************
  //A vector Of Person objects
  vector<Person> allThePeople;
  
  //Populate allThePeople with Data
  vector<string> names = {"Jennifer", "Yolanda", "Tyrel"};
  vector<int> ages = {25, 25, 19};

  //declare 3 Person objects, place data in them from the names, and ages vector
  Person p1;
  p1.setName(names[0]); //put "Jennifer" as this value
  p1.setAge(ages[0]); //put 37 as this value

  Person p2;
  p2.setName(names[1]);
  p2.setAge(ages[1]);
  
  Person p3;
  p3.setName(names[2]);
  p3.setAge(ages[2]);

  //add p1, p2, and p3 as elements in the allThePeople vector
  allThePeople.push_back(p1);
  allThePeople.push_back(p2);
  allThePeople.push_back(p3);

  //DrT Challenge 3 print all the data in the allThePeople vector
  for(int i = 0; i < allThePeople.size(); i++)
  {
    cout << "\nname: " << allThePeople[i].getName() << endl;
    cout << "age: " << allThePeople[i].getAge() << endl;
    cout << "\nProfile: ";
    allThePeople[i].print();
    //void function call
    cout << endl;
  }
  

  return 0;
}