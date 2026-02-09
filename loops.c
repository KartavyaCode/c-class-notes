#include <stdio.h>

int main() {
  int i = 10;
  /*
  // Agar number of conditions pata ho, then we use for loop. While loop
  // subjective condition ke case mei Do not forget to increase the loop
  // variable in while loop, otherwise it'll run infinitely
  while (i < 5) {
    printf("hi");
    i++;
  }
  // Do-while loop - is a variant of while loop. This loop will execute the code
  // block once before checking if the condition is true, then it will repeat
  // the loop as long as the condition is true.
  do { // do pe koi condition nahi hai, while wali condition hi valid hai do par
    printf("hi");
    i++;
  } while (i < 6);
  // even if the condition is false, the do-while loop runs for one time as
  // chalne ke baad condition check hoyegi

  // prog1 - shop
  int userValue, totalAmount, userResponse;
  printf("enter amount: ");
  scanf("%d", &userValue);
  totalAmount = userValue;
  printf("display total (0) or add more (1): ");
  scanf("%d", &userResponse);
  while (userResponse != 0) {
    printf("enter another amount: ");
    scanf("%d", &userValue);
    totalAmount += userValue;
    printf("display total (0) or add more (1): ");
    scanf("%d", &userResponse);
  }
  printf("%d", totalAmount);

  // prog2 - bank
  int initialBalance = 5000;
  int withdrawAmount, userChoice;
  do {
    printf("enter the amount you want to withdraw: ");
    scanf("%d", &withdrawAmount);
    if (withdrawAmount < initialBalance && withdrawAmount > 0) {
      initialBalance -= withdrawAmount;
      printf("do you want to withdraw more? (1 for yes, 0 for no): ");
      scanf("%d", &userChoice);
    } else {
      printf("invalid amount\n");
      break;
    }
  } while (userChoice != 0);
  printf("%d\n", initialBalance);

  // for loop --> has to be used when you want to know how many times you want
  // to loop through a block of code.
  for (int x = 0; x < 5; x++) {
    printf("%d\n", x);
  }

  // nested loops - using for loop create a program to print fibonacci series
  // upto n digits. HW - do fibonacci until an n number int n, a=0, b=1, c, i;
  // // this is how you can take multiple inputs in one line

  int fibonacci, sum;
  printf("enter the number of fibonacci series terms you want to print: ");
  scanf("%d", &fibonacci);
  int num1 = 0;
  int num2 = 1;
  // printf("%d\n", num1);
  for (int i = 1; i <= fibonacci; i++) { // upto n means inclusive of n
    printf("%d\n", num1);
    sum = num1 + num2;
    num1 = num2;
    num2 = sum;
  }

  int fibonacci, sum;
  printf("enter the number up till which you want the fibonacci series: ");
  scanf("%d", &fibonacci);
  int num1 = 0;
  int num2 = 1;
  // printf("%d\n", num1);
  for (int i = 1; i <= fibonacci; i++) { // upto n means inclusive of n
    if (sum > fibonacci) {
      break;
    } else {
      printf("%d\n", num1);
      sum = num1 + num2;
      num1 = num2;
      num2 = sum;
    }
  }
  */
  // nested loops ka flow is from inside to outside (not really though)
  // break (used to jump out of the loop, the loop immediately stops at that
  // moment) and continue (breaks/skips one iteration in the loop, if a
  // specified condition occurs, and continues with the next iteration in the
  // loop) keywords loop runs 10 times from 0 to 9 Create a program to print 1
  // to 50 (inclusive) but skip multiple of 3
  for (i = 0; i < 51; i++) { // the iteration starts from 0
    if (i % 3 == 0) {
      continue;
    }
    printf("%d\n", i);
  }
  // you can even combine break and continue within a loop. And they can be used
  // within while loop as well.

  i = 0;
  while (i < 10) {
    if (i == 4) { // 1, 2, 3, 4
      break;
    }
    i++;
    printf("%d\n", i);
  }

  return 0;
}
