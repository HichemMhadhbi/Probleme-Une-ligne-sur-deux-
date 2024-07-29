#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, nbL;

    printf("Veuillez saisir la nombre de lignes : ");
    scanf("%d", &nbL);

    // Consommer le caractère de nouvelle ligne après le nombre de lignes
    getchar();

    // Déclarer un tableau à deux dimensions pour stocker les lignes de texte
    char T[nbL][101];

    printf("Veuillez saisir les lignes de texte : \n");
    for (i = 0; i < nbL; i++) {
        // Lire chaque ligne de texte et la stocker dans le tableau
        fgets(T[i], sizeof(T[i]), stdin);

        // Enlever le caractère de nouvelle ligne si présent
        T[i][strcspn(T[i], "\n")] = '\0';

    }

    printf("La resultat des lignes sont : \n");
    for (i = 0; i < nbL; i++) {
        // Afficher les lignes impaires (indices pairs en termes de programmation)
        if (i % 2 == 0) {
            printf("%s\n", T[i]);
        }
    }

    return 0;
}


/*
En parcourant de vieux livres, vous tombez sur un certain nombre de textes, anodins au premier regard. À y regarder de plus près, ils prennent un tout autre sens, une fois qu’on ne lit qu’une ligne sur deux (la première, la troisième, la cinquième....).

Vous décidez d’écrire un programme permettant d’extraire uniquement les lignes impaires d’un texte donné.

CONSTRAINTS
Chaque ligne de texte contient au plus 100 caractères.

INPUT
Sur la première ligne un entier, nbLignes : le nombre total de lignes du texte.

Les nbLignes lignes suivantes contiennent alors le texte.

OUTPUT
Vous devez afficher uniquement les lignes impaires.

EXAMPLE
input:

13
Mon assistant programmeur est toujours en train de
travailler a son bureau avec assiduite et diligence, sans jamais
perdre son temps en jasant avec ses collegues. Jamais il ne
refuse de passer du temps pour aider les autres et malgre cela, il
termine ses projets a temps. Tres souvent, il rallonge ses
heures pour terminer son travail, parfois meme en sautant les
pauses cafe. Il est une personne qui n'a absolument aucune
vanite en depit de ses accomplissements remarquables et de sa grande
competence en informatique. C'est le genre d'employe de qui on
parle avec grande estime et respect, le genre de personne dont on ne
peut se passer. Je crois fermement qu'il est pret pour la
promotion qu'il demande, considerant tout ce qu'il nous ap-
porte. L'entreprise en sortira grande gagnante.
output:

Mon assistant programmeur est toujours en train de
perdre son temps en jasant avec ses collegues. Jamais il ne
termine ses projets a temps. Tres souvent, il rallonge ses
pauses cafe. Il est une personne qui n'a absolument aucune
competence en informatique. C'est le genre d'employe de qui on
peut se passer. Je crois fermement qu'il est pret pour la
porte. L'entreprise en sortira grande gagnante.
*/
