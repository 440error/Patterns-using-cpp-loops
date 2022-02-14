/* output ---->
1 2 3 
4 5 6
7 8 9 */
#include <iostream>
using namespace std;

int main()
{

    int i = 1;
    int c = 1;
    while (i <= 3)
    {
        int j = 1;
        while (j <= 3)
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