# Morpion 10 par 10

Faire un jeu en C. L'objectif est de faire une grille de 10 cases par 10 cases. pour la victoire les joueurs O et
X devront aligner 5 jetons en diagonale, vertical, horizontal.

-Étape 1 :
Mise en place de la grille à l'aide d'un tableau 2D, avec une fonction tableau.
Remplir la grille de point qu'on comptera comme étant un espace vide

-Etape 2:
Les joueurs devront jouer l'un après l'autre et le joueur qui commence est donné aléatoirement par la
machine.
Faire une fonction -Start qui donne aléatoirement le 1er à jouer entre O et X. (Les joueurs auront choisi quel
symbole ils jouent avant ça, mettre un message les prévenant au préalable).
Créer une fonction -Tour qui affiche un message qui désigne qui doit jouer
Afficher la grille à chaque tour, afin que les joueurs puissent voir l'état actuel du jeu

-Etape 3:
Faire une fonction qui vérifie si le tableau est rempli de de symbole ou non, si il reste des points, on continue
le jeu, sinon on arrete le programme et on affiche une égalité.
Crée une fonction -jouer qui permet aux joueurs d'entrer les coordonnées du jeton à jouer aux coordonnées x
et y. Et écrire un message d'erreur si un jeton se trouve déjà sur la case et redemande de placé un jeton.

-Etape 4:
Les joueurs peuvent placer leurs jetons dans la grille, tant qu'aucun des deux joueurs n'ont pas alignés 5
jetons en diagonale, vertical ou horizontal.
Si un des joueurs réussit afficher le message victoire avec la fonction -victory.
Si la grille est remplie sans qu'aucun joueur ne gagne, afficher un message de match nul

