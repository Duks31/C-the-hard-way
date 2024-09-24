#include <stdio.h>

int main(int argc, char* argv[]) 
{
    int distance = 100;
    float power = 2.345f;
    double super_power = 4134132.1232;
    char initial = 'E';
    char first_name[] = "chidubem";
    char last_name[] = "ndukwe";

    printf("You are %d miles away. \n", distance);
    printf("You have %f levels of power. \n", power);
    printf("You have %f awesome super powers. \n", super_power);
    printf("I have an initial %c. \n", initial);
    printf("I have a first name %s. \n", first_name);
    printf("I have a last name %s. \n", last_name);
    printf("My whole name is %s %c. %s. \n", first_name, initial, last_name);


    int bugs = 100;
    double bug_rate = 1.2;

    printf("You have %d bugs at the imaginary rate of %f. \n", bugs, bug_rate);

    unsigned long universe_of_defects = 1L * 1024L * 1024L * 1024L* 1024L;
    printf("The entire universe has %ld bugs. \n", universe_of_defects);

    double expected_bugs = bugs * bug_rate;
    printf("You are expected to have %f bugs. \n", expected_bugs);

    double part_of_universe = expected_bugs / universe_of_defects;
    printf("That is only a %e portion of the universe. \n", part_of_universe);

    // this makes no sense, just a demo of somthing wierd

    char nul_byte = '\0';
    int care_percentage = bugs * nul_byte; 

    printf("Which means should you care %d%%. \n", care_percentage);

    printf("Let's print a nul byte %d. \n", nul_byte);

    return 0;

}   

/*
Note:
- A char can multiply a number, because it will be converted to an integer.
- A char can be used in a printf format string, because it will be converted to an integer.
- When the long gets long its output is in scientific notation. 
*/