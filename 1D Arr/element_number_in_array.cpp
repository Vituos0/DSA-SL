#include<iostream>

using namespace std;

bool check(int x){
	if(x<2) return false;
	for (int i=2;i*i<=x;i++){
		if(x%i==0) return false;
	}
	return true;
}

int main(){
	int a[100];
	int n,x;
	
	cin>>n;
	
	for (int i=0; i<n;i++){
		cin>>a[i];
	}
	for (int i=0; i<n;i++){
		if(check(a[i])){
			cout<<a[i]<<" ";		
		}	
	}
	return 0;
}
