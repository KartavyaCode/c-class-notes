#include <stdio.h>

int main() {
  int i = 10;
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

  return 0;
}
