#include <iostream>
#include <string>
using namespace std;
int main() {
    string name;
    cout << "hello friend" << "\n";
    cout << "Ten cua ban la: ";
    getline (cin, name);
    cout << "hello " << name;
    return 0;
}