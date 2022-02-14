/*
OUTPUT ---> for n=4 (general value we are taking 4 here) 
1
2 3
3 4 5
4 5 6 7 
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

        while (j <=i )
        {
            cout << i+j-1 << " ";
            j = j + 1;
        }
        
        cout << endl;
        i = i + 1;
    }

    return 0;
}



// ANOTHER METHOD

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
        int j = 1;
        int c = i;
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
*/