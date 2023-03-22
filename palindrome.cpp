#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
        while(t--){
            string str;
            cin >> str;
            string str_rev;
    
            for(int i=str.size()-1;i>=0;i--){
                str_rev.push_back(str[i]);
            }

            if(str == str_rev){
                cout << "The given string is palindrome!" << endl;  
            }
            else{
                cout << "The given string is not palindrome!" << endl;
             }
        }
}
