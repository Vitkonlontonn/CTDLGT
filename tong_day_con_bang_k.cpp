#include <bits/stdc++.h>
using namespace std;
int n, k;
int a[1000], b[1000], c[1000];
int dem = 0;
vector<vector<int>> res; // tạo vectow mảng 2 chiều

//
void nhap()
{
    res.clear();
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    sort(a + 1, a + 1 + n);
}
//
void Try(int i)
{
    for (int j = 0; j <= 1; j++)
    {
        b[i] = j;
        if (i == n)
        {
            int sum = 0;
            for (int x = 1; x <= n; x++)
            {
                if (b[x])

                    sum += a[x];
            }
            if (sum == k)
            {
                dem++;
                vector<int> q;
                for (int x = 1; x <= n; x++)

                    if (b[x])
                        q.push_back(a[x]);

                res.push_back(q);
            }
        }
        else
            Try(i + 1);
    }
}
int main()
{

    nhap();
    Try(1);
    if (res.size() != 0)
    {
        sort(res.begin(), res.end());
        for (int i = res.size() - 1; i >= 0; i--)
        {
            for (int j = 0; j < res[i].size(); j++)
                cout << res[i][j] << " ";
            cout << endl;
        }
        cout << dem << endl;
    }
}