#include<iostream>

using namespace std;

int main(){
	int a[100],b[100],c[200];
	int n,m,cIndex =0;
	cout<<"So phan tu mang a: "<<endl;
	cin>>n;
	cout<<"So phan tu mang b: "<<endl;
	cin>>m;
	cout<<"Nhap mang a:"<<endl;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<"Nhap mang b:"<<endl;
	for(int i=0;i<m;i++){
		cin>>b[i];
	}
	for(int i=0;i<n;i++){
		c[cIndex]=a[i];
		cIndex++;	
	}
	for(int i=0;i<m;i++){
		c[cIndex]=b[i];
		cIndex++;
	}
	cout<<"Mang da gop:"<<endl;
	for(int i=0;i<cIndex ;i++){
		cout<<c[i]<<" ";
	}
}
