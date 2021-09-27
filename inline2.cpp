#include <iostream>
using namespace std;

/*
class Circle {
  private:
    int radius;
  public:
    Circle();
    Circle(int r);
    double getArea();
};

//inline 멤버 함수
inline Circle::Circle() {
  radius = 1;
}

Circle::Circle(int r) {
  radius = r;
}

//inline 멤버 함수
inline double Circle::getArea() {
  return 3.14*radius*radius;
}
*/

class Circle {
  private:
    int radius;
  public:
    Circle() {  // 자동 인라인 함수
      radius = 1;
    }

    Circle(int r);
    double getArea() {  // 자동 인라인 함수
      return 3.14*radius*radius;
    }
};

Circle::Circle(int r) {
  radius = r;
}