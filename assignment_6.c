// #include<stdio.h>
// int main(){
//     int s=0,N;
//     printf("Enter the no. of terms\n");
//     scanf("%d",&N);
//     for (int i = 1; i <=N; i++)
//     {
//         s=s+i;
//     }
//     printf("Sum is %d",s);
//     return 0;
// }


// #include<stdio.h>
// int main(){
//     int s=0,N;
//     printf("Enter the no. of terms\n");
//     scanf("%d",&N);
//     for (int i = 2; i <=2*N; i+=2)
//     {
//         s=s+i;
//     }
//     printf("Sum is %d",s);
//     return 0;
// }


// #include<stdio.h>
// int main(){
//     int s=0,N;
//     printf("Enter the no. of terms\n");
//     scanf("%d",&N);
//     for (int i = 1; i <=2*N-1; i+=2)
//     {
//         s=s+i;
//     }
//     printf("Sum is %d",s);
//     return 0;
// }



// #include<stdio.h>
// int main(){
//     int s=0,N;
//     printf("Enter the no. of terms\n");
//     scanf("%d",&N);
//     for (int i = 1; i <=N; i++)
//     {
//         s=s+i*i;
//     }
//     printf("Sum is %d",s);
//     return 0;
// }


// #include<stdio.h>
// int main(){
//     int s=0,N;
//     printf("Enter the no. of terms\n");
//     scanf("%d",&N);
//     for (int i = 1; i <=N; i++)
//     {
//         s=s+i*i*i;
//     }
//     printf("Sum is %d",s);
//     return 0;
// }


// #include<stdio.h>
// int main(){
//     int fact=1,N;
//     printf("Enter the no. of terms\n");
//     scanf("%d",&N);
//     for (int i = 1; i <=N; i++)
//     {
//         fact=fact*i;
//     }
//     printf("Sum is %d",fact);
//     return 0;
// }



// #include<stdio.h>
// int main(){
//     int n=0,Number;
//     printf("Enter the Numbers here\n");
//     scanf("%d",&Number);
//     while (Number!=0)
//     {
//         n=n+1;
//         Number=Number/10;
//     }
//     printf("%d",n);
//     return 0;
// }


// #include<stdio.h>
// int main()
// {
// int num;
// printf("Enter a number for checking that it is a prime no. or not\n");
// scanf("%d",&num);
// for (int i = 2; i <= num/2; i++)
// {
//     if (num%i==0)
//     {
//         printf("The number %d is not a prime number\n",num);
//         goto sanjay;
//     }
// }
// printf("The given number is a prime number");
// sanjay:
// return 0;
// }

// #include<stdio.h>
// int main()
// {
// int a,b;
// printf("Enter two numbers for LCM\n");
// scanf("%d %d",&a,&b);
//  if(a>=b)
//  {
//     for (int i = 1; i <= b; i++)
//     {
//         if((a*i)%b==0)
//         {
//         printf("The LCM of %d and %d is %d",a,b,a*i);
//         break;
//         }
//     }
//  }
//  else
//  {
//     for (int i = 1; i <= a; i++)
//     {
//         if((b*i)%a==0)
//         {
//         printf("The LCM of %d and %d is %d",a,b,b*i);
//         break;
//         }
//     }
//  }
// return 0;
// }


#include<stdio.h>
int main()
{
int num,rev_num=0;
printf("Enter the number here\n");
scanf("%d",&num);
do
{
    rev_num = rev_num*10+num%10;
    num = num/10;
} while (num%10!=0);
printf("The reverse of %d is %d",num,rev_num);
return 0;
}
