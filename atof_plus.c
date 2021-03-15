// Funkcja dzia³a identycznie jak atof, z t¹ ró¿nic¹, ¿e reaguje na dowony znak rozdzielaj¹cy czeœæ ca³kowit¹ od u³amkowej ver 1.0
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
	int ilosc_znakow = strlen(kwota); //d³ugoœæ ³añcucha ( kwota)
	
	for (int a = 0; a < ilosc_znakow; a++) // pêtla wyszukuj¹ca znak inny ni¿ cyfra
	{
		int znak = kwota[a];
		
		if (znak < 48 || znak > 57)
		{
			kwota[a] = '.'; // podmiana znaku dziesiêtnego na kropkê
		}
	}

	double kwota_po_zamianie = atof(kwota); //wartoœæ wynikowa
	return kwota_po_zamianie;
}