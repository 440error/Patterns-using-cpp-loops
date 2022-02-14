/*
OUTPUT ---> for n=3 (general value we are taking 3) 
A B C
D E F
G H I
*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter no: ";
    cin >> n;

    int i = 1;
    // int c = 64;
    while (i <= n)
    {
        int j = 1;

        while (j <= n)
        {
            cout << char(64+i+j-1) << " ";
            
            j = j + 1;
        }

        cout << endl;
        i = i + 1;
    }

    return 0;
}