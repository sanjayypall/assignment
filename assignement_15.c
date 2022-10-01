// #include<stdio.h>
// int Greatest_Number(int [],int);
// int main()
// {
//     int n,max;
//     printf("Enter size of an array\n");
//     scanf("%d",&n);
//     int a[n];
//       for (int i = 0; i < n; i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     printf("Elements of array are \n");
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ",a[i]);
//     }
    
//     max = Greatest_Number(a,n);
//     printf("\n");
//     printf("Greatest element of an array is %d",max);
//     return 0;
// }
// int Greatest_Number(int a[],int n)
// {
//     int temp=a[0];
//   for (int i = 0; i < n; i++)
//   {
//     if (temp < a[i] )
//     {
//         temp = a[i];
//     }
//   }
//   return temp;
// }


// #include<stdio.h>
// int Smallest_Number(int [],int);
// int main()
// {
//     int n,min;
//     printf("Enter size of an array\n");
//     scanf("%d",&n);
//     int a[n];
//       for (int i = 0; i < n; i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     printf("Elements of array are \n");
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ",a[i]);
//     }
    
//     min = Smallest_Number(a,n);
//     printf("\n");
//     printf("Smallest element of an array is %d",min);
//     return 0;
// }
// int Smallest_Number(int a[],int n)
// {
//     int temp=a[0];
//   for (int i = 0; i < n; i++)
//   {
//     if (temp > a[i] )
//     {
//         temp = a[i];
//     }
//   }
//   return temp;
// }


// #include<stdio.h>
// int sorting(int [],int);
// int main()
// {
//     int n;
//     printf("Enter the size of an array\n");
//     scanf("%d",&n);
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d",&a[i]);
//     }
//      sorting(a,n);
//      for (int i = 0; i < n; i++)
//      {
//         printf("%d ", a[i]);
//      }
//     return 0;
// }

// int sorting(int a[],int n)
// {
//     int temp;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if (a[i]>a[j])
//             {
//                 temp = a[i];
//                 a[i] = a[j];
//                 a[j] = temp;
//             }
            
//         }
        
//     }
//      return 0;
// }


// #include<stdio.h>
// int main()
// {
//     int a[6] = {2,5,8,5,9,4};
//     int n,d;
//     printf("Enter no. of position here\n");
//     scanf("%d",&n);
//     int b[n];
//     for (int i = 0; i < n; i++)
//     {
//         b[i] = a[i];
//     }
    

//     for (int i = n; i < 6; i++)
//     {
//         a[i-n] = a[i];
//     }

//     for (int i = 6-n; i < 6; i++)
//     {
//         a[i] = b[i-(6-n)];
//     }
//     printf("{");
//     for (int i = 0; i < 6; i++)
//     {
//         printf("%d ",a[i]);
//     }
//     printf("}");
//     return 0;
       
// }


// #include<stdio.h>
// int duplicate(int []);
// int main()
// {
//     int a[5] = {2,5,2,5,9};
//    printf("The first duplicate element of array is %d", duplicate(a));
//    return 0;
// }
// int duplicate(int a[5])
// {
//     for (int i = 0; i < 5; i++)
//     {
//         for (int j = i+1; j < 5; j++)
//         {
//            if (a[i]==a[j])
//            {
//                return a[i];
//            }
           
//         }
        
//     }
   
// }

// Q.6)...
// #include<stdio.h>
// void input(int [],int);
// void display(int [],int);
// int main()
// {
//     int n;
//     printf("Enter size of array\n");
//     scanf("%d",&n);
//     int a[n];
//     input(a,n);
//     display(a,n);
//     return 0;
// }

// void input(int a[],int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     printf("Elements of array are given below\n");
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ",a[i]);
//     }
    
// }
// void display(int a[],int n)
// {
//     int temp,j=n-1;
//     for (int i = 0; i < n/2; i++)
//     {
//        temp = a[i];
//        a[i] = a[j];
//        a[j] = temp;
//        j--;
//     }
//     printf("\nElemets of given array in reverse order are given below\n");
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ",a[i]);
//     }
// }


