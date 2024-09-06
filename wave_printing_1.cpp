#include<iostream>
#include<vector>
using namespace std;
int main(){
 vector<vector<int>>v{{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
 int row=v.size();
 int col=v[0].size();
 for(int i=0;i<row;i++){
    if(i%2==0){
        for(int j=0;j<col;j++){
            cout<<v[i][j]<<" ";
        }
    }
    else{
        for(int k=col-1;k>=0;k--){
            cout<<v[i][k]<<" ";
        }
    }
 }
}