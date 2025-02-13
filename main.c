#include <stdio.h>

int main() {
    char arr[100];
    int vocali = 0, consonanti = 0;
    printf("Inserisci una stringa di lettere maiuscole: ");
    scanf("%s", arr);
    for (int i = 0; arr[i] != '\0'; i++) {
        char c = arr[i];
        if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            vocali++;
        } else if (c >= 'A' && c <= 'Z') {
            consonanti++;
        }
    }
    printf("Numero delle vocali: %d\n", vocali);
    printf("Numero delle consonanti: %d\n", consonanti);
    return 0;
}