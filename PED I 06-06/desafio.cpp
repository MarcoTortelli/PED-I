#include <iostream>

using namespace std;

/*

Faça um programa que implemente o famoso jogo Batalha Naval em modo texto.
Regras: 
Há um tabuleiro de 5x5, ou seja, 25 blocos.
Há 3 navios escondidos (um em cada bloco).
O objetivo do jogar é descobrir onde estão estes navios e acertá-los.
No início do jogo, os 3 navios devem ser alocados de forma aleatória no tabuleiro (usar a função random)
A cada tiro dado é dito se você acertou algum navio. Caso tenha errado, é dito quantos navios existem naquela linha e naquela coluna.

O jogo só acaba quando você descobrir e afundar os 3 navios.
Legenda pro usuário:
~ : água no bloco. Ainda não foi dado tiro.
* : tiro dado, não há nada ali.
X : tiro dado, havia um navio ali.
Como jogar:
A cada rodada, informe dois números: o número da linha e o número da coluna onde quer dar o tiro e o programa deve informar se acertou ou a dica.

Para gerar os números aleatórios entre 1 e 5 use no início do programa:

#include<time.h>
e no programa int main() use:

srand(time(0));
   l = rand() % 5;
   c =rand() % 5;

Para limpar a tela, use o comando:
system("cls");

*/

main(){

}