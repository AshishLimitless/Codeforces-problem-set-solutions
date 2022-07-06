#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,p1,p2,p3,q=0;
	cin>>n;
	while(n--){
		cin>>p1>>p2>>p3;
		if(p1+p2+p3>=2){
			q=q+1;
		}
	}
	cout<<q;
	return 0;
}