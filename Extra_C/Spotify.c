#include <stdio.h>

int main(){
    long min;
    int s, n;
    scanf(" %ld.%d", &min, &n);
    scanf(" %d", &n);

    char song[n + 1][51];
    int s_time[n + 1][2], index;

    for (int i = 0; i < n; i++){
        scanf(" Queue#%d <|> %[^<] <|> %d.%d", &index, &song[index], &s_time[index][0], &s_time[index][1]);
    }
    for (int i = 1; i < n + 1; i++){
        printf("%s\n", song[i]);
    }
}
