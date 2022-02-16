#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
bool m=0;
cin>>n;
int arr[n];
for(int i=0; i<n; i++){
    cin>>arr[i];
}

int dele;
cin>>dele;
for(int i=0; i<n; i++){
    if(arr[i]==dele){
        for(int j=i; j=n-1; j++){
            arr[j]=arr[j+1];
        }
        m++;
        break;
        
    }
}

if(m==0){
    cout<<"Element Not Found"<<endl;
}
else{
      for(int i=0; i<n-1; i++){
          cout<<arr[i]<<" ";
      }
}
return 0;
}