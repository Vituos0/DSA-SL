#include<iostream>

using namespace std;

void ReverseSubArray(int a[],int L, int R,int n)
	{
		for (int i=0;i<(R-L+1)/2;i++)
		{
			int temp = a[L+i];
			a[L+i] = a[R-i];
			a[R-i] = temp;
		}
		
	}
	
int main(){
	int a[100];
	int n,L1,L2,R1,R2;
	
	cin>>n;
	
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	cout<<"Mang truoc khi dao: ";
		for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	
	cout<<"Dao doan 1: "<<endl;
	cin>>L1>>R1;
	cout<<"Dao doan 2: "<<endl;
	cin>>L2>>R2;
	
ReverseSubArray(a,L1,R1,n);
ReverseSubArray(a,L2,R2,n);

cout<<"Mang sau khi dao: ";
		for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
		}
	return 0; 
 
	
}
