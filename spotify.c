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

    do
    {
        printf("vuoi aggiungere una canzone? 1) si, 2) no");
        scanf("%d", &dec);
        printf("dimmi il titolo");
        scanf("%s", songs[con].nome);
        printf("dimmi l'artista");
        scanf("%s", songs[con].artista);
        printf("dimmi i minuti");
        scanf("%s", songs[con].minuti);
        printf("dimmi i secondi");
        scanf("%s", songs[con].secondi);
        con++;

        if (con == sizeof(songs) / sizeof(struct song)) {
            realloc(songs, sizeof(songs) * 2);
        }

    } while (dec == 1);

    realloc(songs, sizeof(struct song) * con);
    printf("hai messo tutte le canzoni ora frasson ti sborrerà nel culo ecco l'elenco delle canzoni");

    for (int i = 0; i < con; i++) {
        printf("canzone %d titolo: %s, artista: %s, durata: %d:%d", i, songs[i].nome, songs[i].artista, songs[i].minuti, songs[i].secondi);
    }

    return 0;
}