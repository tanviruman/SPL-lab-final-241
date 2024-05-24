#include <stdio.h>
#include <string.h>

const char *numbers[10] = {
    "zero ", "one ", "two ", "three ", "four ", "five ", "six ", "seven ", "eight ", "nine"
};

int rev(int n) {
    int r = 0;
    for (; n; n /= 10)
        r = r*10 + n%10;
    return r;
}

void toSpelledOut(int n, char *str) {
    if (n == 0) return;

    strcat(str, numbers[n % 10]);
    toSpelledOut(n / 10, str);
}

void upperCase(char *num) {
    for (; *num; num++)
        if (*num >= 'a' && *num <= 'z')
            *num -= ' ';
}

int main() {
    int n; scanf("%d", &n);
    puts("For uppercase press 1");
    puts("For lowercase press 2");
    int c; scanf("%d", &c);
    char s[100] = {0};
    toSpelledOut(rev(n), s);
    if (c == 1) upperCase(s);
    puts(s);
}
