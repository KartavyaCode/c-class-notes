#include <stdio.h>
// #include <string.h> // strcmp()

int main(){
  // increment / decrement operators
  int x = 10;
  x++; // valid, unlike in python (it is x=x+1)
  ++x; // pre-increment

  int myInt;
  float myFloat;

  printf("%zu", sizeof(myInt)); // What is zu the format specifier for? --> is only used when you're using sizeof keyword, otherwise you won't be using it.
  printf("%zu\n", sizeof(myFloat));

  int z = 5;
  // differentiating between pre-increment and post-increment
  // ++z;
  // printf("%d\n", z);
  // z++;
  // printf("%d\n", z);
  // printf("%d\n", z++); // outputs 5 as increment happens later
  // printf("%d\n", ++z); // outputs 7 as first increment happens because of z++ and then again adds ++z to get 5+1+1 = 7

  // printf("%d\n", z++); // 5
  // printf("%d\n", z--); // 6
  // printf("%d\n", z); // 5
  printf("%d\n%d\n%d\n%d\n", ++z, z++, --z, z--); // why 5 5

  int a = 5;
  // addition assignment operator
  a+=3;

  // BITWISE
  a = 60; // convert into binary
  int b = 13; // convert into binary
  a &= b; // Bitwise AND assignment: a = a & b => 60 & 13 = 12 (AND mei multiplication happens of binary digits)
  a |= b; // Bitwise OR assignment (OR mei addition happens of binary digits)
  printf("%d", a);
  a ^= b; // Bitwise XOR assignment
  a = 15;
  a%=3; // modulo assignment operator also exists ig
  printf("%d", a); // results in 0 ig


  char horo1, horo2;
  printf("Enter two horoscopes:\n");
  scanf("%c %c", &horo1, &horo2);
  if (horo1 == horo2){
    printf("Same");
  }else{
    printf("Different");
  }

  "\0"; // is null terminator
  // Take input from the user as user_age, if age >= 18, eligible to vote otherwise not eligible to vote
  int age;
  printf("Enter your age:\n");
  scanf("%d", &age);
  if (age>=18){
    printf("eligible to vote");
  }else{
    printf("ineligible");
  }

  // this doesn't work (not a format, instead results in warning)
  printf("eligible to vote", age>=18);
  printf("not eligible to vote", age<18);


  return 0;
}