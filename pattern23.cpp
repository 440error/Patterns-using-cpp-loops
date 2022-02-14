/* output ----->

1234555555
1234**4444
123****333
12******22
1********1

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
        while (j <= n-i+1) // loop for printing middle expressions
        {
            cout << j;
            j = j + 1;
        }

        int s = i-1;
        while (s != 0) // loop for printing spaces
        {
            cout << "*";
            s = s - 1;
        }


        int r = i-1;
        while (r != 0) // loop for printing spaces
        {
            cout << "*";
            r = r - 1;
        }


         int k = 1;
        while (k <= n-i+1) // loop for printing middle expressions
        {
            cout << n-i+1;
            k = k + 1;
        }
        

        
        cout << endl;
        i = i + 1;
    }

    return 0;
}