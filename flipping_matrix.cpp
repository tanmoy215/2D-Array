#include<iostream>
using namespace std;
int main(){
    int arr[3][4]={{0,0,1,1},{1,0,1,0},{1,1,0,0}};
    //making the first column all 1's
    for(int i=0;i<3;i++){
        if(arr[i][0]==0)
        for(int j=0;j<4;j++){              // flipping operation
            if(arr[i][j]==0) arr[i][j]=1;
            else arr[i][j]=0;
        }
    }
    
   // flipped the column where no0>no1
    for(int j=0;j<4;j++){
        int noz=0;
        int noo=0;
        for(int i=0;i<3;i++){
            if(arr[i][j]==0) noz++;
            else noo++;
        }
        if(noz>noo){
             for(int k=0;k<3;k++){
                 if(arr[k][j]==0) arr[k][j]=1;
                 else arr[k][j]=0;
             }                                       //flipped the operation
        }
    }
    //output
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    //score after flipping matrix
    int sum=0;
    for(int i=0;i<3;i++){
        int x=1;
        for(int j=4-1;j>=0;j--){
            sum+=arr[i][j]*x;
            x*=2;
        }
    }
    cout<<"Final score after flipping matrix : "<<sum;
   
}