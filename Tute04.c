/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>
int minimum(int a, int b); // function prototype
int maximum(int a ,int b); // function prototype
int  multiply(int a, int b); // function prototype
int main() {
   int no1, no2;
   printf("Enter a value for no 1 : ");
   scanf("%d", &no1);
   printf("Enter a value for no 2 : ");
   scanf("%d", &no2);
   printf("%d ", minimum(no1, no2));
   printf("%d ", maximum(no1, no2));
   printf("%d ", multiply(no1, no2));
   return 0;
  }

  int minimum(int a, int b) // function definition
  {
    if(a>b)
    {
      return b;
    }
    else
    {
      return a;// return statement
    }
  }
  int maximum(int a ,int b) // function definition
  {
    if(a>b)
    {
      return a;
    }
    else
    {
      return b;// return statement
    }
  }
 int  multiply(int a, int b) // function definition
  {
    int multiply;
    multiply=a*b;
      return multiply;// return statement
    
  }
  

