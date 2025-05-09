#include<iostream>

using namespace std;

int main(){
	int T,n,s,m;
	
	cin>>T;
	while(T>0){
		T--;
		cin>>n>>s>>m;
		for(int i=1;i<=s;i++){
			if(n*i>=s*m){
				cout<<i<<endl;
				break;
			}
			else if(n*s<s*m){
				int die = -1;
				cout<<die<<endl;
				break;
			}
		}
	}
	return 0;
	
}
