#ifndef _STRING
#define _STRING

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
** Structure cachant les chaines de caracteres en C
** length est la longueur de la chaine de caracteres sans le \0 situer a la fin
** du mot
** string est le tableau de caracteres. A la fin de la chaine de caractere on
** doit trouver le mot \0 qui symbolise la fin du mot 
*/
struct string
{
    unsigned int length;
    char* string;
};

/*
** Alias struct string en String
*/
typedef struct string String;

/*
** Doit initialiser les champs de la structure de données
** string doit être a NULL
** length doit être a 0
*/
void create_string(String* s);
/*
** Ajout le caractère c a la fin de la chaine de caractere string de la
** structure s
** Ici, il y a 2 cas a traiter le cas ou la string de s est a NULL et lautre
** ou la string de s ne lest pas
** On doit utiliser malloc pour allouer de la memoire et realloc pour
** la reallouer ( Pour plus dinformation aller voir le manuel )
** Il ne faut pas oublier de mettre a jour la valeur de length
** Attention le mot doit terminer par \0 pour quil soit correct
*/
void add_character(String* s,const char c);
/*
** Ajout de la chaine de caractere c a la fin de la chaine de caractere strign
** de la structure s
** Ici, il y a 2 cas a traiter le cas ou la string de s est a NULL et lautre
** ou la string de s ne lest pas
** On doit utiliser malloc, realloc pour la memoire, strcpy pour la copie
** de chaine de caractere et strlen pour la longueur de la chaine
** ( Voir le manuel pour plus dinformation )
** Il ne faut pas oublier de mettre a jour la valeur de length
*/
void add_string(String* s,const char* c);
/*
** Liberer la memoire prise par string de la structure s si besoin et
** linitialiser avec les valeurs par defauts
*/
void free_string(String* s);

/*
** Alloue de la memoire pour un pointeur pour la structure de type String
** et initialiser les valeurs comme pour create_string
*/
void create_p_string(String** s);
/*
** Libere la memoire pour un pointeur sur la structure de type String si besoin
** est et initialiser les valeurs comme pour create_string et le pointeur doit
** etre a NULL
*/
void free_p_string(String** s);

/*
** Affiche la chaine de caractere correctement grace a printf
*/
void print_string(const String* const s);

#endif
