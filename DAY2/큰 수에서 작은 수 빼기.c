// �μ� num1�� num2�� �־����ϴ�.
// �� ���� �� ū������ �� ���� ���� �� ����� ������ּ���.

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
