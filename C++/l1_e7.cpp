#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

typedef struct {
    string sigla;
    string palavra;
} Palavra;

int main () {

    int num;
    string texto;

    cin >> num;
    cin.ignore();

    Palavra palavras[num];

    for (int i = 0; i < num; i++) {
        cin >> palavras[i].sigla;
        cin >> palavras[i].palavra;
        cin.ignore();
    }

    getline(cin, texto);
    vector<string> palavrasTexto;
    size_t pos = 0;
    while ((pos = texto.find(' ')) != string::npos) {
        palavrasTexto.push_back(texto.substr(0, pos));
        texto.erase(0, pos + 1);
    }
    palavrasTexto.push_back(texto);

    for (size_t i = 0; i < palavrasTexto.size(); i++) {
        string palavraAtual = palavrasTexto[i];
        bool found = false;
        for (int j = 0; j < num; j++) {
            string palavraAtualLower = palavraAtual;
            transform(palavraAtualLower.begin(), palavraAtualLower.end(), palavraAtualLower.begin(), ::tolower);
            if (palavras[j].sigla == palavraAtualLower) {
                cout << palavras[j].palavra << " ";
                found = true;
                break;
            }
        }
        if (!found && i < palavrasTexto.size() - 1) {
            cout << palavraAtual << " ";
        } else if (!found) {
            cout << palavraAtual;
        }
    }

    return 0;
}