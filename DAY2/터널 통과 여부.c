
/*
� ���� ���̰� 170cm �Դϴ�..

�� ���� 3���� �ͳ��� ���ʴ�� ������ �� ���Դϴ�.

�ͳ��� ���̰� ���� ���̺��� ���ų� ���ٸ� ���� �ͳΰ� �浹�Ͽ� ��� ���ϴ�.

�ͳ��� ���̰� ���ʴ�� 3�� �־����� �ͳ��� ������ �� ����ϸ� PASS �� ����ϰ�, ��� ���ٸ� CRASH �� ����ϼ���.
*/
#include <stdio.h>

int main(void) {

  int t1 = 170;
  int t2 = 172;
  int t3 = 190;
  int car=170;


  if(car<t1){
    if(car<t2){
      if(car<t3){
         printf("PASS");
      }
      else{
        printf("CRASH");
      }
    }
    else{
       printf("CRASH");
    }
  }
  else{
    printf("CRASH");
  }

  return 0;
}
