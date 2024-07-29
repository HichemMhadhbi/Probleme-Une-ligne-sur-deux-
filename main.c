#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, nbL;

    printf("Veuillez saisir la nombre de lignes : ");
    scanf("%d", &nbL);

    // Consommer le caract�re de nouvelle ligne apr�s le nombre de lignes
    getchar();

    // D�clarer un tableau � deux dimensions pour stocker les lignes de texte
    char T[nbL][101];

    printf("Veuillez saisir les lignes de texte : \n");
    for (i = 0; i < nbL; i++) {
        // Lire chaque ligne de texte et la stocker dans le tableau
        fgets(T[i], sizeof(T[i]), stdin);

        // Enlever le caract�re de nouvelle ligne si pr�sent
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
En parcourant de vieux livres, vous tombez sur un certain nombre de textes, anodins au premier regard. � y regarder de plus pr�s, ils prennent un tout autre sens, une fois qu�on ne lit qu�une ligne sur deux (la premi�re, la troisi�me, la cinqui�me....).

Vous d�cidez d��crire un programme permettant d�extraire uniquement les lignes impaires d�un texte donn�.

CONSTRAINTS
Chaque ligne de texte contient au plus 100 caract�res.

INPUT
Sur la premi�re ligne un entier, nbLignes : le nombre total de lignes du texte.

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
