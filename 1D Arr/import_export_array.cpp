#include<iostream>

using namespace std;

void importArr(int a[], int &n){


    cout<<"Nhap so phan tu cua mang:"<<endl;
    cin>>n;
    for (size_t i = 0; i < n; i++)
    {
        /* code */
        cout<<"a["<<i<<"]=";
        cin>>a[i];
    }
}

void exportArr(int a[], int n){
    for (size_t i = 0; i < n; i++)
    {
        cout<<"a["<<i<<"]="<<a[i]<<endl;
    }
    

}

int main(int argc, char const *argv[])
{
    
    int a[100], n;
    importArr(a,n);
    exportArr(a,n);
    
}
