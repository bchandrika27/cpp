#include <stdio.h>
#include <ctype.h>

int main() {
    char str[1000];
    int choice;
    // Input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
int i;
    // Remove newline character if present
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }
    }
    do {
        // Menu display
        printf("\nChoose an operation:\n");
        printf("1. Convert to Uppercase\n");
        printf("2. Convert to Lowercase\n");
        printf("3. Toggle Case\n");
        printf("4. Convert to Sentential Case\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // Consume newline character left in input buffer

        // Process based on choice
        if (choice == 5) {
            printf("Exiting the program.\n");
            break;
        }

        int capitalize = 1; // Used for sentential case
        for (i = 0; str[i] != '\0'; i++) {
            char ch = str[i];
            if (choice == 1) { // Convert to Uppercase
                str[i] = toupper(ch);
            } else if (choice == 2) { // Convert to Lowercase
                str[i] = tolower(ch);
            } else if (choice == 3) { // Toggle Case
                if (islower(ch))
                    str[i] = toupper(ch);
                else if (isupper(ch))
                    str[i] = tolower(ch);
            } else if (choice == 4) { // Sentential Case
                if (capitalize && isalpha(ch)) {
                    str[i] = toupper(ch);
                    capitalize = 0;
                } else {
                    str[i] = tolower(ch);
                }
                if (ch == '.' || ch == '!' || ch == '?') {
                    capitalize = 1; // Reset capitalization after sentence end
                }
            }
        }
        // Print modified string
        printf("Result: %s\n", str);
    } while (choice != 5);
    return 0;
}

