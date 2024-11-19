#include <stdio.h>
#include <string.h>

int compress_word(char* word, char* result) {
    int removed_count = 0, j = 0, i = 0;
    for ( i = 0; word[i] != '\0'; i++) {
        if (i == 0 || word[i] != word[i - 1]) {
            result[j++] = word[i];
        } else {
            removed_count++;
        }
    }
    result[j] = '\0';  // Null-terminate the result string
    return removed_count;
}

int main() {
    char* words[] = {"booooook", "coooool", "heeeey"};
    int num_words = 3;
    int total_removed = 0;
    int i = 0;
    // Loop through each word and compress
    for ( i = 0; i < num_words; i++) {
        char compressed[100];  // Buffer to store the compressed word
        total_removed += compress_word(words[i], compressed);  // Compress and count removed characters
        printf("Compressed word: %s\n", compressed);
    }

    // Output total characters removed
    printf("Total characters removed: %d\n", total_removed);

    return 0;
}
