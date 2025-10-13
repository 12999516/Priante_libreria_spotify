#include <stdio.h>
#include <stdlib.h>

struct persona {
    int age;
    char *nome;
    char *cognome;
    char sesso;
};

int main(void) {

    struct persona *persona = (struct persona *)malloc(sizeof(struct persona));
    struct  persona **persone =  (struct persona **) malloc(sizeof(struct persona *)*10);
    struct persona ***personissime =  (struct persona ***) malloc(sizeof(struct persona)*10);
    persona->age = 32;
    persona->nome = "Sergio";
    persona->cognome = "Balestro";
    persona->sesso = 'M';
    persone[0] = persona;
    personissime[0] -> [0]  = persona;

    for (int i = 0; i < 10; i++) {
        printf("nome: %s\n\r", (*(persone + i)).nome);

        printf("cognome: %s\n\r", (*(persone + i)).cognome);
        printf("età: %d\n\r", (*(persone + i)).age);
        printf("sesso:  %c\n\r", (*(persone + i)).sesso);
    }
        free(persona);

    return 0;
}