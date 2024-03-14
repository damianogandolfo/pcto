#include <stdio.h>


void programmaAllenamento(int eta, float peso, char sesso, int altezza,int scelta);
void programmaUomo(float peso, int scelta);
void programmaDonna(float peso,int scelta);
void consigli(float peso);

int main() 
{
    int eta;
    float peso;
    char sesso;
    char nome[30];
    char cognome[30];
    int altezza;
    int scelta;

    printf("Benvenuto su fitbud! inserisci il tuo nome e cognome\n");
    scanf(" %[^\n]s %[^\n]s", nome, cognome);

    
    printf("Benvenuto nel programma di allenamento personalizzato!\n");
    printf("Inserisci l'età: ");
    scanf("%d", &eta);

    printf("Inserisci il peso (in kg) e l'altezza (cm):");
    scanf("%f %d", &peso, &altezza);

    printf("Inserisci il sesso (M per maschio, F per femmina): ");
    scanf(" %c", &sesso);

    
    programmaAllenamento(eta, peso, sesso, altezza, scelta);

    return 0;
}


void programmaAllenamento(int eta, float peso, char sesso, int altezza, int scelta) 
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
        programmaUomo(peso, scelta);
    } else if (sesso == 'F' || sesso == 'f') 
    {
        programmaDonna(peso, scelta);
    } else 
    {
        printf("Sesso non riconosciuto.\n");
    }
    if (eta < 18) 
    {
        printf("Poiché sei minorenne, si consiglia la supervisione di un adulto.\n");
    }
    
     if (eta >= 40) 
    {
        printf("Considerando l'età, si consiglia di includere esercizi di stretching e mobilità articolare.\n");
    } 
   
}


