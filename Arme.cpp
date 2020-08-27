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

void Arme::setDommage(int dommage) {
    Arme::dommage = dommage;
}

void Arme::setPrix(int prix) {
    Arme::prix = prix;
}


