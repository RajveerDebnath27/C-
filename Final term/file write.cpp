#include<iostream>
//#include<conio.h>
#include<fstream>

using namespace std;

int main()
{
    fstream st;
    st.open("E\myFile.txt",ios::out);
    if(!st)
    {
        cout<<"File creation failed";
    }
    else
    {
        cout<<"New file created";
        st<<"Apurba Debnath";
        st.close();
    }
    //getch();
    return 0;
}
