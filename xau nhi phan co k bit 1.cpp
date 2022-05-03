#include<bits/stdc++.h>
using namespace std;

int n,k, x[100]={0};
bool ok=false;

void in ()
{
	int d=0;
	for (int i=1; i<=n; i++)
	if (x[i]==1) d++;
	if (d!=k) return;
	
	for (int i=1; i<=n; i++)
	cout <<x[i];
	cout <<endl;
		
	
	
}
void sinh ()
{
	int i=n;
	while (x[i])
	{
		x[i]=0;
		i--;
	}
	if (i==0) ok=true;
	else x[i]=1;
}
int main ()
{
	int t; cin >> t;
	while (t--)
	{
	cin >> n>>k;
	while (!ok)
	{
		in ();
		sinh();
	}	
	ok=false;
	x[100]={0};
	}
	
}


