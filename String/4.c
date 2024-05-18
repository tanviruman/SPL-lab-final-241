#include <stdio.h>
#include <string.h>

char* removeDuplicate(char str[], int n)
{
    // Used as an index in the modified string
    int index = 0;

    // Traverse through all characters
    for (int i = 0; i < n; i++) {
        // Check if str[i] is present before it
        int j;
        for (j = 0; j < i; j++) {
            if (str[i] == str[j])
                break;
        }

        // If not present, then add it to the result.
        if (j == i)
            str[index++] = str[i];
    }

    // Add null character at the end to terminate the string
    str[index] = '\0';

    return str;
}

// Driver code
int main()
{
    char str[] = "geeksforgeeks";
    int n = sizeof(str) / sizeof(str[0]);
    printf("%s\n", removeDuplicate(str, n));
    return 0;
}

