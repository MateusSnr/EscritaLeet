//Nome: Mateus Salles Novaes Rocha


#include<stdio.h>

void conversao(int tam,char frase[40]){
	
	for(int i = 0;i <= 40;i++){
		switch(frase[i]){
			case 'a':
				frase[i] = '4';
				break;
			case 'A':
				frase[i] = '4';
				break;
			case 'b':
				frase[i] = '8';
				break;
			case'B':
				frase[i] = '8';
				break;
			case 'e':
				frase[i] = '3';
				break;
			case 'E':
				frase[i] = '3';
				break;
			case 'l':
				frase[i] = '1';
				break;
			case 'L':
				frase[i] = '1';
				break;
			case 'o':
				frase[i] = '0';
				break;
			case 'O':
				frase[i] = '0';
				break;
			case 's':
				frase[i] = '5';
				break;
			case 'S':
				frase[i] = '5';
				break;
			case 't':
				frase[i] = '7';
				break;
			case 'T':
				frase[i] = '7';
				break;
		}
	}
}

int exibicao(int tam,char frase[40]){
	printf("\nFrase em escrita leet mostrada atraves da funcao exibicao:");
	printf("\n%s",frase);
}

int main(){
	char frase[40];
	
	printf("\n-Programa para conversao em escrita leet-");
	
	printf("\n\nDigite uma frase de ate' 40 caracteres: ");
	fgets(frase,40,stdin);
	
	conversao(40,frase);
	
	exibicao(40,frase);
	
}
