#include "character.hpp"
#include <iostream>
#include <string>

using namespace std;


Ataque* listaAtaques[] = {
    new Soco(),
    new Chute(),
    new Haduken(),
    new Shuriken(),
    NULL
};


int escolheAtaque(Character &c) {
    int escolha;
    cout << "Escolha um ataque [0-2]:" << endl;
    cin >> escolha;
    return escolha;
}


void displayJogadores(Character &jogador, Character &outro) {
    cout << "*";
    jogador.print();
    outro.print();
}


void jogaVez(Character &jogador, Character &outro) {
    displayJogadores(jogador, outro); 

    int index_atk_sel = escolheAtaque(jogador);
    cout << "Debug :o" << endl;
    jogador.atacar(index_atk_sel, outro);
}


void proximo(Character *p1, Character *p2) {
    Character aux = *p1;
    *p1 = *p2;
    *p2 = aux;
}


void Combate(Character *p1, Character *p2, Character *vencedor) {   
    do {
        jogaVez(*p1, *p2);
        proximo(p1, p2);        
    } while (p1->vivo() && p2->vivo());

    if (p1->vivo()) {
        cout << p1->getNome() << " Vence!" << endl;
        vencedor = p1;
    } else if (p2->vivo()) {
        cout << p2->getNome() << " Vence!" << endl;
        vencedor = p2;
    } else {
        cout << "Empate!" << endl;
    }
}


int main() {
    string nome;
    cout << "Digite o nome de seu personagem:" << endl;
    cin >> nome;

    Character *lucas = new Character(nome, 10, 7, listaAtaques);
    Character *dummy = new Character("Dummy", 30, 2, listaAtaques);

    Character *vencedor;
    Combate(lucas, dummy, vencedor);

    return 0;
}

