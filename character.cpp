#include "character.hpp"

#include <iostream>
#include <string>
#include <list>


Character::Character(string nom, int vid, int forc, Ataque** ataqu)
    : nome(nom), vida(vid), forca(forc), ataques(ataqu) 
{ }

string Character::getNome()
{
    return nome;
}

int Character::getVida()
{
    return vida;
}

int Character::getForca()
{
    return forca;
}

void Character::print()
{
    cout << nome << " " << vida << "/" << forca << endl;
}

void Character::recebeDano(int dano) {
    vida -= dano;
}

bool Character::vivo() {
    return vida > 0;
}

void Character::atacar(int index_ataque, Character &alvo) {
    this->ataques[index_ataque]->ataque(*this, alvo);
}

