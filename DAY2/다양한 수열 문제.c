// �پ��� ����(���� ��Ģ���� ����)�� ������ּ���.
#include <stdio.h>

int main(void) {

  // 1. 1 ~ 100���� ���
  int num=1;
  while(num<=100){
    printf("%d",num);
    num++;
  }
  printf("\n");
  printf("\n");
  // 2. -25 ~ 50���� ���
  int num2=-25;
  while(num2<=50){
    printf("%d",num2);
    num2++;
  }
  printf("\n");
  printf("\n");
  // 3. 1 ~ 100 ���� ¦���� ���
  int num3=1;
  while(num3<=100){
    if(num3%2==0){
        printf("%d",num3);
    }
    num3++;
  }
  printf("\n");
  printf("\n");
  // 4. 100 ~ 200 ������ Ȧ���� ���
  int num4=100;
  while(num4<=200){
    if(num4%2==1){
        printf("%d",num4);
    }
    num4++;
  }
  printf("\n");
  printf("\n");
  // 5. 1 ~ 500 ������ �� �� 4�� ����� ���
  int num5=1;
  while(num5<=500){
    if(num5%4==0){
        printf("%d",num5);
    }
    num5++;
  }
  printf("\n");
  printf("\n");
  // 6. 1 ~ 1000 ������ �� �� 1000�� ����� ��� -> 1000 % a == 0
  // ��� -> 1000�� a�� �������� �� ������ �������� a�� 1000�� ������ �Ѵ�.
  // ����� 1 ~ �ڱ��ڽŸ� ��� ���� �Ѵ�.
  // ������ �������ٴ� ���� �������� �� �������� 0�̶�� ���� �ǹ��Ѵ�.
  for(int num6=1;num6<=1000;num6++){
    if(1000%num6==0){
        printf("%d",num6);
    }
  }
  printf("\n");
  printf("\n");
  // 7. 1 ~ 1000 ������ �� �� 3�� ��� �̸鼭 5�� ����� ���� ���
  for(int num7=1;num7<=1000;num7++){
    if(num7%3==0 && num7%5==0){
        printf("%d",num7);
    }
  }

  return 0;
}
