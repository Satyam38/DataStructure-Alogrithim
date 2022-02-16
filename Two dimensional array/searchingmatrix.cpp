#include<bits/stdc++.h>
using namespace std;

int main(){
int n,m;
cin>>n>>m;
int arr[n][m];
for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
    cin>>arr[i][j];
    }
}
int key;
cin>>key;
bool k=0;
for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
      if(arr[i][j]==key){
          cout<<i<<" "<<j<<endl;
           k=1;
         
      }
    }
}

if(k){
    cout<<"Element Found"<<endl;
}
else{
    cout<<"Element not found"<<endl;
}

return 0;
}