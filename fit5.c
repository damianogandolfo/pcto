#include <stdio.h>


void programmaAllenamento(int eta, float peso, char sesso, int altezza);
void programmaUomo(float peso);
void programmaDonna(float peso);
void consigli(float peso);

int main() 
{
    int eta;
    float peso;
    char sesso;
    char nome[30];
    char cognome[30];
    int altezza;

    printf("Benvenuto su fitbud! inserisci il tuo nome e cognome\n");
    scanf(" %[^\n]s %[^\n]s", nome, cognome);

    
    printf("Benvenuto nel programma di allenamento personalizzato!\n");
    printf("Inserisci l'età: ");
    scanf("%d", &eta);

    printf("Inserisci il peso (in kg) e l'altezza (cm):");
    scanf("%f %d", &peso, &altezza);

    printf("Inserisci il sesso (M per maschio, F per femmina): ");
    scanf(" %c", &sesso);

    
    programmaAllenamento(eta, peso, sesso, altezza);

    return 0;
}


void programmaAllenamento(int eta, float peso, char sesso, int altezza) 
{
    printf("Ecco il tuo programma di allenamento personalizzato:\n");
    
    
    if (eta < 18) 
    {
        printf("Poiché sei minorenne, si consiglia la supervisione di un adulto.\n");
    }

    
    if (peso > 100) 
    {
        consigli(peso);
    }

    
    if (sesso == 'M' || sesso == 'm') 
    {
        programmaUomo(peso);
    } else if (sesso == 'F' || sesso == 'f') 
    {
        programmaDonna(peso);
    } else 
    {
        printf("Sesso non riconosciuto.\n");
    }
    if (eta < 18) 
    {
        printf("Poiché sei minorenne, si consiglia la supervisione di un adulto.\n");
    }

    
    if (altezza > 160 && peso < 70) 
    {
        printf("Si consiglia di concentrarsi su esercizi di forza e resistenza per mantenere la forma fisica.\n");
    } 
    else if (altezza <= 160 && peso >= 70)
    {
        printf("Si consiglia di includere esercizi cardiovascolari per bruciare calorie e ridurre il peso.\n");
    } 
    else if(altezza > 180 && peso < 75)
    {
        printf("Si consiglia di includere esercizi di forza per aumentare la forza e la massa muscolare");
    }
    

    
    if (eta >= 40) 
    {
        printf("Considerando l'età, si consiglia di includere esercizi di stretching e mobilità articolare.\n");
    } 
   
}


void programmaUomo(float peso)
   { printf("Programma di allenamento per uomo:\n");
    printf("1. Sollevamento pesi per aumentare la massa muscolare.\n");
    printf("2. Cardio per bruciare i grassi.\n");
    printf("3. Esercizi di forza per migliorare la resistenza.\n");
   
   }

    
    


void programmaDonna(float peso) 
   { printf("Programma di allenamento per donna:\n");
    printf("1. Allenamento con i pesi per tonificare i muscoli.\n");
    printf("2. Esercizi di resistenza per migliorare la forza.\n");
    printf("3. Yoga per la flessibilità e il benessere generale.\n");
  
   

    
   
   }

void consigli(float peso) 
{
    printf("Poiché hai un peso superiore a 100 kg, ti consigliamo di consultare un medico prima di iniziare qualsiasi programma di allenamento.\n");
}