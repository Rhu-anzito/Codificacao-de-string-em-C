#include <stdio.h>

int main(void){
	char str[61],strCodif[61];
	int i;
	
	printf("Digite uma string limitada a 60 caracteres: ");
	scanf("%60[^\n]", str);
	
	for(i=0;str[i] != '\0';i++){
		if(str[i] >=32 &&str[i] <=64) //32 a 64: códigos ASCII de espaço, símbolos, pontuação e algarismos
			strCodif[i] = str[i];
			
		else
			if(str[i]=='z' || str[i]=='Z')
				strCodif[i] - 25; //Código ASCII de z é 25 unidades superior ao de a. 
			else
				strCodif[i] = str[i] +1; //Código ASCII de qq outro caract. será acrescido em 1unid.
	}
	strCodif[i] = '\0';
	puts("String codificada: ");
	puts(strCodif);
	
	return 0;
}