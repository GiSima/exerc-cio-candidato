#include <iostream>

using namespace std;

int main()
{
    int escola, job;
    int escolaPontos, jobPontos;
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

    if (escola == 1) {escolaPontos = 10;}
    if (escola == 2) {escolaPontos = 20;}
    if (escola == 3) {escolaPontos = 30;}
    if (escola == 4) {escolaPontos = 40;}

    if (job <= 0) {jobPontos = 0;}
    else if (job <= 2) {jobPontos = 10;}
    else if (job <= 5) {jobPontos = 20;}
    else {jobPontos = 40;}

    cout << "Pontos por escolaridade: " << escolaPontos << endl;
    cout << "Pontos por experiencia: " << jobPontos << endl;

    return 0;
}
