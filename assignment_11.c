// #include <stdio.h>
// int LCM(int, int);
// int main()
// {
//     int a, b, lcm;
//     printf("Enter two numbers here\n");
//     scanf("%d %d", &a, &b);
//     lcm = LCM(a, b);
//     printf("The lcm of %d and %d is %d", a, b, lcm);
//     return 0;
// }

// int LCM(int a, int b)
// {
//     int lcm;
//     if (a < b)
//     {
//         for (int i = 1; i <= a; i++)
//         {
//             if ((b * i) % a == 0)
//             {
//                 lcm = b * i;
//                 break;
//             }
//         }
//     }

//     else
//     {
//         for (int i = 1; i <= b; i++)
//         {
//             if ((a * i) % b == 0)
//             {
//                 lcm = a * i;
//                 break;
//             }
//         }
//     }
//     return lcm;
// }

// #include <stdio.h>
// int HCF(int, int);
// int main()
// {
//     int a, b, hcf;
//     printf("Enter two numbers here\n");
//     scanf("%d %d", &a, &b);
//     hcf = HCF(a, b);
//     printf("The hcf of %d and %d is %d", a, b, hcf);
//     return 0;
// }

// int HCF(int a, int b)
// {
//     int hcf;
//     if (a < b)
//     {
//         for (int i = a; i >= 1; i--)
//         {
//             if (a%i==0 && b%i==0)
//             {
//                 hcf = i;
//                 break;
//             }
//         }
//     }

//     else
//     {
//          for (int i = b; i >= 1; i--)
//         {
//             if (a%i==0 && b%i==0)
//             {
//                 hcf = i;
//                 break;
//             }
//         }

//     }
//     return hcf;
// }

// #include<stdio.h>
// int checking(int);
// int main()
// {
//     int num,result;
//     printf("Enter any number here for checking that it is prime no. or not\n");
//     scanf("%d",&num);
//     result = checking(num);
//     if(result==0)
//     printf("This is a prime number\n");
//     else
//     printf("This is not a prime number\n");
//     return 0;
// }

// int checking(int num){
//    int x=0;
//     for (int i = 2; i <= num/2; i++)
//     {
//         if(num%i==0)
//          x=1;
//     }
//     return x;
// }

// #include <stdio.h>
// int checking(int);
// int main()
// {
//     int num, result;
//     printf("Enter any number here for checking that it is prime no. or not\n");
//     scanf("%d", &num);
//     result = checking(num);
//     printf("The next prime number after %d is %d", num, result);
//     return 0;
// }

// int checking(int num)
// {
//     int x = 0;
//     for (int j = num + 1; j < 2 * num; j++)
//     {
//         x = 0;
//         for (int i = 2; i <= j / 2; i++)
//         {
//             if (j % i == 0)
//             {
//                 x = 1;
//                 break;
//             }
//         }
//         if (x != 1)
//         {
//             x = j;
//             break;
//         }
//     }
//     return x;
// }

// #include <stdio.h>
// void printing_prime_number(int);
// int main()
// {
//     int n;
//     printf("Enter no. of terms here\n");
//     scanf("%d", &n);
//     printf("2 ");
//     printing_prime_number(n);
//     return 0;
// }

// void printing_prime_number(int n)
// {
//     int num = 3, j, x = 0;
//     for (int i = 2; i <= n; i++)
//     {
//         while (1)
//         {
//             x=0;
//             for(int j=2; j<num; j++)
//             {
//                 if(num%j==0)
//                 {
//                    x=1;
//                    num++;
//                    break;
//                 }

//             }
//             if(x==0)
//             {
//                 x=num++;
//                 break;
//             }
//         }
//         printf("%d ",x);
//     }
// }



// #include <stdio.h>
// void printing_prime_number(int,int);
// int main()
// {
//     int a,b;
//     printf("Enter range of two numbers here\n");
//     scanf("%d%d", &a,&b);
//     if(a==1 && b==3)
//     {
//     printf("2 ");
//     }
//     else
//     printing_prime_number(a,b);
//     return 0;
// }

// void printing_prime_number(int a,int b)
// {
//     int flag=0;
//     for (int num = a+1; num < b; num++)
//     {      flag=0;
//         for (int i = 2; i < num; i++)
//         {
//             if(num%i==0)
//             {
//                 flag=1;
//                 break;
//             }
//         }
//         if (flag==0)
//         {
//             printf("%d ",num);
//         }
        
//     }
    
// }



// #include<stdio.h>
// void fibonocii(int);
// int main()
// {
//  int n;
//  printf("Enter no. of terms of fibonocii series\n");
//  scanf("%d",&n);
//  if(n==1)
//  {
//     printf("0");
//  }
//  else if(n==2)
//  {
//     printf("0 1");
//  }
//  else
//  printf("0 1 ");
//  fibonocii(n);
//  return 0;
// }
// void fibonocii(int n)
// {
//     int num_1=0,num_2=1,num;
//     for(int i=3;i<=n;i++)
//     {
//         num = num_1 + num_2;
//         printf("%d ",num);
//         num_1=num_2;
//         num_2=num;
//     }
// }



#include<stdio.h>
void pascal_triangle(int);
int comb(int,int);
int main()
{
  int n;
  printf("Enter no. of rows for pascal's tringle\n");
  scanf("%d",&n);
  pascal_triangle(n);
  return 0;
}

void pascal_triangle(int n)
{    
    for (int i = 0; i < n; i++)
    {
      for (int s = 0; s < n-i; s++)
      {
         printf(" ");
      }
    for (int j = 0; j <= i; j++)
    {
      printf("%d ",comb(i,j));
    }
    

      printf("\n");
    }
    
}

int fact(int n)
{
    if(n==1 || n==0)
    return 1;
    else
    return n*fact(n-1);
}

int comb(int n,int r)
{
    int c = fact(n)/(fact(n-r)*fact(r));
    return c;
}


// #include<stdio.h>
// void square(int);
// int main()
// {
// int n;
// printf("Enter any number\n");
// scanf("%d",&n);
// square(n);
// return 0;
// }
// void square(int n)
// {
//     printf("The square of %d is %d",n,n*n);
// }


// #include<stdio.h>
// int fact(int);

// int main()
// {
//     int sum;
//     sum = fact(1)/1 + fact(2)/2 + fact(3)/3 + fact(4)/4 + fact(5)/5;
//     printf("The solution of series is %d",sum);
// return 0;
// }

// int fact(int n)
// {
//    if(n==1)
//    return 1;
//    else
//    return n*fact(n-1);
// }
