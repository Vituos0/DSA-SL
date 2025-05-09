#include<iostream>

using namespace std;

void ArrOutput(int a[], int n){
	cout<<"[";
	for(int i=0;i<n;i++){
		cout<<a[i];
		cout<<" ";
	}
	cout<<"]"<<endl;
}

int main(){
	int a[10005],b[10005];
	int n,T;
	
	cin>>T;
	
	while(T>0){
		T--;
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=0;i<n;i++){
			
		}
		
	}
	
	
	return 0;
}
