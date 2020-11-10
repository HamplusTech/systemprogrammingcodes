#include <iostream>

using namespace std;

int main () {
    cout << "Enter the multiplication table you want to print to" << endl;
    int n; cin >> n;
    for (int i = 1; i <= n; i++) {
        cout << "\n*** " << i << " times ***" << endl;
        for (int j = 1; j <= 12; j++) {
            cout << j << " * " << i << " = " << j * i << endl;
        }
    }
    //return (0);
}
