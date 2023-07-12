//Write all leap years from a given range into a text file.

#include<stdio.h>

void main(){
	
	int a,b,i;
	FILE *p;
	char even[50],c;
	
	p = fopen("even.txt","w");	
	printf("Enter the starting  range of year");
     scanf("%d",&a);
  
    printf("Enter the ending range of the year");
    scanf("%d",&b); 
   
    for(i=a;i<=b;i++){
    	
    	
    	if((i%4==0) && ((i%400==0) || (i%100!=0))){
             printf(" %d is a leap year\n", i);
			 
           fprintf(p,"%d\n",i);
			  					     
    }else{  
        printf(" %d is not a leap year\n", i);   
    }  
	}
     
}







/*

output 

Enter the starting  range of year2000
Enter the ending range of the year2020
 2000 is a leap year
 2001 is not a leap year
 2002 is not a leap year
 2003 is not a leap year
 2004 is a leap year
 2005 is not a leap year
 2006 is not a leap year
 2007 is not a leap year
 2008 is a leap year
 2009 is not a leap year
 2010 is not a leap year
 2011 is not a leap year
 2012 is a leap year
 2013 is not a leap year
 2014 is not a leap year
 2015 is not a leap year
 2016 is a leap year
 2017 is not a leap year
 2018 is not a leap year
 2019 is not a leap year
 2020 is a leap year

*/
