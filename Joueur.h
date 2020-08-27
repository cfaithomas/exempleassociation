//
// Created by eric on 27/08/2020.
//

#ifndef EXEMPLEASSOCIATION_JOUEUR_H
#define EXEMPLEASSOCIATION_JOUEUR_H


#include "Arme.h"

class Joueur {

    Arme epee;

public:
    Joueur(int dommage,int prix);

    const Arme &getEpee() const;
};


#endif //EXEMPLEASSOCIATION_JOUEUR_H
