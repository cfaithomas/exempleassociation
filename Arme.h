//
// Created by eric on 27/08/2020.
//

#ifndef EXEMPLEASSOCIATION_ARME_H
#define EXEMPLEASSOCIATION_ARME_H


class Arme {
    int dommage;
    int prix;
public:

    Arme(int dommage, int prix);

    int getDommage() const;

    int getPrix() const;

    void setDommage(int dommage);

    void setPrix(int prix);

};


#endif //EXEMPLEASSOCIATION_ARME_H
