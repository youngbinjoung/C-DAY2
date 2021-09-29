// 두 정수의 크기를 비교하여 왼쪽 수가 크면 left 를 출력, 오른쪽 수가 크면 right 를 출력, 같으면 equal 을 출력해주세요.
#include <stdio.h>

int main(void) {

  int left = 10;
  int right = 10;


  if(left>right){
    printf("left");
  }
  else if(left<right){
    printf("right");
  }
  else{
    printf("equal");
  }
  return 0;
}
