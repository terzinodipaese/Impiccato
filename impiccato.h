#ifndef IMPICCATO_H_INCLUDED
#define IMPICCATO_H_INCLUDED
#define MAX 30
#define ASCII 32

int grandezza_parola, y, i=10;
char parola_indovinare[MAX], parola[MAX], alfabeto[26];

void crediti(){
    printf("Gioco realizzato da Mattia Scivoletto ed Emanuele La Terra.");
}




void presentazioneEinserimento(){
    printf("\n\n");
    printf("***************************Gioco dell'impiccato!******************************");        //presentazione gioco

    int z;

    do{        // controllo lunghezza della parola e se sono tutte maiuscole
        z=0;
        printf("\n\n\nInserisci la parola da indovinare da 1 a 30 lettere minuscole: ");
        fflush(stdin);
        scanf("%s",parola_indovinare);

        for(y=0;y<strlen(parola_indovinare);y++){
            if((parola_indovinare[y]<97) || (parola_indovinare[y]>122))
                z=1;
        }
    }while((strlen(parola_indovinare)>MAX) || (strlen(parola_indovinare)<=0) || z==1);

    system("cls");
}









void inizializzazione(){
    printf("\n\t\tREGOLE");
    printf("\n\nIl tentativo viene scalato solo quando si sbaglia.");
    printf("\nI tratti sono le vocali, i puntini le consonanti.");
    printf("\n\nIndovina la parola: ");

    grandezza_parola=strlen(parola_indovinare);     //misura grandezza parola

    for(y=0;y<grandezza_parola;y++){        //ciclo assegnazione tratti e punti
        if((parola_indovinare[y]==97) || (parola_indovinare[y]==101) || (parola_indovinare[y]==105) || (parola_indovinare[y]==111) || parola_indovinare[y]==117)
            parola[y]='_';
        else
            parola[y]='.';
        printf("%c",parola[y]);
        printf(" ");
    }
}







