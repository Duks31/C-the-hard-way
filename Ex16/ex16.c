#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>

// struct Person {
//     char *name;
//     int age;
//     int height;
//     int weight;
// };

// struct Person *Person_create(char *name, int age, int height, int weight)
// {
//     struct Person *who = malloc(sizeof(struct Person));

//     assert(who != NULL);

//     who -> name = strdup(name);
//     who -> age = age;
//     who -> height = height;
//     who -> weight = weight;

//     return who;
// }   

// void Person_destroy(struct Person *who)
// {
//     assert(who != NULL);

//     free(who -> name );
//     free(who);
// }

// void Person_print(struct Person *who)
// {
//     printf("Name: %s\n", who->name);
//     printf("\tAge: %d\n", who->age);
//     printf("\tHeight: %d\n", who->height);
//     printf("\tWeight: %d\n", who->weight);
// }

// int main (int argc, char *argv[])
// {
//     struct Person *joe = Person_create("Joe Alex ", 32, 64, 140);

//     struct Person *frank = Person_create("Frank Blank", 20, 72, 180);

//     // print them out and where they are in memory
//     printf("Joe is at memory location %p:\n", joe);
//     Person_print(joe);

//     printf("---------------------------");

//     printf("Frank is at memory location %p:\n", frank);
//     Person_print(frank);

//     printf("---------------------------");

//     // make everyone age 20 years and print them again
//     joe -> age +=  20;
//     joe -> height -= 2;
//     joe -> weight += 40;
//     Person_print(joe);

//     printf("---------------------------");

//     frank -> age += 20;
//     frank -> weight += 20;
//     Person_print(frank);

//     printf("---------------------------");

//     // destroy them both so we clean up
//     // Person_destroy(joe);
//     // Person_destroy(frank);

//     return 0;
// }

// ---- Extra Credit ----
// Convert the program to not use pointers and malloc

struct Person 
{
    char name[100];
    int age;
    int height;
    int weight;

};

struct Person Person_create(char name[], int age, int height, int weight)
{
    struct Person who;

    strcpy(who.name, name);
    who.age = age;
    who.height = height;
    who.weight = weight;

    return who;
}

void Person_print(struct Person who)
{
    printf("Name: %s\n", who.name);
    printf("\tAge: %d\n", who.age);
    printf("\tHeight: %d\n", who.height);
    printf("\tWeight: %d\n", who.weight);
}

int main(int argc, char *argv[])
{
    struct Person Joe  = Person_create("John Doe", 32, 63, 140);
    struct Person frank = Person_create("Frank Blank", 20, 72, 180);

    printf("Joe is at memory location %p: \n", &Joe);
    Person_print(Joe);

    printf("---------------------------");

    printf("Frank is at memory location %p: \n", &frank);
    Person_print(frank);

    printf("---------------------------");

    Joe.age += 20;
    Joe.height -= 2;
    Joe.weight += 40;
    Person_print(Joe);

    printf("---------------------------");

    frank.age += 20;
    frank.weight += 20;
    Person_print(frank);

    return 0;


}