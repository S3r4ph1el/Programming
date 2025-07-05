#include <iostream>
#include <iomanip>

int main () {

    double a, peso_ideal;
    char s;

    std::cin >> a >> s;

    if (a < 0 || (s != 'm' && s != 'f')) {
        std::cout << "Entrada inválida!" << std::endl;
        return 0;
    }

    if (s == 'm') {
        peso_ideal = 72.7 * a - 58;
    } else if (s == 'f') {
        peso_ideal = 62.1 * a - 44.7;
    }

    std::cout << std::fixed << std::setprecision(1) << peso_ideal << " kg" << std::endl;

}