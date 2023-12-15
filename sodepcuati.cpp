#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long timsonhonhattrongchuoi(long* a, long x){
    for(int i=0; i<x; i++){
        cin >> a[i];
    }
    long c=a[0];
    for(int i=0; i<x; i++){
        if(a[i]<=c){
            c=a[i];
        }
    } 
    return c;
}
int main() {
    // Enter your code here. Read input from STDIN. Print output to STDOUT    
    long x,y;
    cin >> x >> y;
    long a[x];
    long b[y];
    long m;
    long n;
    m=timsonhonhattrongchuoi(a,x);
    n=timsonhonhattrongchuoi(b,y);
    cout << m*10+n;
    return 0;
} 
