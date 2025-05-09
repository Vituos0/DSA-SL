#include<iostream>

using namespace std;

int main(){
	int a[100], yin[100],yang[100];
	int n, yinCount=0,yangCount=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++ ){
		if(a[i]<0){
			yin[yinCount]=a[i];
			yinCount++;
		}
		else if(a[i]>0){
			yang[yangCount]=a[i];
			yangCount++;
		}
	}
	cout<<"Mang duong: "<<endl;
	for(int i=0;i<yangCount ;i++){
		cout<<yang[i]<<" ";
	}
	cout<<endl;
	cout<<"Mang am: "<<endl;
	for(int i=0;i<yinCount ;i++){
		cout<<yin[i]<<" ";
	}
	return 0;
	
	
}
