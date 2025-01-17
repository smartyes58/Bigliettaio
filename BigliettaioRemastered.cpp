//
// Autrice >> Martina Brembilla
//

// Libs
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <math.h>
#include <windows.h>
#include <unistd.h>

// Prezzi
#define EVENT1_PRICE_TOTAL		34.50f
#define EVENT1_PRICE_O65		26.35f
#define EVENT1_PRICE_U14		18.65f

#define EVENT2_PRICE_TOTAL		50.75f
#define EVENT2_PRICE_O65		44.59f
#define EVENT2_PRICE_U14		39.28f

#define EVENT3_PRICE_TOTAL		75.15f
#define EVENT3_PRICE_O65		58.72f
#define EVENT3_PRICE_U14		45.99f

#define EVENT4_PRICE_TOTAL		108.78f
#define EVENT4_PRICE_O65		84.90f
#define EVENT4_PRICE_U14		76.98f

#define ID_OPERATORE			1234
#define PASSWORD				1234

// Globali
float totalIncomings = 0.0f;
float totalProfits = 0.0f;
int totalSoldTickets;

// Utilita'

void requestTicketsAmounts(int* qFullSize, int* qO65, int* qU14) {
	printf("\n");
	
	printf("Biglietti interi \\> ");
	scanf("%d", qFullSize);
	
	printf("Biglietti Over 65 \\> ");
	scanf("%d", qO65);
	
	printf("Biglietti Under 14 \\> ");
	scanf("%d", qU14);
	
	system("cls");
}

float calculateProfits(int q1, int q2, int q3, float p1, float p2, float p3) {
	float fullProfits = q1 * p1 * 15 /100;
	float over65Profits = q2 * p2 * 12 / 100;
	float under14Profits = q3 * p3 * 6 /100;
	
	return fullProfits + over65Profits + under14Profits;
}

// Varie

void printTicketsHead() {
	printf("************************************************************************************************************************\n");
	printf("************************************************************************************************************************\n");
	printf("****                                                                                                                ****\n");
	printf("****                                                                                                                ****\n");
	printf("****                                                                                                                ****\n");
	printf("****          ************  ****  ************  ****        ****  ************  ************  ************          ****\n");
	printf("****          ************  ****  ************  ****        ****  ************  ************  ************          ****\n");
	printf("****              ****      ****  ****          ****    ****      ****              ****      ****                  ****\n");
	printf("****              ****      ****  ****          ****    ****      ****              ****      ****                  ****\n");
	printf("****              ****      ****  ****          ********          ********          ****      ************          ****\n");
	printf("****              ****      ****  ****          ********          ********          ****      ************          ****\n");
	printf("****              ****      ****  ****          ****    ****      ****              ****              ****          ****\n");
	printf("****              ****      ****  ****          ****    ****      ****              ****              ****          ****\n");
	printf("****              ****      ****  ***********   ****        ****  ************      ****      ************          ****\n");
	printf("****              ****      ****  ***********   ****        ****  ************      ****      ************          ****\n");
	printf("****                                                                                                                ****\n");
	printf("****                                                                                                                ****\n");
	printf("****                                                                                                                ****\n");
	printf("************************************************************************************************************************\n");
	printf("************************************************************************************************************************\n");
}

void printEventsTitleCard() {
	printf("******************************************************************\n");
	printf("******************************************************************\n");
	printf("**                                                              **\n");
	printf("**         ******  **  **  ******  **    **  ******  **         **\n");
	printf("**         **      **  **  **      ****  **    **    **         **\n");
	printf("**         ****    **  **  ****    **  ****    **    **         **\n");
	printf("**         **      **  **  **      **    **    **    **         **\n");
	printf("**         ******    **    ******  **    **    **    **         **\n");
	printf("**                                                              **\n");
	printf("******************************************************************\n");
	printf("******************************************************************\n");
}

void printEvents() {
	printf(" _________________         _________________         _________________         _________________\n");
	printf("|                 |       |                 |       |                 |       |                 |\n");
	printf("|     KID YUGI    |       |   LANA DEL REY  |       |    MARRACASH    |       |   KANYE WEST    |\n");
	printf("|                 |       |                 |       |                 |       |                 |\n");
	printf("|     PREMI 1     |       |     PREMI 2     |       |     PREMI 3     |       |     PREMI 4     |\n");
	printf("|_________________|       |_________________|       |_________________|       |_________________|\n");
}

// Eventi (testi)

