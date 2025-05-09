#include<iostream>
#include<algorithm>

using namespace std;

int main(){
	int T;
	cin >> T;
	while(T--){
		int n, k;
		cin >> n >> k;
		int a[100005];
		
		for(int i=0;i<n;i++){
			cin >> a[i];
		}
		
		sort(a, a+n); 
		
		int sumAll = 0, sumK = 0, sumNK = 0;
		
		for(int i=0;i<n;i++) sumAll += a[i];
		for(int i=0;i<k;i++) sumK += a[i];
		for(int i=0;i<n-k;i++) sumNK += a[i];
		
		int sumMin = min(sumK, sumNK);
		
		cout << sumAll - 2*sumMin << endl;
	}
}


