// #include<stdio.h>
// int main()
// {
//     int sum = 0;
//     int a[10];
//     printf("Enter here 10 elements of an array\n");
//     for (int i = 0; i < 10; i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     for (int i = 0; i < 10; i++)
//     {
//         sum = sum + a[i];
//     }
//     printf("The sum of array is %d",sum);
//     return 0; 
// }


// #include<stdio.h>
// int main()
// {
//     float sum = 0;
//     int a[10];
//     printf("Enter here 10 elements of an array\n");
//     for (int i = 0; i < 10; i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     for (int i = 0; i < 10; i++)
//     {
//         sum = sum + a[i];
//     }
//     printf("The avg of of array is %.2f",sum/10.0);
//     return 0; 
// }

// #include<stdio.h>
// int main()
// {
//     int sum_of_even = 0;
//     int sum_of_odd = 0;
//     int a[10];
//     printf("Enter here 10 elements of an array\n");
//     for (int i = 0; i < 10; i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     for (int i = 0; i < 10; i++)
//     {
//         if(a[i]%2==0)
//         sum_of_even = sum_of_even + a[i];
//         else
//         sum_of_odd = sum_of_odd + a[i];
//     }
//     printf("The sum of even number and odd number in an array are  %d and %d",sum_of_even,sum_of_odd);
//     return 0; 
// }


// #include<stdio.h>
// int main()
// {
//     int G_N;
//     int a[10];
//     printf("Enter here 10 elements of an array\n");
//     for (int i = 0; i < 10; i++)
//     {
//         scanf("%d",&a[i]);
//     }
//        G_N = a[0];
//     for (int i = 0; i < 10; i++)
//     {
//        if (G_N<=a[i])
//        {
//           G_N = a[i];
//        }
       
//     }
//     printf("The Greatest number of an array is %d",G_N);
//     return 0; 
// }



// #include<stdio.h>
// int main()
// {
//     int S_N;
//     int a[10];
//     printf("Enter here 10 elements of an array\n");
//     for (int i = 0; i < 10; i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     S_N = a[0];
//     for (int i = 0; i < 10; i++)
//     {
//        if (S_N>=a[i])
//        {
//           S_N = a[i];
//        }
       
//     }
//     printf("The Smallest number of an array is %d",S_N);
//     return 0; 
// }

// #include<stdio.h>
// int main()
// {
//     int a[10],temp;
//     printf("Enter 10 elements of array here\n");
//     for (int i = 0; i < 10; i++)
//     {
//         scanf("%d",&a[i]);
//     }
    
//     for (int i = 0; i < 10; i++)
//     {
//         for (int j = i+1; j < 10; j++)
//         {
//             if (a[i]>a[j])
//             {
//                 temp = a[i];
//                 a[i] = a[j];
//                 a[j] = temp;
//             }
            
//         }
        
//     }
    
//      printf(" elements of array are\n");
//     for (int i = 0; i < 10; i++)
//     {
//         printf("%d ",a[i]);
//     }
//     return 0;
// }


// #include <stdio.h>
// int main()
// {
//     int a[10], temp;
//     printf("Enter 10 elements of array here\n");
//     for (int i = 0; i < 10; i++)
//     {
//         scanf("%d", &a[i]);
//     }

//     for (int i = 0; i < 10; i++)
//     {
//         for (int j = i + 1; j < 10; j++)
//         {
//             if (a[i] > a[j])
//             {
//                 temp = a[i];
//                 a[i] = a[j];
//                 a[j] = temp;
//             }
//         }
//     }

//     printf(" 2nd largest elements of array is %d : ",a[8]);
//     return 0;
// }


// #include <stdio.h>
// int main()
// {
//     int a[10], temp;
//     printf("Enter 10 elements of array here\n");
//     for (int i = 0; i < 10; i++)
//     {
//         scanf("%d", &a[i]);
//     }

//     for (int i = 0; i < 10; i++)
//     {
//         for (int j = i + 1; j < 10; j++)
//         {
//             if (a[i] > a[j])
//             {
//                 temp = a[i];
//                 a[i] = a[j];
//                 a[j] = temp;
//             }
//         }
//     }

//     printf(" 2nd smallest elements of array is %d : ",a[1]);
//     return 0;
// }


// #include<stdio.h>
// int main()
// {
// int i,j,n,temp;
// printf("How many no. of elements you want to enter\n");
// scanf("%d",&n);
// int a[n];
// for (int i = 0; i < n; i++)
// {
//     scanf("%d",&a[i]);
// }
// printf("Elements of array are given below : \n");
// for (int i = 0; i < n; i++)
// {
//     printf("%d ",a[i]);
// }


// j=n-1;
// for ( i = 0; i < n/2; i++)
// {
//     temp = a[i];
//     a[i] = a[j];
//     a[j] = temp;
//     j--;
// }
// printf("Elements of  reverse array are given below : \n");

// for (int i = 0; i < n; i++)
// {
//     printf("%d ",a[i]);
// }

// return 0;
// }

#include<stdio.h>
int main()
{
    int a[5],b[5];
    printf("Enter 5 elements of an array\n ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        b[i] = a[i];
    }
    printf("Elements of first array are: \n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
        printf("Elements of second array are: \n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ",b[i]);
    }
    return 0;
}