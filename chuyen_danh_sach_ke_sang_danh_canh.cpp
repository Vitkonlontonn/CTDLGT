// Không biết cách này sai ở đâu
//#include <bits/stdc++.h>
// using namespace std;
// vector <int> res [100];
// int main()
// {
//     int n;
//     cin >> n;
//     cin.ignore();
//     for (int i = 1; i <= n; i++)
//     {
//         string s;
//         getline(cin, s);
//         s = s + ' ';
//         int k = 1;
//         for (int j = 0; j < s.length(); j += k)
//         {
//             if (s[j] != ' ' && s[j + 1] == ' ') // so co 1 chu so
//             {

//                 res[i].push_back(s[j] - '0');
//                 k = 1;
//             }
//             if (s[j] != ' ' && s[j + 1] != ' ') // so co 2 chu so
//             {
//                 int q = (s[j + 1] - '0') + (s[j] - '0') * 10;
//                 res[i].push_back(q);
//                 k = 2;
//             }
//         }
//     }
//     for (int i = 1; i <= n; i++)
//     {
//         sort(res[i].begin(), res[i].end());
//     }
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 0; j < res[i].size(); j++)
//         {
//             if (res[i][j] > i)
//                 cout << i << " " << res[i][j] << endl;
//         }
//     }
// }
//----------------------------------------------------------------
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int a[100][100];
    memset(a, 0, sizeof(a));
    cin >> n;
    cin.ignore();
    for (int i = 1; i <= n; i++)
    {
        string s;
        getline(cin, s);
        s = s + ' ';
        //int k = 1;

        for (int j = 0; j < s.length(); j ++)
        {
            if (s[j] != ' ' && s[j + 1] == ' ') // so co 1 chu so
            {

                int q = s[j] - '0';
                a[i][q] = 1;
               // k = 1;
            }
            if (s[j] != ' ' && s[j + 1] != ' ') // so co 2 chu so
            {
                int q = (s[j + 1] - '0') + (s[j] - '0') * 10;
                a[i][q] = 1;
                //k = 2;
                j++;
            }
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            if (a[i][j])
                cout << i << " " << j << endl;
        }
    }
}