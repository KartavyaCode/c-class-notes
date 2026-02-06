// Shorthand If-else (using ternary operator)
// variable = (condition) ? expressionTrue : expressionFalse;
// it uses three operands --> question mark is the ternary operator
#include <stdbool.h>
#include <stdio.h>

int main() {
  int time = 13;

  if (time > 12) {
    printf("Good afternoon"); // in conditionals when first statement becomes
                              // true, rest all are ignored even if the
                              // conditions below are true too.
  } else if (time > 18) {
    printf("Good evening");
  } else if (time == 13) {
    printf("It's 13");
  } else {
    printf("Good morning");
  }

  // However a good practice is to account for worst cases first:
  if (time < 12) {
    printf("Good morning");
  } else if (time < 18) {
    printf("Good afternoon");
  } else {
    printf("Good evening");
  }

  // check whether a number is prime or not
  int num;
  printf("Enter a number to check for prime or not: ");
  scanf("%d", &num);
  int count = 0; // isko initial value bhi toh deni hai, otherwise we'll get
                 // garbage values
  for (int i = 1; i <= num;
       i++) { // another approach is to check from 2 to n-1 and even if one
              // factor exists, the number will not be prime. This helps us
              // avoid the factor 1 and the number itself. Aur agar koi ek bhi
              // factor mil gaya toh, we directly break, cause if a number has
              // just one extra factor, it is directly composite, no need to
              // check for more. Saves computational resources!
    if (num % i == 0) {
      count++;
    }
  }

  if (num < 2) {
    printf("Neither prime nor composite");
  } else if (count <= 2) {
    printf("It is prime");
  } else {
    printf("It is composite");
  }

  // method 2
  int flag = 0;
  if (num < 2) {
    printf("neither prime nor composite");
  } else {
    for (int j = 1; j < num; j++) {
      if (num % j == 0) {
        flag++;
      }
    }
    if (flag > 2) {
      printf("composite");
    } else {
      printf("prime");
    }
  }

  // starting number lekar uske aage tak ke and uske peeche tak ke saare prime
  // numbers print kare
  int num1, num2;
  int flag = 0;
  printf("Enter two numbers for the range: ");
  scanf("%d %d", &num1, &num2);
  if (num1 < 2 && num2 < 2) {
    printf("Cannot find for specified range");
  } else {
    for (int i = num2; i < num1; i++) {
      for (int j = 0; j < i; j++) {
        if (num1 % j == 0) {
          flag++;
          printf("%d", num1);
        }
      }
    }
  }

  if (flag > 2) {
    printf("nothing");
  } else {
    printf("%d", num1);
  }

  int currentTime = 20;
  (currentTime < 18) ? printf("good day") : printf("good evening");

  int userNum;
  printf("Enter a number to check for even/odd: ");
  scanf("%d", &userNum);
  (userNum % 2 == 0) ? printf("even") : printf("odd");

  bool isCitizen = true;
  if (isCitizen) {
  }

  // Logical operators in conditions (&& II !, AND OR NOT)
  if (isLoggedIn &&
      (isAdmin ||
       securityLevel <=
           2)) { // What's the op precedence in this? && pehle then ||?
  }

  // switch statement --> selects one of many code blocks to be executed
  switch (day) {
  case 1:
    printf("Monday");
    break;
  default: // aisa hota hai c mei --> yup it does
    printf("Works when no case is matched");
    break; // default should always be used at the end of switch statement and
           // does not require a break
    // break exists a switch block when the case is matched
  }

  return 0;
}
