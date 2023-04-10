#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

int main() {
   char continuar;
   string nome;
   int idade;
   int i = 0;

   do{

   cout << "Digite seu nome: ";
   cin >> nome;

   cout << "Digite seu RA: ";
   cin >> idade;

    double ac1, ac2, ag, af;

    cout << "Digite a sua nota da ac1: ";
    cin >> ac1;

    cout << "Digite a sua nota da ac2: ";
    cin >> ac2;

    cout << "Digite a sua nota da ag: ";
    cin >> ag;

    cout << "Digite a sua nota da af: ";
    cin >> af;

    ac1 = (ac1 * 0.15);
    ac2 = (ac2 * 0.35);
    ag = (ag * 0.10);
    af = (af * 0.50);

    double soma = (ac1 + ac2 + af + ag);

    cout << "A sua média do semestre foi: " << soma << endl << endl;

    if (soma >= 5) {
        cout << "Parabéns! Você foi aprovado " << nome << " " << idade << endl;
    }

    else if (soma >=3 && soma <=5) {
        cout << "Você está em recuperação. Deverá fazer uma prova substitutiva " << nome << " " << idade << endl;
    }

    else if (soma < 3) {
        cout << "Eita! Você foi reprovado " << nome << " " << idade << endl;
    }

    cout << "Deseja continuar? (s/n) >>> ";
    cin >> continuar;

   } while (continuar == 's' || continuar == 'S');

    return 0;

}