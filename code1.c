#include <stdio.h>
#include <math.h>

double f1(int arr[])
{
    for(int i=0;i<=10;i++)
    {
      double r=pow(3.0/2,arr[i]);
      printf("%.2lf \t",r);
    }
    printf("\n");
}

double f2(int arr[])
{
    for(int i=0;i<=10;i++)
    {
      double r=pow(arr[i],3);
      printf("%.2lf \t",r);
    }
    printf("\n");
}

double f3(int arr[])
{
    for(int i=0;i<=10;i++)
    {
      double r=pow(log(arr[i]),2);
      printf("%.2lf \t",r);
    }
    printf("\n");
}

double f4(int arr[])
{
    for(int i=0;i<=10;i++)
    {
      double r=pow(2,arr[i]);
      printf("%.2lf \t",r);
    }
    printf("\n");
}

double f5(int arr[])
{
    for(int i=0;i<=10;i++)
    {
      double r=pow(2,arr[i]);
      printf("%.2lf \t",arr[i]*r);
    }
    printf("\n");
}

double f6(int arr[])
{
    for(int i=0;i<=10;i++)
    {
      printf("%d \t",arr[i]);
    }
    printf("\n");
}

double f7(int arr[])
{
    for(int i=0;i<=10;i++)
    {
      double r=arr[i]*log(arr[i]);
      printf("%.2lf \t",r);
    }
    printf("\n");
}

double f8(int arr[])
{
    for(int i=0;i<=10;i++)
    {
      double r=log(arr[i]);
      printf("%.2lf \t",r);
    }
    printf("\n");
}

double f9(int arr[])
{
    for(int i=0;i<=10;i++)
    {
      double r=pow(2,log(arr[i]));
      printf("%.2lf \t",r);
    }
    printf("\n");
}

double f10(int arr[])
{
    for(int i=0;i<=10;i++)
    {
      double r=pow(2,(arr[i]+1));
      printf("(%.2lf) \t",r);
    }
    printf("\n");
}

long fact(int n)
{
        if(n==0)
        return 1;
       
        else
        return (n*fact(n-1));
}

int main()
{
    int arr[11]={0,10,20,30,40,50,60,70,80,90,100};
    f1(arr);
    f2(arr);
    f3(arr);
    f4(arr);
    f5(arr);
    f6(arr);
    f7(arr);
    f8(arr);
    f9(arr);
    f10(arr);
   
    for(int i=0;i<=20;i++)
    {
        fact(i);
        printf("%ld\t",fact(i));
    }
    printf("\n");

    return 0;
}