//
// Created by Florian on 06/10/2021.
//

#include <stdio.h>
#include "mesStructures.h"
#include "mesFonctions.h"

/* Fonction qui demande à l'utilisateur de saisir un nombre rationnel.
 * Paramètres :
 * - INOUT : aucune
 * - IN : aucune
 * - OUT : NR nbrRationnel : le nombre rationnel saisi par l'utilisateur
 */

NR nombreRationnel()
{
    // Déclaration d'un nouveau nombre rationnel de type struct NombreRationnel :
    NR nbrRationnel;
    printf("Saisir le numerateur, puis le denominateur : \n");
    scanf("%i %i", &nbrRationnel.numerateur, &nbrRationnel.denominateur);
    return nbrRationnel;
}

/* Fonction qui affiche un nombre rationnel.
 * Paramètres :
 * - INOUT : aucune
 * - IN : NT nbr, le nombre rationnel a afficher
 * - OUT : aucune
 */

void afficherNombreRationnel(NR nbr)
{
    printf("Le nombre rationnel issu des differentes operations est:\n %d / %d\n", nbr.numerateur, nbr.denominateur );
}

/* Fonction qui additionne deux nombres rationnels.
 * Paramètres :
 * - INOUT : aucune
 * - IN : NT nbr1 : le premier nombre a additionner
 * - IN : NT nbr2 : le deuxieme nombre a additionner
 * - OUT : NT nbr : le resultat
 */

NR additionner(NR nbr1, NR nbr2)
{
    NR nbr;
    nbr.numerateur = nbr1.numerateur * nbr2.denominateur + nbr1.denominateur * nbr2.numerateur;
    nbr.denominateur = nbr1.denominateur * nbr2.denominateur;
    return nbr;
}

/* Fonction qui multiplie deux nombres rationnels.
 * Paramètres :
 * - INOUT : aucune
 * - IN : NT nbr1 : le premier nombre a multiplier
 * - IN : NT nbr2 : le deuxieme nombre a multiplier
 * - OUT : NT nbr : le resultat
 */

NR multiplier(NR nbr1, NR nbr2)
{
    NR nbr;
    nbr.numerateur = nbr1.numerateur * nbr2.numerateur;
    nbr.denominateur = nbr1.denominateur * nbr2.denominateur;
    return nbr;
}

/* Fonction qui cherche le PGCD de deux entiers.
 * Paramètres :
 * - INOUT : aucune
 * - IN : NT nbr1 : le nombre rationnel contenant les deux entiers à étudier
 * - OUT : int reste : le PGCD entre le dénominateur et numérateur
 */

int plusGrandCommunDiviseur(NR nbr1)
{
    int reste = 1;
    if ( nbr1.numerateur > nbr1.denominateur )
    {
        while ( reste != 0)
        {
            reste = nbr1.numerateur%nbr1.denominateur;
            nbr1.numerateur = nbr1.denominateur;
            nbr1.denominateur = reste;
        }
        reste = nbr1.numerateur;
    }
    else
    {
        while ( reste != 0)
        {
            reste = nbr1.denominateur%nbr1.numerateur;
            nbr1.denominateur = nbr1.numerateur;
            nbr1.numerateur = reste;
        }
        reste = nbr1.denominateur;
    }
    return reste;
}

/* Fonction qui simplifie un nombre rationnel.
 * Paramètres :
 * - INOUT : aucune
 * - IN : NT nbr1 : le nombre rationnel à simplifier
 * - OUT : NT nbr : le nombre rationnel simplifié
 */
NR simplification(NR nbr1)
{
    int pGCD = plusGrandCommunDiviseur(nbr1);
    if ( pGCD != 0 )
    {
        nbr1.numerateur = nbr1.numerateur/pGCD;
        nbr1.denominateur = nbr1.denominateur/pGCD;
        printf("le PGCD est : %d\n", pGCD);
    }
    return nbr1;
}

/* Fonction qui retourne l'entier le plus grand parmi un tableau unidimensionnel
 * Paramètres :
 * - INOUT : aucune
 * - IN : int tailleLogique : taille logique du tableau selectionne.
 * - IN : int tableaux[] : le tableau d'entiers selectionne.
 * - OUT : int plusGrandEntier : plus grand entier du tableau.
 */

int plusGrandEntierDuTableau(int tailleLogique, int tableaux[])
{
    int plusGrandEntier = tableaux[0], i = 0; // par défaut le plus grand entier est le premier du tableau
    for (i = 1; i < tailleLogique; i++) // pour i allant de 1 ( on a déjà la première valeur du taleau dans la variable " plusGrandEntier " à taille logique-1, avec un pas de 1
    {
        if (plusGrandEntier < tableaux[i]) // si l'entier dans la case i du tableau est supérieur au plus grand entier, le plus grand entier prendra cette valeur
        {
            plusGrandEntier = tableaux[i];
        }
    }
    return plusGrandEntier;
}