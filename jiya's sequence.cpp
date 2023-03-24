#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        long long int product = 1;
        for(int i=0;i<n;i++){
            int x;
            cin >> x;
            product = product * x;
        }
        
        int least_digit = product %10;

        if(least_digit == 2 || least_digit == 3 || least_digit == 5){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
        cout << endl;
    }
}