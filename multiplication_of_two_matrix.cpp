#include<iostream>
using namespace std;
int main(){
    //first matrix
    int n=3,m=2;
    int arr1[n][m]={{1,2},{3,4},{5,6}};
            //second matrrix
    int p=2,q=4;
    int arr2[p][q]={{1,2,3,4},{5,6,7,8}};
    //condition check
        if(m!=p){
                cout<<"Multiplication Opetarion are not possible";
        }
        else{
              
    int res[n][q];
    //multiplication operation
    for(int i=0;i<n;i++){
        for(int j=0;j<q;j++){
          res[i][j]=0;
          for(int k=0;k<p;k++){
            res[i][j]+=arr1[i][k]*arr2[k][j];
          }
        }
    }
    //final output
    for(int i=0;i<n;i++){
        for(int j=0;j<q;j++){
            cout<<res[i][j]<<"\t";
        }
        cout<<endl;
    }
        }
}