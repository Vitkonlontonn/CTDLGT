#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int a[10] = {1000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
    while (t--)
    {
        int n, d = 0;
        cin >> n;
        for (int i = 0; i <= 9; i++)
        {
            if (n >= a[i])

            {
                d += n / a[i];
                n = n % a[i];
            }
        }
        cout <<d << endl;
    }
}