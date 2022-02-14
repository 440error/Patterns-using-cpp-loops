// output is ---->
                     /*
1234
 234
  34
   4
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
        
        int s = i-1;
        while (s != 0)          // loop for printing spaces
        {
            cout << " ";
            s = s - 1;
        }

        int c=i ;
        int j = 1;
        while (j <= n-i+1)          // loop for printing *
        {
            cout << c;
            c=c+1;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }

    return 0;
}