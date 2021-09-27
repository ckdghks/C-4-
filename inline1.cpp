#include <iostream>
using namespace  std;

inline int odd(int x) {
  return (x%2);
}

int main() {
  int sum = 0;
  
  for(int i=1; i<= 10000; i++) {
    if(odd(i))
      sum += i;
  }
  cout << sum;
}
// 장점: 프로그램의 실행 시간이 빨라진다.
// 단점: 인라인 함수 코드의 삽입으로 컴파일된 전체 코드 크기 증가
// - 통계적으로 최대 30% 증가
// - 짧은 코드의 함수를 인라인으로 선언하는 것이 좋음