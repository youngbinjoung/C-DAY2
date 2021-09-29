#include <stdio.h>

int main(void) {

  int score = 80;

  // score가 90 ~ 100 : A
  // score가 80 ~ 89 : B
  // score가 70 ~ 79 : C
  // score가 60 ~ 69 : D
  // score가 60 미만 : F
  if(score>=90){
    printf("A");
  }
  else if(score>=80 && score<=89){
    printf("B");
  }
  else if(score>=70 && score<=79){
    printf("C");
  }
  else if(score>=60 && score<=69){
    printf("C");
  }
  else{
    printf("F");
  }






  return 0;
}
