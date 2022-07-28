// #include<stdio.h>
// int main(){
//     int num,unit_digit;
//     printf("Enter a number\n");
//     scanf("%d",&num);
//     unit_digit = num%10;
//     printf("The unit digit of %d is %d",num,unit_digit);
//     return 0;
// }


// #include<stdio.h>
// int main(){
//     int num,new_num;
//     printf("Enter a number here\n");
//     scanf("%d",&num);
//     new_num=num/10;
//     printf("The number without last digit is %d",new_num);
//     return 0;
// }


// #include<stdio.h>
// int main(){
//     int a=10,b=20,temp;
//     printf("The values of a and b before swapping are %d and %d\n",a,b);
//     temp = a;
//      a   = b;
//      b   = temp;
//      printf("The values of a and b after swapping are %d and %d",a,b);
//      return 0;
// }


// #include<stdio.h>
// int main(){
//     int a=10,b=20;
//     printf("The values of a and b before operation are %d and %d\n",a,b);
//     a=a+b;
//     b=a-b;
//     a=a-b;
//     printf("The values of a and b after operation are %d and %d",a,b);
//     return 0;
// }


// #include<stdio.h>
// int main()

// {
    
//     int num,a,b1,b,c,sum;
//     sanjay:
//     printf("Enter a 3 digit number here\n");
//     scanf("%d",&num);
//     if (num<=999 && num>=100)
//     {
//         a=num/100; 
//         b1=num/10;
//         b=b1%10;
//         c=num%10;
//         sum=a+b+c;
//         printf("The sum of digits is %d",sum);
//     }
//     else
//     {
//     printf("Invalid number, Please Enter a valid number\n");
//      goto sanjay;
//     }
//     return 0;
// }


// #include<stdio.h>
// int main(){
//     char c;
//     printf("Enter a character here\n");
//     scanf("%c",&c);
//     printf("The value of character is %d",c);
//     return 0;
// }


// #include<stdio.h>
// int main(){
//     int number,result;
//     printf("Enter a number\n");
//     scanf("%d",&number);
//     result = number&1;
//     if(result==1)
//     printf("%d is odd number",number);
//     else
//     printf("%d is even number",number);
//     return 0;
// }

#include<stdio.h>
int main(){
    int count=1,number;
    printf("Enter a number\n");
    scanf("%d",&number);
   while ((number&1)!=1)
   {
    count++;
    number=number>>1;
   }
   printf("The position of first 1 in LSB is %d",count);
   return 0;
}










// #include<stdio.h>
// int main()
// {
// int a,b,c,d;
// a=sizeof(int);
// printf("The size of int is %d\n",a);
// a=sizeof(float);
// printf("The size of float is %d\n",a);
// a=sizeof(char);
// printf("The size of char is %d\n",a);
// a=sizeof(double);
// printf("The size of double is %d\n",a);
// return 0;
// }


// #include<stdio.h>
// int main()
// {
//     int num,new_num;
//     printf("Enter a number here\n");
//     scanf("%d",&num);
//     new_num=num/10;
//     new_num=new_num*10;
//     printf("The %d changes to %d",num,new_num);
//     return 0;
// }


// #include<stdio.h>
// int main(){
//     int num,digit;
//     printf("Enter a number and digit respectively\n");
//     scanf("%d %d",&num,&digit);
//     printf("Resulting number is %d%d",num,digit);
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
// float INR,USD;
// printf("Enter amount in INR\n");
// scanf("%f",&INR);
// USD = INR/76.23;
// printf("The amount in USD is %.2f",USD);
// return 0;
// }
