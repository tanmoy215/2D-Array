#include<iostream>
using namespace std;
int main(){
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int minr=0,minc=0;
    int maxc=2;
    int maxr=2;
    int count=0;
    int t=3*3;
    while(count<t){
        for(int i=minc;i<=maxc;i++){
            cout<<arr[minr][i]<<" ";
            count++;
        }
        minr++;
        if(count>t) break;
        for(int i=minr;i<=maxr;i++){
            cout<<arr[i][maxc]<<" ";
            count++;
        }
        maxc--;
        if(count>t) break;
        for(int i=maxc;i>=minc;i++){
            cout<<arr[maxr][i]<<" ";
            count++;
        }
        maxr--;
        if(count>t) break;
        for(int i=maxr;i>=minr;i++){
            cout<<arr[i][minc]<<" ";
            count++;
        }
        minc++;
        if(count>t) break;
    }
}