// WAP to find the factorial of a given number using a pointer.

#include<stdio.h>

int main(){
  int i,f=1,num;
 
  printf("Enter a number: ");
  scanf("%d",&num);
 
  for(i=1;i<=num;i++)
      f=f*i;
 
  printf("Factorial of %d is: %d",num,f);
  return 0;
}

/*

output
Enter a number: 5
Factorial of 5 is: 120
*/
