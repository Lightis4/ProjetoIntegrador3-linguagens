#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    string nome;
    int matricula;
    float nota1, nota2, nota3, media;

    cout << "Digite seu nome: ";
    getline(cin, nome);

    cout << "Digite sua matricula: ";
    if (!(cin >> matricula)) {
        cout << "Matricula invalida!" << endl;
        return 1;
    }

    cout << "Digite a primeira nota: ";
    if (!(cin >> nota1)) {
        cout << "Nota invalida!" << endl;
        return 1;
    }

    cout << "Digite a segunda nota: ";
    if (!(cin >> nota2)) {
        cout << "Nota invalida!" << endl;
        return 1;
    }

    cout << "Digite a terceira nota: ";
    if (!(cin >> nota3)) {
        cout << "Nota invalida!" << endl;
        return 1;
    }

    if (nota1 < 0 || nota1 > 10 ||
        nota2 < 0 || nota2 > 10 ||
        nota3 < 0 || nota3 > 10) {
        cout << "As notas devem estar entre 0 e 10!" << endl;
        return 1;
    }

    media = (nota1 + nota2 + nota3) / 3;

    cout << "\nAluno: " << nome << endl;
    cout << "Matricula: " << matricula << endl;
    cout << fixed << setprecision(2);
    cout << "Media: " << media << endl;

    if (media >= 7) {
        cout << "Situacao: Aprovado" << endl;
    } else if (media >= 5) {
        cout << "Situacao: Recuperacao" << endl;
    } else {
        cout << "Situacao: Reprovado" << endl;
    }

    return 0;
}
