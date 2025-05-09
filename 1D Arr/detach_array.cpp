#include<iostream>

using namespace std;

int main(){
	int a[100], odd[100],even[100];
	int n,oddCount=0,evenCount=0;
	
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	for(int i=0;i<n;i++){
		if(a[i]%2==0){
			even[evenCount]=a[i];
			evenCount++;
		}
		else if(a[i]%2!=0){
			odd[oddCount]=a[i];
			oddCount++;
		}
	}
	cout<<"Mang chan: "<<endl;
	for(int i=0;i<evenCount;i++){
		cout<<even[i]<<" ";
	}
	cout<<endl;
	cout<<"Mang le: "<<endl;
	for(int i=0;i<oddCount;i++){
		cout<<odd[i]<<" ";
	}
}
