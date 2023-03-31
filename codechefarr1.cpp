

#include <bits/stdc++.h>

using namespace std;

int main(){
   int arr[4];
   for(int i=0;i<4;i++){
      cin >> arr[i];
   }
   
   int count = 0;
   
   for(int j=0;j<4;j++){
        if(arr[j]>=10){
            count++;
        }
   }
   
   cout << count;
}