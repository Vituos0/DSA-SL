#include<iostream>

using namespace std;

int main(){
	int a[100];
	int n;
	bool isSwapped;
	
	cin>>n;
	
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<"Mang ban dau: "<<endl;
	
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
	
	for(int i=0;i<n-1;i++){
		isSwapped = false;
		for(int j=0;j<n-i-1;j++){
			if(a[j]>a[j+1]){
				int temp =a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
				isSwapped = true;
			}
		}
		if(!isSwapped){
			cout<<"Hoan thanh o buoc: "<<i<<endl;
			break;
		}
	}
	cout<<"Mang da sap xep: "<<endl;
	
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	
	return 0;
}
