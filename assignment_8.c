// #include<stdio.h>
// int main(){
//     for (int i = 1; i <= 5; i++)
//     {
//         for (int j = 1; j <= 5; j++)
//         {
//             if (j<=i)
//             {
//                 printf("*");
//             }
//             else
//             printf(" ");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     for (int i = 1; i <= 5; i++)
//     {
//         for (int j = 1; j <= 5; j++)
//         {
//             if (j>=6-i)
//             {
//                 printf("*");
//             }
//             else
//             printf(" ");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     for (int i = 1; i <= 5; i++)
//     {
//         for (int j = 1; j <= 5; j++)
//         {
//             if (j<=6-i)
//             {
//                 printf("*");
//             }
//             else
//             printf(" ");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     for (int i = 1; i <= 5; i++)
//     {
//         for (int j = 1; j <= 5; j++)
//         {
//             if (j>=i)
//             {
//                 printf("*");
//             }
//             else
//             printf(" ");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     for (int i = 1; i <= 5; i++)
//     {
//         for (int j = 1; j <= 9; j++)
//         {
//             if (j>5-i && j<5+i)
//             {
//                 printf("*");
//             }
//             else
//             printf(" ");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     for (int i = 1; i <= 5; i++)
//     {
//         for (int j = 1; j <= 9; j++)
//         {
//             if (j>i-1 && j<11-i)
//             {
//                 printf("*");
//             }
//             else
//             printf(" ");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     for (int i = 1; i <= 5; i++)
//     {
//         for (int j = 1; j <= 10; j++)
//         {
//             if (j>6-i && j<5+i)
//             {
//                 printf(" ");
//             }
//             else
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int count=0;
//     for (int i = 1; i <= 4; i++)
//     {
//         count = 0;
//         for (int j = 1; j <= 4-i; j++)
//         {
//            printf(" ");
//         }
//         for (int j = 1; j <= i ; j++)
//         {
//             printf("%d",++count);
//         }
//         while (count!=1)
//         {
//             printf("%d",--count);
//         }

//         printf("\n");
//     }
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int count=0,j;
//     for (int i = 1; i<5 ; i++)
//     {
//         count = 0;
//         for (int j = 1; j < i; j++)
//         {
//            printf(" ");
//         }
//         for (j = 1; j <= 5-i; j++)
//         {
//             printf("%d",++count);
//         }
//         while (count!=1)
//         {
//             printf("%d",--count);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int count = 0, i, j;
//     for (i = 1; i <= 4; i++)
//     {
//         count = 0;
//         for (j = 1; j <= 5 - i; j++)
//         {
//             printf("%d", ++count);
//         }
//         for (j = 1; j <= 2 * i - 3; j++)
//         {
//             printf(" ");
//         }
//         if (i == 1)
//         {
//             while (count != 1)
//             {
//                 printf("%d", --count);
//             }
//         }
//         else
//         {
//             while (count != 0)
//             {
//                 printf("%d", count--);
//             }
//         }

//         printf("\n");
//     }

//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int x=64;
//     for (int i = 1; i <= 5; i++)
//     {
//         x = 64;
//         for (int j = 1; j <= 4-i; j++)
//         {
//            printf(" ");
//         }
//         for (int j = 1; j <= i ; j++)
//         {
//             x++;
//             printf("%c",x);
//         }
//         while (x!=65)
//         {
//             x--;
//             printf("%c",x);
//         }

//         printf("\n");
//     }
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int x=64,j;
//     for (int i = 1; i<5 ; i++)
//     {
//         x = 64;
//         for (int j = 1; j < i; j++)
//         {
//            printf(" ");
//         }
//         for (j = 1; j <= 5-i; j++)
//         {
//             printf("%c",++x);
//         }
//         while (x!=65)
//         {
//             printf("%c",--x);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int x = 64, i, j;
//     for (i = 1; i <= 7; i++)
//     {
//         x = 64;
//         for (j = 1; j <= 8 - i; j++)
//         {
//             printf("%c", ++x);
//         }
//         for (j = 1; j <= 2 * i - 3; j++)
//         {
//             printf(" ");
//         }
//         if (i == 1)
//         {
//             while (x != 65)
//             {
//                 printf("%c", --x);
//             }
//         }
//         else
//         {
//             while (x != 64)
//             {
//                 printf("%c", x--);
//             }
//         }

//         printf("\n");
//     }

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     for (int i = 1; i <= 5; i++)
//     {

//         for (int j = 1; j <= 5; j++)
//         {
//             if (j == i || j == 1 || i == 5)
//             {
//                 printf("*");
//             }
//             else
//                 printf(" ");
//         }
//         printf("\n");
//     }
//     return 0;
// }



// #include <stdio.h>
// int main()
// {
//     for (int i = 1; i <= 5; i++)
//     {

//         for (int j = 1; j <= 5; j++)
//         {
//             if (j ==6 - i || j == 5 || i == 5)
//             {
//                 printf("*");
//             }
//             else
//                 printf(" ");
//         }
//         printf("\n");
//     }
//     return 0;
// }


// #include <stdio.h>
// int main()
// {
//     for (int i = 1; i <= 5; i++)
//     {

//         for (int j = 1; j <= 9; j++)
//         {
//             if (j == 6-i || j==4+i || i == 5)
//             {
//                 printf("*");
//             }
//             else
//                 printf(" ");
//         }
//         printf("\n");
//     }
//     return 0;
// }


// #include <stdio.h>
// int main()
// {
//     for (int i = 1; i <= 5; i++)
//     {

//         for (int j = 1; j <= 9; j++)
//         {
//             if (j == i || j==10-i || i == 1)
//             {
//                 printf("*");
//             }
//             else
//                 printf(" ");
//         }
//         printf("\n");
//     }
//     return 0;
// }


// #include<stdio.h>
// int main(){
//     for (int i = 1; i <= 5; i++)
//     {
//         for (int j = 1; j <= 9; j++)
//         {
//             if (j>5-i && j<5+i)
//             {
//                 printf("*");
//             }
//             else
//             printf(" ");
//         }
//         printf("\n");
//     }

    // for (int i = 2; i <= 5; i++)
    // {
    //     for (int j = 1; j <= 9; j++)
    //     {
    //         if (j>i-1 && j<11-i)
    //         {
    //             printf("*");
    //         }
    //         else
    //         printf(" ");
    //     }
    //     printf("\n");
    // }
//     return 0;
// }



#include<stdio.h>
int main()
{
for (int i = 1; i <= 3; i++)
{
    for (int j = 1; j <= 19; j++)
    {
        if ((j<=6+i && j>=4-i ) ||  (j<= 16+i && j>=14-i))
        {
            printf("*");
        }
        else
         printf(" ");
    }
    printf("\n");
}

for (int i = 1; i <= 19; i++)
{
    if((i>=1 && i<=6)  || (i>=12 && i<=18))
    {
        printf("*");
    }
    if(i==10){
    printf("MySirG");
    }
}
printf("\n");

    for (int i = 1; i <= 9; i++)
    {
        for (int j = 0; j <= 19; j++)
        {
            if (j>i-1 && j<19-i)
            {
                printf("*");
            }
            else
            printf(" ");
        }
        printf("\n");
    }
return 0;
}
