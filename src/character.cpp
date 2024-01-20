#include "character.hpp"

#include <iostream>
#include <string>
#include <list>


Character::Character(string nom, int vid, int forc, Ataque** ataqu)
    : nome(nom), vida(vid), forca(forc), ataques(ataqu) 
{ }

const string Character::getNome()
{
    return nome;
}

const int Character::getVida()
{
    return vida;
}

const int Character::getForca()
{
    return forca;
}

const void Character::print()
{
    cout << nome << " " << vida << "/" << forca << endl;
}

void Character::recebeDano(int dano) {
    vida -= dano;
}

const bool Character::vivo() {
    return vida > 0;
}

void Character::atacar(int index_ataque, Character &alvo) {
    this->ataques[index_ataque]->ataque(*this, alvo);
}

