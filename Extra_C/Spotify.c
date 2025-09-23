#include <stdio.h>
#include <string.h>

int main(){
    long min, s = 0;
    int n;
    scanf(" %ld.%ld", &min, &s);
    scanf(" %d", &n);
    s += min * 60;

    char songs[n][51], song[51];
    int detail[n][2], in_dex, time_m, time_s, j;

    for (int i = 0; i < n; i++){
        j = i;
        scanf(" Queue#%d <|> %[^<] <|> %d.%d", &in_dex, song, &time_m, &time_s);
        while (j > 0 && in_dex < detail[j - 1][0]){
            detail[j][0] = detail[j - 1][0];
            detail[j][1] = detail[j - 1][1];
            strcpy(songs[j], songs[j - 1]);
            j--;
        }
        detail[j][0] = in_dex;
        detail[j][1] = (time_m * 60) + time_s;
        strcpy(songs[j], song);
    }

    int current = 0;
    while (s > detail[current][1]){
        s -= detail[current][1];
        current++;
        current = current == n ? 0 : current;
    }

    printf("Song Order: %d\n", current + 1);
    printf("Song Name: %s\n", songs[current]);
    int percent = (s * 100) / detail[current][1];
    if (percent < 1){
        printf("Song Process: 1%%");
    } else if (percent == 100){
        printf("Song Process: Complete");
    } else {
        printf("Song Process: %d%%", percent);
    }

    return 0;
}
