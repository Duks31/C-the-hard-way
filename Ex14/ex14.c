#include <stdio.h>
#include <ctype.h>

int can_print_it(char ch);
void print_letters(char arg[]);

int main(int argc, char* argv[])
{
    for (int i = 0; i < argc; i++)
    {
        for (int j = 0; argv[i][j]; j++)
        {
            char ch = argv[i][j];

            if (isalpha(ch) || isblank(ch))
            {
                printf("'%c' == %d, ", ch, ch);
            }
        }

        printf("\n");
    }

    return 0;
}