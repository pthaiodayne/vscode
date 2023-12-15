#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

float timsonhonhattrongchuoi(int* a, int x){
    for(int i=0; i<x; i++){
        cin >> a[i];
    }
    int c=a[0];
    for(int i=0; i<x; i++){
        if(a[i]<=c){
            c=a[i];
        }
    } 
    return c;
}
int main() {
    // Enter your code here. Read input from STDIN. Print output to STDOUT    
    int x,y;
    cin >> x >> y;
    int a[x];
    int b[y];
    int m;
    int n;
    m=timsonhonhattrongchuoi(a,x);
    n=timsonhonhattrongchuoi(b,y);
    cout << m*10+n;
    return 0;
} 
