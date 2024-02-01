#include<iostream>
using std::string;
using std::cout;
using std:: endl;


class Shape{
protected:
  int x;
  int y;
public:
  virtual void draw() = 0;
  int getx(){
    return x;
  }
  int gety(){
    return y;
  }
  void setx(int value){
        this->y=value;
  }
  void sety(int value){
        this->y=value;
  }
  Shape(int x,int y){
    cout<<"The Shape has been Drawn"<<endl;
  }

};


class Triangle: public Shape{
    public: 
  void draw() override{
    cout<<"The trinangle has been drawn"<<endl;
  }
  Triangle(int x,int y): Shape(x,y) {
    cout<<"The Triangel "<<(x,y)<< " has been drawn"<<endl;
  }
};

class Rectangle: public Shape{
    public: 
  void draw() override{
    cout<<"The Rectangel has been drawn"<<endl;
  }
  Rectangle(int x,int y): Shape(x,y) {
    cout<<"The Rectangel "<<(x)<< " has been drawn"<<endl;
  }
};

class Square: public Rectangle{
    public: 
  void draw() override{
    cout<<"The Square has been drawn"<<endl;
  }
  Square(int x): Rectangle(x,x) {
    cout<<"The Square "<<(x)<< " has been drawn"<<endl;
  }
};




int main(){
Triangle shape1=Triangle(6,2);
shape1.draw();
Rectangle shape2 = Rectangle(7,6);
shape2.draw();
Square shape3= Square(5);
shape3.draw();

return 0;
}