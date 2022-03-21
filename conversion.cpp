/*
File Name		: conversion.cpp
Description		: 
Author			: Garly Nugraha
Create at		: 20/03/2022
*/

#include "conversion.h"

void DecimalToBinary(){
	int Input, Vol, Index, NumberOfValue, Value, I, Number, Index2;
	stack DataStack;
	
	Init(&DataStack);
	printf("Enter Decimal Number = ");
	scanf("%d", &Input);
	
	system("cls");
	
	for(I = 1, NumberOfValue = Input; NumberOfValue > 0; NumberOfValue = NumberOfValue / 2, I++, Value != 0) {
		Vol = I;
		Value = NumberOfValue % 2;
		
		printf("%d / 2 = %d, Sisa Bagi %d", NumberOfValue, NumberOfValue / 2, Value);
		printf("\n");
		
		Number += Value * Index2;
		Index2 *= 10;
		
		Push(Value, &DataStack);
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
	int Input, Vol, Index, NumberOfValue, Value, I, Number, Index2;
	stack DataStack;
	
	Init(&DataStack);
 	printf("Enter Decimal Number = ");
	scanf("%d", &Input);
	
	system("cls");
	
	for(I = 1, NumberOfValue = Input; NumberOfValue > 0; NumberOfValue = NumberOfValue / 8, I++) {
		Vol = I;
		Value = NumberOfValue % 8;
		
		printf("%d / 8 = %d, Sisa Bagi = %d", NumberOfValue, NumberOfValue / 8, Value);
		printf("\n");
		
		Number += Value * Index2;
		Index2 *= 10;
		
		Push(Value, &DataStack);
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
	int Input, Vol, Index, NumberOfValue, Value, I, FinalValue, Number, Index2;
	stack DataStack;
	
	system("cls");
	
	Init(&DataStack);
	printf("Enter Decimal Number = ");
	scanf("%d", &Input);
	
	for(I = 1, NumberOfValue = Input; NumberOfValue > 0; NumberOfValue = NumberOfValue / 16, I++) {
		Vol = I;
		Value = NumberOfValue % 16;
		
		printf("%d / 16 = %d, Sisa Bagi = %d", NumberOfValue, NumberOfValue / 16, Value);
		printf("\n");
		
		Number += Value * Index2;
		Index2 *= 10;
		Push(Value, &DataStack);
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
	int Input, Index, NumberOfValue = 0, Value, Total, FixNumber = 1;
	stack DataStack;
	
	system("cls");
	
	Init(&DataStack);
	printf("Enter Decimal Number = ");
	scanf("%d", &Input);
	
	NumberOfValue = Input;
	while(NumberOfValue != 0) {
		Value = NumberOfValue % 10;
		Total = Total + Value * FixNumber;
		
		Push(Total, &DataStack);
		
		NumberOfValue = NumberOfValue / 10;
		FixNumber = FixNumber * 2;
	}
	
	printf("\n");
	printf("The result of converting a decimal number %d to an hexadecimal number is ", Input);
	
	for(Index = 1; Index > 0; Index--) {
		printf("%d", Pop(&DataStack));
 	}
 	
 	printf("\n");
	printf("Press Any Key to continue . . ."); 
		
	getch();
			
	system("cls");
		
	Welcome();
}