void printEvent1Head() {
	printf("********************************************************************************\n");
	printf("********************************************************************************\n");
	printf("**                                                                            **\n");
	printf("**         ******  **  **  ******  **    **  ******  ******        **         **\n");
	printf("**         **      **  **  **      ****  **    **    **  **      ****         **\n");
	printf("**         ****    **  **  ****    **  ****    **    **  **        **         **\n");
	printf("**         **      **  **  **      **    **    **    **  **        **         **\n");
	printf("**         ******    **    ******  **    **    **    ******      ******       **\n");
	printf("**                                                                            **\n");
	printf("********************************************************************************\n");
	printf("********************************************************************************\n");
}

void printEvent1Dates() {
	printf(" ______________________              ______________________              ______________________              ______________________ \n");
	printf("|                      |            |                      |            |                      |            |                      |\n");
	printf("|        MILANO        |            |        LIVORNO       |            |         ROMA         |            |        ASSAGO        |\n");
	printf("|                      |            |                      |            |                      |            |                      |\n");
	printf("|       22/11/24       |            |       07/12/24       |            |       18/12/24       |            |       02/01/25       |\n");
	printf("|                      |            |                      |            |                      |            |                      |\n");
	printf("|       PREMI 1        |            |       PREMI 2        |            |       PREMI 3        |            |       PREMI 4        |\n");
	printf("|______________________|            |______________________|            |______________________|            |______________________|\n");
}

void printEvent1Prices() {
	printf(" ______________________                ______________________                ______________________\n");
	printf("|                      |              |                      |              |                      |\n");
	printf("|   BIGLIETTO INTERO   |              |  BIGLIETTO UNDER 14  |              |   BIGLIETTO OVER 65  |\n");
	printf("|                      |              |                      |              |                      |\n");
	printf("|       $ 34.50        |              |       $ 26.35        |              |       $ 18.65        |\n");
	printf("|______________________|              |______________________|              |______________________|\n");
}

void printEvent2Head() {
	printf("********************************************************************************\n");
	printf("********************************************************************************\n");
	printf("**                                                                            **\n");
	printf("**         ******  **  **  ******  **    **  ******  ******      ******       **\n");
	printf("**         **      **  **  **      ****  **    **    **  **          **       **\n");
	printf("**         ****    **  **  ****    **  ****    **    **  **      ******       **\n");
	printf("**         **      **  **  **      **    **    **    **  **      **           **\n");
	printf("**         ******    **    ******  **    **    **    ******      ******       **\n");
	printf("**                                                                            **\n");
	printf("********************************************************************************\n");
	printf("********************************************************************************\n");
}

void printEvent2Dates() {
	printf(" ______________________              ______________________              ______________________              ______________________\n");
	printf("|                      |            |                      |            |                      |            |                      |\n");
	printf("|       CARDIFF        |            |       GLASGOW        |            |       DUBLINO        |            |       WEMBLEY        |\n");
	printf("|                      |            |                      |            |                      |            |                      |\n");
	printf("|       10/11/24       |            |       28/12/24       |            |       04/01/25       |            |       15/01/25       |\n");
	printf("|                      |            |                      |            |                      |            |                      |\n");
	printf("|       PREMI 1        |            |       PREMI 2        |            |       PREMI 3        |            |       PREMI 4        |\n");
	printf("|______________________|            |______________________|            |______________________|            |______________________|\n");
}

void printEvent2Prices() {
	printf(" ______________________                ______________________                ______________________\n");
	printf("|                      |              |                      |              |                      |\n");
	printf("|   BIGLIETTO INTERO   |              |  BIGLIETTO UNDER 14  |              |   BIGLIETTO OVER 65  |\n");
	printf("|                      |              |                      |              |                      |\n");
	printf("|       $ 50.75        |              |       $ 44.59        |              |       $ 39.28        |\n");
	printf("|______________________|              |______________________|              |______________________|\n");	
}

void printEvent3Head() {
	printf("********************************************************************************\n");
	printf("********************************************************************************\n");
	printf("**                                                                            **\n");
	printf("**         ******  **  **  ******  **    **  ******  ******      ******       **\n");
	printf("**         **      **  **  **      ****  **    **    **  **          **       **\n");
	printf("**         ****    **  **  ****    **  ****    **    **  **      ******       **\n");
	printf("**         **      **  **  **      **    **    **    **  **          **       **\n");
	printf("**         ******    **    ******  **    **    **    ******      ******       **\n");
	printf("**                                                                            **\n");
	printf("********************************************************************************\n");
	printf("********************************************************************************\n");
}

