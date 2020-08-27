#include <iostream>
#include "Arme.h"
#include "Joueur.h"

int main() {
   Joueur joueur1(40,100);
   std::cout<<joueur1.getEpee().getPrix()<<" "<<joueur1.getEpee().getDommage();


}
