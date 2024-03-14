#include <stdio.h>


void programmaallenamento(float altezza, float peso, int eta);
void programmaUomo(float peso);
void programmaDonna(float peso);

int main() {
    float altezza, peso;
    int eta;
    char nome[30];
    char cognome[30];

    printf("Benvenuto su fitbud! inserisci il tuo nome e cognome\n");
    scanf(" %[^\n]s %[^\n]s", nome, cognome);

    printf("Inserisci la tua altezza (in metri): ");
    scanf("%f", &altezza);

    printf("Inserisci il tuo peso (in kg): ");
    scanf("%f", &peso);

    printf("Inserisci la tua eta: ");
    scanf("%d", &eta);

    
    programmaallenamento(altezza, peso, eta);

    return 0;
}


void programmaallenamento(float altezza, float peso, int eta) {
    printf("Ecco il tuo programma di allenamento personalizzato:\n");

    
    if (eta < 18) 
    {
        printf("Poiché sei minorenne, si consiglia la supervisione di un adulto.\n");
    }

    
    if (altezza > 1.60 && peso < 70) 
    {
        printf("Si consiglia di concentrarsi su esercizi di forza e resistenza per mantenere la forma fisica.\n");
    } 
    else if (altezza <= 1.60 && peso >= 70)
     {
        printf("Si consiglia di includere esercizi cardiovascolari per bruciare calorie e ridurre il peso.\n");
    } 
    else if(altezza > 1.80 && peso < 75)
    {
        printf("Si consiglia di includere esercizi di forza per aumentare la forza e la massa muscolare");
    }
    else 
    {
        printf("Si consiglia di consultare un professionista per un programma di allenamento più specifico in base alle tue esigenze.\n");
    }

    
    if (eta >= 40) 
    {
        printf("Considerando l'età, si consiglia di includere esercizi di stretching e mobilità articolare.\n");
    } else {
        printf("Si consiglia di includere una varietà di esercizi cardiovascolari, di resistenza e di stretching nella tua routine di allenamento.\n");
    }
}



