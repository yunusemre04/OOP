class Person:
    def __init__(self,name="default",age=0):
        self._name=name
        self._age=age
    @property 
    def name(self):
        return self._name   
    @name.setter
    def setname(self,value):
        self._name=value
    def __repr__(self):
        return f"{self.name}-{self._age}"

class Student(Person):
  def student_no():
      print("student has a student number")
      
class Teacher(Person):
    def lecture():
        print("teacher has a lecture")      
           
person1=Person("Ahmet",18)
print(person1)

person2=Student("Yunus Emre",20)
print(person2)

person3=Teacher("Kerem",40)
print(person3)
   