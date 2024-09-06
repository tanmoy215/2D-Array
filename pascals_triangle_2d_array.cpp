#include<iostream>
#include<vector>
using namespace std;
int main(){
    int m;
    cout<<"enter  m : ";
    cin>>m;
    vector<vector<int> > v;
    //generation
    for(int i=0;i<=m;i++){
         vector<int>a(i+1);
        v.push_back(a);
        for(int j=0;j<i;j++){
            if(j==0 || i==j)
             v[i][j]=1;
             else
             v[i][j]=v[i-1][j]+v[i-1][j-1];
        }
    }
    
    //print the vector
    for(int i=0;i<=m;i++){
        for(int j=0;j<i;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}










//first process
/*#include<iostream>
using namespace std;
int factor(int n){
    int fact=1;
         for(int i=1;i<=n;i++){
                fact=fact*i;
         }
         return fact;
}
int combination(int a, int b){
    int com = factor(a)/(factor(b)*factor(a-b));
    return com;
}
int main(){
    int n;
    cout<<"enter n : ";
    cin>>n;
    for(int i=0;i<=n;i++){
        for(int k=0;k<n-i;k++){
            cout<<" ";
        }
        for(int j=0;j<=i;j++){
            int bn = combination(i,j);
            cout<<bn<<" ";
        }
        
        cout<<endl;
    }
        
    }          
    */


   //second process

   /*#include<iostream>
   using namespace std;
   int main(){
    int n;
    cout<<"enter n : ";
    cin>>n;
    for(int i=0;i<=n;i++){
        for(int l=0;l<n-i;l++){
            cout<<" ";
        }
        int v=1;
        for(int j=0;j<=i;j++){
            cout<<v<<" ";
            v = v*(i-j)/(j+1);   
        }
        cout<<endl;
    }
   } */
