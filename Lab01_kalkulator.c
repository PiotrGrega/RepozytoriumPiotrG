#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "Polish");
        char operator;
        double liczba1, liczba2, wynik;

        printf("Wybierz operator +, -, *, /: ");
        scanf(" %c", &operator);

        printf_s("Podaj dwie liczby: \n");
        scanf("%lf %lf", &liczba1, &liczba2);

        if (operator == '+') {
            wynik = liczba1 + liczba2;
        }
        else if (operator == '-') {
            wynik = liczba1 - liczba2;
        }
        else if (operator == '*') {
            wynik = liczba1 * liczba2;
        }
        else if (operator == '/') {
            if (liczba2 != 0) {
                wynik = liczba1 / liczba2;
            }
            else {
                printf("Nie mo¿na podzieliæ przez zero.\n");
                return 1;
            }
        }
        else {
            printf("B³¹d przy wyborze operatora\n");
            return 1;
        }

        printf("Wynik: %lf\n", wynik);

        return 0;
    }