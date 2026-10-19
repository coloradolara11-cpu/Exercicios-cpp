INICIO 
    DECLARE temperaturas[6] como real 
    DECLARE i como inteiro 

    PARA i <- 0 ate 5 faca 
        ESCREVA "Digite a temperatura ", i + 1, ": "
        LEIA temperaturas[i] 
    FIMPARA     

    PARA I <- 0 ate 5 faca 
        SE temperaturas[i] < 40 ENTAO 
            ESCREVA "Temperatura normal"
        SENAO SE "Temperaturas [i] <= 60 ENTAO 
            ESCREVA "Atencao"
        SENAO 
            ESCREVA "Temperatura Critica"
        FIMSE 
    FIMPARA 
FIM 