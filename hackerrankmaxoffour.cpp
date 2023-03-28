#include <iostream>
#include <cstdio>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

int max_of_four(int w, int x, int y, int z){
     int max_n = 0;
     if(w>x && w>y && w>z){
        max_n = w;
    }
    else if(x>w && x>y && x>z){
       max_n = x;
    }
    else if(y>w && y>x && y>z){
       max_n = y;
    }
    else if(z>w && z>x && z>y){
        max_n = z;
    }
    return max_n;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}