// #include <iostream>
// using namespace std;
// int checking(int);
// int main()
// {
//     int num, result;
//     cout << "Enter a number\n";
//     cin >> num;
//     result = checking(num);
//     if (result == 0)
//     {
//         cout << "This is a prime number";
//     }
//     else
//         cout << "This is not a prime number";
//     return 0;
// }
// int checking(int num)
// {
//     int flag = 0;
//     for (int i = 2; i <= num / 2; i++)
//     {
//         if (num % i == 0)
//         {
//             flag = 1;
//         }
//     }
//     if (flag == 0)
//     {
//         return 0;
//     }
//     else
//         return 1;
// }


// #include<iostream>
// using namespace std;
// int Highest_value(int);
// int main()
// {
//     int num,value;
//     cout<<"Enter any random number\n";
//     cin>>num;
//     value = Highest_value(num);
//     cout<<"The highest value of digit in "<<num<<" is "<<value<<endl;
// }
// int Highest_value(int num)
// {
//     int digit=0,y=0,Num,x;
//     Num=num;
//     while (num)
//     {
//       num=num/10;
//       digit++;
//     }
//     for (int i = 1; i <= digit; i++)
//     {
//       x=Num%10;
//       if (y<x)
//       {
//         y=x;
//       }
//       Num=Num/10;
//     }
//     return y;
    
// }


// #include<iostream>
// using namespace std;
// #include<math.h>
// int calculate(int ,int);
// int main()
//     {
//         int x,y,result;
//         cout<<"Enter the number and power respectively here\n";
//         cin>>x>>y;
//         result = calculate(x,y);
//         cout<<"The answer is "<<result;
//         return 0;
//     }
  
//   int calculate(int x,int y)
//   {
//     int answer;
//     answer = pow(x,y);
//     return answer;      
//   }



#include<iostream>
using namespace std;
int fact(int);
int comb(int,int);
void pascal(int);

int main()
{
    int n;
    cout<<"Enter the rows of pascal triangle\n";
    cin>>n;
    pascal(n);
    return 0;
}

int fact(int n)
{
    if(n==1 || n==0)
    return 1;
    else
    return n*fact(n-1);
}

int comb(int n, int r)
{
    int c;
    c= fact(n)/fact(n-r)*fact(r);
    return c;
}

void pascal(int n)
{
    for (int  i = 0; i < n; i++)
    {
        for (int s = 0; s < n-i; s++)
        {
            cout<<" ";
        }

        for (int j = 0; j <= i; j++)
        {
            cout<<comb(i,j)<<" ";
        }
        cout<<endl;
    }
}

// #include<iostream>
// using namespace std;
// void check_fib(int);
// int main()
// {
//   int num;
//   cout<<"Enter any number for checking that it belongs to fibonocii series or not\n";
//   cin>>num;
//   check_fib(num);
//   return 0;
// }

// void check_fib(int num)
// {
//   int first=0,second=1,sum=0;
//   while (sum<num)
//   {
//     sum = first + second;
//     first=second;
//     second=sum;
//   }
//   if (sum==num)
//   {
//     cout<<"Yes, It is a fibonocii number";
//   }
//   else
//   cout<<"No, it's not a fibonocii number";
  
// }


// #include<iostream>
// using namespace std;
// void swap(int &,int &);
// int main()
// {
//   int a=5,b=6;
//   swap(a,b);
//   return 0;
// }

// void swap(int &p,int &q)
// {
//   int r;
//   r=p;
//   p=q;
//   q=r;
//   cout<<"The function after swapping is "<<p<<" "<<q;
// }


// #include<iostream>
// using namespace std;
// int sum(int ,int ,int =0);
// int main()
// {
//   int a=2,b=3,c=4;
//    cout<<"The sum of two number is "<<sum(a,b)<<endl;
//    cout<<"The sum of three number is "<<sum(a,b,c)<<endl;
//    return 0;
// }

// int sum(int a, int b, int c)
// {
//   return a+b+c;
// }


// #include<iostream>
// using namespace std;
// #include<math.h>
// float area(int );
// int area(int,int);
// float area(int,int,int);
// int main()
// {
//   int radius,x,y,z,l,b;
//   cout<<"Enter the value of radius\n";
//   cin>>radius;
//   cout<<"The area of circle is "<<area(radius)<<endl;

//   cout<<"Enter length and bredth of the rectangle\n";
//   cin>>l>>b;
//   cout<<"The area of rectangle is "<<area(l,b)<<endl;

//   cout<<"Enter the sides of triangle respectivively\n";
//   cin>>x>>y>>z;
//   cout<<"The area of triangle is "<<area(x,y,z)<<endl;
//   return 0;
// }

// float area(int radius)
// {
//   float area;
//   area = 3.14*radius*radius;
//   return area;
// }

// int area(int l,int b)
// {
//   return l*b;
// }

// float area(int x, int y, int z)
// {
//   int s = (x+y+z)/2.0;
//   float area;
//   area = sqrt(s*(s-x)*(s-y)*(s-z));
//   return area;
// }



// #include<iostream>
// using namespace std; 
// void max(float,float);
// void max(int,int);
// int main()
// {
//   float a,b;
//   cout<<"Enter two real no. a and b respectively\n";
//   cin>>a>>b;
//   max(a,b);
//   return 0;
// }

// void max(float a,float b)
// {
//   if(a<b)
//   cout<<b<<" is greater than "<<a;
//   else if(b<a)
//   cout<<a<<" is greater than "<<b;
//   else
//   cout<<"Both are equal";
// }

// void max(int a,int b)
// {
//   if(a<b)
//   cout<<b<<" is greater than "<<a;
//   else if(b<a)
//   cout<<a<<" is greater than "<<b;
//   else
//   cout<<"Both are equal";
// }



// #include<iostream>
// using namespace std;
// void add(int,int);
// void add(float,float);
// int main()
// {
//   float a,b;
//   cout<<"Enter any two values either of integer or real number\n";
//   cin>>a>>b;
//   add(a,b);
//   return 0;
// }
// void add(float a, float b)
// {
//   cout<<"The sum of two numbers is "<<a+b;
// }
//  void add(int a, int b)
// {
//   cout<<"The sum of two numbers is "<<a+b;
// }