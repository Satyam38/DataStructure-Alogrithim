#include<bits/stdc++.h>
using namespace std;

int main(){
int n; 
cin>>n;
int arr[n];

for(int i=0; i<n; i++){
  cin>>arr[i];
}
int even[n],odd[n];
int j=0 , k=0;
for(int i=0; i<n; i++){
  if(arr[i]%2==0){
      even[j]=arr[i];
      j++;
  }
  else{
      odd[k]=arr[i];
      k++;
  }
}

  for(int i=0; i<j ;i++)
   {
     cout<<" "<<even[i];
   }
   cout<<endl;

  for(int i=0; i<k; i++)
   {
    cout<<" "<<odd[i];
   }


return 0;
}