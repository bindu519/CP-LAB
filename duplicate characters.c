#include <stdio.h>
#include <string.h>

int main() {
    char s[100001];
    unsigned int seen = 0;
    unsigned int repeated = 0;
    int i;

    scanf("%s", s);

    for (i = 0; s[i] != '\0'; i++) {
        int pos = s[i] - 'a';
        unsigned int bit = 1U << pos;

        if (seen & bit) {
            if (!(repeated & bit)) {
                printf("%c ", s[i]);
                repeated |= bit;
            }
        } else {
            seen |= bit;
        }
    }

    if (repeated == 0) {
        printf("No duplicates");
    }

    return 0;
}
