#include <iostream>
#include "Arme.h"
#include "Joueur.h"

int main() {
   Joueur joueur1(40,100);
   std::cout<<joueur1.getEpee().getPrix()<<" "<<joueur1.getEpee().getDommage()<<std::endl;
   joueur1.getEpee().setDommage(50);
   joueur1.getEpee().setPrix(110);
   std::cout<<joueur1.getEpee().getPrix()<<" "<<joueur1.getEpee().getDommage()<<" "<<joueur1.getPointsdevie()<<std::endl;
   Joueur joueur2(300,100,300);
   std::cout<<joueur2.getEpee().getPrix()<<" "<<joueur2.getEpee().getDommage()<<" "<<joueur2.getPointsdevie()<<std::endl;




}
