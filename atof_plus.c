// Funkcja dzia�a identycznie jak atof, z t� r�nic�, �e reaguje na dowony znak rozdzielaj�cy cze�� ca�kowit� od u�amkowej ver 1.0
#include <stdio.h>
#include <stdlib.h>

double atof_plus(char kwota[]);
int main()
{
	double zmienna;
	char test[] = "5678*34";
	zmienna = atof_plus(test);
	printf("liczba = %s", test);
	
	
	


	return 0;
}


double atof_plus(char kwota[]) 
{
	int ilosc_znakow = strlen(kwota); //d�ugo�� �a�cucha ( kwota)
	
	for (int a = 0; a < ilosc_znakow; a++) // p�tla wyszukuj�ca znak inny ni� cyfra
	{
		int znak = kwota[a];
		
		if (znak < 48 || znak > 57)
		{
			kwota[a] = '.'; // podmiana znaku dziesi�tnego na kropk�
		}
	}

	double kwota_po_zamianie = atof(kwota); //warto�� wynikowa
	return kwota_po_zamianie;
}