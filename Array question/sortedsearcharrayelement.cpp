#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
cin>>n;
int arr[n];
for(int i=0; i<n; i++){
    cin>>arr[i];
    
}
int target;
cin>>target;
bool m =false;
for(int i=0; i<n; i++){
    if(arr[i]==target){
        arr[i]=target;
        m=true;
        break;

    }
}
if(m){
cout<<"Found";
}
else{
    cout<<"Not found";
}
return 0;
}