/*
#include <iostream>
using namespace std;

//class
class Rectangle{
  private:
    double width; //member variable
    double height;  //member variable
    
  public:
    int isSquare();
    Rectangle();
    Rectangle(double a);
    Rectangle(double w, double h);
};

//constructer
Rectangle::Rectangle(){
  width = 1.0; 
  height = 1.0;
}

Rectangle::Rectangle(double a){
  width = a;
  height = a;
}

Rectangle::Rectangle(double w, double h){
  width = w;
  height = h;
}

//member function
int Rectangle::isSquare(){
  int r;
  if(width == height)
    r = 1;
  else
    r = 0;
  return r;
}

int main() {
  Rectangle rect1;
  Rectangle rect2(3, 5);
  Rectangle rect3(3);

  if(rect1.isSquare()) cout << "rect1은 정사각형이다." << endl;
  if(rect2.isSquare()) cout << "rect2은 정사각형이다." << endl;
  if(rect3.isSquare()) cout << "rect3은 정사각형이다." << endl;
}
*/