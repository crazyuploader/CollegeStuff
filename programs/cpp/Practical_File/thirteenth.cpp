//C++ Program for Exception Handling
#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout<< "Enter 2 Number(s): \n";
    cin>> a>> b;
    try
    {
        if(b!=0)
        {
            float div=(float)a/b;
            if(div<0)
                throw 'e';
            cout << "a/b = " << div;
        }
        else
            throw b;
    }
    catch(int e)
    {
        cout<< "Exception: Division by Zero";
    }
    catch(char st)
    {
        cout<< "Exception: Division is less than 1";
    }
    catch(...)
    {
        cout<< "Exception: Unknown";
    }
    cout<< "\n\nCreated by Jugal Kishore -- 2019\n";
    return 0;
}
