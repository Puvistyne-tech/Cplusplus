Question 1:
#language compilé
   1.(-) il faut re-compiler dans chaque plateforme
   2.(-) il faut re-compiler si les dépendances changent
   3.(+) plus efficace ( traduit en langauge machine)
   4.(+/-) si un machine ne contient pas une librarie, la compilation ne marchera pas
      portabilité - c'est un avantage et un non avantage.
   5. (+/-) gestion de memoire 
 *java - un language de programmation semi-compilé 

Question 2:
   Erreur de compilation est une erreur qui se produit tant la compilation d'un program,
   ex: assert(False) - erreur d'exécution
       static_asser(False) - erreur de compilation
   erreur de compilation : erreur de syntaxe , compilateur raté
   erreur d'exécution : le porgram comporte mal, assert raté, c'est très difficile à débeuger

Question 3 : Undefined Behaviour
   le standard définit par exemple int x{0};
   --> x == 0
   unsigned short x=0x100000;
   --> x == 0 <==> c'est un UB


int x[3]={1,2,3}
si j'essaie d'accéder x[5], il y a plusierus possibilié
   1. ça aussi dépend du mémoire où la variable eset stocker
   2. et la taille de mémoire allocated pour ce programm, si ça dépasse ca produirera SED_FAULT

