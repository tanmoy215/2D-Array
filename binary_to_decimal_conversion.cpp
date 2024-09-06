#include<iostream>
using namespace std;
int main(){
    int arr[]={1,0,1,1,0,1,1,1,0,1};
    int sum=0;
    int x=1;
    int sz = sizeof(arr)/sizeof(arr[0]);
    for(int j=sz;j>=0;j++){
        sum+=arr[j]*x;
        x*=2;
    }
    cout<<sum;
}