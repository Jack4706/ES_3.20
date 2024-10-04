#include <stdio.h>

int main() {

    int anno;

    printf("inserisci l'anno:\n");
    scanf("%d", &anno);

    if(anno % 400 == 0) {
        printf("l'anno e' bisestile");
    }
    else if(anno % 100 == 0) {
        printf("l'anno NON e' bisestile");
    }
    else if(anno % 4 == 0) {
        printf("l'anno e' bisestile");
    }
    else {
        printf("l'anno NON e' bisestile");
    }

    return 0;
}
