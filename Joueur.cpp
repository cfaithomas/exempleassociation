//
// Created by eric on 27/08/2020.
//

#include "Joueur.h"

Joueur::Joueur(int dommage, int prix):epee(dommage,prix),pointsdevie(500){ //epee est construite avec dommage et prix

}

 Arme &Joueur::getEpee()  {
    return epee;
}

Joueur::Joueur(int pointsdevie, int dommage, int prix):epee(dommage,prix),pointsdevie(pointsdevie) { //surcharge du constructeur

}

int Joueur::getPointsdevie() const {
    return pointsdevie;
}
