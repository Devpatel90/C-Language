#include <stdio.h>
#include <string.h>

#define MAX_MOBILES 100 // Adjust this limit as needed

struct Mobile {
    char companyName[50];
    char model[30];
    char color[20];
    float price;
};

int main() {
    int N;

    printf("Enter the number of mobiles (maximum %d): ", MAX_MOBILES);
    if (scanf("%d", &N) != 1 || N < 1 || N > MAX_MOBILES) {
        fprintf(stderr, "Invalid input: Please enter a number between 1 and %d.\n", MAX_MOBILES);
        return 1;
    }

    struct Mobile mobiles[N];

    for (int i = 0; i < N; i++) {
        printf("\nEnter details for mobile %d:\n", i + 1);

        printf("Company Name: ");
        fgets(mobiles[i].companyName, sizeof(mobiles[i].companyName), stdin);
        mobiles[i].companyName[strcspn(mobiles[i].companyName, "\n")] = '\0'; // Remove trailing newline

        printf("Model: ");
        fgets(mobiles[i].model, sizeof(mobiles[i].model), stdin);
        mobiles[i].model[strcspn(mobiles[i].model, "\n")] = '\0';

        printf("Color: ");
        fgets(mobiles[i].color, sizeof(mobiles[i].color), stdin);
        mobiles[i].color[strcspn(mobiles[i].color, "\n")] = '\0';

        printf("Price: ");
        if (scanf("%f", &mobiles[i].price) != 1) {
            fprintf(stderr, "Invalid input: Please enter a valid floating-point number for price.\n");
            return 1;
        }
        while (getchar() != '\n'); // Clear any remaining characters in the input buffer
    }

    printf("\nMobile Details:\n");
    printf("  %-20s %-20s %-15s %s\n", "Company", "Model", "Color", "Price");
    for (int i = 0; i < N; i++) {
        printf("  %-20s %-20s %-15s %.2f\n", mobiles[i].companyName, mobiles[i].model, mobiles[i].color, mobiles[i].price);
    }

    return 0;
}
