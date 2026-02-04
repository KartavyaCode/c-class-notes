#include <stdio.h>
// create a program to swap values of two variables without having to use a temp variable

int main(){
  int a, b;
  a = 10; // how to do the same using multiplication-divisioni
  b = 20;
  // a = a+b; // 30
  // b = a-b; // 30-20 = 10
  // a = a-b; // 30-10 = 20
  
  // Here you did bro!
  a = a*b; // 200
  b = a/b; // 10
  a = a/b; // 20
  printf("%d %d", a, b);
  char _oneChar = 'a';

  return 0;
}