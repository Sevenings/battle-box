#include "character.hpp"
#include <iostream>
#include <string>
#include <list>

using namespace std;


Ataque* listaAtaques[] = {
    new Soco(),
    new Chute(),
    new Haduken()
};

void golpeSoco(Character &atacante, Character &defensor) {
    defensor.recebeDano(atacante.getForca());
}


void golpeChute(Character &atacante, Character &defensor) {
    int dano = int(0.6*atacante.getForca());
    defensor.recebeDano(dano);
}

void (*listaPonteirosGolpes[])(Character&, Character&) = {
    golpeSoco,
    golpeChute
};
    

int main() {
    list<Ataque*> AtaquesLista;
    AtaquesLista.push_front(new Soco());
    AtaquesLista.push_front(new Chute());
    AtaquesLista.push_front(new Haduken());

    void (*selecionado)(Character&, Character&) = listaPonteirosGolpes[1];

    Character lucas("Lucas", 10, 7, listaAtaques);
    Character dummy("Dummy", 30, 2, listaAtaques);

    lucas.print();
    dummy.print();

    (*selecionado)(lucas, dummy);

    dummy.print();

    //cout << listaAtaques[2]->getNome() << endl;

    return 0;
}

