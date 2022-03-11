/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {

  int subject1,subject2,average;
  //get subject marks from user
  printf("Enter subject1 marks");
  scanf("%d",&subject1);
  printf("Enter subject2 marks");
  scanf("%d",&subject2);
  //calculate the average marks
  average=(subject1+subject2)/2;
  printf("average mark is %d",average);
  
  
  
  return 0;
}

