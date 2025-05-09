#include<iostream>

using namespace std;

bool isPrime(int x){
	if(x<2) return false;
	for (int i=2;i*i<=x;i++){
		if(x%i==0) return false;
	}
	return true;
}

int main(){
	int  a[100];
	int  n,sum_of_element=0;
	cin>>n;
	
	for (int i=0;i<n;i++){
		cin>>a[i];
	}
	
	for (int i=0;i<n;i++){
		if(isPrime(a[i])){
			sum_of_element +=a[i];	
		}
	}
	cout<<"Tong cac so nguyen to: "<< sum_of_element<<endl;
	
	return 0;
}
