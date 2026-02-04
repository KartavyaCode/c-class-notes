// C follows POP i.e. Procedure Oriented Programming
// OOP vs POP
// use g++ compiler

// You can declare a variable in C without assigning it a value and assign the value later.
// Have to take physical notes T-T

#include <stdio.h>
#include <math.h> // other header files exist too
// is known as a preprocessor, it defines the starting point of a program
// stdio stands for standard input output (it's a header file which allows to perform basic i/o operations)
// include allows you to fetch from stdio

int main(){ // this function returns nothing
  // printf("Hello world\n");
  int i = 11; // the semi-colon is a terminator
  int j = 3;
  int k = i+j;
  printf("The sum of %d and %d is %d", i,j,k); // %d fetches the value of integer k from it's variable's memory address (%d and the variables associated with it must be corresponding values i.e. in order)
  // calculator
  // int a = 3;
  // float b = 5.5;
  // printf("a+b %f", a+b);
  // printf("%f", a+b)

// You have to recompile and run every time you make a change!
// Taking input values from the user (you use scan function)
  int i,j,k;
  printf("Please enter two numbers to add:\n");
  scanf("%d", &i); // % specifies the data type you want to take as an input, & specifies the memory address of which variable that you want to store the value in (not to retrieve value but rather fetch the memory address of the variable)
  scanf("%d", &j);
  k = i+j;
  printf("The value of sum of %d and %d is %d", i,j,k);
  printf("%s", "hello");
  printf("%d", &i); // somehow doesn't work, how to print memory addresses

  int d = 3;
  float e = 4.5;
  char f = 'B'; // mandator to use single quotation
//  char g = "B"; // should technically result in an error, and it actually does!
  printf("%d %f %c %c", d, e, f, g); // says that g is undeclared which truly makes sense, at least you must declare a variable for it to store garbage value.

  int a, b, sum;
  printf("Enter two integers: ");
  // scanf("%d %d", &a, &b); // if you don't include these, you'll get garbage values in the form of an int (cause you used %d, if you use %p instead, you'll get hexacode instead)
  sum = a + b;
  printf("The value of %d and %d is %d: \n", a, b, sum); // order matters
  printf("The value of num is %d ", 20); // without having to declare the variable we directly print out it's value
  printf("The value of num is %D ", 20); // case-sensitive language man, doesn't work!
  // ampersand toh scanf mei lagta hai, not in printf!
  printf("The value of num is %c ", 'a');

  int myNum = 10;
  myNum = 20;
  printf("%d", myNum);

  int other_num = 20;
  myNum = other_num; // code works from T to B and R to L
  printf("%d", myNum)

  return 0;
}
