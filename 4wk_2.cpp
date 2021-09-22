/*
#include <iostream>
using namespace std;

//class
class Tower{
  public:
    double height;  //member variable
    double getHeight();
    Tower();
    Tower(double a);
};

//constructer
Tower::Tower(){ 
  height = 1.0;
}

Tower::Tower(double a){
  height = a;
}

//member function
double Tower::getHeight(){
  return height;
}

int main() {
  Tower myTower;
  Tower seoulTower(100);

  cout << "높이는" << myTower.getHeight() << "미터"<< endl;
  cout << "높이는" << seoulTower.getHeight() << "미터"<< endl;
}
*/