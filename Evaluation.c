/*
    Evaluate of -:
    e^x = 1 + x + x^2/2! + x^3/3! + .........+ x^n/n
    via
    Tn = Tn-1 * (x/n);*/
#include<stdio.h>
#define Accuracy 0.0001
int main()
{
int n,count;
float x,term,sum;
printf("Enter teh value of x:");
scanf("%f",&x);
n=term=count=sum =1;
while(n<=100)
{
    term = term * x/n;
    sum = sum + term;
    count++;
    if(term < Accuracy)
    n = 999;
    else
    n = n+1;
}
printf("Terms = %d Sum = %f\n",count,sum);
}