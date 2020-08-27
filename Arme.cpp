//
// Created by eric on 27/08/2020.
//

#include "Arme.h"

Arme::Arme(int dommage, int prix) : dommage(dommage), prix(prix) {

}

int Arme::getDommage() const {
    return dommage;
}

int Arme::getPrix() const {
    return prix;
}

Arme::Arme() {

}
//argument dommage va valoriser l'attribbut dommage idem pour prix
