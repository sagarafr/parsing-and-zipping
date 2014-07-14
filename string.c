#include "string.h"

/*
** CODING TIME ^O^
*/

/*
** Doit initialiser les champs de la structure de données
** string doit être a NULL
** length doit être a 0
*/
void create_string(String* s){
  (s->string)=null;
  s->length=0;
}
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
void add_character(String* s,const char c){
  if(s->length == 0){
    s-> string = malloc(sizeof(char *));
    s->string[0]=c;
    s->string[1]='\0';
    s->length++;
  }
  //sinon remalloc
}
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
void add_string(String* s,const char* c){
}
/*
** Liberer la memoire prise par string de la structure s si besoin et
** linitialiser avec les valeurs par defauts
*/
void free_string(String* s){
  int i, taille=s->length;
  for(i=0; i<taille; ++i){
    free(s);
  }
}

/*
** Alloue de la memoire pour un pointeur pour la structure de type String
** et initialiser les valeurs comme pour create_string
*/
void create_p_string(String** s){
}
/*
** Libere la memoire pour un pointeur sur la structure de type String si besoin
** est et initialiser les valeurs comme pour create_string et le pointeur doit
** etre a NULL
*/
void free_p_string(String** s){
  int i, taille=&(s->length);
  for(i=0; i<taille; ++i){
    free(*s);
  }

}

/*
** Affiche la chaine de caractere correctement grace a printf
*/
void print_string(const String* const s){
  int i; 
  for(i=0;i<s.length; ++i{
      printf("%c", s->string[i]);
    }
}
