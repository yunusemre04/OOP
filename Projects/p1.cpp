#include<iostream>
using std::string;
using std::cout;
using std::endl;

class Person{
protected:
 string name;
 int age;
public:
 string getname(){
      return this->name;
 }
 void setname(string value){
       this->name=value;
 }
 Person(){
   cout<<"class was accessible"<<endl;
 }
 Person(string name,int age):Person(){
    this->name=name;
    this->age=age;
 }
};

class Student: public Person {
    public:
  void student_no(){
     cout<<"student has a student number"<<endl;
  }
  Student(){
     cout<<"student class was accessible"<<endl;
  }
  Student(string name,int age): Person(name,age){
      cout<<"student fullfield class was accessible"<<endl;
  }
};

class Teacher: public Person{
    public:
  void lecture(){
    cout<<"Teacher has a lecture"<<endl;
  }
  Teacher(){
     cout<<"teacher class was accessible"<<endl;
  }
  Teacher(string name,int age): Person(name,age){
      cout<<"teacher fullfield class was accessible"<<endl;
  }
};



int main(){
 Person person1=Person("Ahmet",20);
 cout<<person1.getname()<<endl;
 
 Student person2 = Student("Yunus Emre",18);
 cout<<person2.getname()<<endl;

 Teacher person3=Teacher("Kerem",40);
 cout<<person3.getname()<<endl;
}