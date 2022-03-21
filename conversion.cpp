/*
File Name		: conversion.cpp
Description		: 
Author			: Garly Nugraha
Create at		: 20/03/2022
*/

#include "conversion.h"

void DecimalToBinary(){
	int Input, Vol, Index, NumberOfValue, Remnant, I;
	stack DataStack;
	
	Init(&DataStack);
	printf("Enter Decimal Number = ");
	scanf("%d", &Input);
	
	system("cls");
	
	NumberOfValue = Input;
	
	for(I = 1; NumberOfValue > 0; NumberOfValue = NumberOfValue / 2, I++) {
		Vol = I;
		Remnant = NumberOfValue % 2;
		
		printf("%d / 2 = %d, Sisa Bagi %d", NumberOfValue, NumberOfValue / 2, Remnant);
		printf("\n");
		
		Push(Remnant, &DataStack);
	}
	
	printf("\n");
	printf("The result of converting a decimal number %d to an binary number is ", Input);
	
	for(Index = Vol; Index > 0; Index--) {
		printf("%d", Pop(&DataStack));
	}
	
	printf("\n");
	printf("Press Any Key to continue . . ."); 
		
	getch();
			
	system("cls");
		
	Welcome();
}

void DecimalToOctal() {
	int Input, Vol, Index, NumberOfValue, Remnant, I;
	stack DataStack;
	
	Init(&DataStack);
 	printf("Enter Decimal Number = ");
	scanf("%d", &Input);
	
	system("cls");
	
	NumberOfValue = Input;
	
	for(I = 1; NumberOfValue > 0; NumberOfValue = NumberOfValue / 8, I++) {
		Vol = I;
		Remnant = NumberOfValue % 8;
		
		printf("%d / 8 = %d, Sisa Bagi = %d", NumberOfValue, NumberOfValue / 8, Remnant);
		printf("\n");
		
		Push(Remnant, &DataStack);
 	}
 	
 	printf("\n");
	printf("The result of converting a decimal number %d to an octal number is ", Input);
	
	for(Index = Vol; Index > 0; Index--) {
		printf("%d", Pop(&DataStack));
 	}
 	
 	printf("\n");
	printf("Press Any Key to continue . . ."); 
		
	getch();
			
	system("cls");
		
	Welcome();
}

void DecimalToHexadecimal() {
	int Input, Vol, Index, NumberOfValue, Remnant, I, FinalValue;
	stack DataStack;
	
	Init(&DataStack);
	printf("Enter Decimal Number = ");
	scanf("%d", &Input);
	
	system("cls");
	
	NumberOfValue = Input;
	
	for(I = 1; NumberOfValue > 0; NumberOfValue = NumberOfValue / 16, I++) {
		Vol = I;
		Remnant = NumberOfValue % 16;
		
		printf("%d / 16 = %d, Sisa Bagi = %d", NumberOfValue, NumberOfValue / 16, Remnant);
		printf("\n");
		
		Push(Remnant, &DataStack);
	}
	
	printf("\n");
	printf("The result of converting a decimal number %d to an hexadecimal number is ", Input);
	 
	for(Index = Vol; Index > 0; Index--) {
		FinalValue = Pop(&DataStack);
		
		if(FinalValue <= 9) {
 			printf("%d", FinalValue);
		} else if(FinalValue == 10) {
 			printf("A");
		} else if(FinalValue == 11) {
			printf("B");
		} else if(FinalValue == 12) {
			printf("C");
		} else if(FinalValue == 13) {
 			printf("D");
		} else if(FinalValue == 14) {
 			printf("E");
		} else if(FinalValue == 15) {
 			printf("F");
		}
	}
	 
	printf("\n");
	printf("Press Any Key to continue . . ."); 
		
	getch();
			
	system("cls");
		
	Welcome();
}

void BinaryToDecimal() {
	int Input, Index, NumberOfValue = 0, Remnant, Total, FixNumber = 1;
	stack DataStack;
	
	system("cls");
	
	Init(&DataStack);
	printf("Enter Decimal Number = ");
	scanf("%d", &Input);
	
	NumberOfValue = Input;
	
	while(NumberOfValue != 0) {
		Remnant = NumberOfValue % 10;
		Total = Total + Remnant * FixNumber;
		
		Push(Total, &DataStack);
		
		NumberOfValue = NumberOfValue / 10;
		FixNumber = FixNumber * 2;
	}
	
	printf("\n");
	printf("The result of converting a binary number %d to an decimal number is ", Input);
	
	for(Index = 1; Index > 0; Index--) {
		printf("%d", Pop(&DataStack));
 	}
 	
 	printf("\n");
	printf("Press Any Key to continue . . ."); 
		
	getch();
			
	system("cls");
	
	Welcome();
}

void OctalToDecimal() {
	int Input, Index, NumberOfValue = 0, Remnant, Total, FixNumber = 1;
	stack DataStack;
	
	system("cls");
	
	Init(&DataStack);
	printf("Enter Decimal Number = ");
	scanf("%d", &Input);
	
	NumberOfValue = Input;
	
	while(NumberOfValue != 0) {
		Remnant = NumberOfValue % 10;
		Total = Total + Remnant * FixNumber;
		
		Push(Total, &DataStack);
		
		NumberOfValue = NumberOfValue / 10;
		FixNumber = FixNumber * 8;
	}
	
	printf("\n");
	printf("The result of converting a binary number %d to an decimal number is ", Input);
	
	for(Index = 1; Index > 0; Index--) {
		printf("%d", Pop(&DataStack));
 	}
 	
 	printf("\n");
	printf("Press Any Key to continue . . ."); 
		
	getch();
			
	system("cls");
	
	Welcome();
}
