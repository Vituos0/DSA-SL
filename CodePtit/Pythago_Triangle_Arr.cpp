#include<iostream>

using namespace std;

void arrOutput(int a[],int n){
	cout<<"[";
	for(int i=0;i<n;i++){
		cout<<a[i];
		if(i!=n-1) cout<<" ";
	}
	cout<<"]"<<endl;
}



 int main(){
 	int a[200005];
 	int n,T;
 	
 	cin>>T;
 	while(T>0){
	 	T--;
 	
 		cin>>n;
 	
 		for(int i=0;i<n;i++){
 		cin>>a[i];
		}	
	
		while(n>0){
			arrOutput(a,n); 
			if(n==1) break;
			int b[100005];
			for(int i=0;i<n-1;i++){
				b[i]=a[i]+a[i+1];
			}
		
			for(int i=0;i<n-1;i++){
				a[i]=b[i];
			}
			n--;
		}
	}
	return 0;
 }
 	


	 

