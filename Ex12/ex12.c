#include <stdio.h>

int main(int argc, char* argv[])
{
    char full_name[] = {
        'Z', 'e', 'd' , ' ', 'A', '.', ' ','S', 'h', 'a', 'w',  
    };
    int areas[] = {10, 12, 13, 14, 20 };
    char name[] = "Zed";
    
    printf("The size of an int: %lld\n", sizeof(int));
    printf("The size of areas (int[]): %lld\n", sizeof(areas));
    printf("The number of int in areas %lld\n", sizeof(areas)/sizeof(int));
    printf("The first area is %d, the 2nd %d. \n", areas[0], areas[1]);
    printf("The size of a char: %lld\n", sizeof(char));
    printf("The size of the name (char[]): %lld\n", sizeof(name));
    printf("The number of chars: %lld\n", sizeof(name) / sizeof(char));
    printf("The size of full_name (char[]): %lld\n", sizeof(full_name));
    printf("The number of chars: %lld\n", sizeof(full_name) / sizeof(char));
    printf("name = \"%s\" and full_name=\"%s\"\n", name, full_name);

    return 0;
}