#include <stdio.h>

int main(void) {

  int score = 80;

  // score�� 90 ~ 100 : A
  // score�� 80 ~ 89 : B
  // score�� 70 ~ 79 : C
  // score�� 60 ~ 69 : D
  // score�� 60 �̸� : F
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
