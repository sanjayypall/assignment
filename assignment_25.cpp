// #include<iostream>
// using namespace std;
// class complex
// {
//   int real,img;
//   public:
//   void Set_Data(int a,int b)
//   { real=a; img=b; }
//   void Show_Data()
//   {  cout<<"Real part is "<<real<<endl;  cout<<"Imaginary part is "<<img<<endl<<endl;}
// };
// int main()
// {
//     complex c1,c2;
//     c1.Set_Data(3,4);
//     c2.Set_Data(6,7);
//     c1.Show_Data();
//     c2.Show_Data();
//     return 0;
// }


// #include<iostream>
// using namespace std;
// class Time
// {
//   int a,b,c;
//   public:
//   void Set_Data()
//   {
//     cout<<"Enter the values of hours, minutes and seconds respectively\n";
//     cin>>a>>b>>c;
//   }
//   void Show_Data()
//   {
//     cout<<a<<" hours "<<b<<" minutes "<<c<<" seconds"<<endl;
//   }
// };
// int main()
// {
//     Time T1,T2;
//     T1.Set_Data();
//     T1.Show_Data();
//     cout<<endl;
//     T2.Set_Data();
//     T2.Show_Data();
//     return 0;
// }


// #include<iostream>
// using namespace std;
// class Factorial
// {
//     public:
//   int fact(int x)
//   {
//      if(x==1)
//      return 1;
//      else
//      return x*fact(x-1);
//   }
// };
// int main()
// {
//     Factorial F1,F2;
//     cout<<"The factorial of 5 is "<<F1.fact(5);
//     cout<<endl;
//   cout<<"The factorial of 8 is "<<F1.fact(8);
//   return 0;
// }


// #include<iostream>
// using namespace std;
// class LargestNumber
// {
//   public:
//   void largest_number()
//   {
//     int a,b,c;
//     cout<<"Enter three numbers here\n "<<endl;
//     cin>>a>>b>>c;
//     if(a>=b && a>=c)
//     cout<<a<<" is largest";

//     else if (b>=c && b>=a)
//         cout<<b<<" is largest";
    
//     else if (c>=a && c>b)
//         cout<<c<<" is largest";
    
//     cout<<endl<<endl;
//   }
// };
// int main()
// {
//     LargestNumber l1,l2;
//     l1.largest_number();
//     l2.largest_number();
//     return 0;
// }


// #include<iostream>
// using namespace std;
// class Reverse
// {
//    public:
//    void reverse(int num)
//    {
//        int digit=0,rev_num=0,rem;
//        int Num=num;
//        while (num)
//        {
//          num=num/10;
//          digit++;
//        }

//       for (int i = 1; i <= digit; i++)
//       {
//             rem = Num%10;
//             Num = Num/10;
//             rev_num = rev_num*10 + rem;
//       }
//     cout<<"The reverse of the given number is "<<rev_num<<endl;
//    }
// };
// int main()
// {
//     Reverse r;
//     int num;
//     cout<<"Enter any number here\n";
//     cin>>num;
//     r.reverse(num);
//     return 0;
// }



#include<iostream>
using namespace std;
class Square
{
   public:
   void square(int side)
   {
    cout<<"The area of square is "<<side*side<<endl;
   }
};

int main()
{
    int side;
    cout<<"Enter the value of side of a square\n";
    cin>>side;
    Square A;
    A.square(side);
    return 0;
}






// #include<iostream>
// using namespace std;
// class Greatest
// {
//     public:
//    void largest(int a,int b,int c)
//     {
//        if(a>=b && a>c)
//        cout<<a<<" is greatest among them";
//        else if(b>=c && b>a)
//        cout<<b<<" is greatest among them";
//        else if(c>=a && c>b)
//        cout<<c<<" is greatest among them";
//        else
//        cout<<" All are equal ";
//     }
// };
// int main()
// {
//     int a,b,c;
//     cout<<"Enter three numbers here\n"<<endl;
//     cin>>a>>b>>c;
//     Greatest G;
//     G.largest(a,b,c);
//     return 0;
// }


// #include<iostream>
// using namespace std;
// class Rectangle
// {
//   public:
//   void area(int l, int b)
//   {
//     cout<<"The area of rectangle is "<<l*b;
//   }
// };

// int main()
// {
//     int l,b;
//     cout<<"Enter the length and bredth respetively \n";
//     cin>>l>>b;
//     Rectangle A;
//     A.area(l,b);
//     return 0;
// }


// #include<iostream>
// using namespace std;
// class Circle
// {
//   public:
//   void area(int radius)
//   {
//     cout<<"The area of circle is "<<3.14*radius*radius;
//   }
// };

// int main()
// {
//     int r;
//     cout<<"Enter the radius of circle \n";
//     cin>>r;
//     Circle A;
//     A.area(r);
//     return 0;
// }


// #include<iostream>
// using namespace std;
// class Area
// {
//   public:
//   void area(int radius)
//   {
//      cout<<"The area of circle is "<<3.14*radius*radius;
//   }

//   void area(int length,int bredth)
//   {
//     cout<<"The area of rectangle is "<<length*bredth;
//   }

//   void area()
//   {
//     int side;
//      cout<<"Enter the side of square here\n";
//         cin>>side;
//     cout<<"The area of square is "<<side*side;
//   }
// };
// int main()
// {
//     sanjay:
//     int x,radius,length,bredth,side;
//     cout<<"Press 1 for area of circle\n";
//     cout<<"Press 2 for area of rectangle\n";
//     cout<<"Press 3 for area of square\n\n";
//     cout<<"Press any number for finding area\n";
//     cin>>x;
//     switch (x)
//     {
//     case 1:
//         cout<<"Enter the radius of circle here\n";
//         cin>>radius;
//         Area A;
//           A.area(radius);
//         break;

//     case 2:
//          cout<<"Enter the length and bredth of rectangle\n";
//          cin>>length>>bredth;
//          Area B;
//          B.area(length,bredth);
//          break;

//     case 3:
//           Area C;
//           C.area(side);
//           break;
    
//     default:
//         cout<<"You entered wrong input\n";
//         goto sanjay;
//         break;
//     }
//     return 0;
// }
