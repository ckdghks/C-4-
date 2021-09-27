// (1) ~ (14) 중 컴파일 오류가 발생하는 부분은?
#include <iostream>
using namespace std;

class PAE { // PAE : Private Access Error
  private:
    int a;
    void f();
    PAE();

  public:
    int b;
    PAE(int x);
    void g();
};

PAE::PAE() {
  a = 1;  // (1)
  b = 1;  // (2)
}

PAE::PAE(int x) {
  a = x;  // (3)
  b = x;  // (4)
}

void PAE::f() {
  a = 5;  // (5)
  b = 5;  // (6)
}

void PAE::g() {
  a = 6;  // (7)
  b = 6;  // (8)
}

int main() {
  PAE objA; // (9)
  PAE objB(100);  // (10)
  objB.a = 10;  //(11)
  objB.b = 20;  //(12)
  objB.f(); //(13)
  objB.g(); //14
}