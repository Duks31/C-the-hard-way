#include <stdio.h>

// int main(int argc, char* argv[])
// {
//     int i = 0;

//     for (i = 1; i < argc; i++) {
//         printf("arg %d: %s\n", i, argv[i]);
//     }

//     char *states[] = {
//         "California", "Oregon",
//         "Washington", " Texas"
//     };

//     int num_states = 4;

//     for (i = 0; i < num_states; i++) {
//         printf("state %d: %s\n", i, states[i]);
//     }

//     return 0;
// }

int main(int argc, char* argv[]) 
{
    int var = 1;

    switch (var )
    {
    case 1:
        printf("Case 1 Matched");x

    case 2:
        printf("Case 2 Matched");
    
    default:
        printf("I guess i would have to go here, Nothing Matched!!!");
        break;
    }
}
