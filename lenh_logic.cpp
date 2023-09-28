//tìm só lớn nhất trong 3 số a,b,c
#include <iostream>
using namespace std;   
int a,b,c;
int main() {
    cout << "nhap 3 so a,b,c khac nhau: ";
    cin >> a >> b >> c;
    if (a==b || a==c || b==c) {
        cout << "3 so khong duoc bang nhau";
    } else if (a>b && a>c) {
        cout << "a lon nhat";
    } else if (b>a && b>c) {
        cout << "b lon nhat";
    } else {
        cout << "c=" << c<< " la so lon nhat";

    }
    return 0;
}