void printEvent3Dates() {
	printf(" ______________________              ______________________              ______________________              ______________________ \n");
	printf("|                      |            |                      |            |                      |            |                      |\n");
	printf("|        TORINO        |            |        MILANO        |            |       BIBIONE        |            |        NAPOLI        |\n");
	printf("|                      |            |                      |            |                      |            |                      |\n");
	printf("|       30/11/24       |            |       12/12/24       |            |       18/01/25       |            |       03/02/25       |\n");
	printf("|                      |            |                      |            |                      |            |                      |\n");
	printf("|       PREMI 1        |            |       PREMI 2        |            |       PREMI 3        |            |       PREMI 4        |\n");
	printf("|______________________|            |______________________|            |______________________|            |______________________|\n");
			
}

void printEvent3Prices() {
	printf(" ______________________                ______________________                ______________________\n");
	printf("|                      |              |                      |              |                      |\n");
	printf("|   BIGLIETTO INTERO   |              |  BIGLIETTO UNDER 14  |              |   BIGLIETTO OVER 65  |\n");
	printf("|                      |              |                      |              |                      |\n");
	printf("|       $ 75.15        |              |       $ 58.72        |              |       $ 45.99        |\n");
	printf("|______________________|              |______________________|              |______________________|\n");
				
}

void printEvent4Head() {
	printf("********************************************************************************\n");
	printf("********************************************************************************\n");
	printf("**                                                                            **\n");
	printf("**         ******  **  **  ******  **    **  ******  ******      **  **       **\n");
	printf("**         **      **  **  **      ****  **    **    **  **      **  **       **\n");
	printf("**         ****    **  **  ****    **  ****    **    **  **      ******       **\n");
	printf("**         **      **  **  **      **    **    **    **  **          **       **\n");
	printf("**         ******    **    ******  **    **    **    ******          **       **\n");
	printf("**                                                                            **\n");
	printf("********************************************************************************\n");
	printf("********************************************************************************\n");
}

void printEvent4Dates() {
	printf(" ______________________              ______________________              ______________________              ______________________ \n");
	printf("|                      |            |                      |            |                      |            |                      |\n");
	printf("|      LOS ANGELES     |            |       NEW YORK       |            |        DALLAS        |            |         ROMA         |\n");
	printf("|                      |            |                      |            |                      |            |                      |\n");
	printf("|       16/10/24       |            |       14/12/24       |            |       26/12/25       |            |       01/01/25       |\n");
	printf("|                      |            |                      |            |                      |            |                      |\n");
	printf("|       PREMI 1        |            |       PREMI 2        |            |       PREMI 3        |            |       PREMI 4        |\n");
	printf("|______________________|            |______________________|            |______________________|            |______________________|\n");
			
}

void printEvent4Prices() {
	printf(" ______________________                ______________________                ______________________ \n");
	printf("|                      |              |                      |              |                      |\n");
	printf("|   BIGLIETTO INTERO   |              |  BIGLIETTO UNDER 14  |              |   BIGLIETTO OVER 65  |\n");
	printf("|                      |              |                      |              |                      |\n");
	printf("|       $ 108.78       |              |       $ 84.90        |              |       $ 76.98        |\n");
	printf("|______________________|              |______________________|              |______________________|\n");
				
}

// Pagamento titolo

void printPaymentTitle() {
	printf("********************************************************************************\n");
	printf("********************************************************************************\n");
	printf("**                                                                            **\n");
	printf("**        ******  ******  **  **  **      **  ******  **    **  ******        **\n");
	printf("**        **  **  **  **  **  **  ****  ****  **      ****  **    **          **\n");
	printf("**        ******  ******    **    **  **  **  ****    **  ****    **          **\n");
	printf("**        **      **  **    **    **      **  **      **    **    **          **\n");
	printf("**        **      **  **    **    **      **  ******  **    **    **          **\n");
	printf("**                                                                            **\n");
	printf("********************************************************************************\n");
	printf("********************************************************************************\n");
}

void printPaymentMethods() {
	printf("                 **                                       \n");
	printf("             **********          ************************ \n");
	printf("             **  **              **                    ** \n");
	printf("             **  **              **  **        ********** \n");
	printf("             **  **              **                    ** \n");
	printf("             **********          **                    ** \n");
	printf("                 **  **          ************************ \n");
	printf("                 **  **          **                    ** \n");
	printf("                 **  **          **                    ** \n");
	printf("             **********          ************************ \n");
	printf("                 **                                       \n");
	printf("                                                          \n");
	printf("       PAGAMENTO IN CONTANTI         PAGAMENTO DIGITALE   \n");
	printf("              PREMI 1                     PREMI 2         \n");
}

