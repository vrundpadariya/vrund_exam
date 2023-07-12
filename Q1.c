//WAP to print all numbers that are divisible by both 3 & 5 from a given range using UDF.

#include<stdio.h>

void divi(){
	int a,b,i;

printf("Enter starting  point of number : ");
scanf("%d",&a);
printf("Enter ending point of number : ");
scanf("%d",&b);

   for(i=a;i<=b;i++){
    if(i%3 == 0 && i%5 == 0){
	
	printf("This  number is div by 3 and 5 \n");
	printf("%d\n",i);
	}else{
	printf("This  number is not div by 3 and 5 \n");	
	printf("%d\n",i);
	}
}
}


int main(){
    divi();
  	return 0;
}

//output

/*
Enter starting  point of number : 0
Enter ending point of number : 15
This  number is div by 3 and 5
0
This  number is not div by 3 and 5
1
This  number is not div by 3 and 5
2
This  number is not div by 3 and 5
3
This  number is not div by 3 and 5
4
This  number is not div by 3 and 5
5
This  number is not div by 3 and 5
6
This  number is not div by 3 and 5
7
This  number is not div by 3 and 5
8
This  number is not div by 3 and 5
9
This  number is not div by 3 and 5
10
This  number is not div by 3 and 5
11
This  number is not div by 3 and 5
12
This  number is not div by 3 and 5
13
This  number is not div by 3 and 5
14
This  number is div by 3 and 5
15

*/
