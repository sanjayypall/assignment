// #include <stdio.h>
// int main()
// {
//     int a[3][3];
//     printf("Enter 9 elements of first matrix\n");
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//             scanf("%d", &a[i][j]);
//     }

//     int b[3][3];
//     printf("Enter 9 elements of second matrix\n");
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//             scanf("%d", &b[i][j]);
//     }

//     printf("The first matrix is \n");
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             printf("%d ", a[i][j]);
//         }
//         printf("\n");
//     }
//     printf("The second matrix is \n");
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             printf("%d ", b[i][j]);
//         }
//         printf("\n");
//     }

//      int c[3][3];
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             c[i][j] = a[i][j] + b[i][j];
//         }
//     }
//     printf("The new array is \n");
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             printf("%d ", c[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int sum=0,k;
//     int a[3][3];
//     printf("Enter 9 elements of first matrix\n");
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//             scanf("%d", &a[i][j]);
//     }

//     int b[3][3];
//     printf("Enter 9 elements of second matrix\n");
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//             scanf("%d", &b[i][j]);
//     }

//     printf("The first matrix is \n");
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             printf("%d ", a[i][j]);
//         }
//         printf("\n");
//     }
//     printf("The second matrix is \n");
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             printf("%d ", b[i][j]);
//         }
//         printf("\n");
//     }

//      int c[3][3];
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//            sum = 0;
//            for ( k = 0; k < 3; k++)
//            {
//             sum = sum + a[i][k]*b[k][j];
//             c[i][j] = sum;
//            }

//         }
//     }
//     printf("The product of two array is \n");
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             printf("%d ", c[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int i,j;
//    int a[2][3],b[3][2];
//     printf("Enter elements of matrix 2*3 here\n");
//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             scanf("%d",&a[i][j]);
//         }

//     }

//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             b[j][i] = a[i][j];
//         }

//     }
//    printf("The first matrix 'a' is \n");
//      for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             printf("%d ",a[i][j]);
//         }
//         printf("\n");
//     }
//         printf("Transpose of matrix 'a' is \n");

//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 2; j++)
//         {
//             printf("%d ",b[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int a[3][3],sum=0;
//     printf("Enter 9 elements of matrix\n");
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             scanf("%d",&a[i][j]);
//         }

//     }

//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//            if (i+j==2)
//            {
//             sum = sum + a[i][j];
//            }

//         }

//     }

//      for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//            printf("%d ",a[i][j]);
//         }
//         printf("\n");
//     }
//     printf("The sum of left diagonal of a matrix is : %d",sum);
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int a[3][3],sum=0;
//     printf("Enter 9 elements of matrix\n");
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             scanf("%d",&a[i][j]);
//         }

//     }

//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             if (i==j)
//             {
//                 sum = sum + a[i][j];
//             }

//         }

//     }

//      for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//            printf("%d ",a[i][j]);
//         }
//         printf("\n");
//     }
//     printf("The sum of right diagonal of a matrix is : %d",sum);
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int a[3][3],n,x,sum=0;
//     printf("Enter 9 elements of matrix\n");
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             scanf("%d",&a[i][j]);
//         }

//     }
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//            printf("%d ",a[i][j]);
//         }
//         printf("\n");
//     }
//     printf("What do you want sum of rows or column\n");
//     printf("Press 1 for sum of rows and 2 for sum of column\n");
//     scanf("%d",&x);
//     if(x==1)
// {

//      printf("Enter the sum of which row\n");
//      scanf("%d",&n);
//     for (int i = n-1; i < n; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//           sum = sum + a[i][j];
//         }

//     }
//         printf("The sum of row of a matrix is : %d",sum);

// }
// if(x==2)
// {
//      printf("Enter the sum of which column\n");
//      scanf("%d",&n);
//     for (int i = n-1; i < n; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//           sum = sum + a[j][i];
//         }

//     }
//     printf("The sum of column of a matrix is : %d",sum);
// }
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int a[3][3];
//     printf("Enter 9 elements of 3*3 matrix here\n");
//     for (int i = 0; i < 3; i++)
//     {
//        for (int j = 0; j < 3; j++)
//        {
//            scanf("%d",&a[i][j]);
//        }

//     }

//      for (int i = 0; i < 3; i++)
//     {
//        for (int j = 0; j < 3; j++)
//        {
//            printf("%d ",a[i][j]);
//        }
//        printf("\n");
//     }

//     printf("lower matrix of a is\n");
//      for (int i = 0; i < 3; i++)
//     {
//        for (int j = 0; j < 3; j++)
//        {
//            if (j<=i)
//            {
//             printf("%d ",a[i][j]);
//            }

//        }
//        printf("\n");
//     }

// }

// #include <stdio.h>
// int main()
// {
//     int a[3][3];
//     printf("Enter 9 elements of 3*3 matrix here\n");
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             scanf("%d", &a[i][j]);
//         }
//     }

//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             printf("%d", a[i][j]);
//         }
//         printf("\n");
//     }

//     printf("upper matrix of a is\n");
//     for (int i = 0; i < 3; i++)
//     {
//         if (i == 1)
//         {
//             printf(" ");
//         }
//         if (i == 2)
//         {
//             printf("  ");
//         }
//         for (int j = 0; j < 3; j++)
//         {

//             if (j >= i)
//             {
//                 printf("%d", a[i][j]);
//             }
//         }
//         printf("\n");
//     }
// }



// #include<stdio.h>
// int main()
// {
//     int a[3][3],sum=0;
//     printf("Enter '9' elements of 3*3 matrix\n");
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             scanf("%d",&a[i][j]);
//         }
        
//     }

//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             printf("%d ",a[i][j]);
//         }
//         printf("\n");
//     }

//    for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//            if (a[i][j]==0)
//            {
//             sum++;
//            }
           
//         }
        
//     }

//     if (sum>4)
//     {
//         printf("Given matrix is a sparse matrix");
//     }
//     else
//     printf("Normal Matrix");
    
//    return 0;    
// }


#include<stdio.h>
int main()
{
    int x[3][3],a=0,b=0,c=0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d",&x[i][j]);
        }
        
    }

   for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ",x[i][j]);
        }
        printf("\n");
    }
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
           if (i==0 && x[i][j]==1)
           {
             a++;
           }
           if (i==1 && x[i][j]==1)
           {
             b++;
           }
           if (i==2 && x[i][j]==1)
           {
             c++;
           }
           
        }
        
    }
    if (a>=b && a>c)
    {
        printf("1st rows has max no. of 1's \n");
    }
     else if (b>=a && b>c)
    {
        printf("2nd rows has max no. of 1's \n");
    }
    else if(c>=a && c>b)
    printf("3rd rows has max no. of 1's \n");
    
    else
    printf("All rows has equal no. of 1's \n");

    return 0;
}

