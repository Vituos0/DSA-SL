#include<iostream>
#include<iomanip>
#include<ctime>

using namespace std;

int main(int argc, const char** argv) {
    srand(time(0));
    int a[11];
    for (size_t i = 0; i < 11; i++)
    {
        a[i] = rand() % (30-15+1)+15;
    }
    // for (size_t j = 0; j < 11; j++)
    // {
    //     /* code */
    //     cout<<setw(3)<<a[j];
    // }
    
    for (size_t c = 0; c < 11; c++)
    {
        /* code */
        if(a[c]%2==0){
            cout<<setw(3)<<a[c];
        }
    }
    

    return 0;
}