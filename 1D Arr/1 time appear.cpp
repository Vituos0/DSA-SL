#include<iostream>

using namespace std;

int main(){
	int a[100];
	bool check[100]={false};
	int n;
	bool found=false;
	cin>>n;
	
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	for(int i=0;i<n;i++){
		if(!check[i]){
			int count=1;
			for(int j=i+1;j<n;j++){
				if(a[j]==a[i]){
					check[j]=true;
					count++;
				}
			}
			if(count==1){
				cout<<a[i]<<endl;
				found=true;
			}		
		}
	}
	if(!found){
		cout<<"Nothing"<<endl;
	}
}
