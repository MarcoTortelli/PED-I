#include <iostream>
#include <string>

using namespace std;

/*

8. Um palíndromo é uma palavra, frase ou qualquer outra sequência de unidades que tenha a propriedade de poder ser lida tanto da direita para a esquerda como da esquerda para a direita. Num palíndromo, normalmente são desconsiderados os sinais ortográficos (diacríticos ou de pontuação), assim como o espaços entre palavras. Fazer um programa que leia uma sequência de caracteres e informe se é um palíndromo ou não. Testar as seguintes frases, sem os acentos:
  A droga da gorda
  A mala nada na lama
  A torre da derrota
  O ceu sueco
  O galo ama o lago
  Socorram-me, subi no onibus em Marrocos
  Anotaram a data da maratona
  O mito e otimo
  So com o tio somavamos oito mocos
  oto come mocoto
  Saudavel leva duas
  A cara rajada da jararaca

*/

main() {
    string frase;
    string esarf;
    string fraseclean;
    cout << "Digite uma frase:" << endl;
    getline(cin, frase);

    for (int i = 0; i < frase.length(); i++) {
        frase[i] = tolower(frase[i]);
        char letra = frase[i];
        if (letra != ' ') {
            fraseclean += letra;
        }
    }

    for (int i = fraseclean.length() - 1; i >= 0; i--) {
        esarf += fraseclean[i];
    }

    if (fraseclean == esarf) {
        cout << "A frase e um palindromo";
    } else {
        cout << "A frase nao e um palindromo";
    }
}
