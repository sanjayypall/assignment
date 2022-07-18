// #include<stdio.h>
// int main(){
//     int num,unitdigit;
//     printf("Enter a number\n");
//     scanf("%d",&num);
//     unitdigit=num%10;
//     printf("unitugvu digit of %d is %d",num,unitdigit);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int num,newnum;
//     printf("Enter a number here\n");
//     scanf("%d",&num);
//     newnum=num/10;
//     printf("The given number without unit digit is %d",newnum);
// }


// swapping the integers
// #include<stdio.h>
// int main(){
//     int a=10,b=20,temp;
//     printf("%d %d",a,b);
//     temp=a;
//     a=b;
//     b=temp;
//     printf("\n%d %d",a,b);
// }

// #include<stdio.h>
// int main(){
//     int a=5,b=66;
//     printf("%d %d",a,b);
//     b=a+b;
//     a=b-a;
//     b=b-a;
//    printf("\n%d %d",a,b);
//    return 0;
// }

// #include<stdio.h>    
// int main(){
//    int num,x,y,z,sum;
//     printf("Enter 3 digits number here\n");
//     scanf("%d",&num);
//     x=num/100;
//     y=num%100;
//     y=y/10;
//     z=num%10;
//     sum = x+y+z;
//     printf("The sum 3 digits are %d ",sum);
//     return 0;
// }

#include<stdio.h>
int main(){
    char input;
    scanf("%c",&input);
    printf("The character %c is %d",input,input);
return 0;
}