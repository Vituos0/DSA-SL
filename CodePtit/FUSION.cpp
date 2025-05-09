#include<iostream>

using namespace std;

int main(){
	
	int a[100], b[100], c[200];
	int T,n,m;
	bool isSwapped;
	
	cin>>T;
	while(T>0){
	T--;
	int cIndex=0;
	
	cin>>n>>m;
	
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<endl;
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
	for(int i=0;i<cIndex-1;i++){
		isSwapped = false;
		for(int j=0;j<cIndex-i-1;j++){
			if(c[j]>c[j+1]){
				int temp = c[j];
				c[j]=c[j+1];
				c[j+1]=temp;
				isSwapped =true;
			}
		}
		if(!isSwapped){
			break;
		}
	}
	
	for(int i=0;i<cIndex;i++){
		cout<<c[i]<<" ";
	}
	cout<<endl;
}
	
}
