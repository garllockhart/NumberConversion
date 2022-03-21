/*
File Name		: welcome.cpp
Description		: 
Author			: Garly Nugraha
Create at		: 20/03/2022
*/

#include "welcome.h"

int Welcome()
{
	int Menu;
	
	printf("|==================================================|\n");
	printf("|                  NUMBER CONVERSION               |\n");
	printf("|==================================================|\n");
	printf("|1. Decimal to Biner                               |\n");
	printf("|2. Decimal to Oktal                               |\n");
	printf("|3. Decimal to Hexadecimal                         |\n");
	printf("|4. Biner to Decimal                               |\n");
	printf("|==================================================|\n");
	printf("|     Copyright 2021 - Develop by Garllockhart     |\n");
	printf("|==================================================|\n");
    
    printf("\n\n");
    
    printf("Select Menu : ");
	scanf("%d", &Menu);
	system("cls");
	
	switch (Menu){
		case 1:
			DecimalToBinary();
			break;
		case 2:
			DecimalToOctal();
			break;
		case 3:
			DecimalToHexadecimal();
			break;
		case 4:
			BinaryToDecimal();
	 	default:
	 		printf("ERROR : Sorry I don't know the answer to this one!!!\n");
	 		printf("Press Any Key to continue . . .");
	 		getche();
	 		
	 		system("cls");
	 		
	 		/* Call Modul Welcome */
			Welcome();
			break;
	}
}
