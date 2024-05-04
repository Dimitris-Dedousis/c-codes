#include <stdio.h>

int main() {
    int numbers[5] = {1, 2, 3, 4, 5}; // Δημιουργία πίνακα numbers με 5 στοιχεία

    printf("Ο αρχικός πίνακας numbers: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", numbers[i]); // Εκτύπωση του αρχικού πίνακα
    }
    printf("\n");

    // Τροποποίηση του πίνακα
    numbers[2] = 10; // Τροποποίηση του 3ου στοιχείου (θέση 2) σε 10
    numbers[4] = 20; // Τροποποίηση του 5ου στοιχείου (θέση 4) σε 20

    printf("Ο τροποποιημένος πίνακας numbers: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", numbers[i]); // Εκτύπωση του τροποποιημένου πίνακα
    }

    return 0;
}
