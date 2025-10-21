#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

// This is an in-line comment.
/*
    This is a comment block.
*/

temp_with_integers()
{
    int fahr, celsius;
    int lower=0, upper=300, step=20;

    printf("Fahrenheit\tCelsius\n");

    fahr = lower;
    while(fahr <= upper){
        celsius = 5 * (fahr-32) / 9;
        printf("%d\t\t%d\n", fahr, celsius);
        fahr += step;
    }
}

temp_with_floats()
{
    float fahr, celsius;
    int lower=0, upper=300, step=20;

    printf("Fahrenheit\tCelsius\n");

    fahr = lower;
    while(fahr <= upper){
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%f\t%f\n", fahr, celsius);
        fahr += step;
    }
}

temp_with_for_loop()
{
    int fahr;

    printf("Fahrenheit\tCelsius\n");

    for(fahr=0;fahr<=300;fahr=fahr+20)
    {
        printf("%3d\t\t%6.1f\n", fahr, (5.0/9.0)*(fahr-32));
    }
}

main()
{
    temp_with_integers();
    printf("\n");
    temp_with_floats();
    printf("\n");
    temp_with_for_loop();
}