#include <gtkmm.h>
#include "headers/character.hpp"

int main () {
    Character *lucas = new Character("Lucas", 14, 34, NULL);
    lucas->print();
}
