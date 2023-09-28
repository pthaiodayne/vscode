/* 
#include <iostream>
#include <iomanip>
using namespace std;    
int main() {
    cout << setw(6) << 6 << endl 
    << setw(6) << 18 << endl << setw(6) <<12345;
    return 0;
} */

#include <iostream>
#include <iomanip>
using namespace std;
#include <iostream>
#include <iomanip>
#include <string> // Added this line to include the <string> header file
using namespace std;

int main()
{
    string s;
    int n=0;
    cout << setw(4) << 6 << endl
         << setw(4) << 18 << endl
         << setw(4) << 124 << endl
         << "---\n"
         << setw(4)<< (6+18+124) << endl;
    cout << "nhap ho va ten cua ban: ";
    getline(cin,s);
    for (int i = 0; i < s.size(); i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            n++;
        }
    }
    cout << "so tu la: " << n;
    return 0;
} 
