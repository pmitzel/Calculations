#include <stdio.h>

/* Peter Mitzel
 * Program 1, CSCI 112
 * 2/21/18
*/
//This program will take an input of numbers and calculate the average,
// sum, largest and the smallest numbers. It will print all of this information out.

int main(){
  //Initializaing some of the variables.
  int n;
  double avg;
  double sum = 0;
  //Asking for the amount of numbers to be run in the program.
  printf("input the amount of numbers: ");
  scanf("%d", &n);
  //initializing the array with the size of the input of n.
  double x[n];
  //This will ask for each number value and will put it into a position within the array.
  for(int i=0; i<n; i++){
    double num;
    printf("Enter the value for integer %d\n", i+1);
    scanf("%lf", &num);
    x[i]=num;
  }
  //This will print all of the values so they can be easily seen.
  for(int i=0; i<n; i++){
    printf("%.2lf\t", x[i]);
  }
  //This will add all of the values together for the sum.
  for(int i=0; i<n; i++){
    sum += x[i];
  }
  //This sets the variable avg equal to the sum divided by the total number (the average).
  avg = sum/n;
  //Initializing the big and small variables.
  double small=x[0];
  double big=x[0];
  //This for loop will check all the values and set small equal to the smallest value.
  for(int i = 0; i<n; i++){
    if(x[i]<small){
      small=x[i];
    }
  }
  //This for loop will check all the values and set big equal to the largest value.
  for(int i = 0; i<n; i++){
    if(x[i]>big){
      big=x[i];
    }
  }
  //This will print the sum.
  printf("\nThe sum is %.2lf\n", sum);
  //This will print the average.
  printf("The average of these numbers is %.2lf\n", avg);
  //This will print the smallest number.
  printf("The smallest number is %.2lf\n", small);
  //This will print the largest number.
  printf("The largest number is %.2lf\n", big);
  return(0);
}
