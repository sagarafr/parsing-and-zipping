#include "string.h"

int main(void)
{
    String s;
    String* p_s=NULL;

    create_string(&s);
    create_p_string(&p_s);

    add_character(&s,'a');
    add_character(&s,'z');
    add_character(&s,'e');
    add_character(&s,'r');
    add_string(&s,"ty");
    add_string(&s,"uiop");

    add_string(p_s,"qsdfg");
    add_character(p_s,'h');
    add_string(p_s,"jklm");

    printf("%p\n",p_s);
    print_string(&s);
    print_string(p_s);
    free_string(&s);
    free_p_string(&p_s);
    printf("%p\n",p_s);
    printf("%p\n",s.string);

    return 0;
}
