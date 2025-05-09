#include<iostream>

using namespace std;

void swap(int &a, int &b){
	int temp = a;
	a= b;
	b= temp;
}

int main(){
	int a[100];
	int T,n;
	bool isSwapped;
	cin>>T;
	
	while(T>0){
		T--;
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		//using bubble sort
		for(int i=0;i<n;i++){
			isSwapped = false;
			for(int j=0;j<n;j++){
				if(a[j]>a[j+1]){
					swap(a[j],a[j+1]);
					isSwapped = true;
				}
			}
			if(!isSwapped){
				break;
			}
		}
		for(int i = 0;i<n;i++){
			cout<<a[i]<<" ";
		}
	}
}
