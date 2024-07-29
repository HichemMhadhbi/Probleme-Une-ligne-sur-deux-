# Une ligne sur deux
En parcourant de vieux livres, vous tombez sur un certain nombre de textes, anodins au premier regard. À y regarder de plus près, ils prennent un tout autre sens, une fois qu’on ne lit qu’une ligne sur deux (la première, la troisième, la cinquième....).

Vous décidez d’écrire un programme permettant d’extraire uniquement les lignes impaires d’un texte donné.

### CONSTRAINTS
Chaque ligne de texte contient au plus 100 caractères.

### INPUT
Sur la première ligne un entier, nbLignes : le nombre total de lignes du texte.
Les nbLignes lignes suivantes contiennent alors le texte.

### OUTPUT
Vous devez afficher uniquement les lignes impaires.

### EXAMPLE

#### input:
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

#### output:
Mon assistant programmeur est toujours en train de
perdre son temps en jasant avec ses collegues. Jamais il ne
termine ses projets a temps. Tres souvent, il rallonge ses
pauses cafe. Il est une personne qui n'a absolument aucune
competence en informatique. C'est le genre d'employe de qui on
peut se passer. Je crois fermement qu'il est pret pour la
porte. L'entreprise en sortira grande gagnante.

## Explication Détailée des Méthodes et de chaque Partie du Code
* Lecture du nombre de lignes :
* Déclaration d'un tableau à deux dimensions 
* Lecture des lignes de texte :

for (i = 0; i < nbL; i++) {
    fgets(T[i], sizeof(T[i]), stdin);
    T[i][strcspn(T[i], "\n")] = '\0';
}
for : Une boucle qui s'exécute nbL fois pour lire chaque ligne de texte.
fgets : Lit une ligne de texte depuis l'entrée standard (clavier) et la stocke dans T[i].
strcspn(T[i], "\n") : Retourne l'index du premier caractère de nouvelle ligne \n dans T[i].
T[i][strcspn(T[i], "\n")] = '\0' : Remplace le caractère de nouvelle ligne par le caractère nul \0 pour terminer proprement la chaîne de caractères.
* Affichage des lignes impaires :

for : Une boucle qui s'exécute nbL fois pour vérifier chaque ligne.
if (i % 2 == 0) : Condition pour vérifier si l'index i est pair. En termes de position, les index pairs (0, 2, 4, etc.) correspondent aux lignes impaires (1, 3, 5, etc.) car l'indexation commence à 0.
printf("%s\n", T[i]) : Affiche la ligne T[i].