#include<iostream>

using namespace std;

void swap(int &a,int &b){
	int temp = 0; 
	temp = a;
	a=b;
	b=temp;
}

int main(){
	int a[100];
	int T,n;
	bool isSwaped;
	
	cin>>T;
	
	while(T>0){
		T--;
		cin>>n;
		for(int i=0;i<n;i++){
		cin>>a[i];
		}
	
		for(int i=0;i<n-1;i++){
			isSwaped = false;
			for(int j=0;j<n-i-1;j++){
				if(a[j]>a[j+1]){
				swap(a[j],a[j+1]);
				isSwaped = true;
				}
			}
			
			if(isSwaped){
				cout<<"Buoc "<<i+1<<": ";
				for(int k=0;k<n;k++){
					cout<<a[k]<<" ";
				}
				cout<<endl;
			}
			else break;
		}
	}
	return 0;
}
