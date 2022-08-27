// #include<iostream>
// using namespace std;
// int main(){
//     cout<<" Hello MySirG "<<endl;
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main(){
//     cout<<" Hello "<<endl<<" MySirG "<<endl;
//     return 0;
// }



// #include<iostream>
// using namespace std;
// int main(){
//     int x,y,z;
//     cout<<"Enter two numbers here ";
//     cin>>x>>y;
//         z=x+y;
//         cout<<"The sum of two given numbers is "<<z<<endl;
//         return 0;
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int r;
//     float area;
//     cout<<"Enter raduis of circle here\n";
//     cin>>r;
//         area = 3.14*r*r;
//         cout<<"The area of circle is "<<area<<endl;
//         return 0;
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int side;
//     float volume;
//     cout<<"Enter side of cuboid here\n";
//     cin>>side;
//         volume = side*side*side;
//         cout<<"The volume of cuboid is "<<volume<<endl;
//         return 0;
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int a,b,c;
//     float avg;
//     cout<<"Enter three numbers here\n";
//     cin>>a>>b>>c;
//     avg = (a+b+c)/3.0;
//     cout<<"The avg of three given number is "<<avg<<endl;
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int num;
//     cout<<"Enter any number here\n";
//     cin>>num;
//     cout<<"The square of "<<num<<" is "<<num*num<<endl;
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int a = 20,b=10;
//     cout<<"Two numbers before swapping are a = "<<a<<" b = "<<b<<endl;
//     a=a+b;
//     b=a-b;
//     a=a-b;
//     cout<<"The numbers after swapping are a = "<<a<<" b = "<<b<<endl;
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int a,b;
//     cout<<"Enter two numbers here\n";
//     cin>>a>>b;
//     if (a<b)
//     {
//         cout<<b<<" is greater than "<<a<<endl;
//     }
//     else if(b<a)
//     {
//         cout<<a<<" is greater than "<<b<<endl;
//     }
//     else
//     cout<<"Both are equal"<<endl;
//     return 0;
// }



#include<iostream>
using namespace std;
int main(){
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        cout<<"Enter "<<i+1<<"th number here : ";
        cin>>arr[i];
    }
    for (int i = 0; i < 10; i++)
    {
        cout<<"\t"<<arr[i];
    }
    
}