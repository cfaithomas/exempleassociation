//
// Created by eric on 27/08/2020.
//

#include "Joueur.h"

Joueur::Joueur(int dommage, int prix) {
    epee=Arme(dommage,prix);
}

const Arme &Joueur::getEpee() const {
    return epee;
}
