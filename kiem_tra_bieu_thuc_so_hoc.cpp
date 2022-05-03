#include<bits/stdc++.h>
using namespace std;
int kiemtra(string s)
{
    stack <int> q;
    int i, j, n=s.length();
    for (int i=0; i<n; i++)
    {
        if (s[i] == '(') q.push(i);
        else if (s[i] == ')') 
        {
            j=q.top();
            q.pop();
            if (i-j==2) return 1;
            if (s[j+1]=='(' && s[i-1]==')') return 1;


        }

    }
    return 0;
    
}
int main ()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s;
        getline(cin, s);
        if (kiemtra(s))
        {
            cout <<"Yes"<<endl;
        }
        else cout <<"No"<<endl;
    }
}
// #include<bits/stdc++.h>
// using namespace std;
// int check(string s){
// 	stack<int> st; 
// 	int i,j, n=s.length();
// 	for(i=0;i<n;i++){
// 		if(s[i]=='(') st.push(i);
// 		else if(s[i]==')'){
// 			j=st.top(); st.pop();
// 			if(i-j==2) return 1;
// 			if(s[j+1]=='('&& s[i-1]==')') return 1;
// 			} 
// 		}
// 	return 0;
// }
// main(){
// 	int t; string s;
// 	cin >> t; cin.ignore();
// 	while(t--){
// 		getline(cin,s);
// 		if(check(s)) cout << "Yes" << endl;
// 		else cout << "No" << endl;
// 	}
// }