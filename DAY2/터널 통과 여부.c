
/*
어떤 차의 높이가 170cm 입니다..

이 차는 3개의 터널을 차례대로 지나게 될 것입니다.

터널의 높이가 차의 높이보다 같거나 낮다면 차는 터널과 충돌하여 사고가 납니다.

터널의 높이가 차례대로 3개 주어지고 터널을 무사히 잘 통과하면 PASS 를 출력하고, 사고가 난다면 CRASH 를 출력하세요.
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
