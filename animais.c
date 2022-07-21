#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int perguntar(const char* pergunta){
    printf(pergunta,"\n");
    while (1){
        
        char retorno = getchar();
        if (retorno == 's' || retorno == 'S')
            return 1;
        if (retorno == 'n' || retorno == 'N')
            return 0;
        if (retorno == '\n')
            continue;
        printf("favor escreva s ou n");
    }
}

int main()
{
    char mamifero, repteis, aves, resultado;
    

    // setbuf(stdout, 0);
    // printf("O animal e um mamifero? \n");
    // scanf("%c", &resultado);
    
	if (perguntar("O animal e um mamifero? \n "))
    {
        if (perguntar("O animal e um Quadrupede? \n "))
        {
            if (perguntar("O animal e carnivoro? \n"))
            {
                if (perguntar("O animal escolhido foi o Leão! "))
                {return 0;}
                
            }
            else if (perguntar("O animal e um Herbivoro? \n"))
            {
               if (perguntar("O animal que escolhido foi o Cavalo! "))
               {return 0;}
               
            }
            
        }
        else if (perguntar("O animal e um Bipede? \n"))
        {
            if (perguntar("O animal e um Ornivoro? \n"))
            {
                if (perguntar("O animal escolhido foi o Humano! "))
                {return 0;}
                
            }
            else if (perguntar("O animal e um Frutivoro? \n"))
            {
                if (perguntar("O animal escolhido foi o Macaco! "))
                {return 0;}
                    
            }
            
        }
        else if (perguntar("O animal e Voador? \n"))
        {
            if (perguntar("O animal escolhido foi o Morcego!"))
            {return 0;}
            
        }
        else (perguntar("O animal e Aquatico? \n") == 1);
        printf("O animal escolhido foi a Baleia! ");
        return 0;

        
            
    }
    if (perguntar("O animal e uma ave? \n"))
    {
        if (perguntar("O animal e um nao voador? \n"))
        {
            if (perguntar("O animal e Tropical? \n"))
            {
                printf("O animal escolhido foi o Avestruz!");
                return 0;
            }
            else if (perguntar("O animal e um Polar? \n"))
            {
                printf("O animal escolhido foi o Pinguin!");
                return 0;
            }
            
            
        }
        else if (perguntar("O animal e um Nadador? \n"))
        {
            printf("O animal escolhido foi o Pato! ");
            return 0;
        }
        else if (perguntar("O animal e uma Rapina? \n"))
        {
            printf("O animal esoolhido foi a Aguia!");
            return 0;
        }
        
        
        
            
    }
    if (perguntar("O animal e um reptil? \n "))
    {
        if (perguntar("O animal tem Casco? \n"))
        {
            printf("O animal escolhido foi a Tartaruga!");
            return 0;
        }
        else if (perguntar("O animal e um Carnivoro? \n"))
        {
            printf("O animal escolhido foi o Crocodilo! ");
            return 0;
        }
        else if (perguntar("O animal e um Sem Patas? \n"))
        {
            printf("O animal esoolhido foi a Cobra!");
            return 0;
        }
            
    }
    printf("Animal Não Econtrado, Desculpe Tente Novamente!");    
        
    return 0;
}

