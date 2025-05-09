#include<iostream>

using namespace std;

int main(){
    int a[100];
    int n,target;
    cin>>n>>target;

    for(int i=0;i<n;i++){
        cin>>a[i];  
    }

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]+a[j]==target){
                cout<<"["<<i<<","<<j<<"]"<<endl;
                return 0;
            }
        }
    }
}
