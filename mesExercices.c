//
// Created by Florian on 06/10/2021.
//

#include <stdio.h>
#include "mesStructures.h"
#include "mesFonctions.h"
#include "mesExercices.h"

void Exercice2()
{
#define TOTAL_ENTIER 100 // on définit la taille du tableau comme une macro
    int tailleLogique = 0, i = 0; // initialisation des valeurs
    int tableauValeursEntiers[TOTAL_ENTIER] = {0}; // initialisation du tableau
    printf("Declarer le nombre d'entier a saisir :\n");
    scanf("%i", &tailleLogique); // on inscrit combien de cases seront effectivement utilisées
    for ( i = 0; i < tailleLogique; i++) // pour i allant de 0 à taille logique-1, avec un pas de 1
    {
        printf("Saisir l'entier a inscrire :\n");
        scanf("%d", &tableauValeursEntiers[i]); // on renseigne chaque entier du tableau
    }
    printf("Le plus grand entier du tableau est %i", plusGrandEntierDuTableau(tailleLogique, tableauValeursEntiers)); // appel de la fonction permettant de trouver l'entier le plus grand du tableau
}

int Exercice3()
{
#define NOMBRE_LIGNES 3
#define NOMBRE_COLONNES 4
#define TOTAL_ENTIER 12
    int tableaux2D[NOMBRE_LIGNES][NOMBRE_COLONNES] = {0}; // initialisation du tableau à deux dimensions
    int tableaux1D[TOTAL_ENTIER] = {0}; // initialisation du tableau à une dimension
    int i = 0, j = 0, k = 0;
    for ( i = 0; i < NOMBRE_LIGNES; i++) // pour i allant de 0 à NOMBRE_LIGNES-1, avec un pas de 1. On parcourt le tableau par ligne
    {
        for ( j = 0; j < NOMBRE_COLONNES; j++) // pour j allant de 0 à NOMBRE_COLONNES-1, avec un pas de 1. On parcourt le tableau par colonne
        {
            printf("Saisir l'entier a inscrire :\n");
            scanf("%d", &tableaux2D[i][j]); // on renseigne chaque entier du tableau
        }
    }
    for ( i = 0; i < NOMBRE_LIGNES; i++) // pour i allant de 0 à NOMBRE_LIGNES-1, avec un pas de 1. On parcourt le tableau par ligne
    {
        for ( j = 0; j < NOMBRE_COLONNES; j++) // pour j allant de 0 à NOMBRE_COLONNES-1, avec un pas de 1. On parcourt le tableau par colonne
        {
            tableaux1D[k] = tableaux2D[i][j];
            k = k +1;
        }
    }
    for ( i = 0 ; i < TOTAL_ENTIER ; i = i + 1 )
    {
        printf("%d \t", tableaux1D[i]);
    }
    return tableaux1D;
}