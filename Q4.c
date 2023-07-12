//WAP to print all boundary elements of a given 2D array.


#include<stdio.h>

main()
{
	int i,j,n,m;
	int a[n][m];
	int sum=0;
   
    printf("Enter first numrers :");
    scanf("%d",&n);
    
    printf("Enter first numrers :");
    scanf("%d",&m);
	
	printf("enter array elements:\n");
	for(i=n;i<=m;i++){
		for(j=n;j<=m;j++){
		
		printf("enter a[%d] a[%d]:",i,j);
		scanf("%d",&a[i][j]);
    }
    }
    

}