void printCashPrompt() {
	printf(" _________________________ \n");
	printf("|                         |\n");
	printf("|                         |\n");
	printf("|    INSERIRE CONTANTI    |\n");
	printf("|                         |\n");
	printf("|_________________________|\n");
	printf("|                         |\n");
	printf("|        __________       |\n");
	printf("|       |__________|      |\n");
	printf("|                         |\n");
	printf("|_________________________|\n");
}

// Menu speciali

void printStarterMenu() {
	printf("**********************************                  **********************************\n");
	printf("**********************************                  **********************************\n");
	printf("**                              **                  **                              **\n");
	printf("**              **              **                  **           **********         **\n");
	printf("**            **  **            **                  **         **          **       **\n");
	printf("**            **  **            **                  **         **          **       **\n");
	printf("**          **********          **                  **         **          **       **\n");
	printf("**          **      **          **                  **           **********         **\n");
	printf("**          **      **          **                  **         **          **       **\n");
	printf("**          **********          **                  **        **            **      **\n");
	printf("**                              **                  **                              **\n");
	printf("**        AREA OPERATORE        **                  **           AREA UTENTE        **\n");
	printf("**               0              **                  **                1             **\n");
	printf("**                              **                  **                              **\n");
	printf("**********************************                  **********************************\n");
	printf("**********************************                  **********************************\n");
}

void printEarnings() {
	printf("\n");
	printf(" __________________________                     __________________________                     __________________________\n");
	printf("|                          |                   |                          |                   |                          |\n");
	printf("|     BIGLIETTI VENDUTI    |                   |      ENTRATE TOTALI      |                   |      PROFITTI TOTALI     |\n");
	printf("|__________________________|                   |__________________________|                   |__________________________|\n");
	printf("|                          |                   |                          |                   |                          |\n");
	printf("|        %010d        |                   |      %012.2f $      |                   |      %012.2f $      |\n", totalSoldTickets, totalIncomings, totalProfits);
	printf("|__________________________|                   |__________________________|                   |__________________________|\n");
}

// Menu pagamento

int launchPaymentMenu(float total) {
	printPaymentTitle();
	printf("\n\n");
	printPaymentMethods();
	
	int selectedMethod = 0;
	do {
		scanf("%d", &selectedMethod);
	} while (selectedMethod < 0 || selectedMethod > 2);
	
	if (selectedMethod == 0) {
		return -1;
	}
	
	if (selectedMethod == 1) {
		printCashPrompt();
		printf("\nPREZZO TOTALE: %.2f\n", total);
		
		// Chiedi i contanti
		float contanti = .0f;
		scanf("%f", &contanti);
					
		if (contanti < total) {
			do {
				printf("\nPAGAMENTO NON RIUSCITO! INSERIRE CONTANTI NUOVAMENTE: ");
				scanf("%f", &contanti);
			} 
			while (contanti < total);
		}
		
		if (contanti > total) {
			float resto = contanti - total;
			printf("\nRESTO DA EROGARE: %.2f", resto);
		}
		
		printf("\nPAGAMENTO ANDATO A BUON FINE!");
		sleep(4);
	}
	else if (selectedMethod == 2) {
		printf("\nPAGAMENTO ANDATO A BUON FINE!");
	}
	
	return 0;
}

// Operatore

int launchOperatorMenu() {
	int id = 0, password = 0;
	
	// Chiedi ID
	system("cls");
	printf("INSERIRE NUMERO DI IDENTIFICAZIONE: ");
	scanf("%d", &id);
	
	if (id != ID_OPERATORE) {
		do {
			printf("ERRORE! INSERIRE NUMERO DI IDENTIFICAZIONE: ");
			scanf("%d", &id);
		} while (id != ID_OPERATORE);
	}
	
	printf("INSERIRE PASSWORD: ");
	scanf("%d", &password);
	
	if (password != PASSWORD) {
		do {
			printf("ERRORE! INSERIRE PASSWORD: ");
			scanf("%d", &password);
		} while (password != PASSWORD);
	}
	
	char IBAN[256];
	printf("INSERIRE IBAN: ");
	scanf("%s", IBAN);
	
	printEarnings();	
	
	printf("\nPremi 0 per uscire, 1 per tornare al menu principale...");
	
	int key;
	do {
		key = _getch();

		if (key == '1') {
			break;
		}
		else if (key == '0') {
			return -2;
		}
	} while (key != 1 && key != 0);
	
	return -1; // Torna al menu
}

