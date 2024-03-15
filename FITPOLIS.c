#include <stdio.h>


void programmaAllenamento(int eta, float peso, char sesso, int altezza,int scelta);
void programmaUomo(float peso, int scelta);
void programmaDonna(float peso,int scelta);
void consigli(float peso);

int main() 
{
    char nome[30];
    char cognome[30];
    int eta;
    float peso;
    char sesso;
    int altezza;
    int scelta;

    printf("Benvenuto a Fitpolis! inserisci il tuo nome e cognome\n");
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
   if(scelta == 1 )
   {
    printf("GIORNO A: PETTO BICIPITI\n\
\n\
Panca Piana o Chest Press 4×6/8\n\
Distensioni con manubri su inclinata 4×8/10\n\
Croci ai cavi 3×12\n\
Curl con bilanciere 4×10\n\
Curl ai cavi 4×12\n\
GIORNO B: DORSO – TRICIPITI\n\
\n\
Trazioni 4×6/8\n\
Lat Machine 4×10\n\
Rematore con bilanciere 4×6/8\n\
Low Row oPulley 4×8/10\n\
French Press 4×10\n\
Push Down 4×12\n\
GIORNO C: GAMBE – SPALLE\n\
\n\
Leg Press 4X6/8\n\
Affondi 3×8/10\n\
Leg Curl 4X12\n\
Military Press 4×6/8\n\
Sholuder press 4×8/10\n\
Alzate Laterali 3×12\n");
   }
   else if(scelta == 2)
   {
    printf("Lunedì	5 km corsa lenta, ogni settimana punta ad incrementare la velocità\n\
            Mercoledì	Circuito HIIT “Tabata”\n\
           4 rnd 20” esercizio/10” rest burpees\n\
           Obbiettivo: maggior numero di ripetizioni nei 20” / mantenere lo stesso numero di ripetizioni ad ogni round\n\
            Sabato	15 km bicicletta velocità moderata, ogni settimana incrementa il numero dei chilometri percorsi");
   }
   else if(scelta == 3 )
   {
    printf("Gli esercizi più indicati sono i multiarticolari pesanti, tra i quali potremmo scegliere soprattutto i fondamentali\n\
           Si prediligono esercizi con un basso numero di ripetizioni e un carico abbastanza elevato\n\
           Back squat con bilanciere\n\
           Distensioni in panca piana con bilanciere\n\
           Trazioni alla sbarra (anche con sovraccarichi)\n\
           Stacco da terra con bilanciere.\n");
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
   if(scelta == 1 )
   {
    printf("Il workout è composto da un primo blocco di riscaldamento, 2 blocchi a circuito con esercizi di tonificazione, un ultimo blocco di defaticamento e si chiude con un po' di stretching.\n\
    Riscaldamento\n\
\n\
 \n\
\n\
20s             CIRCONDUZIONE BRACCIA IN AVANTI\n\
\n\
20s             CIRCONDUZIONE BRACCIA INDIETRO\n\
\n\
20s             INCROCIO BRACCIA GAMBE\n\
\n\
20s             SKIP ALTO\n\
\n\
20s             CALCIATA AI GLUTEI LENTA\n\
\n\
20s             SPOSTAMENTO LATERALE DX\n\
\n\
20s             SPOSTAMENTO LATERALE SX\n\
\n\
20s             JUMPING JACK\n\
\n\
20s             SLANCIO ALTERNATO GAMBA DX SX\n\
\n\
 \n\
\n\
Allenamento Tonificazione A Circuito\n\
\n\
 \n\
\n\
30s             INCROCIO BRACCIA GAMBE + CALCIO ALTERNATO\n\
\n\
30s             GINOCCHIO SU DX\n\
\n\
30s             GINOCCHIO SU SX\n\
\n\
30s             PASSO INCROCIATO ALL'INDIETRO + TORSIONE TRONCO (ALTERNATO)\n\
\n\
20s             RECUPERA\n\
\n\
30s             DISTENSIONE BRACCIA GAMBE DX\n\
\n\
30s             DISTENSIONE BRACCIA GAMBE SX\n\
\n\
30s             PLANK\n\
\n\
30s             PUGNI VELOCI FIT BOXE\n\
\n\
20s             RECUPERA\n\
\n\
30s             PUGNI VELOCI\n\
\n\
30s             PLANK IN MOVIMENTO\n\
\n\
30s             SUMO SQUAT\n\
\n\
30s             SQUAT\n\
\n\
20s             PAUSA\n\
\n\
30s             INCROCIO BRACCIA GAMBE + CALCIO ALTERNATO\n\
\n\
30s             GINOCCHIO SU DX\n\
\n\
30s             GINOCCHIO SU SX\n\
\n\
30s             PASSO INCROCIATO ALL'INDIETRO + TORSIONE TRONCO (ALTERNATO)\n\
\n\
20s             RECUPERA\n\
\n\
30s             DISTENSIONE BRACCIA GAMBE DX\n\
\n\
30s             DISTENSIONE BRACCIA GAMBE SX\n\
\n\
30s             PLANK\n\
\n\
30s             PUGNI VELOCI FIT BOXE\n\
\n\
20s             RECUPERA\n\
\n\
30s             PUGNI VELOCI\n\
\n\
30s             PLANK IN MOVIMENTO\n\
\n\
30s             SUMO SQUAT\n\
\n\
30s             SQUAT\n\
\n\
20s             PAUSA\n\
\n\
20s             SLANCIO ALTERNATO GAMBA DX SX\n\
\n\
20s             JUMPING JACK\n\
\n\
20s             SPOSTAMENTO LATERALE SX\n\
\n\
20s             SPOSTAMENTO LATERALE DX\n\
\n\
20s             CALCIATA AI GLUTEI LENTA\n\
\n\
20s             SKIP ALTO\n\
\n\
20s             INCROCIO BRACCIA GAMBE\n\
\n\
20s             CIRCONDUZIONE BRACCIA INDIETRO\n\
\n\
20s             CIRCONDUZIONE BRACCIA IN AVANTI\n\
\n\
 \n\
\n\
Stretching\n\
\n\
 \n\
\n\
20s             RESPIRAZIONE\n\
\n\
20s             STRETCHING GAMBA DX\n\
\n\
20s             STRETCHING GAMBA SX\n\
\n\
20s             INCROCIO GAMBA DX\n\
\n\
20s             INCROCIO GAMBA SX\n\
\n\
20s             DISCESA FRONTALE MANI A TERRA\n\
\n\
20s             MOBILIZZAZIONE COLONNA\n");
   }
   else if(scelta == 2 )
   {
    printf("circuito di allenamento composto di 5 esercizi. Il peso dei manubri utilizzati varia in base al proprio grado di allenamento.\n\
    Riscaldamento\n\
\n\
\n\
\n\
20s             CIRCONDUZIONE BRACCIA IN AVANTI\n\
\n\
20s             CIRCONDUZIONE BRACCIA INDIETRO\n\
\n\
20s             INCROCIO BRACCIA GAMBE\n\
\n\
20s             SKIP ALTO\n\
\n\
20s             CALCIATA AI GLUTEI LENTA\n\
\n\
20s             SPOSTAMENTO LATERALE DX\n\
\n\
20s             SPOSTAMENTO LATERALE SX\n\
\n\
20s             JUMPING JACK\n\
\n\
20s             SLANCIO ALTERNATO GAMBA DX SX\n\
\n\
 \n\
\n\
\n\
ESERCIZI\n\
\n\
4x10           SQUAT CON KETTLEBALL\n\
\n\
4X12           AFFONDI CAMMINATI CON MANUBRI\n\
\n\
4X10          HIP THRUST\n\
\n\
3X15          HYPEREXTENSIONS\n\
\n\
3X8           HACK SQUAT\n\
\n\
STRETCHING\n\
\n\
 \n\
\n\
20s             RESPIRAZIONE\n\
\n\
20s             STRETCHING GAMBA DX\n\
\n\
20s             STRETCHING GAMBA SX\n\
\n\
20s             INCROCIO GAMBA DX\n\
\n\
20s             INCROCIO GAMBA SX\n\
\n\
20s             DISCESA FRONTALE MANI A TERRA\n\
\n\
20s             MOBILIZZAZIONE COLONNA\n");
   }
   else if(scelta == 3 )
   {
    printf("Il circuito contiene alcuni esercizi di yoga che possono aiutarti ad aumentare la tua flessibilita.\n\
\n\
Esercizio  Nr. 1 - Il gatto (marjariasana)\n\
\n\
Esercizio Nr. 2 - Il cucciolo disteso (uttana shishosana, anahatasana)\n\
\n\
Esercizio Nr. 3 - Il cane a testa in giù (adho mukha svanasana)\n\
\n\
Esercizio Nr. 4 - Piegamenti in avanti (pada hastasana)\n\
\n\
Esercizio Nr. 5 - La montagna (tadasana)\n\
\n\
Esercizio Nr. 6 - La sedia (utkatasana)\n\
\n\
Esercizio Nr. 7 - Il rilassamento profondo\n\
    \n");
  }

   }

    void consigli(float peso) 
{
    printf("Poiché hai un peso superiore a 100 kg, ti consigliamo di consultare un medico prima di iniziare qualsiasi programma di allenamento.\n");
}