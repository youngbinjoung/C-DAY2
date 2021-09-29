// 다양한 수열(수의 규칙적인 나열)을 출력해주세요.
#include <stdio.h>

int main(void) {

  // 1. 1 ~ 100까지 출력
  int num=1;
  while(num<=100){
    printf("%d",num);
    num++;
  }
  printf("\n");
  printf("\n");
  // 2. -25 ~ 50까지 출력
  int num2=-25;
  while(num2<=50){
    printf("%d",num2);
    num2++;
  }
  printf("\n");
  printf("\n");
  // 3. 1 ~ 100 까지 짝수만 출력
  int num3=1;
  while(num3<=100){
    if(num3%2==0){
        printf("%d",num3);
    }
    num3++;
  }
  printf("\n");
  printf("\n");
  // 4. 100 ~ 200 사이의 홀수만 출력
  int num4=100;
  while(num4<=200){
    if(num4%2==1){
        printf("%d",num4);
    }
    num4++;
  }
  printf("\n");
  printf("\n");
  // 5. 1 ~ 500 사이의 수 중 4의 배수만 출력
  int num5=1;
  while(num5<=500){
    if(num5%4==0){
        printf("%d",num5);
    }
    num5++;
  }
  printf("\n");
  printf("\n");
  // 6. 1 ~ 1000 사이의 수 중 1000의 약수만 출력 -> 1000 % a == 0
  // 약수 -> 1000을 a로 나누었을 때 나누어 떨어지면 a를 1000의 약수라고 한다.
  // 약수는 1 ~ 자기자신만 대상 수로 한다.
  // 나누어 떨어진다는 것은 나누었을 때 나머지가 0이라는 것을 의미한다.
  for(int num6=1;num6<=1000;num6++){
    if(1000%num6==0){
        printf("%d",num6);
    }
  }
  printf("\n");
  printf("\n");
  // 7. 1 ~ 1000 사이의 수 중 3의 배수 이면서 5의 배수인 수만 출력
  for(int num7=1;num7<=1000;num7++){
    if(num7%3==0 && num7%5==0){
        printf("%d",num7);
    }
  }

  return 0;
}
