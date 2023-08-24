#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    fstream stOut,stIn;
    stOut.open("2nd file.txt" , ios::out);
    stIn.open("2nd file.txt" , ios::out);
    cout<<"opening done"<<endl;
    if(stIn&&stOut)
    {
        stOut<<"Apurba\n";
        stOut<<"Debnath\n";
        stOut.close();
        cout<<"Writing done "<<endl;
        char ch;
        while(!stIn.eof())
        {
            stIn >> ch;
            cout<<ch;
        }
        stIn.close();
        cout<<"\nReading done"<<endl;
    }else
    {
        cout<<"Something wrong"<<endl;
    }
}
