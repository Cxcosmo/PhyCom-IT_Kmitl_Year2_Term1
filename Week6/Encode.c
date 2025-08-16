#include <stdio.h>
#include <ctype.h>

int decrypt(int j){
    if (j + 5 > 25){ return j - 21; }
    return j + 5;
}

int encrypt(int j){
    if (j - 5 < 0){ return j + 21; }
    return j - 5;
}

int main(){
    char plaintext[201], chr[] = "abxypqrmncedkljoshtufvzgwi";
    int i = 0, x;

    scanf("%[^\n]", &plaintext);
    while (plaintext[i] != '\0'){
        if (!isalpha(plaintext[i])){
            printf("%c", plaintext[i]);
        } else {
            for (int j = 0; j < 26; j++){
                if (tolower(plaintext[i]) == chr[j]){
                    x = decrypt(j); //encrypt(j);  
                    isupper(plaintext[i]) ? printf("%c", chr[x] - 32) : printf("%c", chr[x]);
                    break;
                }
            }
        }
        i += 1;
    }

    return 0;
}
