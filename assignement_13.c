// #include<stdio.h>
// int sum(int);
// int main()
// {
//     int n,result;
//     printf("Enter no. of terms here\n");
//     scanf("%d",&n);
//     result = sum(n);
//     printf("The sum of %d terms is %d",n,result);
//     return 0;
// }
// int sum(int n)
// {
//     if(n==1)
//     return 1;
//     else
//     return n+sum(n-1);
// }


// #include<stdio.h>
// int sum(int);
// int main()
// {
//     int n,result;
//     printf("Enter no. of terms here\n");
//     scanf("%d",&n);
//     result = sum(n);
//     printf("The sum of %d terms is %d",n,result);
//     return 0;
// }
// int sum(int n)
// {
//     if(n==1)
//     return 1;

//     else
//     return (2*n-1)+sum(n-1);
// }


// #include<stdio.h>
// int sum(int);
// int main()
// {
//     int n,result;
//     printf("Enter no. of terms here\n");
//     scanf("%d",&n);
//     result = sum(n);
//     printf("The sum of %d terms is %d",n,result);
//     return 0;
// }
// int sum(int n)
// {
//     if(n==1)
//     return 2;

//     else
//     return (2*n)+sum(n-1);
// }


// #include<stdio.h>
// int sum_of_square(int);
// int main()
// {
//     int n,result;
//     printf("Enter no. of terms here\n");
//     scanf("%d",&n);
//     result = sum_of_square(n);
//     printf("The sum of %d terms is %d",n,result);
//     return 0;
// }
// int sum_of_square(int n)
// {
//     if(n==1)
//     return 1;

//     else
//     return n*n + sum_of_square(n-1);
// }


// #include<stdio.h>
// int sum(int);
// int main()
// {
//     int num;
//     printf("Enter anu number here\n");
//     scanf("%d",&num);
//     printf("The sum of digits is %d ",sum(num));
//     return 0;
// }
// int sum(int num)
// {
//     int rem = num%10;
//    if(num==0) 
//    return 0;
//    else
//    return rem + sum(num/10);
// }

// #include<stdio.h>
// int fact(int);
// int main()
// {
//     int num;
//     printf("Enter the number here\n");
//     scanf("%d",&num);
//     printf("The factorial of %d is %d",num,fact(num));
//     return 0;
// }

// int fact(int n)
// {
//     if (n==0 || n==1)
//         return 1;
        
//     else
//     return n*fact(n-1);
// }


// #include<stdio.h>
// int HCF(int,int);
// int main()
// {
//     int a,b;
//     printf("Enter two numbers\n");
//     scanf("%d %d",&a,&b);
//     if (a<b)
//     {
//         int temp;
//         temp=b;
//         b=a;
//         a=temp;
//     }
    
//     printf("%d",HCF(a,b));
//     return 0;
// }

// int HCF(int a,int b)
// {
//     int temp;
//     if (a%b==0)
//     {
//         return b;
//     }
//     else
//     {
//         temp=a%b;
//         a=b;
//         b=temp;
//         return HCF(a,b);
//     } 
// }


// #include<stdio.h>
// int num_1=0,num_2=1,num;
// void Fib(int);
// int main()
// {
//     int n;
//     printf("Enter the no. terms here for printing fibonocii series of n terms\n");
//     scanf("%d",&n);
//     if(n==1)
//     printf("0");
//     else if (n==2)
//       printf(" 0 1 ");
//     else if (n>2)
//     {
//       printf(" 0 1 ");
//     Fib(n);
//     }
//     return 0;
// }

// void Fib(int n)
// {
//    num = num_1 + num_2;
//    num_1 = num_2;
//    num_2 = num;
//    if (n==2)
//    {
//     return;
//    }
//    printf("%d ",num);
//    Fib(n-1);
// }

// #include<stdio.h>
// int count = 0;
// int ginti(int num);
// int main()
// {
//   int num;
//   printf("Enter any number here\n");
//   scanf("%d",&num);
//   printf("%d",ginti(num));
//   return 0;
// }
// int ginti(int num)
// {
  
//   if (num ==0)
//   {
//     return count;
//   }
//   count++;
//  num = num/10;
//   ginti(num);
// }

#include<stdio.h>
int i=0;
int power(int,int);
int main()
{
  int num,pow;
  printf("Enter any number and power respectively\n");
  scanf("%d %d",&num,&pow);
  printf("%d",power(num,pow));
  return 0;
}

int power(int num,int pow)
{
  if (pow==0)
  {
    return num;
  }
  num = num*num;
  pow--;
  return power(num,pow-1);
  
}