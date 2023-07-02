#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverseString(char *str) {
    int len = strlen(str);
    for (int i = 0, j = len - 1; i < j; i++, j--) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

int main() {
    char *original;
    char *reversed;
    original = (char *)malloc(100 * sizeof(char));
    scanf("%s", original);
    
    reversed = (char *)malloc(strlen(original) + 1);
    strcpy(reversed, original);
    
    reverseString(reversed);
    
    if (strcmp(original, reversed) == 0) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    
    free(original);
    free(reversed);
    return 0;
}
