#include<stdio.h>
#include<stdlib.h>

int main()

{
 int n;
 printf("enter a number:%d",&n);
 if(n>0)
 {
 printf("the number is positive");
 }
 else if(n<0)
 {
 printf("the number is negative");
 }
 else if(n=0)
 {
 printf("the number is zero");
 }
    return 0;
}