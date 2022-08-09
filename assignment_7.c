// #include<stdio.h>
// int main()
// {
// int num,num_1=0,num_2=1,n,i=1;
// printf("Enter the Nth term here\n");
// scanf("%d",&n);
// do
// {
//     if(n==1){
//         num = 0;
//         break;
//     }
//     if(n==2){
//         num = 1;
//         break;
//     }
//     num = num_1+num_2;
//     num_1=num_2;
//     num_2=num;
//     i++;
// } while (i<n-1);
// printf("The value of %dth term is %d",n,num);
// return 0;
// }

// #include<stdio.h>
// int main()
// {
// int num,num_1=0,num_2=1,n,i=1;
// printf("Enter the Nth term here\n");
// scanf("%d",&n);
//     if(n==1){
//         printf("0");
//         goto sanjay;
//     }
//     if(n==2){
//         printf("0 1");
//         goto sanjay;
//     }
// printf("0 1");
// do
// {

//     num = num_1+num_2;
//     printf(" %d",num);
//     num_1=num_2;
//     num_2=num;
//     i++;
// } while (i<n-1);
// sanjay:
// return 0;
// }

// #include<stdio.h>
// int main()
// {
// int num,num_1=0,num_2=1,given_number,i=0;
// printf("Enter any number here\n");
// scanf("%d",&given_number);
// if(given_number==0){
//     printf("The given number is fibonocii number\n");
//     goto sanjay;
// }
// do
// {
//     num = num_1 + num_2;
//     if (num==given_number)
//     {
//         printf("This given number is fibonocii number\n");
//         goto sanjay;
//     }
//     else
//     {
//         num_1=num_2;
//         num_2 = num;
//         i++;
//     }
// } while (i<=given_number);
// printf("The given number is not Fibonocii number\n");
// sanjay:
// return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int a, b, i;
//     printf("Enter two numbers here\n");
//     scanf("%d %d", &a, &b);
//     if (a < b)
//     {
//         for (i = a; i >= 1; i--)
//         {
//             if (a%i == 0 && b % i == 0)
//             {
//                 break;
//             }
//         }
//     }
//     if (b < a)
//     {
//         for (i = b; i >= 1; i--)
//         {
//             if (a%i == 0 && b % i == 0)
//             {
//                 break;
//             }
//         }
//     }
//     printf("The HCF of %d and %d is %d", a, b, i);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int a, b, i;
//     printf("Enter two numbers here\n");
//     scanf("%d %d",&a,&b);
//     if (a > b)
//     {
//         for (i = b; i > 1; i--)
//         {
//             if (a % i == 0 && b % i == 0)
//             {
//                 printf("Not a Co-prime Number\n");
//                 goto sanjay;
//             }
//         }
//     }
//     else
//     {
//         if (b > a)
//             for (i = a; i > 1; i--)
//             {
//                 if (a % i == 0 && b % i == 0)
//                 {
//                     printf("Not a Co-Prime\n");
//                     goto sanjay;
//                 }
//             }
//     }
//     printf("Co-Prime Number\n");
// sanjay:
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
// int num,flag=0;
// for ( num = 2; num <= 100; num++)
// {
//     flag=0;
//     for ( int i = 2; i <= num/2; i++)
//     {
//         if (num%i==0)
//         {
//             flag=1;
//             break;
//         }
//     }
//     if (flag==0)
//     {
//         printf("%d ",num);
//     }

// }
// return 0;
// }

// #include<stdio.h>
// int main()
// {
// int num,flag=0,a,b;
// printf("Enter the range here for finding prime numbers\n");
// scanf("%d %d",&a,&b);
// for ( num = a; num <= b; num++)
// {
//     flag=0;
//     for ( int i = 2; i <= num/2; i++)
//     {
//         if (num%i==0)
//         {
//             flag=1;
//             break;
//         }
//     }
//     if (flag==0)
//     {
//         printf("%d ",num);
//     }

// }
// return 0;
// }

// #include<stdio.h>
// int main()
// {
// int num,flag=0,a;
// printf("Enter the value of prime number here\n");
// scanf("%d",&a);
// for ( num = a+1 ; 1 ; num++)
// {
//     flag=0;
//     for ( int i = 2; i <= num/2; i++)
//     {
//         if (num%i==0)
//         {
//             flag=1;
//             break;
//         }
//     }
//     if (flag==0)
//     {
//         printf("%d ",num);
//         break;
//     }

// }
// return 0;
// }

// #include<stdio.h>
// #include<math.h>
// int main()
// {
// int rem,num,sum=0,number,temp,count=0;
// printf("Enter the number here\n");
// scanf("%d",&num);
// temp=num;
// number=num;
// while (temp!=0)
// {
//     count=count+1;
//     temp=temp/10;
// }

// while (num)
// {
//     rem=num%10;
//     sum = sum + pow(rem,count);
//     num=num/10;
// }
// if(sum==number)
// printf("Armstrong Number\n");
// else
// printf("Not an armstrong Number\n");
// return 0;
// }

#include <stdio.h>
#include <math.h>
int main()
{
    int rem, num, sum = 0, number, temp, count = 0;
    for (int i = 1; i < 1001; i++)
    {
        num = i;
        if (num <= 9)
        {
            printf("%d ", num);
        }
        else
        {
            sum = pow(num % 10, 3) + pow((num % 100 - num % 10) / 10, 3) + pow((num % 1000 - num % 100) / 100, 3);
            if (sum == i)
            {
                printf("%d ", i);
            }
        }
    }
    return 0;
}