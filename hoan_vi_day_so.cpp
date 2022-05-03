#include <bits/stdc++.h>
using namespace std;
int n, A[50], B[50];
bool ok = false;
void in()
{
    for (int i = 1; i <= n; i++)
        cout << A[B[i]] << " ";
    cout << endl;
}
void sinh()
{
    int i = n - 1;
    while (A[i] > A[i + 1])
        i--;
    if (i == 0)
        ok = true;
    else
    {
        int j = n;
        while (A[j] < A[i])
            j--;
        swap(A[i], A[j]);
        int d = i + 1, c = n;
        while (d < c)
        {
            swap(A[d], A[c]);
            d++;
            c--;
        }
    }
}

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        B[i] = i;
    for (int i = 1; i <= n; i++)
        cin >> A[i];
    sort(A + 1, A + 1 + n);
    while (!ok)
    {
        in();
        sinh();
    }
}