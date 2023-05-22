#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>



void decriptografar(char *str, int *x){
    int tamanho, i=0;
    tamanho = strlen(str+1); //pega o tamanho da string
    strlwr(str); //Poe a string em minusculo

		for(i=0; i<tamanho; i++){ //loop
       		if(str[i] >= 48 && str[i] <=57){ //checa e troca numeros
        	str[i] = str[i] - *x; //utiliza a chave caso o desejado se cumpra
        	if(str[i] < 48){ //vai para o final do array caso o valor seja menor que o '0'
            str[i] += 10; //utiliza a chave caso o desejado se cumpra
			}
		}
        
        if(str[i] >= 97 && str[i] <= 122){ //checa e troca letras
       	   str[i] -= *x; //utiliza a chave caso o desejado se cumpra
        	if(str[i] < 97){ //vai para o final do array caso o valor seja menor que o 'a'
            str[i] += 26; //utiliza a chave caso o desejado se cumpra
     	  }
        }
}
}

int main()
{
    char str[255];
    int x=0;
    FILE *decri, *cleiton;
    
	printf("--------- Ola Agente --------- \n\n"); //deixa bonito
    printf("Digite a chave para decriptgrafar o arquivo, de 1 a 5: \n"); //pede ao usuario para inserir a chave desejada
    scanf("%d", &x); //scaneia a chave desejada e atribui a variavel
 	printf("\n");
    decri = fopen("dados.txt", "r"); //abre o arquivo
    cleiton = fopen ("decriptografado.txt", "w+"); //abre o arquivo
	
	while(!feof(decri)) //verifica se � o final do arquivo
    {
        fgets(str, 255, decri); //pega as linhas do arquivo e armazena em uma string
        decriptografar(str, &x); // executa a fun��o
		fprintf(cleiton, "%s\n", str); //printa os dados no arquivo decriptografado
    }
    
	printf("Processo Conluido, verifique o arquivo. \n\n");
	
	fclose(decri);	//fecha o arquivo dados
	fclose(cleiton); //fecha o arquivo decriptografar

    return 0;
}