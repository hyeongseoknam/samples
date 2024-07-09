#include <stdio.h>
#include <ctype.h>
#include <string.h>

// Function to convert a string to uppercase
void to_uppercase(char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = toupper((unsigned char)str[i]);
    }
}

int main(int argc, char *argv[]) {
    // Check if there are enough arguments
    if (argc < 2) {
        printf("Usage: %s <string>\n", argv[0]);
        return 1;
    }

    // Print the original argument
    printf("Original argument: %s\n", argv[1]);

    // Change the argument at runtime
    to_uppercase(argv[1]);

    // Print the modified argument
    printf("Modified argument: %s\n", argv[1]);

    return 0;
}