void programmaUomo(float peso, int scelta)
   { 
    printf("Programma di allenamento per uomo:\n");
    printf("1. Sollevamento pesi per aumentare la massa muscolare.\n");
    printf("2. Cardio per bruciare i grassi.\n");
    printf("3. Esercizi di forza per migliorare la resistenza.\n");
   printf(" Scegli una delle tre soluzioni di allenamento\n");
   scanf("%d", &scelta);
   if(scelta = 1 )
   {
    printf("");
   }
   else if(scelta = 2 )
   {
    printf("");
   }
   else if(scelta =. 3 )
   {
    printf("");
   }
   }

    
    


    void programmaDonna(float peso, int scelta) 
   { 
    printf("Programma di allenamento per donna:\n");
    printf("1. Allenamento con i pesi per tonificare i muscoli.\n");
    printf("2. Esercizi di resistenza per migliorare la forza.\n");
    printf("3. Yoga per la flessibilità e il benessere generale.\n");
  
  printf(" Scegli una delle tre soluzioni di allenamento\n");
   scanf("%d", &scelta);
   if(scelta = 1 )
   {
    printf("Il workout è composto da un primo blocco di riscaldamento, 2 blocchi a circuito con esercizi di tonificazione, un ultimo blocco di defaticamento e si chiude con un po' di stretching
    
    Riscaldamento

 

20             CIRCONDUZIONE BRACCIA IN AVANTI

20            CIRCONDUZIONE BRACCIA INDIETRO

20             INCROCIO BRACCIA GAMBE

20             SKIP ALTO

20             CALCIATA AI GLUTEI LENTA

20             SPOSTAMENTO LATERALE DX

20             SPOSTAMENTO LATERALE SX

20             JUMPING JACK

20             SLANCIO ALTERNATO GAMBA DX SX

 

Allenamento Tonificazione A Circuito

 

30          INCROCIO BRACCIA GAMBE + CALCIO ALTERNATO

30             GINOCCHIO SU DX

30            GINOCCHIO SU SX

30             PASSO INCROCIATO ALL'INDIETRO + TORSIONE TRONCO (ALTERNATO)

20             RECUPERA

30          DISTENSIONE BRACCIA GAMBE DX

30             DISTENSIONE BRACCIA GAMBE SX

30             PLANK

30            PUGNI VELOCI FIT BOXE

20             RECUPERA

30             PUGNI VELOCI

30             PLANK IN MOVIMENTO

30             SUMO SQUAT

30             SQUAT

20             PAUSA

30             INCROCIO BRACCIA GAMBE + CALCIO ALTERNATO

30             GINOCCHIO SU DX

30             GINOCCHIO SU SX

30             PASSO INCROCIATO ALL'INDIETRO + TORSIONE TRONCO (ALTERNATO)

20             RECUPERA

30             DISTENSIONE BRACCIA GAMBE DX

30             DISTENSIONE BRACCIA GAMBE SX

30             PLANK

30             PUGNI VELOCI FIT BOXE

20             RECUPERA

30             PUGNI VELOCI

30             PLANK IN MOVIMENTO

30             SUMO SQUAT

30             SQUAT

20             PAUSA

20             SLANCIO ALTERNATO GAMBA DX SX

20             JUMPING JACK

20             SPOSTAMENTO LATERALE SX

20             SPOSTAMENTO LATERALE DX

20             CALCIATA AI GLUTEI LENTA

20             SKIP ALTO

20             INCROCIO BRACCIA GAMBE

20             CIRCONDUZIONE BRACCIA INDIETRO

20             CIRCONDUZIONE BRACCIA IN AVANTI

 

Stretching

 

20             RESPIRAZIONE

20             STRETCHING GAMBA DX

20             STRETCHING GAMBA SX

20             INCROCIO GAMBA DX

20             INCROCIO GAMBA SX

20             DISCESA FRONTALE MANI A TERRA

20             MOBILIZZAZIONE COLONNA\n");
   }
   else if(scelta = 2 )
   {
    printf("circuito di allenamento composto di 5 esercizi. Il peso dei manubri utilizzati varia in base al proprio grado di allenamento
       
        Riscaldamento

 

20            CIRCONDUZIONE BRACCIA IN AVANTI

20             CIRCONDUZIONE BRACCIA INDIETRO

20            INCROCIO BRACCIA GAMBE

20            SKIP ALTO

             CALCIATA AI GLUTEI LENTA

20            SPOSTAMENTO LATERALE DX

20             SPOSTAMENTO LATERALE SX

20             JUMPING JACK

20            SLANCIO ALTERNATO GAMBA DX SX

Allenamento

4X12            SQUAT CON KETTLEBALL

3X16            AFFONDI CON MANUBRI

4X10            HIP THRUST

3X15            HYPEREXTENSIONS

4X8             HACK SQUAT

Stretching

 

20             RESPIRAZIONE

20             STRETCHING GAMBA DX

20             STRETCHING GAMBA SX

20             INCROCIO GAMBA DX

20             INCROCIO GAMBA SX

20             DISCESA FRONTALE MANI A TERRA

20             MOBILIZZAZIONE COLONNA\n");
   }
   else if(scelta = 3 )
   {
    printf("Il circuito contiene alcuni esercizi di yoga che possono aiutarti ad aumentare la tua flessibilita 
    
    
    Riscaldamento

20             CIRCONDUZIONE BRACCIA IN AVANTI

20             CIRCONDUZIONE BRACCIA INDIETRO

20             INCROCIO BRACCIA GAMBE

20             SKIP ALTO

20             CALCIATA AI GLUTEI LENTA

20             SPOSTAMENTO LATERALE DX

20             SPOSTAMENTO LATERALE SX

20             JUMPING JACK

20             SLANCIO ALTERNATO GAMBA DX SX
 Allenamento



 Esercizio di yoga Nr. 1 - Il gatto (marjariasana)

Esercizio di yoga Nr. 2 - Il cucciolo disteso (uttana shishosana, anahatasana)

Esercizio di yoga Nr. 3 - Il cane a testa in giù (adho mukha svanasana)

Esercizio di yoga Nr. 4 - Piegamenti in avanti (pada hastasana)

Esercizio di yoga Nr. 5 - La montagna (tadasana)

Esercizio di yoga Nr. 6 - La sedia (utkatasana)

Esercizio di yoga Nr. 7 - Il rilassamento profondo



Stretching

 

20             RESPIRAZIONE

20             STRETCHING GAMBA DX

20             STRETCHING GAMBA SX

20             INCROCIO GAMBA DX

20             INCROCIO GAMBA SX

20             DISCESA FRONTALE MANI A TERRA

20             MOBILIZZAZIONE COLONNA\n");
}


void consigli(float peso) 
{
    printf("Poiché hai un peso superiore a 100 kg, ti consigliamo di consultare un medico prima di iniziare qualsiasi programma di allenamento.\n");
}
   }