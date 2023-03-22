#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; 
    cin >> n;
    int digit_sum = 0;

    while(n>0){
        // Store the last digit value in the last_digit variable
        int last_digit = n % 10; 

        // Add the last digit value into the digit sum
        digit_sum = digit_sum + last_digit;

        // Remove the last digit 
        n = n / 10; 
    }
    
    cout << digit_sum;

}