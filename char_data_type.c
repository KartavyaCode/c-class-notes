#include <stdio.h>

int main(){
  // using in-built ASCII values
  char a = 65, b = 66, c = 67;
  printf("%c\n", a); // used %c instead of %d to print the character counterpart instead (char directly kabhi integer ko uthata nahi)
  printf("%c\n", b);
  printf("%c\n", c);

  char myText = 'Hello'; // characters ke sath double quotes not to be used
  // in language like c and c++, warning is different from an error. You should account for a warning whenever possible but still chalana toh hai hi.
  printf("%c\n", myText); // outputs the last character of the string which is o
  char stringText[] = "Hello"; // created an empty array here
  printf("%s\n", stringText);
  // printf("%c\n", stringText);
  printf("%d %d",11,11); // one space between digits
  printf("%d%d\n",11,11); // no space between digits

  char myChar = 'Cat'; // Double quotation results in an error
  printf("%c", myChar); // by default outputs the last character which is 't' in this case

  char my_char = 'A';
  char my_char2 = "B";
  printf("%c", my_char);
  printf("%c", my_char2);

  return 0;
}