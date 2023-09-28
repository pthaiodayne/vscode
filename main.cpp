#include <iostream>
#include <string>
using namespace std;
int main() {
    string name;
    cout << "hello friend" << "\n";
    cout << "Hay nhap ten cua ban: ";
    getline (cin, name);
    cout << "hello " << name;
    return 0;
}
