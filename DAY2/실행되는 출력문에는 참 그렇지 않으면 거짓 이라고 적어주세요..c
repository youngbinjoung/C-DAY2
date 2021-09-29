#include <stdio.h>
int main(void) {
  if ( 1 ) {
    printf("참");
  }

  if ( 0 ) {
    printf("거짓");
  }

  int a = 10;
  // `==` => 같다.
  if ( a == 10 ) {
    printf("참");
  }

  // `!=` => 같지 않다.
  if ( a != 10 ) {
    printf("거짓");
  }

  if ( a > 10 ) {
    printf("거짓");
  }

  if ( a >= 10 ) {
    printf("참");
  }

  int b = 10;

  if ( a == b ) {
    printf("참");
  }

  int c = a != b;


  if ( c ) {
    printf("거짓");
  }

  if ( c == 0 ) {
    printf("참");
  }

  // `!` => 반전
  if ( !c ) {
    printf("참");
  }

  // `!` => 반전
  if ( !(!c) ) {
    printf("거짓");
  }

  int d = 1;

  if ( c != d ) {
    printf("참");
  }

return 0;
}
