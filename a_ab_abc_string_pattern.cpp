/*a
ab b=i, a=j
abc
abcd
i=0,j=0 so 0 to 0 index will take print 
i=3, j=0 so 0 to 3 index will print abc and j will 0 because of j=0
*/
#include <iostream>
#include <cstring>
using namespace std;
void prefix(char a[])
{
    // i represent the end of prefix
    for (int i = 0; a[i] != 0; i++)
    {
        // j represent the start of prefix
        for (int j = 0; j <= i; j++)
        {
            cout << a[j];
        }
        cout << endl;
    }
}
int main()
{
    char a[] = "abcd";
    prefix(a);
}
