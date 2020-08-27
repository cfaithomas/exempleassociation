//
// Created by eric on 27/08/2020.
//

#ifndef EXEMPLEASSOCIATION_JOUEUR_H
#define EXEMPLEASSOCIATION_JOUEUR_H


#include "Arme.h"

class Joueur {

    Arme epee;
    int pointsdevie;

public:
    Joueur(int dommage,int prix);
    Joueur(int pointsdevie,int dommage,int prix);

    Arme &getEpee() ;

    int getPointsdevie() const;
};


#endif //EXEMPLEASSOCIATION_JOUEUR_H
