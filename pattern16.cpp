// output is ---->
                     /*
   *
  **
 ***
****
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
        
        int s = n - i;
        while (s != 0)          // loop for printing spaces
        {
            cout << " ";
            s = s - 1;
        }

      
        int j = 1;
        while (j <= i)          // loop for printing *
        {
            cout << "*";
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }

    return 0;
}