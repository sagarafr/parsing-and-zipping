#include <stdio.h>
#include "string.h"

#define TRUE 1
#define FALSE 0

/*
** Structure contenant le pointeur d'ouverture du fichier ainsi qu'un ou
** plusieurs mots contenu dans ce fichier.
*/
struct read_file
{
    FILE* p_file;
    String* word;
};

/*
** Alias struct read_file en Read_File
*/
typedef struct read_file Read_File;

/*
** Doit initialiser les champs de la strcuture de donnees Read_File
** p_file doit etre initialiser avec le poiteur du fichier
** word doit etre a NULL
*/
void create_read_file(Read_File* r,const char* file_name);

/*
** Ici on lit un charactere et on le renvoie
*/
char read_a_caractere(Read_File* r);

/*
** Revoie VRAI si on est a la fin du fichier sinon FAUX
** La fin d'un fichier est detecte par le caractere EOF
*/
int is_end_of_file(const char c);

/*
** Lit lensemble du fichier et stocke son contenu dans
** word
*/
void read_all_file(Read_File* r);

/*
** Affiche la structure de donnee word
*/
void print_word(const Read_File const* r);

/*
** Libere la memoire prise par p_file et word et les initaliser a NULL
*/
void free_read_file(Read_File* r);

/*
** On doit initialiser la structure Read_File ainsi que ses differents champs
*/
void create_p_read_file(Read_File** r,const char* file_name);

/*
** On doit liberer la structure Read_File et initialiser tous ses champs ainsi
** que sa structure a NULL
*/
void free_p_read_file(Read_File** r);
