// output is ---->
             /*
****
***
**
*
             */ 
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter no: ";
    cin >> n;

    int i = 1;

    while (i <= n)
    {
        
        
      
        int j = 1;
        while (j <= n-i+1)          // loop for printing *
        {
            cout << "*";
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }

    return 0;
}