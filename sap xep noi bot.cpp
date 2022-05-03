#include<bits/stdc++.h>
using namespace std;

int main ()
{
	bool check;
int n, d=0; cin >> n;
int a[n+1];
for (int i=0; i<n; i++) cin >> a[i];

for (int i = 0; i < n; i++) { 
		check = false;
		for (int j=0; j<n-i-1; j++ ) {
			if (a[j] > a[j+1] ) { 
				check = true;
				temp = a[j];  a[j] = a[j+1]; a[j+1] = temp;
			}
		}
		if(!check) break; 
		if (check) {
			for (int i=0; i<n; i++) cout <<a[i];
			cout <<endl;
		}
	}
}


