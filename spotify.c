#include <stdio.h>
#include <stdlib.h>

struct song {
    char *nome;
    char *artista;
    int minuti;
    int secondi;
};

int main() {
    struct song *songs = (struct song *)malloc(sizeof(struct song) * 4);
    int dec;
    int con = 0;
    int c;

    do
    {
        printf("cosa vuoi fare: 0) esci, 1) aggiungi canzone, 2) visualizza libreria");
        scanf("%d", &dec);

        if (dec  == 1) {
            songs[con].nome = malloc(sizeof(char) * 100);
            songs[con].artista = malloc(sizeof(char) * 100);
            printf("dimmi il titolo");
            fflush(stdin);
            scanf("%s", songs[con].nome);
            printf("dimmi l'artista");
            fflush(stdin);
            scanf("%s", songs[con].artista);
            printf("dimmi i minuti");
            fflush(stdin);
            scanf("%d", &songs[con].minuti);
            printf("dimmi i secondi");
            fflush(stdin);
            scanf("%d", &songs[con].secondi);
            con++;


            if (con == sizeof(songs) / sizeof(struct song)) {
                struct song *temp = realloc(songs, sizeof(songs) * 2);
                songs = temp;
            }

            printf("vuoi fare altro? 1) si 2) no");
            scanf("%d", &c);

            if (c == 2) {
                return 0;
            }

        } else if (dec == 2) {
            for (int i = 0; i < con; i++) {
                printf("nome canzone %s, artista %s, durata %d:%d\n\r",songs[i].nome, songs[i].artista, songs[i].minuti, songs[i].secondi);
            }
        } else {
            return 0;
        }
    } while (c != 0);

    for (int i = 0; i < con; i++) {
        free(songs[i].nome);
        free(songs[i].artista);
    }
    free(songs);

    return 0;
}