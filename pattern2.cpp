/* output--->
1 2 3 4
1 2 3 4
1 2 3 4
1 2 3 4 */
#include <iostream>
using namespace std;

int main()
{

    int i = 1;
    while (i < 5)
    {
        int j = 1;
        while (j < 5)
        {
            cout << j << " ";
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }

    return 0;
}