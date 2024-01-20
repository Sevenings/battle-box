#include "character.hpp"


void Soco::ataque(Character &atacante, Character &defensor) {
    defensor.recebeDano(atacante.getForca());
}


void Chute::ataque(Character &atacante, Character &defensor) {
    int dano = int(0.6*atacante.getForca());
    defensor.recebeDano(dano);
}


void Haduken::ataque(Character &atacante, Character &defensor) {
    int dano = 1.4*atacante.getForca();
    defensor.recebeDano(dano);
}


void Shuriken::ataque(Character &atacante, Character &defensor) {
    int dano = 2 + 0.4*atacante.getForca();
    for (int i=0; i<3; i++) {
        defensor.recebeDano(dano);
    }
}
