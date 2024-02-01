#include<iostream>
using std::string;
using std::cout;
using std::endl;

  class Vehicle{
     protected:
       string mainfacture;
       int year;
       string color;
     public:
     string getmainfacture(){
        return mainfacture;
     }
     void setmainfacture(string value){
        mainfacture=value;
     }
      int getyear(){
      return this->year;
     }
     void setyear(int value){
      this->year=value;
     }
     string getcolor(){
      return this->color;
   }
    void setcolor(string value){
        this->color=value;
   }
    Vehicle(){
      cout<<"Vehicle class was accessible\n"<<endl;
    }
    Vehicle(string mainfacture,int year,string color): Vehicle(){
       this->mainfacture=mainfacture;
       this->year=year;
       this->color=color;
    }
    void start(){
      cout<<"the engine started\n"<<endl;
    }
    void stop(){
      cout<<"the engine stopped\n"<<endl;
    }
    void drive(){
      cout<<"the car using drive mod\n"<<endl;
    }
   
   };
   class Car : public Vehicle{
       public:
        Car(){
               cout<<"Car class was accessible\n"<<endl;
        }
        Car(string mainfacture,int year,string color): Vehicle(mainfacture,year,color){

              cout<<"\nCar fullfield class was accessible\n"<<endl;
        }
      void sunroof(){
      cout<<"car has a sunroof\n"<<endl;
        }
    };
    class Truck : public Vehicle{
       public:
        Truck(){
               cout<<"Truck class was accessible\n"<<endl;
        }
        Truck(string mainfacture,int year,string color): Vehicle(mainfacture,year,color){

              cout<<"\nTruck fullfield class was accessible\n"<<endl;
        }
      void tranport(){
              cout<<"Truck has a transporting feature\n"<<endl;
        }
    };

      class Bus : public Vehicle{
       public:
       Bus(){
               cout<<"Bus class was accessible\n"<<endl;
        }
       Bus(string mainfacture,int year,string color): Vehicle(mainfacture,year,color){

              cout<<"\nBus fullfield class was accessible\n"<<endl;
        }
      void schedule(){
      cout<<"Bus has a schedule\n"<<endl;
        }
    };
    class SchoolBus : public Bus{
       public:
        SchoolBus(){
               cout<<"School bus class was accessible\n"<<endl;
        }
        SchoolBus(string mainfacture,int year,string color): Bus(mainfacture,year,color){

              cout<<"School Bus fullfield class was accessible\n"<<endl;
        }
        
      void getfare(){
      cout<<"School Bus has a fare\n"<<endl;
        }
    };

int main(){
 Vehicle item1=Vehicle();
 item1.setmainfacture("Opel");
 cout<<"Vehicle "<<item1.getmainfacture()<<"\n"<<endl;
 
 Vehicle item2 = Vehicle("Bmw",2019,"w");
 cout<<"Vehicle "<<item2.getmainfacture()<<"\n"<<endl;
  
 Car item3 =Car("Scoda",2021,"green");
 cout<<"Vehicle "<<item3.getmainfacture()<<"\n"<<endl;

 SchoolBus item4=SchoolBus("ISUZU",2015,"yellow");
 cout<<"Vehicle "<<item4.getmainfacture()<<"\n"<<endl;
}