// Evento 1

int event1RequestData() {
	// Chiedi data
	printEvent1Dates();
	printf("\n");
	
	int selectedDate = 0;
	do {
		printf("Selezione/> ");
		scanf("%d", &selectedDate);
	} while (selectedDate < 0 || selectedDate > 4);
	
	if (selectedDate == 0) {
		return -1;
	}
	
	system("cls");
	return 0;
}

void event1RequestTicketsAmounts(int* qFullSize, int* qO65, int* qU14) {
	// Chiedi tickets
	printEvent1Prices();
	requestTicketsAmounts(qFullSize, qO65, qU14);
}

int launchEvent1Menu() {
	// Intestazione
	printEvent1Head();
	printf("\n");
	
	// Quantità
	int qFullSize, qO65, qU14;
	
	int rDStatus = event1RequestData();
	if (rDStatus == -1) {
		return -1; // Torna indietro
	}
	
	event1RequestTicketsAmounts(&qFullSize, &qO65, &qU14);
	
	// Calcolo totale
	float total = (qFullSize * EVENT1_PRICE_TOTAL) + (qO65 * EVENT1_PRICE_O65) + (qU14 * EVENT1_PRICE_U14);
	float profits = calculateProfits(qFullSize, qO65, qU14, EVENT1_PRICE_TOTAL, EVENT1_PRICE_O65, EVENT1_PRICE_U14);
	
	// Pagamento
	int pPStatus = launchPaymentMenu(total);
	if (pPStatus == -1) {
		return -1; // Torna indietro
	}
	
	totalIncomings += total;
	totalProfits += profits;
	totalSoldTickets += qFullSize + qO65 + qU14;
	
	return -1; // Torna al menu principale
}

// Evento 2

int event2RequestData() {
	// Chiedi data
	printEvent2Dates();
	printf("\n");
	
	int selectedDate = 0;
	do {
		printf("Selezione/> ");
		scanf("%d", &selectedDate);
	} while (selectedDate < 0 || selectedDate > 4);
	
	if (selectedDate == 0) {
		return -1;
	}
	
	system("cls");
	return 0;
}

void event2RequestTicketsAmounts(int* qFullSize, int* qO65, int* qU14) {
	// Chiedi tickets
	printEvent2Prices();
	requestTicketsAmounts(qFullSize, qO65, qU14);
}

int launchEvent2Menu() {
	// Intestazione
	printEvent2Head();
	printf("\n");
	
	// Quantità
	int qFullSize, qO65, qU14;
	
	int rDStatus = event2RequestData();
	if (rDStatus == -1) {
		return -1; // Torna indietro
	}
	
	event2RequestTicketsAmounts(&qFullSize, &qO65, &qU14);
	
	// Calcolo totale
	float total = (qFullSize * EVENT2_PRICE_TOTAL) + (qO65 * EVENT2_PRICE_O65) + (qU14 * EVENT2_PRICE_U14);
	float profits = calculateProfits(qFullSize, qO65, qU14, EVENT2_PRICE_TOTAL, EVENT2_PRICE_O65, EVENT2_PRICE_U14);
	
	// Pagamento
	int pPStatus = launchPaymentMenu(total);
	if (pPStatus == -1) {
		return -1; // Torna indietro
	}
	
	totalIncomings += total;
	totalProfits += profits;
	totalSoldTickets += qFullSize + qO65 + qU14;
	
	return -1; // Torna al menu principale
}

// Evento 3

int event3RequestData() {
	// Chiedi data
	printEvent3Dates();
	printf("\n");
	
	int selectedDate = 0;
	do {
		printf("Selezione/> ");
		scanf("%d", &selectedDate);
	} while (selectedDate < 0 || selectedDate > 4);
	
	if (selectedDate == 0) {
		return -1;
	}
	
	system("cls");
	return 0;
}

void event3RequestTicketsAmounts(int* qFullSize, int* qO65, int* qU14) {
	// Chiedi tickets
	printEvent3Prices();
	requestTicketsAmounts(qFullSize, qO65, qU14);
}

