/*
      Check if there exists two element in a array such that their sum
      is equal to key  */


#include<bits/stdc++.h>
using namespace std;


bool pairsum(int arr[], int n, int key){
        for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){

            if(arr[i]+arr[j]==key){
             cout<<i<<" "<<j<<endl;
             return true;
            }
        }

    }

}
int main(){

int arr[]={2 , 4 , 7 , 11 , 14 , 16, 20, 21};
int key=31;
cout<<pairsum(arr, 8, key);
return 0;
}