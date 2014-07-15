#include "string.h"

void create_string(String* s)
{
    s->string=NULL;
    s->length=0;
}

void free_string(String* s)
{
    if(s->string != NULL)
    {
        free(s->string);
        s->string=NULL;
    }

    s->length=0;
}

void add_character(String* s,const char c)
{
    if(s != NULL)
    {
    if(s->string == NULL)
    {
        s->string=(char*)malloc(sizeof(char)*2);
        s->string[s->length++]=c;
        s->string[s->length]='\0';
    }
    else
    {
        s->string=(char*)realloc(s->string,sizeof(char)*(s->length+2));
        s->string[s->length++]=c;
        s->string[s->length]='\0';
    }
}
}

void add_string(String* s,const char* c)
{
if(s != NULL)
{
    if(s->string == NULL)
    {
        s->length=strlen(c);
        s->string=(char*)malloc((s->length+1)*sizeof(char));
        strcpy(s->string,c);
    }
    else
    {
        s->string=(char*)realloc(s->string,(s->length+strlen(c)+1)*sizeof(char));
        strcpy(&(s->string[s->length]),c);
        s->length+=strlen(c);
    }
}
}

void create_p_string(String** s)
{
    String* tmp=*s;
    tmp=(String*)malloc(sizeof(String));
    create_string(tmp);
    *s=tmp;
}

void free_p_string(String** s)
{
    String* tmp=*s;
    if(tmp != NULL)
    {
        free_string(tmp);
        free(tmp);
        *s=NULL;
    }
}

void print_string(const String* const s)
{
    printf("%s\n",s->string);
}
