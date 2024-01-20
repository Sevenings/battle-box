#include <iostream>
#include <list>

#include "character.hpp"

using namespace std;

int main() {

    list<Ataque> listaAtaques;
    listaAtaques.push_back( new Ataque() );

    Character lucas("Lucas", 10, 5, listaAtaques);
    Character dummy("Boneco de Teste", 10, 1, listaAtaques);

    lucas.print();
    dummy.print();

    Soco soco;
    soco.ataque(lucas, dummy);

    if (dummy.vivo()) cout << "O Dummy está vivo" << endl;
    else cout << "O Dummy está morto" << endl;


    lucas.print();
    dummy.print();

    soco.ataque(lucas, dummy);

    if (dummy.vivo()) cout << "O Dummy está vivo" << endl;
    else cout << "O Dummy está morto" << endl;

    lucas.print();
    dummy.print();
    return 0;
}
