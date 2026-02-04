#include <stdio.h>

int main(){
  int a, b, op;
  printf("Enter two numbers:\n"); // \n is an escape sequence, \t for horizontal tab
  // scanf("%d", &a);
  // scanf("%d", &a);
  scanf("%d%d", &a, &b);
  printf("1 for add, 2 for sub, 3 for mul, 4 for div:\n");
  scanf("%d", &op);

  if (op == 1){
    printf("%d", a+b);
  }
  else if(op == 2){
    printf("%d", a-b);
  }
  else if(op == 3){
    printf("%d", a*b);
  }
  else{
    printf("%d", a/b);
  }
  return 0;
}