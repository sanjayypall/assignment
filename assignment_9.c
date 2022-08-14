// #include<stdio.h>
// int main()
// {
//  int x;
//  sanjay:
// printf("Enter Month number\n");
// scanf("%d",&x);

// switch (x)
// {
// case 1:
//     printf("This month is January, and it has 31 days");
//     break;
//     case 2:
//     printf("This month is February, and it has 28/29 days");
//     break;
//     case 3:
//     printf("This month is March, and it has 31 days");
//     break;
//     case 4:
//     printf("This month is April, and it has 30 days");
//     break;
//     case 5:
//     printf("This month is May, and it has 31 days");
//     break;
//     case 6:
//     printf("This month is June, and it has 30 days");
//     break;
// case 7:
//     printf("This month is July, and it has 31 days");
//     break;
//     case 8:
//     printf("This month is August, and it has 31 days");
//     break;
//     case 9:
//     printf("This month is September, and it has 30 days");
//     break;
//     case 10:
//     printf("This month is October, and it has 31 days");
//     break;
//     case 11:
//     printf("This month is November, and it has 30 days");
//     break;
//     case 12:
//     printf("This month is December, and it has 31 days");
//     break;
// default:
// printf("You entered a wrong input, please enter from 1 to 12 only\n");
//     goto sanjay;
// }
// return 0;
// }

// #include<stdio.h>
// int main(){
//     int n;
//     int a,b;
//     sanjay:
//     printf("Enter two numbers for calculation\n");
//     scanf("%d %d",&a,&b);
//     printf("Press 1. for Addition\n");
//     printf("Press 2. for Substraction\n");
//     printf("Press 3. for multiplication\n");
//     printf("Press 4. for reminder\n");
//     printf("Press 5. for exit the program\n");
//     printf("Choose Your Calculation type\n");
//     scanf("%d",&n);
//     switch (n)
//     {
//     case 1:
//         printf("The sum of %d and %d is %d\n",a,b,a+b);
//         goto sanjay;

//     case 2:
//         printf("The difference of %d and %d is %d\n",a,b,a-b);
//        goto sanjay;

//     case 3:
//         printf("The product of %d and %d is %d\n",a,b,a*b);
//        goto sanjay;

//     case 4:
//         printf("The reminder of %d/%d is %d\n",a,b,a%b);
//        goto sanjay;
    
//     case 5:
//     printf("Thank You for using the Calculator...\n Have a Nice Day......\n");
//     break;
//     default:
//     printf("You entered a wrong input, please enter a right input from the above option\n");
//         goto sanjay;
//     }
//     return 0;
// }


// #include<stdio.h>
// int main()
// {
// int x;
// printf("1. for Monday\n");
// printf("2. for Tuesday\n");
// printf("3. for Wednesday\n");
// printf("4. for Thursday\n");
// printf("5. for Friday\n");
// printf("6. for Saturday\n");
// printf("7. for Sunday\n");
// sanjay:
// printf("Enter number of your favourite day\n");
// scanf("%d",&x);
// switch (x)
// {
// case 1:
//     printf("Monday is for startup\n");
//     break;
//     case 2:
//     printf("Tuesday is for Worship\n");
//     break;
//     case 3:
//     printf("Wednesday is for learning\n");
//     break;
//     case 4:
//     printf("Thursday is for making food in home\n");
//     break;
//     case 5:
//     printf("Friday is for Relaxing\n");
//     break;
//     case 6:
//     printf("Saturday is for Party\n");
//     break;
//     case 7:
//     printf("Sunday is for funday\n");
//     break;
//     default:
//     printf("You entered a wrong input re-enter again\n");
//     goto sanjay;
// }

// return 0;
// }


