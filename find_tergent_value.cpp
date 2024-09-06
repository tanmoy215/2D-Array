#include<iostream>
using namespace std;
int main(){
  int row=5;
  int col=5;
  int arr[row][col]={{1,4,7,11,15},{2,5,8,12,19},{3,6,9,16,22},{10,13,14,17,28},{18,21,23,26,30}};
  int i=0;
  int j=col-1;
  int tar;
  cout<<"enter target element : ";
  cin>>tar;
  bool flag = false;
  while(i<row && j>=0){
    if(arr[i][j]==tar) {
      flag=true;
      break;
    }
    else if(arr[i][j]<tar) i++;
    else j--;
  }
  if(flag == true) cout<<"target value present";
  else cout<<"target value not present";
}