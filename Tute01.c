/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {

  int mark1, mark2;
  float ave;
  //get inputs
  printf("Enter mark 1: \n");
  scanf("%d", &mark1);

  printf("Enter mark 2: \n");
  scanf("%d", &mark2);

  //calculate average
  ave = (mark1+mark2)/2.0;

  //print output
  printf("\nAverage Mark = %0.2f", ave);
  
  return 0;
}

