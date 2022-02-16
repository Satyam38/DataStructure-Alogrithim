/*
arr[1 4 7 2 ]
subarry:
1    =1
1 4 =6
1 4 7 =12
1 4 7 2 =14
4   =4
4 7 =11
4 7 2 =13
7   =7
7 2  =9
2    =2


maximum sum subarray is : 13 
*/

// TIME complexity:o(n^3);

#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
cin>>n;
int arr[n];
for(int i=0; i<n; i++){
    cin>>arr[i];
}

int maxsum =INT_MIN;

for(int i=0; i<n; i++){
    for(int j=i; j<n; j++){
        int sum=0;
        for(int k=i; k<=j; k++){
            sum +=arr[k];
        }
       maxsum=max(maxsum , sum);
        
    }
}


cout <<maxsum<<endl;
return 0;
}


