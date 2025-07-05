#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double consumo;
    double gasto;
    double fixo = 5.00;

    cin >> consumo;

    if (consumo <= 500) {
        gasto = consumo * 0.02;
    } else if (consumo > 500 && consumo <= 1000) {
        gasto = 500 * 0.10 + (consumo - 500) * 0.05; 
    } else if (consumo > 1000) {
        gasto = 1000 * 0.35 + (consumo - 1000) * 0.10;
    }

    // Arredonda para o centavo mais próximo
    gasto = round(gasto * 100) / 100;

    cout << fixed << setprecision(2) << gasto << " " << fixo << " " << gasto + fixo << endl;
    
    return 0;
}