#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, A[100];
        cin >> n;
        for (int i = 1; i <= n; i++)
            cin >> A[i];
        int m = n - 1;
        cout << "[";
        for (int i = 1; i < n; i++)
        {
            cout << A[i] << " ";
        }
        cout << A[n] << "]" << endl;

        for (int j = 1; j < n; j++)
        {
            cout << "[";
            for (int i = 1; i <= m; i++)
            {
                A[i] = A[i] + A[i + 1];

                if (i != m)
                    cout << A[i] << " ";
                else
                    cout << A[i];
            }
            cout << "]" << endl;
            m--;
        }
    }
}