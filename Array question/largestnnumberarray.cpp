#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
cin>>n;
int arr[n];
for(int i=0; i<n; i++){
    cin>>arr[i];
}
for(int i=0; i<n; i++){
    for(int j=i+1; j<n; j++){
        if(arr[i]>arr[j]){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
}
int max=arr[0];
for(int i=0; i<n; i++){
   if(max<arr[i]){
       max=arr[i];
   }
}
cout<<max<<endl;
return 0;
}