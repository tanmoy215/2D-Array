#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v1{1,2,3};
    vector<int> v2{4,5};
    vector<int> v3{6,7,8,9,10};
    vector<vector<int> > v{v1,v2,v3};
    cout<<v[2][4];
}