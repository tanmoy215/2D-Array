#include<iostream>
using namespace std;
int main(){
    int arr[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    //transpose
    for(int i=0;i<4;i++){
        for(int j=i;j<4;j++){
            int temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    }
    //rotate
    int k=0;
    while(k<4){
        for(int i=0,j=3;i<j;i++,j--){
            int temp=arr[k][i];
            arr[k][i]=arr[k][j];
            arr[k][j]=temp;
        }
        k++;
    }
    //output
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

//another method(Vector)
/*
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<vector<int>>v{{1,2,3},{4,5,6},{7,8,9}};
    int row = v.size();
    int col=v[0].size();
            //transpose
    for(int i=0;i<row;i++){
        for(int j=i;j<col;j++){
            int temp=v[i][j];
            v[i][j]=v[j][i];
            v[j][i]=temp;
        }
    }
        //reverse
        int k=0;
        while(k<row){
            for(int i=0,j=col-1;i<j;i++,j--){
                int temp=v[k][i];
                v[k][i]=v[k][j];
                v[k][j]=temp;
            }
            k++;
        }
        //print final Array
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                cout<<v[i][j]<<"  ";
            }
            cout<<endl;
        }
}*/