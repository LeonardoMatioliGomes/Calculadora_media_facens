#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;


//variaveis que armazenam informações inseridas pelo usúario
int main() {
   char continuar;
   string nome;
   int idade;
   int i = 0;

//DO é usado para começar a repetição
   do{

//interface que pede para o usúario colocar suas informações
   cout << "Digite seu nome: ";
   cin >> nome;

   cout << "Digite seu RA: ";
   cin >> idade;

//nomeando as variaveis
    double ac1, ac2, ag, af;

//interface para o usuario digitar suas notas
    cout << "Digite a sua nota da ac1: ";
    cin >> ac1;

    cout << "Digite a sua nota da ac2: ";
    cin >> ac2;

    cout << "Digite a sua nota da ag: ";
    cin >> ag;

    cout << "Digite a sua nota da af: ";
    cin >> af;


//formula para medir o peso de cada nota
    ac1 = (ac1 * 0.15);
    ac2 = (ac2 * 0.35);
    ag = (ag * 0.10);
    af = (af * 0.50);

//soma das notas
    double soma = (ac1 + ac2 + af + ag);

interface do usuario para falar se foi aprovado ou reprovado
    cout << "A sua média do semestre foi: " << soma << endl << endl;

//caso sua nota foi de 5 para cima
    if (soma >= 5) {
        cout << "Parabéns! Você foi aprovado " << nome << " " << idade << endl;
    }

//caso sua nota foi entre 3 e 5
    else if (soma >=3 && soma <5) {
        cout << "Você está em recuperação. Deverá fazer uma prova substitutiva " << nome << " " << idade << endl;
    }

//caso sua nota foi abaixo de 3
    else if (soma < 3) {
        cout << "Eita! Você foi reprovado " << nome << " " << idade << endl;
    }

//interface para o usuario perguntando se quer continuar ou parar
    cout << "Deseja continuar? (s/n) >>> ";
    cin >> continuar;

//WHILE entende com S que quer voltar a calculadora
   } while (continuar == 's' || continuar == 'S');

    return 0;

}