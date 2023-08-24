#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int x;
    cin>> x;

    try
    {
        if(x=0)
        {
            throw x;

        }
        else
        {
            cout<< "the number is "<<endl;
        }
        cout<<"after throw"<<endl;
    }
    catch (int e)
    {
        cout<<"the exception is "<<endl;
    }
    catch(...)
    {
        cout<<"the 2nd exception"<<endl;
    }

    return 0;
}
