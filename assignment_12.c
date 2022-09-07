// #include<stdio.h>
// void natural(int,int);
// int main()
// {
//   int x=1,y;
//   printf("Enter the limit here\n");
//   scanf("%d",&y);
//   natural(x,y);
//   return 0;
// }

// void natural(int x, int y)
// {
//    if (x<=y)
//    {
//       printf("%d ",x);
//       x++;
//       natural(x,y);
//    }
// }


// #include<stdio.h>
// void natural(int);
// int main()
// {
//   int y;
//   printf("Enter the limit here\n");
//   scanf("%d",&y);
//   natural(y);
//   return 0;
// }

// void natural( int y)
// {
//    if (y>0)
//    {
//       printf("%d ",y);
//       y--;
//       natural(y);
//    }
// }


// #include<stdio.h>
// void natural(int,int);
// int main()
// {
//   int x=1,y;
//   printf("Enter the limit here\n");
//   scanf("%d",&y);
//   natural(x,y);
//   return 0;
// }

// void natural(int x, int y)
// {
//    if (x<=y)
//    {
//       printf("%d ",2*x-1);
//       x++;
//       natural(x,y);
//    }
// }



// #include<stdio.h>
// void natural(int);
// int main()
// {
//   int y;
//   printf("Enter the limit here\n");
//   scanf("%d",&y);
//   natural(y);
//   return 0;
// }

// void natural(int x)
// {
//    if (x>0)
//    {
//       printf("%d ",2*x-1);
//       x--;
//       natural(x);
//    }
// }


// #include<stdio.h>
// void natural(int,int);
// int main()
// {
//   int y,x=1;
//   printf("Enter the limit here\n");
//   scanf("%d",&y);
//   natural(x,y);
//   return 0;
// }

// void natural(int x,int y)
// {
//    if (x<=y)
//    {
//       printf("%d ",2*x);
//       x++;
//       natural(x,y);
//    }
// }

// #include<stdio.h>
// void natural(int);
// int main()
// {
//   int y;
//   printf("Enter the limit here\n");
//   scanf("%d",&y);
//   natural(y);
//   return 0;
// }

// void natural(int x)
// {
//    if (x>0)
//    {
//       printf("%d ",2*x);
//       x--;
//       natural(x);
//    }
// }


// #include<stdio.h>
// void natural(int,int);
// int main()
// {
//   int x=1,y;
//   printf("Enter the limit here\n");
//   scanf("%d",&y);
//   natural(x,y);
//   return 0;
// }

// void natural(int x, int y)
// {
//    if (x<=y)
//    {
//       printf("%d ",x*x);
//       x++;
//       natural(x,y);
//    }
// }


// #include<stdio.h>
// void binary(int);
// int main()
// {
//   int x;
//   printf("Enter any number here\n");
//   scanf("%d",&x);
//   binary(x);
//   return 0;
// }

// void binary(int n)
// {
//   if (n==0)
//   {
//     return;
//   }
//   binary(n>>1);
//   printf("%d",n&1);
// }


// #include<stdio.h>
// void octal(int);
// int main()
// {
//   int x;
//   printf("Enter any number here\n");
//   scanf("%d",&x);
//   octal(x);
//   return 0;
// }

// void octal(int n)
// {
//   if (n>=1)
//   {
//   octal(n/8);
//   printf("%d",n%8);
//   }
// }


#include<stdio.h>
void reverse(int);
int main()
{
  int x;
  printf("Enter any number here\n");
  scanf("%d",&x);
  reverse(x);
  return 0;
}

void reverse(int num)
{
 if (num!=0)
 {
  printf("%d",num%10);
  num=num/10;
  reverse(num);
 }
 
}