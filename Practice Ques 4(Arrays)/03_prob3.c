/*
Declare a character array of size 26. Initialize it with lowercase English alphabets ('a' to 'z') using
a loop, and then print them in reverse order.
Hint: char arr[26]; arr[i] = 'a' + i;
*/
#include <stdio.h>

int main() {
    char arr[26];

    // Initialize with lowercase alphabets
    for(int i = 0; i < 26; i++) {
        arr[i] = 'a' + i; //ascii value for a is 97 , 97 + 0 = a, 97 + 1 = 98 = b, ... , 97 + 25 = z.
        // we can also write 97 instead of 'a'.
        // 'a' → character literal ✅
        // a → variable name ❗
    }

    // Print in reverse order
    for(int i = 25; i >= 0; i--) {
        printf("%c ", arr[i]);
    }

    return 0;
}