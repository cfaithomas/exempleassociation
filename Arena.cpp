//
// Created by eric on 27/08/2020.
//

#include <iostream>
#include "Arena.h"

void Arena::fight(Joueur &joueur1, Joueur &joueur2) {
    do
    {
        joueur1.seBattre(joueur2);
        joueur2.seBattre(joueur1);
    }while(joueur1.getPointsdevie()>0&&joueur2.getPointsdevie()>0);
    if(joueur1.getPointsdevie()==0)
    {
        std::cout<<"joueur1 gagne"<<std::endl;
    } else
        std::cout<<"joueur2 gagne"<<std::endl;



}
