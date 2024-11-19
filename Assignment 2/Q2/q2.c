#include <stdio.h>
#include <string.h>

void count_char_frequency(char* slogan) {
    int freq[128] = {0};  // Array to store frequencies of ASCII characters (only ASCII characters)
    
    // Count frequencies of characters in the slogan
    for (int i = 0; slogan[i] != '\0'; i++) {
        freq[(unsigned char)slogan[i]]++;
    }

    // Print the frequency of each character
    printf("{");
    int first = 1;  // To manage commas in the output
    for (int i = 0; i < 128; i++) {
        if (freq[i] > 0) {
            if (!first) {
                printf(", ");
            }
            printf("'%c': %d", i, freq[i]);
            first = 0;
        }
    }
    printf("}\n");
}

int main() {
    // List of slogans to analyze
    char* slogans[] = {"buy now", "save big", "limited offer"};
    int n = 3;  // Number of slogans

    // Analyze and print frequencies for each slogan
    for (int i = 0; i < n; i++) {
        printf("For \"%s\": ", slogans[i]);
        count_char_frequency(slogans[i]);
    }

    return 0;
}
