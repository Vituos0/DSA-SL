#include<iostream>

using namespace std;

bool check(int n){
	
}

int main(){
	int a[100];
	int n,x;
	
	cin>>n;
	
	for (int i=0; i<n;i++){
		cin>>a[i];
	}
	
	cin>>x;
	for (int i=0; i<n;i++){
		if(a[i]==x) cout<<"Tim thay x tai vi tri "<< i <<endl;
	}
	return 0;
}
