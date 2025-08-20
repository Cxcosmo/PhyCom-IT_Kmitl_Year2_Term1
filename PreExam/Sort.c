#include <stdio.h>

int main(){
    int n, check = 0;
    scanf(" %d", &n);

    float num[n], num_in;
    for (int i = 0; i < n; i++){
        scanf(" %f", &num_in);
        check += (num_in - (int)num_in) > 0 ? 1 : 0;
        int j = i;
        while (j > 0 && num[j - 1] > num_in){ num[j--] = num[j - 1]; }
        num[j] = num_in;
    }
    for (int i = 0; i < n; i++){ check ? printf("%.2f ", num[i]) : printf("%.0f ", num[i]); }

    return 0;
}
