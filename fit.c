#include <stdio.h>
#include <string.h>

int main()
{
    char nome[30];
    char cognome[30];
    char allenamento[20];
    char sesso[10];
    double peso;
    double altezza;

    printf("Benvenuto su fitbud! inserisci il tuo nome e cognome\n");
    scanf(" %[^\n]s %[^\n]s", nome, cognome);

    printf("Benvenuto! Inserisci altezza(cm), peso(kg) e sesso\n");
    scanf(" %lf %lf %[^\n]s", &altezza, &peso, sesso);

    printf("Perfetto! Adesso specifica il tuo grado di allenamento(principiante, intermedio, avanzato)\n");
    scanf(" %[^\n]s", allenamento);

    char *sesso1 = "maschio";
    char *sesso2 = "femmina";
    char *principiante1 = "principiante";
    char *intermedio1 = "intermedio";
    char *avanzato1= "avanzato";

    if(!strcmp(sesso,sesso1)) 
    {

        if(!strcmp(allenamento,principiante1))
        {

        if(peso >= 60 && peso <= 75 )

        {
            if( altezza < 165)
            {


            }
        
        }


        }   

    }







}