int launchEvent3Menu() {
	// Intestazione
	printEvent3Head();
	printf("\n");
	
	// Quantità
	int qFullSize, qO65, qU14;
	
	int rDStatus = event3RequestData();
	if (rDStatus == -1) {
		return -1; // Torna indietro
	}
	
	event3RequestTicketsAmounts(&qFullSize, &qO65, &qU14);
	
	// Calcolo totale
	float total = (qFullSize * EVENT3_PRICE_TOTAL) + (qO65 * EVENT3_PRICE_O65) + (qU14 * EVENT3_PRICE_U14);
	float profits = calculateProfits(qFullSize, qO65, qU14, EVENT2_PRICE_TOTAL, EVENT2_PRICE_O65, EVENT2_PRICE_U14);
	
	// Pagamento
	int pPStatus = launchPaymentMenu(total);
	if (pPStatus == -1) {
		return -1; // Torna indietro
	}
	
	totalIncomings += total;
	totalProfits += profits;
	totalSoldTickets += qFullSize + qO65 + qU14;
	
	return -1; // Torna al menu principale
}

// Evento 4

int event4RequestData() {
	// Chiedi data
	printEvent4Dates();
	printf("\n");
	
	int selectedDate = 0;
	do {
		printf("Selezione/> ");
		scanf("%d", &selectedDate);
	} while (selectedDate < 0 || selectedDate > 4);
	
	if (selectedDate == 0) {
		return -1;
	}
	
	system("cls");
	return 0;
}

void event4RequestTicketsAmounts(int* qFullSize, int* qO65, int* qU14) {
	// Chiedi tickets
	printEvent4Prices();
	requestTicketsAmounts(qFullSize, qO65, qU14);
}

int launchEvent4Menu() {
	// Intestazione
	printEvent4Head();
	printf("\n");
	
	// Quantità
	int qFullSize, qO65, qU14;
	
	int rDStatus = event4RequestData();
	if (rDStatus == -1) {
		return -1; // Torna indietro
	}
	
	event4RequestTicketsAmounts(&qFullSize, &qO65, &qU14);
	
	// Calcolo totale
	float total = (qFullSize * EVENT4_PRICE_TOTAL) + (qO65 * EVENT4_PRICE_O65) + (qU14 * EVENT4_PRICE_U14);
	float profits = calculateProfits(qFullSize, qO65, qU14, EVENT2_PRICE_TOTAL, EVENT2_PRICE_O65, EVENT2_PRICE_U14);
	
	// Pagamento
	int pPStatus = launchPaymentMenu(total);
	if (pPStatus == -1) {
		return -1; // Torna indietro
	}
	
	totalIncomings += total;
	totalProfits += profits;
	totalSoldTickets += qFullSize + qO65 + qU14;
	
	return -1; // Torna al menu principale
}

// Routine

int manageInput(int selectedEvent) {
	switch (selectedEvent) {
		case 0: {
			return -1;
		}
		
		case 1: {
			int event1MenuStatus = launchEvent1Menu();
			
			if (event1MenuStatus == -1) {
				return -1;
			}
			
			return -2;
		}
		
		case 2: {
			int event2MenuStatus = launchEvent2Menu();
			
			if (event2MenuStatus == -1) {
				return -1;
			}
			
			return -2;
		}
		
		case 3: {
			int event3MenuStatus = launchEvent3Menu();
			
			if (event3MenuStatus == -1) {
				return -1;
			}
			
			return -2;
		}
		
		case 4: {
			int event4MenuStatus = launchEvent4Menu();
			
			if (event4MenuStatus == -1) {
				return -1;
			}
			
			return -2;
		}
	}
	
	return -1;
}

int launchUserMenu() {
	// Scrive intestazione		
	printTicketsHead();
	printf("\n\n\n");
	printEventsTitleCard();
	
	// Eventi
	printf("\n\n");
	printEvents();
	printf("\n");
	
	// Scegli evento
	int selectedEvent = 0;
	
	do {
		printf("Selezione \\> ");
		scanf("%d", &selectedEvent);
	} while (selectedEvent > 4 || selectedEvent < 0);
	
	system("cls");
	int managingResult = manageInput(selectedEvent);
		
	if (managingResult == -2) {
		return -2;
	}
	
	return -1;
}

int main() {
	while (1) {
		system("cls");
		printStarterMenu();
		
		int operation;
		do {
			printf("Selezione \\> ");
			scanf("%d", &operation);
		} while (operation < 0 && operation > 1);
		
		system("cls");
		
		if (operation == 1) {
			int userMenuResult = launchUserMenu();
			
			if (userMenuResult == -2) {
				return 0;
			}
		}
		else {
			int operatorMenuResult = launchOperatorMenu();
			
			if (operatorMenuResult == -2) {
				return 0;
			}
		}
	}
	
	// Fine
	system("cls");
	return 0;
}