// #include<stdio.h>
// void checking_duplicate(int [],int);
// int main()
// {
//    int n;
//    printf("Enter size of an array\n");
//    scanf("%d",&n);
//    int a[n];
//    for (int i = 0; i < n; i++)
//    {
//       scanf("%d",&a[i]);
//    }
//     checking_duplicate(a,n);
//    return 0;
// }
// void checking_duplicate(int a[],int n)
// {
//     int count=0;
//    for (int i = 0; i < n-1; i++)
//    {
//       for (int j = i+1; j < n; j++)
//       {
//         if (a[i]==a[j])
//         {
//             count++;
//         }
        
//       }
      
//    }
//    printf("The duplicate elements are %d",count);
// }

// #include<stdio.h>
// void unique_array(int [],int);
// int main()
// {
//     int n;
//     printf("Enter size of an array\n");
//     scanf("%d",&n);
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d",&a[i]);
//     }

//     printf("Elements of array are given below\n");
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ",a[i]);
//     }

//    unique_array(a,n);
    
//     return 0;
    
// }

// void unique_array(int a[],int n)
// {
//     int temp =0;
//      printf("\nUnique elements of an array are\n");
//     for (int i = 0; i < n; i++)
//     {
//         temp = 0;
//         for (int j = 0 ; j < n; j++)
//         {
//             if (i==j)
//             {
//                 continue;
//             }
            
//             if (a[i]==a[j])
//             {
//                 temp = 1;
//             }
            
//         }
//         if (temp!=1)
//         {
//             printf("%d ",a[i]);
//         }
        
//     }
// }

// #include<stdio.h>
// void sorting(int [],int);
// int main()
// {
//     int x;
//     printf("Enter size of array here\n");
//     scanf("%d",&x);
//     printf("Enter elements of first array\n");
//     int a[x],b[x],c[x+x];
//     for (int i = 0; i < x; i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     printf("Enter elements of 2nd array\n");
//     for (int i = 0; i < x; i++)
//     {
//         scanf("%d",&b[i]);
//     }
//     printf("\nElements of first and second arrays are given below\n");
//     for (int i = 0; i < x; i++)
//     {
//         printf("%d ",a[i]);
//     }
//     printf(" and ");
//     for (int i = 0; i < x; i++)
//     {
//         printf("%d ",b[i]);
//     }
    
//     for (int i = 0; i < x; i++)
//     {
//         c[i] = a[i];
//     }
//     for (int i = x; i < 2*x; i++)
//     {
//         c[i] = b[i-x];
//     }
    

//     for (int i = 0; i < 2*x; i++)
//     {
//         printf(" %d ",c[i]);
//     }
    
//     sorting(c,2*x);
//     return 0;
// }

// void sorting(int c[],int n)
// {
//     int temp;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i+1; j < n; j++)
//         {
//             if (c[i]<c[j])
//             {
//                 temp = c[i];
//                 c[i] = c[j]; 
//                 c[j] = temp;
//             }
//         }   
//     }
//     printf("Sorting by descending order of merged array are given below\n");
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ",c[i]);
//     } 
// }


#include<stdio.h>
int main()
{
    int a[5] = {2,5,9,9,5};
    int b[5],i,j,c=0;
    for (int i = 0; i < 5; i++)
    {
        c=1;
        if(a[i]!=-1)
        {
            for (int j = i+1; j < 5; j++)
            {
                if(a[i]==a[j])
                {
                c++;
                a[j]=-1;
                }
            }
            
        }
        b[i]=c;
    }
    
    for (int i = 0; i < 5; i++)
    {
        if (a[i]!=-1)
        {
            printf("The frequency of %d is %d\n",a[i],b[i]);
        }
        
    }
    return 0;

}