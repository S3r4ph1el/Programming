#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main () {

    int num;
    string palavra;
    vector<string> palavras;

    cin >> num;

    for (int i = 0; i < num; i++) {
        cin >> palavra;
        palavras.push_back(palavra);
    }

    cin >> palavra;

    for (size_t i = 0; i < palavras.size(); i++) {
        if (palavras[i] == palavra) {
            cout << "palavra correta" << endl;
            return 0;
        }
    }

    vector<char> charArray(palavra.begin(), palavra.end());

    sort(charArray.begin(), charArray.end());
    string permutada(charArray.begin(), charArray.end());

    for (size_t i = 0; i < palavras.size(); i++) {
        string palavraAtual = palavras[i];
        vector<char> charArrayAtual(palavraAtual.begin(), palavraAtual.end());
        sort(charArrayAtual.begin(), charArrayAtual.end());
        string permutadaAtual(charArrayAtual.begin(), charArrayAtual.end());

        if (permutada == permutadaAtual) {
            cout << "palavra incorreta" << endl;
            cout << palavras[i] << "?" << endl;
            return 0;
        }
    }

    cout << "palavra incorreta" << endl;
    cout << "nenhuma sugestão" << endl;
    


    return 0;
}