#include <iostream>
#include <string>
#include<cmath>
using namespace std;
int main ()
{
	int t;
	cin >> t;
	while (t--)
	{
		long long n, k;
		cin >> n >> k;
		long long s=2;
		string P;
		P[0]='A';
		if (k%2==1) cout <<"A" <<endl;

		else
		{
			for (long long i=2;i <=n; i++)
			{
				s*=2;
				if (k%s==s/2)
				{
					P[0]+=i-1;
					cout << P[0] <<endl;
					break;
				}

			}
		}
    }
}

