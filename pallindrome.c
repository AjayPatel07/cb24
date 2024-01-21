#include <stdio.h>

int main() {
    int num, r, s = 0, c;

    printf("Enter a three-digit number: ");
    scanf("%d", &num);

    // Save the original number for later comparison
    r = num;

    // Extract each digit and reverse the number
    c = num % 10;
    s = s * 10 + c;
    num /= 10;

    c = num % 10;
    s = s * 10 + c;
    num /= 10;

    s = s * 10 + num;

    // Check if the reversed number is equal to the original number
    if (r == s) {
        printf("%d is a palindrome.\n", r);
    } else {
        printf("%d is not a palindrome.\n", r);
    }

    return 0;
}
