#include <iostream>
using namespace std;   
int main() {
    cout << "What month do you want to know the number of days in? ";
    int m;
    cin >> m;
    switch(m){
        case 1: 
        case 3: 
        case 5: 
        case 7: 
        case 8: 
        case 10: 
        case 12:
            {
                cout << "31 days";
                break;
            }
        case 4: 
        case 6: 
        case 9: 
        case 11:
            {
                cout << "30 days";
                break;
            }
        case 2:
            {
                cout << "28 or 29 days";
                break;
            }
        default:
            {   
                cout << "Invalid month number";
                break;
            }
    }
}