#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

typedef struct {
    string nome;
    int quantidade;
} Produto;

int main () {

    int num;
    bool fim = false;

    cin >> num;

    Produto produtos[num];

    for (int i = 0; i < num; i++) {
        cin >> produtos[i].nome;
        cin >> produtos[i].quantidade;
    }

    while (!fim) {

        string nome;
        int quantidade;
        bool encontrado = false;

        cin >> nome;

        if (nome == "fim") {
            fim = true;
            break;
        }

        for (int i = 0; i < num; i++) {
            if (produtos[i].nome == nome) {
                encontrado = true;
                break;
            }
        }

        if (!encontrado) {
            cout << nome << " produto não encontrado" << endl;
            continue;
        }

        cin >> quantidade;

        cout << nome << " " << quantidade << endl;

        for (int i = 0; i < num; i++) {
            if (produtos[i].nome == nome) {
                produtos[i].quantidade -= quantidade;
                break;
            }
        }
    }

    for (int i = 0; i < num; i++) {
        cout << produtos[i].nome << " " << produtos[i].quantidade << endl;
    }

    return 0;
}