#include <stdio.h>
#include <stdlib.h>

// 3D
int main(int argc, char *argv[])
{
    int dimX = 3, dimY = 3, dimZ = 3;
    int i=0, j=0, k=0;
    int m = 0;
    int*** ptrTab = NULL; // Ce pointeur va servir de tableau après l'appel du malloc

    // Allocation memoire 1ere dimension du tableau
    ptrTab = malloc(dimX * sizeof(int**));

    if (ptrTab == NULL)
        exit(0);

    // Allocation memoire 2eme dimension du tableau
    for (i = 0 ; i < dimX ; i++)
    {
        ptrTab[i] = malloc (dimY * sizeof(int*));

        if (ptrTab[i] == NULL)
                exit(0);
        else
        { // Allocation memoire 3eme dimension du tableau
            for (j = 0 ; j < dimY ; j++)
            ptrTab[i][j] = malloc (dimZ * sizeof(int));
        }
    }


    // On affiche les âges stockés un à un
    printf("\n\nValeurs :\n");
    for (i = 0 ; i < dimX ; i++)
        for (j = 0 ; j < dimY ; j++)
        {
            ptrTab[i][j][k] = m;
            m++;
            printf("%d\n", ptrTab[i][j][k]);
        }

    // On libère la mémoire allouée avec malloc, on n'en a plus besoin
    free(ptrTab);


    return 0;
}

// 2D
/*int main(int argc, char *argv[])
{
    int dimX = 3, dimY = 3;
    int i=0, j=0;
    int m = 0;
    int** ptrTab = NULL; // Ce pointeur va servir de tableau après l'appel du malloc


    ptrTab = malloc(dimX * sizeof(int*)); // On alloue de la mémoire pour le tableau

    if (ptrTab == NULL)
        exit(0);

    for (i = 0 ; i < dimX ; i++)
        ptrTab[i] = malloc (dimY * sizeof(int));

    // On affiche les âges stockés un à un
    printf("\n\nValeurs :\n");
    for (i = 0 ; i < dimX ; i++)
        for (j = 0 ; j < dimY ; j++)
        {
            ptrTab[i][j] = m;
            m++;
            printf("%d\n", ptrTab[i][j]);
        }

    // On libère la mémoire allouée avec malloc, on n'en a plus besoin
    free(ptrTab);


    return 0;
}*/

// 1D
/*
int main(int argc, char *argv[])
{
    int dimX = 3, i = 0;
    int m = 0;
    int* ptrTab = NULL; // Ce pointeur va servir de tableau après l'appel du malloc


    ptrTab = malloc(dimX * sizeof(int)); // On alloue de la mémoire pour le tableau

    if (ptrTab == NULL)
        exit(0);

    // On affiche les âges stockés un à un
    printf("\n\nValeurs :\n");
    for (i = 0 ; i < dimX ; i++)
    {
        ptrTab[i] = m;
        m++;
        printf("%d\n", ptrTab[i]);
    }

    // On libère la mémoire allouée avec malloc, on n'en a plus besoin
    free(ptrTab);


    return 0;
}
*/
