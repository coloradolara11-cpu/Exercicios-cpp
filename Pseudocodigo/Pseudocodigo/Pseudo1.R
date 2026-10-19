INICIO 
    DECLARE notas[5] como real 
    DECLARE i como inteiro 

    PARA I <- 0 ATE 4 FACA 
        ESCREVA "Digite a nota do aluno ", i + 1, ": "
        LEIA notas[i]
    FIMPARA

    PARA I <- 0 ATE 4 FACA 
        ESCREVA "Aluno ", i + 1, ": ", notas[i]
    FIMPARA 

FIM 