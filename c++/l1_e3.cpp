#include <iostream>
#include <iomanip>
using namespace std;

int main () {
    
    int area;
    int escolha;

    cin >> escolha;
    cin >> area;

    if ((escolha != 1 && escolha != 2) || area <= 0) {
        cout << "Entrada inválida!" << endl;
        return 0;
    }

    if (escolha == 1) {
        if (area < 200) {
            cout << fixed << setprecision(2) << area * 1.0 << endl;
        } else {
            cout << fixed << setprecision(2) << area * 1.2 << endl;
        }
    } else if (escolha == 2) {
        if (area < 200) {
            cout << fixed << setprecision(2) << area * 1.1 << endl;
        } else {
            cout << fixed << setprecision(2) << area * 1.3 << endl;
        }
    }


    return 0;
}