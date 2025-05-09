#include<iostream>

using namespace std;

int swap(int &a,int &b){
	int temp = 0; 
	temp = a;
	a=b;
	b=temp;
}

int main(){
	int a[100]; 
	int n,minIndex=0;
	
	cin>>n;
	
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<"Mang ban dau: "<<endl;
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	for(int i=0;i<n-1;i++){
		minIndex = i;
		for(int j=i+1;j<n;j++){
			if(a[j]<a[minIndex]){
				minIndex = j;
			}
		}
		swap(a[i],a[minIndex]); 
	}
	cout<<"Mang da sap xep: "<<endl;
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}
