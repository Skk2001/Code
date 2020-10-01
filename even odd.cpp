#include<bits/stdc++.h>
using namespace std;
int main()
{
	char a;
	cin>>a;
	if(a=='a' || a=='e' || a=='i' || a=='o' || a=='u' || a=='A' || a=='O' || a=='U' || a=='E' || a=='I')
	cout<<"VOWEl";
	else{
		if(a>=48&&a<=57) cout<<"Digit";
		else cout<<"CONSTANT OR CHARACTER";
	}
	return 0;
}
