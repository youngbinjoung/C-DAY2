#include <stdio.h>
int main(void) {
  if ( 1 ) {
    printf("��");
  }

  if ( 0 ) {
    printf("����");
  }

  int a = 10;
  // `==` => ����.
  if ( a == 10 ) {
    printf("��");
  }

  // `!=` => ���� �ʴ�.
  if ( a != 10 ) {
    printf("����");
  }

  if ( a > 10 ) {
    printf("����");
  }

  if ( a >= 10 ) {
    printf("��");
  }

  int b = 10;

  if ( a == b ) {
    printf("��");
  }

  int c = a != b;


  if ( c ) {
    printf("����");
  }

  if ( c == 0 ) {
    printf("��");
  }

  // `!` => ����
  if ( !c ) {
    printf("��");
  }

  // `!` => ����
  if ( !(!c) ) {
    printf("����");
  }

  int d = 1;

  if ( c != d ) {
    printf("��");
  }

return 0;
}
