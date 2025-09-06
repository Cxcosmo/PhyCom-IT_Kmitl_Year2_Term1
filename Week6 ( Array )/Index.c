#include <stdio.h>

int main(){
    int num;
    int M[] = {2, 20, 8, 10, 4, 6, 16, 18}, m_size = *(&M + 1) - M;
    int N[] = {1, 3, 9, 7, 11, 15, 19}, n_size = *(&N + 1) - N;

    do{
        scanf(" %d", &num);
    }while (num < 1 || num > 20);

    for (int i = 0; i < m_size; i++){
        if (num == M[i]){
            printf("%d is in M at index [%d]", num, i);
            return 0 ;
        }
    }

    for (int j = 0; j < n_size; j++){
        if (num == N[j]){
            printf("%d is in N at index [%d]", num, j);
            return 0 ;
        }
    }

    printf("%d is not in neither M nor N", num);

    return 0;
}
