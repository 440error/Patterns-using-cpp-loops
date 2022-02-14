/*
OUTPUT ---> for n=3 (general value we are taking 3) 
1
2 3
4 5 6
*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter no: ";
    cin >> n;

    int i = 1;
    int c = 1;

    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << c << " ";
            c = c + 1;
            j = j + 1;
        }

        cout << endl;
        i = i + 1;
    }

    return 0;
}