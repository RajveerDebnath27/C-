#include<iostream>
#include<conio.h>
using namespace std;

int main()
{

    int num1,num2;
    cout<<"Enter two number:"<<endl;
    cin>> num1>>num2;
    int sum = num1 + num2;

   cout<< "The sum is : " << sum <<endl;

   cout<<endl;
   int sub = num1 - num2;

   cout<< "The subtraction is : " << sub <<endl;

    cout<<endl;
    int mul = num1 * num2;

   cout<< "The multiplication is : " << mul <<endl;

   cout<<endl;
    int div = num1 / num2;

   cout<< "The division is : " << div <<endl;

    getch();
}

