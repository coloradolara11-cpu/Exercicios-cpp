INICIO 
    DECLARE producao[7] como INTEIRO 
    DECLARE i, total, maior como INTEIRO 

    Total <- 0

    PARA i <- 0 ate 6 faca 
        ESCREVA "Digite a producao do dia ", i + 1, ": "
        LEIA producao[i]
    FIMPARA 

    maior <- producao[0]

    PARA I <- 0 ATE 6 FACA 
        Total <- total + producao[i]

        SE producao[i] > maior ENTAO 
            maior <- producao[i]
        FIMSE 
    FIMPARA 

    ESCREVA "Producao total: ", total 
    ESCREVA "Maior producao diaria: ", maior 

FIM 