void verifica(){

    int controllo1g, controllo2g, tentativi=10, indice_tentativi;
    char lettera;
    char a = 97;
    printf("\n\n");
    for(y=0;y<=25;y++){
        alfabeto[y]=a;
        a++;
        printf("%c ",alfabeto[y]);
    }

    for(indice_tentativi=0;indice_tentativi<tentativi;){
        controllo2g=0;
        controllo1g=0;
        printf("\n\nHai %d tentativi.",i);
        printf("\nInserisci la lettera: ");
        fflush(stdin);
        scanf("%c",&lettera);                     //inserimento lettera

        if((lettera>=65) && (lettera<=90)){     //conversione maiuscole in minuscole tramite codice ASCII
            lettera=lettera+ASCII;
        }

        int x;
        for(x=0;x<grandezza_parola;x++){
            if(lettera==parola_indovinare[x]){          //ciclo assegnazione lettera a vettore parola
                parola[x]=lettera;
                controllo1g++;
            }
        }

        for(y=0;y<25;y++){
            if(lettera==alfabeto[y])
                alfabeto[y]='-';
                printf("%c ",alfabeto[y]);
        }

        if(controllo1g>=1){
            printf("\n\n");
            for(x=0;x<grandezza_parola;x++){
                printf("%c ",parola[x]);
            }
        }

        else{
            switch(indice_tentativi){
				case 0:
					printf("\nÛßßßßßßßßßßßß");
					printf("\nÛ          ***");
					printf("\nÛ         *   *");
					printf("\nÛ          ***");
					printf("\nÛ");
					printf("\nÛ");
					printf("\nÛ");
					printf("\nÛ");
					printf("\nÛ");
					printf("\nÛ");
					printf("\nÛ");
					break;
				case 1:
					printf("\nÛßßßßßßßßßßßß");
					printf("\nÛ          ***");
					printf("\nÛ         *   *");
					printf("\nÛ          ***");
					printf("\nÛ           |");
					printf("\nÛ           |");
					printf("\nÛ           |");
					printf("\nÛ");
					printf("\nÛ");
					printf("\nÛ");
					printf("\nÛ");
					break;
				case 2:
					printf("\nÛßßßßßßßßßßßß");
					printf("\nÛ          ***");
					printf("\nÛ         *   *");
					printf("\nÛ          ***");
					printf("\nÛ          /|");
					printf("\nÛ           |");
					printf("\nÛ           |");
					printf("\nÛ");
					printf("\nÛ");
					printf("\nÛ");
					printf("\nÛ");
					break;
				case 3:
					printf("\nÛßßßßßßßßßßßß");
					printf("\nÛ          ***");
					printf("\nÛ         *   *");
					printf("\nÛ          ***");
					printf("\nÛ          /|");
					printf("\nÛ         / |");
					printf("\nÛ           |");
					printf("\nÛ");
					printf("\nÛ");
					printf("\nÛ");
					printf("\nÛ");
					break;
				case 4:
					printf("\nÛßßßßßßßßßßßß");
					printf("\nÛ          ***");
					printf("\nÛ         *   *");
					printf("\nÛ          ***");
					printf("\nÛ          /|\\");
					printf("\nÛ         / |   ");
					printf("\nÛ           |");
					printf("\nÛ");
					printf("\nÛ");
					printf("\nÛ");
					printf("\nÛ");
					break;
				case 5:
					printf("\nÛßßßßßßßßßßßß");
					printf("\nÛ          ***");
					printf("\nÛ         *   *");
					printf("\nÛ          ***");
					printf("\nÛ          /|\\");
					printf("\nÛ         / | \\");
					printf("\nÛ           |");
					printf("\nÛ");
					printf("\nÛ");
					printf("\nÛ");
					printf("\nÛ");
					break;
				case 6:
					printf("\nÛßßßßßßßßßßßß");
					printf("\nÛ          ***");
					printf("\nÛ         *   *");
					printf("\nÛ          ***");
					printf("\nÛ          /|\\");
					printf("\nÛ         / | \\");
					printf("\nÛ           |");
					printf("\nÛ          /");
					printf("\nÛ          ");
					printf("\nÛ");
					printf("\nÛ");
					break;
				case 7:
					printf("\nÛßßßßßßßßßßßß");
					printf("\nÛ          ***");
					printf("\nÛ         *   *");
					printf("\nÛ          ***");
					printf("\nÛ          /|\\");
					printf("\nÛ         / | \\");
					printf("\nÛ           |");
					printf("\nÛ          /");
					printf("\nÛ         /");
					printf("\nÛ");
					printf("\nÛ");
					break;
				case 8:
					printf("\nÛßßßßßßßßßßßß");
					printf("\nÛ          ***");
					printf("\nÛ         *   *");
					printf("\nÛ          ***");
					printf("\nÛ          /|\\");
					printf("\nÛ         / | \\");
					printf("\nÛ           |");
					printf("\nÛ          / \\");
					printf("\nÛ         /     ");
					printf("\nÛ");
					printf("\nÛ");
					break;
				case 9:
					printf("\nÛßßßßßßßßßßßß");
					printf("\nÛ          ***");
					printf("\nÛ         *   *");
					printf("\nÛ          ***");
					printf("\nÛ          /|\\");
					printf("\nÛ         / | \\");
					printf("\nÛ           |");
					printf("\nÛ          / \\");
					printf("\nÛ         /   \\");
					printf("\nÛ");
					printf("\nÛ");
					break;
				default:
					printf("\nÛßßßßßßßßßßßß");
					printf("\nÛ");
					printf("\nÛ");
					printf("\nÛ");
					printf("\nÛ");
					printf("\nÛ");
					printf("\nÛ");
					printf("\nÛ");
					printf("\nÛ");
					printf("\nÛ");
					printf("\nÛ");
					break;
	}
            printf("\n");
            indice_tentativi++;
            i--;
            for(x=0;x<grandezza_parola;x++)
                printf("%c ",parola[x]);
        }

        for(x=0;x<grandezza_parola;x++){
            if(parola[x]==parola_indovinare[x])
                controllo2g++;
        }

        if(controllo2g==grandezza_parola)
            break;
    }
}




void fine(){
    printf("\n\nGioco finito!");          //fine gioco
    system("\npause");
}


#endif // IMPICCATO_H_INCLUDED
