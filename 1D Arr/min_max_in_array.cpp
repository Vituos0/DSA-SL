#include<iostream>

using namespace std;

int main(){
	int a[100];
	int n,min,max;
	int indexMin=0;
	int indexMax=0;
	cin>>n;
	for(int i=0; i<n;i++){
		cin>>a[i];
	}
	min=a[0];
	max=a[0];
	for(int i=0;i<n;i++){
		if(a[i]<min) {
			min=a[i];
			indexMin = i;
		}
		if(a[i]>max) {
			max=a[i];
			indexMax=i;
		}
	}
	
	cout<<"Min= "<<min<<" tai vi tri "<<indexMin<<endl;
	cout<<"Max= "<<max<<" tai vi tri "<<indexMax<<endl;
	return 0;
}
