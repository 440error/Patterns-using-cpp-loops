/*
OUTPUT ---> for n=4 (general value we are taking 4)
D
C D
B C D
A B C D
*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter no: ";
    cin >> n;

    int i = 1;
    // int c= 65 ;
    while (i <= n)
    {
        int j = 1;

        while (j <= i)
        {
            cout << char(68-i+j) << " ";
            // c=c+1;

            j = j + 1;
        }

        cout << endl;
        i = i + 1;
    }

    return 0;
}

// ANOTHER WAY


/*
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
        int c = 65;
        int j = 1;

        while (j <= i)
        {
            cout << char(c + n - i) << " ";
            c = c + 1;

            j = j + 1;
        }

        cout << endl;
        i = i + 1;
    }

    return 0;
}
*/