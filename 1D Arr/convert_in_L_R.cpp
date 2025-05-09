#include<iostream>

using namespace std;

int main(){
	
	int n,L,R,temp=0;
	int a[100];
	
	cin>>n;
	
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<"Mang truoc khi dao: "<<endl;
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cin>>L>>R;
	for(int i=0;i<(R-L+1)/2;i++){
		temp=a[L+i];
		a[L+i]= a[R-i];
		a[R-i]=temp;	
	}
	cout<<"Mang sau khi dao: "<<endl;
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	
}
