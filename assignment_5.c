// #include<stdio.h>
// int main(){
//     int N;
//     printf("Enter here no of times that we need MySirG on the screen: ");
//     scanf("%d",&N);
//     for (int i = 1; i <= N; i++)
//     {
//         printf("MySirG\n");
//     }
//     return 0;
// }

// write a program to print first N natural number
// #include<stdio.h>
// int main(){
//     int N;
//     printf("No of terms: ");
//     scanf("%d",&N);
//     int a=1;
//     do
//     {
//         printf("%d ",a);
//         a++;
//     } while (a<=N);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int N;
//     printf("No of terms: ");
//     scanf("%d",&N);
//     int a=N;
//     do
//     {
//         printf("%d ",a);
//         a--;
//     } while (a>0);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int N;
//    printf("No of terms: ");
//     scanf("%d",&N);
//     int a=1;
//     do
//     {
//         printf("%d ",a);
//         a=a+2;
//     } while (a<2*N);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//      int N;
//    printf("No of terms: ");
//     scanf("%d",&N);
//     int a=2*N-1;
//     do
//     {
//         printf("%d ",a);
//         a=a-2;
//     } while (a>0);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//      int N;
//    printf("No of terms: ");
//     scanf("%d",&N);
//     int a=2;
//     do
//     {
//         printf("%d ",a);
//         a=a+2;
//     } while (a<=2*N);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//      int N;
//    printf("No of terms: ");
//     scanf("%d",&N);
//     int a=2*N;
//     do
//     {
//         printf("%d ",a);
//         a=a-2;
//     } while (a>0);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//      int N;
//    printf("No of terms: ");
//     scanf("%d",&N);
//     for (int i = 1; i < N+1; i++)
//     {
//         printf("%d ",i*i);
//     }
    
//     return 0;
// }


// #include<stdio.h>
// int main(){
//      int N;
//    printf("No of terms: ");
//     scanf("%d",&N);
//     for (int i = 1; i < N+1; i++)
//     {
//         printf("%d ",i*i*i);
//     }
    
//     return 0;
// }

#include<stdio.h>
int main(){
    int N;
   printf("No of terms: ");
    scanf("%d",&N);
    for (int i = 1; i <= 10; i++)
    {
        printf("%d*%d=%d\n",N,i,N*i);
    }
    return 0;
}