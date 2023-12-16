#include<iostream>

using namespace std;

int main() {
    int n;
    cin >>n;
    int a[n];
    int i=0;
    int swap;
    for(int i=0; i<n;i++){
        cin>>a[i];
    }
    // sort theo kiểu tìm số nhỏ nhất gắn cho vị trí đầu, ròi tiếp tục cho vị trí thứ 2...
    while(i<n){
        for(int c=i; c<n; c++){
            if(a[c]<=a[i]){
                swap=a[i];
                a[i]=a[c];
                a[c]=swap;
            }
        }
        i++;
    }
    for(int i=0; i<n; i++){
        cout << a[i] <<" ";
    }
    return 0;
}
