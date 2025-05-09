#include<iostream>

using namespace std;

bool check(int x){
		if(x%2==0) return true;
		else return false;

}

int main(){
	int a[100];
	int n;
	
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
