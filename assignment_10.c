// #include <stdio.h>
// float area(int);
// int main()
// {
//     int radius;
//     float Area;
//     printf("Enter the radius here\n");
//     scanf("%d", &radius);
//    Area = area(radius);
//    printf("The area of circle is %.2f",Area);
//    return 0;
// }
// float area(int radius)
// {
//     float area;
//     area = (22/7.0)*radius*radius;
//     return area;
// }

// #include<stdio.h>
// void SI(int ,int ,int);
// int main()
// {
// int principle,time,rate,amount;
// printf("Enter principle amount , time in years, and rate of interest respectively\n");
// scanf("%d %d %d",&principle,&time,&rate);
//  SI(principle,time,rate);
// return 0;
// }

// void SI(int principle,int time, int rate){
//     float amount = principle + principle*time*rate/100.0;
//     printf("The total amount is %.2f",amount);
// }

// #include<stdio.h>
// int checking_number(int );
// int main(){
//     int num,result;
//     printf("Enter any number either even or odd\n");
//     scanf("%d",&num);
//    result = checking_number(num);
//    printf("%d",result);
//     return 0;
// }
// int checking_number(int num){
//     int x;
//     if(num%2==0)
//      x=1;
//     else
//     x=0;
//     return x;
// }

// #include <stdio.h>
// void printing_Natural_number();
//  int main()
// {
//     int num;
//     printf("Enter any number\n");
//     scanf("%d", &num);
//     printing_Natural_number(num);
//     return 0;
// }

// void printing_Natural_number(int num)
// {
//     for (int i = 1; i <= num; i++)
//         printf("%d ", i);
// }

// #include <stdio.h>
// void printing_Natural_number();
//  int main()
// {
//     int num;
//     printf("Enter any number\n");
//     scanf("%d", &num);
//     printing_Natural_number(num);
//     return 0;
// }

// void printing_Natural_number(int num)
// {
//     for (int i = 1; i <= 2*num-1; i+=2)
//         printf("%d ", i);
// }

// #include<stdio.h>
// int factorial(int);
// int main(){
//     int num,result;
//     printf("Enter the number whom we need to find factorial\n");
//     scanf("%d",&num);
//     result = factorial(num);
//     printf("The factorial of %d is %d",num,result);
//     return 0;
// }
// int factorial(int num){
//     if(num==1 || num==0){
//         return 1;
//     }
//     else
//     return num*factorial(num-1);
// }

// #include<stdio.h>
// int factorial(int);
// int selection_of_combination(int , int);
// int main(){
//     int x,y,result;
//     printf("Enter total number of items present\n");
//     scanf("%d",&x);
//     printf("Enter no. of selection from total items\n");
//     scanf("%d",&y);
//     result = selection_of_combination(x,y);
//     printf("Total no. of selection %d items from %d items is %d",y,x,result);
//     return 0;
// }

// int selection_of_combination(int x, int y){
//   int a = factorial(x);
//   int b = factorial(y);
//   int c = factorial(x-y);
//    return a/(b*c);
// }

// int factorial(int num){
//     if(num==1 || num==0){
//         return 1;
//     }
//     else
//     return num*factorial(num-1);
// }

// #include<stdio.h>
// int factorial(int);
// int arrangement_of_combination(int , int);
// int main(){
//     int x,y,result;
//     printf("Enter total number of items present\n");
//     scanf("%d",&x);
//     printf("Enter no. of selection from total items\n");
//     scanf("%d",&y);
//     result = arrangement_of_combination(x,y);
//     printf("Total no. of arrangement %d items from %d items is %d",y,x,result);
//     return 0;
// }

// int arrangement_of_combination(int x, int y){
//   int a = factorial(x);
//   int c = factorial(x-y);
//    return a/c;
// }

// int factorial(int num){
//     if(num==1 || num==0){
//         return 1;
//     }
//     else
//     return num*factorial(num-1);
// }

// #include <stdio.h>
// int checking(int,int);
// int main()
// {
//     int num, digit, result;
//     printf("Enter any given number here\n");
//     scanf("%d", &num);
//     printf("Enter any digit from 0 to 9 here\n");
//     scanf("%d", &digit);
//     result = checking(num, digit);
//     if (result == 1)
//     {
//         printf("%d is present in %d given number\n", digit, num);
//     }
//     else
//         printf("%d is not present in given number");
//     return 0;
// }

// int checking(int num, int digit)
// {
//     int rem,x=0;
//     do
//     {
//         rem = num % 10;
//         if (rem == digit)
//         {
//             x=1;
//         }
//         num = num / 10;
//     } while (num > 0);
//     if(x==1){
//         return 1;
//     }
//     else return 0;

// }


// #include<stdio.h>
// void factor(int);
// int main(){
//     int num;
//     printf("Enter a number here\n");
//     scanf("%d",&num);
//     factor(num);
//     return 0;
// }
 
//  void factor(int num){
//     int arr[100],i=2,k=1;
//     while (i<=num)
//     {
//         if(num%i==0)
//         {
//            arr[k] = i;
//            num = num/i;
//            printf("%d ",arr[k]);
//            k++;
//         }
//         else
//         i++;
//     }
    
//  }