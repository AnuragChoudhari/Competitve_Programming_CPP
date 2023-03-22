#include <bits/stdc++.h>

using namespace std;

int main(){
    string s = "Harish";
    string str_rev;
    
    for(int i=s.size();i>0;i--){
        str_rev.push_back(s[i]);
    }
    
    cout << str_rev;

}