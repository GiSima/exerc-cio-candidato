#include <iostream>

using namespace std;

int main()
{
    int escola, job;
    char viajem, hab;

    cout << "Qual sua escolaridade?" << endl;
    cout << "1) Ensino Fundamental" << endl;
    cout << "2) Ensino Medio" << endl;
    cout << "3) Ensino Superior" << endl;
    cout << "4) Pos-graduacao" << endl;
    cout << "Digite uma opcao: ";
    cin >> escola; cout << endl;

    cout << "Voce tem quantos anos de experiencia profissional? "; cin >> job;
    cout << "Voce tem disponibilidade para viajar (S/N)? "; cin >> viajem;
    cout << "Voce tem habilitacao de motorista (S/N)? "; cin >> hab;

    return 0;
}
