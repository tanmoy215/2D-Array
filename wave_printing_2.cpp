#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<vector<int>>v{{1,2,3},{4,5,6},{7,8,9}};
    int row=v.size();
    int col=v[0].size();
    for(int i=0;i<col;i++){
        if(i%2!=0){
            for(int j=0;j<row;j++){
                cout<<v[j][i]<<" ";
            }
        }
        else{
            for(int j = row-1;j>=0;j--){
                cout<<v[j][i]<<" ";
            }
        }
    }
}