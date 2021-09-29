// 두수 num1과 num2가 주어집니다.
// 두 수중 더 큰수에서 더 작은 수를 뺀 결과를 출력해주세요.

#include <stdio.h>

int main(void) {

  int num1 = 4;
  int num2 = 10;

   if(num1>num2){
    printf("%d - %d = %d",num1,num2,num1-num2);
   }
   else if(num1<num2){
    printf("%d - %d = %d",num2,num1,num2-num1);
   }
   else{
     printf("%d - %d = %d",num1,num2,num1-num2);
   }
  return 0;
}
