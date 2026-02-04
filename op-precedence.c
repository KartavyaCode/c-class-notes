#include <stdio.h>
#include <stdbool.h> // to use bool data type

int main()
{
  int result1 = 2 + 3 * 4;
  printf("%d\n", result1);
  int result2 = (2 + 3) * 4;
  int a = 4 / 2 * 2;                         // 4 (simply go L to R)
  int result = 10 - 2 + 5 * 3;               // 23
  int another_result = 10 * 2 / 5 + (3 - 7); // 0
  printf("%d\n", a);
  printf("%d\n", result2);
  bool is_alive = true; // small mei aayega as we can see
  printf("%d\n", is_alive); // returns 1 (true)
  // try creating a program that actually prints 'true' or 'false'
  printf("%d\n", 10>9); // returns 1

  bool expression = 10>9;
  if ((int) expression == 0){ // conditions are mandatory to be written in parenthesis
    printf("False");
  }else{
    printf("True");
  }

  return 0;
}