// output is ---->
/*

   1
  121
 12321
1234321

 */
#include <iostream>
using namespace std;

 /* we split this expression in 3 halfs
             ----> one in spaces 
             ----> second in order
                                        1
                                       12
                                      123
                                     1234 
             ----> third in order
                                     1
                                     21
                                     321
                                 */
int main()                                
{
    int n;
    cout << "enter no: ";
    cin >> n;

    int i = 1;

    while (i <= n)
    {

        int s = n - i;
        while (s != 0) // loop for printing spaces
        {
            cout << " ";
            s = s - 1;
        }

        int j = 1;
        while (j <= i) // loop for printing middle expressions
        {
            cout << j;
            j = j + 1;
        }

        int m = i - 1; // loop for printing last expressions
        while (m != 0)
        {
            cout << m;
            m = m - 1;
        }

        cout << endl;
        i = i + 1;
    }

    return 0;
}