#include <stdio.h>

int main(){
  // do this man
  int f0 = 35e3; // means 35 * 10^3
  float f1 = 35e3; // at what point specifically does overflow happen
  float f3 = 35e9; // e or E both do the same
  float f77 = 23e12; // garbage value comes on it own (8 se 9 ke beech mei kahi breaking point hai)
  double f2 = 35E8;
  printf("%d %f %lf %f3\n", f0, f1, f2, f3);
  printf("%f\n", f77);

  float myFloatNum = 3.5;
  printf("%f\n", myFloatNum); // default will show 6 digits after the decimal
  printf("%.1f\n", myFloatNum); // only show 1 digit
  printf("%.2f\n", myFloatNum); // only show 2 digits
  printf("%.4f\n", myFloatNum); // only show 4 digits

  // Decimal precision
  float a, b, result;
  int op;
  printf("Enter two numbers:\n");
  scanf("%f %f", &a, &b);
  printf("Enter the operations\n");
  scanf("%d", &op);
  if (op == 1){
    result = a + b;
  } else if (op == 2) {
    result = a - b;
  } else if (op == 3){
    result = a * b;
  } else if (op == 4){
    result = a /b;
  } else{
    printf("This results in an error");
  }
  printf("%.3f", result);

  return 0;
}