// #include<stdio.h>
// int main()
// {
// int a,b,c,x;
// printf("Enter three sides of a triangle respectively\n");
// scanf("%d %d %d",&a,&b,&c);
// printf("1. for checking isocles triangle\n");
// printf("2. for checking right angle triangle\n");
// printf("3. for checking equilateral triangle\n");
// printf("4. for  exit the program\n");
// scanf("%d",&x);
// switch (x)
// {
// case 1:
//     if(a==b || b==c)
//     printf("This is an Isoscles triangle\n");
//     else
//     printf("This is not an isoscales triangle\n");
//     break;
//     case 2:
//     if(a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a)
//     printf("This is a right angle triangle\n");
//     else
//     printf("This is not a right angle triangle\n");
//     break;
//     case 3:
//     if(a==b && b==c)
//     printf("This is an equilateral triangle\n");
//     else
//     printf("This is not an equilateral triangle\n");
//     break;
//     case 4:
//     printf("Thank you for using this program\n");
//     break;
// }

// return 0;
// }


// #include<stdio.h>
// int main()
// {
// int var;
// printf("Enter value of variable here\n");
// scanf("%d",&var);
// switch (var)
// {
// case 1:
//     printf("Good\n");
//     break;
//     case 2:
//     printf("Better\n");
//     break;
//     case 3:
//     printf("Best\n");
//     break;

// default:
// printf("Invalid input\n");
//     break;
// }
// return 0;
// }


// #include<stdio.h>
// int main()
// {
// int year,x;
// printf("Enter any year here\n");
// scanf("%d",&year);
// if(year%4==0)
// x=1;
// else
// x=2;
// switch (x)
// {
// case 1:
//     printf("Leap year");
//     break;

// case 2:
// printf("Not a leap year");

// default:
//     break;
// }
// return 0;
// }


#include<stdio.h>
int main(){
    int a;
    int amount,unit;
    printf("Enter no. of units in your bill\n");
    scanf("%d",&unit);
    if(unit<=50){
    a=1;
    }
    else if (unit>50 && unit<=150)
    {
        a=2;
    }
    else if (unit>150 && unit<=250)
    {
        a=3;
    }
    else
    a=4;
    switch (a)
    {
    case 1:
        printf("The total amout to be paid is %.2f",unit*1.2*0.5);
        break;
    
    case 2:
        printf("The total amout to be paid is %.2f",(50*0.5 + (unit-50)*0.75)*1.2);

     case 3:
        printf("The total amout to be paid is %.2f",(50*0.5 + 100*0.75 + (unit-150)*1.2)*1.2);

     case 4:
        printf("The total amout to be paid is %.2f",(50*0.5+ 100*0.75+ 100*1.20 + (unit-250)*1.50)*1.2);
    }
    
}








// #include<stdio.h>
// int main()
// {
//    int num,x;
//    printf("Enter a positive or a negative number");
//    scanf("%d",&num);
//    if(num>0)
//    x=1;
//    else
//    x=2;
// switch (x)
// {
// case 1:
//     num=-num;
//     printf("The new number is %d\n",num);
//     break;

//     case 2:
//     num=-num;
//     printf("The new number is %d\n",num);
//     break;

// }
// return 0;
// }


// #include<stdio.h>
// int main()
// {
// int num,x;
// sanjay:
// printf("Enter any even number\n");
// scanf("%d",&num);
// if(num%2==0)
// x=1;
// else
// x=2;
// switch (x)
// {
// case 1:
//     num = num + 1;
//     printf("The next odd number is %d",num);
//     break;
// case 2:
// printf("You didn't enter an even number\n");
// goto sanjay;
// default:
//     break;
// }
// return 0;
// }


// #include<stdio.h>
// #include<math.h>
// int main()
// {
// int B,C,D,z;
// int x,y,A;
// sanjay:
// printf(" Enter coefficient of quadratinc equation Ax^2 + Bx + C\n");
// scanf("%d %d %d",&A,&B,&C);
//  D = B*B - 4*A*C;
//  if(D>=0)
//  z=1;
//  else
//  z=2;
//  switch (z)
//  {
//  case 1:
//     x = (-B + sqrt(D))/2*A;
//      y = (-B - sqrt(D))/2*A;
//      printf("The  roots of given quadratic equation are %d and %d\n",x,y);
//     break;
//     case 2:
//     printf("finding root are not possible, Having imaginary roots\n");
//     goto sanjay;
//  }
// return 0;
// }
