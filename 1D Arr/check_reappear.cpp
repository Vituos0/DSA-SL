#include<iostream>

using namespace std;

int main(){
	int a[100];
	bool check[100]={false};
	int n;
	
	cin>>n;
	
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		if(!check[i]){
			int count=1;
			for(int j=i+1;j<n;j++){
				if(a[j]==a[i]){
					count++;
					check[j]=true;	
				}
			}	
			if(count>1){
			cout<<a[i]<<" "<<count<<endl;
		}
		
		}
	}
	
	
	
	return 0;
}
