#include <stdio.h>

void programmaAllenamento(int eta, float peso, char sesso) {
    printf("Programma di allenamento personalizzato:\n");
    
    if (eta < 18) {
        printf("Poiché sei minorenne, si consiglia la supervisione di un adulto.\n");
    }
    
    if (peso > 100) {
        printf("Si consiglia di iniziare con un allenamento leggero.\n");
    }
    
    if (sesso == 'M' || sesso == 'm') {
        printf("1. Sollevamento pesi per aumentare la massa muscolare.\n");
        printf("2. Cardio per bruciare i grassi.\n");
    } else if (sesso == 'F' || sesso == 'f') {
        printf("1. Allenamento con i pesi per tonificare i muscoli.\n");
        printf("2. Esercizi di resistenza per migliorare la forza.\n");
    } else {
        printf("Sesso non riconosciuto.\n");
    }
}

int main() {
    int eta;
    float peso;
    char sesso;
    char nome[30];
    char cognome[30];
    printf("Benvenuto su fitbud! inserisci il tuo nome e cognome\n");
    scanf(" %[^\n]s %[^\n]s", nome, cognome);

    printf("Inserisci l'età: ");
    scanf("%d", &eta);

    printf("Inserisci il peso (in kg): ");
    scanf("%f", &peso);

    printf("Inserisci il sesso (M per maschio, F per femmina): ");
    scanf(" %c", &sesso);

    programmaAllenamento(eta, peso, sesso);

    return 0;
}