#include<iostream>
using namespace std;

int main(){
	int a[100];
	int n,sum=0,evensum=0,oddsum=0;
	cin>>n;
	for (int i=0;i<n;i++){
		cin>>a[i];
		sum += a[i];
		if(a[i]%2==0)
			evensum += a[i];
		else
			oddsum += a[i];
	}
	cout<<"Tong cac phan tu: "<<sum<<endl;	
	float avr;
	avr = (float)sum/n;
	cout<<"Trung binh: "<<avr<<endl;
	cout<<"Tong chan: "<<evensum<<endl;
	cout<<"Tong le: "<<oddsum<<endl;
	
	return 0;
	
}
