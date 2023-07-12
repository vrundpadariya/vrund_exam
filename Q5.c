//WAP to find the maximum number from the given 3 numbers using the ternary operator.

#include<stdio.h>
 
void main()
{
    int v,r,u,i;
 
    printf("Enter first numrers :");
    scanf("%d",&v);
    
    printf("Enter first numrers :");
    scanf("%d",&r);
    
    printf("Enter first numrers :");
    scanf("%d",&u);
    
 
    i = v > r ? (v > u ? v : u) : (r > u ? r : u) ;
 
    printf("\nThe biggest numrer is : %d", i) ;
}


/*
output

Enter first numrers :1
Enter first numrers :2
Enter first numrers :15

The biggest numrer is : 15
*/
