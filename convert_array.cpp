#include<iostream>

using namespace std;

int main(){
	int a[100];
	int n,temp=0;
	cin>>n;
	
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<"Mang truoc khi dao: ";
		for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<"Mang sau khi dao: ";
	for (int i=0;i<n/2;i++){
		int temp =a[i];
		a[i]= a[n-1-i];
		a[n-1-i]= temp;
		
	}
		for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	
}
