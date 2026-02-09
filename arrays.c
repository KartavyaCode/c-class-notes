#include <stdio.h>

int main() {
  /*
  // to store multiple values in a single variable. The data type of all
  // elements must be homogeneous
  int myNumbers[] = {25, 50, 75,
                     100}; // notice how we use curly braces to define values
  int anotherArray[] = {25, 'a', 30, 40}; // oh damn, it converted it into ASCII
numeric printf("%d", myNumbers[1]); printf("%d", anotherArray[1]); int array2[]
= {3, 3.99, 4, 4.5}; printf("%d", array2[1]); // results in truncation ig
  printf("%d", array2[]); // even this doesn't work to print the entire array

  int emptyArray[4]; // declaring an empty array of a fixed size
  emptyArray[0] = 3; // array elements can be modified this way as well
  emptyArray[4] = 4; // should result in an array

  // To get the size of an array, use the `sizeof()` function
  printf("%zu", sizeof(myNumbers)); // Prints 16 as 4 elements take 4 bytes as
they individually have int data types int length = sizeof(myNumbers) /
sizeof(myNumbers[0]); // to get the actual length of array and not the memory
space that it actually takes (divided the entire array's size by an individual
array's size to the get the number of elements in that array). This formula
works for any data type and size printf("%d", length);

  // making better loops to print out an array
  myNumbers[] = {5, 10, 15, 20, 25}; // note how in this array, we haven't
specified an array length int arrayLength = sizeof(myNumbers) /
sizeof(myNumbers[0]); for(int i = 0; i<arrayLength; i++){ printf("%d",
myNumbers[i]);
  }
  // multi-dimensional arrays
  */
  // finding the lowest possible age mentioned in the array
  // ascending, descending, max, min, second highest, second lowest (play with
  // arrays)
  int ages[] = {20, 22, 18, 35, 48, 26, 87, 70};
  int lowestNum =
      ages[0]; // this was the logic, initial value ko hi lowest value maan lo
  int arrayLen = sizeof(ages) / sizeof(ages[0]);
  for (int j = 0; j < arrayLen; j++) {
    if (lowestNum >
        ages[j]) { // Highest value ke liye bas `<` laga dena in the condition
      lowestNum = ages[j];
    }
  }
  printf("%d", lowestNum);

  // ascending manually (requires some logic, maybe use sorting techniques like
  // quicksort and if more advanced, then bubblesort) --> figure this out
  int newAges[arrayLen];
  int num1 = ages[0];
  int num2 = ages[1];
  for (int k = 0; k < arrayLen; k++) {
    if (num1 < num2) {
      newAges;
    }
  }

  // strcmp stands for string compare, where it compares two strings and returns
  // an integer indicating which one is greater. If there is no mismatch, it
  // returns 0

  return 0;
}
