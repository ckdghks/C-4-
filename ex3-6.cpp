#include <iostream>
using namespace std;

class Circle {
  public:
    int radius;

    Circle();
    Circle(int r);
    ~Circle(); // 소멸자
    double getArea();
};

Circle::Circle() {
  radius = 1;
  cout << "반지름 " << radius << " 원 생성" << endl;  
}

Circle::Circle(int r) {
  radius = r;
  cout << "반지름 " << radius << " 원 생성" << endl; 
}

Circle::~Circle() {
  cout << "반지름 " << radius << " 원 소멸" << endl; 
}

double Circle::getArea() {
  return 3.14 * radius * radius;
}

// 전역 객체 생성 (소명 순서는 맨 마지막)
Circle globalDonut(1000);
Circle globalPizza(3000);

// 지역 객체 생성 (소멸 순서는 두 번쨰)
void f() {
  Circle fDonut(100);
  Circle fPizza(200);
}

// 지역 객체 생성 (소멸 순서는 첫 번째)
int main() {
  Circle mainDonut;
  Circle mainPizza(30);
  f();
}