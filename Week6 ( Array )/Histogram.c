#include <stdio.h>
#include <ctype.h>

int main(){
    int n, count[26] = {0};
    char c_in, chr[26] = {0};

    scanf(" %d", &n);
    for (int i = 0; i < n; i++){
        scanf(" %c", &c_in);
        for (int j = 0; j < 26; j++){
            if (!chr[j]){
                chr[j] = tolower(c_in);
                count[j]++;
                break;
            }
            if (tolower(c_in) == chr[j]){
                count[j]++;
                break;
            }
        }
    }
    for (int k = 0; k < 26; k++){
        if (!chr[k]){ break; }
        printf("%c: %d\n", chr[k], count[k]);
    }

    return 0;
}
