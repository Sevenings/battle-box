#ifndef OBJECTS_H
#define OBJECTS_H

#include <string>
#include <list>
#include <iostream>

using namespace std;



class Ataque;

class Character {
private:
    string nome;
    int vida;
    int forca;

public:
    Ataque** ataques;

    Character(string nome, int vida, int forca, Ataque** ataques);

    string getNome();
    int getVida();
    int getForca();
    void print();
    void recebeDano(int dano);
    bool vivo();
    void atacar(int index_ataque, Character &alvo);
};




class Ataque {
public:
    string nome;
    virtual void ataque(Character &atacante, Character &defensor) =0;

    string getNome() {
        return this->nome;
    }

};


class Soco : public Ataque {
public:
    Soco() {
        nome = "Soco";
    }

    void ataque(Character &atacante, Character &defensor);
};


class Chute : public Ataque {
public:
    Chute() {
        nome = "Chute";
    }

    void ataque(Character &atacante, Character &defensor);
};


class Haduken : public Ataque {
public:
    Haduken() {
        nome = "Haduken";
    }

    void ataque(Character &atacante, Character &defensor);
};


class Shuriken : public Ataque {
public:
    Shuriken() {
        nome = "Shuriken";
    }

    void ataque(Character &atacante, Character &defensor);
};



#endif
