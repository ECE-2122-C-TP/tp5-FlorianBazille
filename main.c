#include <stdio.h>
#include "mesStructures.h"
#include "mesFonctions.h"
#include "mesExercices.h"

int main()
{
    printf("=====\tTP5\t=====\n");
    int choixExercice = 0;
    do
    {
        //On demande son choix à l'utilisateur
        printf("\nQuel exercice voulez-vous lancer ?\n 0. Aucun\n 1. Exercice1\n 2. Exercice2\n 3. Exercice3\n");
        //Pensez à afficher les choix disponibles ici
        scanf("%d", &choixExercice);
        switch (choixExercice)
        {
            case 1 :
                printf("=====\tExercice1\t=====\n");
                Exercice1();
                break;
            case 2 :
                printf("=====\tExercice2\t=====\n");
                Exercice2();
                break;
            case 3 :
                printf("=====\tExercice3\t=====\n");
                Exercice3();
                break;
            case 0 :
                break;
            default : {
                printf("Choix Invalide ! Veuillez selectionner un exercice :\n");

                break;
            }
        }
    }while (choixExercice != 0); //Si choix == 0 on arrête !
    printf("Au revoir !\n");
    return 0;
}
