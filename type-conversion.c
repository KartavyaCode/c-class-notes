#include <stdio.h>

int main(){
  // Type Conversion
  // int sum = 5/2; // results in 2 cause of truncation (lower integer value, floor value)

  float myFloat = 9;
  printf("%f", myFloat); // results in 9.000000


  float sum = 5/2;
  int anotherSum = 5/2;
  printf("%f", sum); // should technically result in 2.500000 cause you're using float but it instead shows 2.000000 cause 5 and 2 are int themselves and integer divisions result in int itself.
  printf("%d", anotherSum);

  float another_sum = (float) 5/2;
  int another_result = (float) 5/2; // the data type storing it should also be a float to show actual float value otherwise type-conversion won't work
  printf("%f", another_sum); // results in 2.500000
  printf("%d", another_result);


  return 0;
}