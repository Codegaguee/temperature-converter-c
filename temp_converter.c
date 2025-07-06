#include <stdio.h>

double ctf(double);
double ftc(double);

double ctk(double);
double ktc(double);

double ftk(double);
double ktf(double);

double ctf(double x) {

    return (x * 9.0/5.0) + 32.0;
}

double ftc(double x) {

    return (x - 32) * 5.0/9.0;
}

double ctk(double x) {

    return x + 273.15;
}

double ktc(double x) {

    return x - 273.15;
}

double ftk(double x) {

    return (((x - 32) * 5.0) / 9.0) + 273.15;
}

double ktf(double x) {

    return (((x - 273.15) * 9.0) / 5.0) + 32;
}

int main() {

    int choice = 0;
    double result, celsius, fahren, kelvin;

    do {

        printf("===== Temperature converter by Abdullah =====\n");
        printf("1. Celsius to Fahrenheit.\n");
        printf("2. Fahrenheit to Celsius.\n");
        printf("3. Celsius to Kelvin.\n");
        printf("4. Kelvin to Celsius.\n");
        printf("5. Fahrenheit to Kelvin.\n");
        printf("6. Kelvin to Fahrenheit.\n");
        printf("7. Exit the programme.\n");

        printf("Choose an option : ");

        if(scanf("%d", &choice) != 1) {

            printf("Invalid Input.\n");
            while(getchar() != '\n');
            continue;

        }

        switch(choice) {

            case 1:

            printf("==== Celsius to Fahrenheit =====\n");
            printf("Enter the temperature (Cel) : ");

            if(scanf("%lf", &celsius) != 1) {

                printf("Invalid Input.\n");
                while(getchar() != '\n');
                continue;

            }

            result = ctf(celsius);

            printf("Cel to far : %.2lf °F\n", result);
            break;

            case 2:

            printf("==== Fahrenheit to Celsius =====\n");
            printf("Enter the temperature (Far) : ");

            if(scanf("%lf", &fahren) != 1) {

                printf("Invalid Input.\n");
                while(getchar() != '\n');
                continue;

            }

            result = ftc(fahren);

            printf("Far to cel : %.2lf °C\n", result);
            break;

            case 3:

            printf("==== Celsius to Kelvin =====\n");
            printf("Enter the temperature (Cel) : ");

            if(scanf("%lf", &celsius) != 1) {

                printf("Invalid Input.\n");
                while(getchar() != '\n');
                continue;

            }

            result = ctk(celsius);

            printf("Cel to kel : %.2lf K\n", result);
            break;

            case 4:

            printf("==== Kelvin to Celsius =====\n");
            printf("Enter the temperature (Kel) : ");

            if(scanf("%lf", &kelvin) != 1) {

                printf("Invalid Input.\n");
                while(getchar() != '\n');
                continue;

            }

            result = ktc(kelvin);

            printf("Kel to cel : %.2lf °C\n", result);
            break;

            case 5:

            printf("==== Fahrenheit to Kelvin ====\n");
            printf("Enter the temperature (Far) : ");

            if(scanf("%lf", &fahren) != 1) {

                printf("Invalid Input.\n");
                while(getchar() != '\n');
                continue;

            }

            result = ftk(fahren);
            printf("Far to kel : %.2lf K\n", result);
            break;

            case 6:

            printf("==== Kelvin to Fahrenheit ====\n");
            printf("Enter the temperature (Kel) : ");

            if(scanf("%lf", &kelvin) != 1) {

                printf("Invalid Input.\n");
                while(getchar() != '\n');
                continue;

            }

            result = ktf(kelvin);
            printf("kel to far : %.2lf °F\n", result);
            break;

            case 7:

            printf("Exiting the programme.\n");
            break;

            default :

            printf("Invalid choice. Try again please.\n");
            break;

        }

    
    } while (choice != 7);
    
    return 0;

}