//
// Created by Florian on 06/10/2021.
//

#ifndef TP5_2_MESFONCTIONS_H
#define TP5_2_MESFONCTIONS_H
#include "mesStructures.h"

NR nombreRationnel(void);
void afficherNombreRationnel(NR nbr);
NR additionner(NR nbr1, NR nbr2);
NR multiplier(NR nbr1, NR nbr2);
int plusGrandCommunDiviseur(NR nbr1);
NR simplification(NR nbr1);
int plusGrandEntierDuTableau(int tailleLogique, int tableaux[]);

#endif //TP5_2_MESFONCTIONS_H
