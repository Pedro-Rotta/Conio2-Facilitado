# Conio2 Facilitado
Este é um arquivo de cabeçalho utilizado para tornar a utilização do Conio2 algo mais agradável e ágil. 🚀
## O que é o Conio2?
Conio2 é uma biblioteca de programação em C que facilita a criação de interfaces de usuário em modo texto (ou seja, em um terminal ou console). Ela oferece funções para manipular a tela do console, como mover o cursor para diferentes posições, alterar as cores do texto e do fundo, e desenhar formas simples como linhas e retângulos.

---

# ❓Como usar❓
Para a utilização desse arquivo, será necessário algumas bibliotecas específicas, juntamente com o include do próprio arquivo.
São as seguintes bibliotecas:

![image](https://github.com/user-attachments/assets/9ed9a4b1-7dac-4d52-b734-eaf09c36a2a4)

Lembrando que o arquivo "Conio2_Facilitado.h" deve estar no mesmo diretório que o seu arquivo executável, comumente chamado de "main.c" ou "main.cpp".

![image](https://github.com/user-attachments/assets/591a0244-679b-4a92-a0a7-7329e8443bde)

👍Após isso, o Conio2_Facilitado já estará funcional.👍

---

# 📔✏️Explicando as funções📔✏️
## Definições padrão:
        Todas as funções:
           Exceto o clearArea tem "cor" como ultimo parâmetro
           Dos valores x e y começam pelo x
           Começam sempre pelo xI, quando houver
        
---

## auxilioPosicoes
Esta função serve para facilitar a identificação das posições no CMD.

Sendo todo número vermelho um décimo elemento.
### Exemplo: 

![image](https://github.com/user-attachments/assets/7ddaa0ef-edd3-45a2-a012-6d1bcea61423)

![image](https://github.com/user-attachments/assets/3c606d1a-302b-41a9-9303-5cb452452e51)

---

## retangulo
Essa é a função que mais acelera seu desenvolvimento de interface no CMD. Deve-se passar 4 parâmetros indicando o início e fim:

    xI = posição horizontal inicial
    xF = posição horizontal final
    yI = posição vertical inicial
    yF = posição vertical final

### Exemplo: 

![image](https://github.com/user-attachments/assets/60356762-55c3-4084-add3-3d6f7c936f34)

![image](https://github.com/user-attachments/assets/c8358311-748e-43f5-99b6-a93cb1ddd253)

---

## linhaHorizontal e linhaHorizontalComLaterais
Essas funções servem para desenhar uma linha vertical, com ou sem as extremidades.

Basta passar os parâmetros:

     y = posicao vertical
     xI = posicao horizontal inicial
     xF = posicao horizontal final

### Exemplo: 

![image](https://github.com/user-attachments/assets/da6cb18c-c6cc-4925-bd18-ed0dd61759c0)

![image](https://github.com/user-attachments/assets/e4bb807c-9d81-433b-b0b1-5b8523bcab4c)

---

## linhaVertical e linhaVerticalComExtremidades
Estas funções servem para desenhar uma linha vertical, com ou sem as extremidades.

Basta passar os parametros:

    x = posicao horizontal
    yI = posicao vertical inicial
    yF = posicao vertical final

### Exemplo: 

![image](https://github.com/user-attachments/assets/65f26a61-0476-4f53-97e6-ce0494c2f819)

![image](https://github.com/user-attachments/assets/20334418-e800-44a4-ae6e-e9bf3fb8b650)

---

## Cantos

A passagem de parâmetros é igual para as 4 funções:

     cantoSuperiorEsquerdo
     cantoInferiorEsquerdo
     cantoSuperiorDireito
     cantoInferiorDireito
     
Deve-se passar a posição da linha horizontal (x) e da linha vertical (y) apenas.

### Exemplo: 

![image](https://github.com/user-attachments/assets/c70a38d5-2125-429c-a69e-620361b5d092)

![image](https://github.com/user-attachments/assets/4f0e4eed-4704-41e9-bb55-ae4381c2438f)

---

## atribuirCor
Essa função tem o mesmo funcionamento de "textcolor" da biblioteca conio2, porém com outro nome, para quem preferir.

Deve ser passada a cor em inglês e maiúscula. Caso não seja cumprido esse requisito, o programa não compilará.

Site para ver todas as cores: [conio2_8](https://conio.sourceforge.net/docs/html/conio2_8h.html#ab983350d6d1201c0ebd709320e7a0d50)

Lembre-se sempre de voltar para a cor desejada. Caso esteja escrevendo em branco, lembre-se de utilizar "atribuirCor(WHITE)" após trocar a cor.

### Exemplo: 
![image](https://github.com/user-attachments/assets/4d32e5b6-e2b1-4b15-9b18-9da16e2209db)

![image](https://github.com/user-attachments/assets/f391f691-e1fc-4ec8-bd45-1f791f626e38)

---

## repetirCaracaterHorizontal e repetirCaracterVertical
Essas funções têm a mesma passagem de parâmetros que as linhas, porém com o caractere desejado no final.

Lembre-se sempre de passar o caractere entre aspas comuns.

### Exemplo:

![image](https://github.com/user-attachments/assets/7b8bef9c-a8f7-40b2-bc92-c5bfd63d3ddb)

![image](https://github.com/user-attachments/assets/3b3c71fd-917a-42b9-8185-cf599fd2d6c7)

---

## opcoesMenu e opcoesMenuEspacado
Essa função espera os seguintes parâmetros:

    qntOpcoes = quantidade de elementos
    x = posição horizontal
    y = posição vertical
    tit = elementos
    
Os elementos são passados por uma matriz de char (vetor de strings), então você deve criá-la antes.

Criando os elementos: 
![image](https://github.com/user-attachments/assets/e177a330-52aa-4203-ac6c-fc998bcbc052)

Lembrando que a quantidade de elementos define a quantidade de opções que seu menu vai ter [A-Z], o último elemento sempre será "[ESC]", sendo assim, deve-se atribuir a mensagem que o "[ESC]" receberá, mas sem contá-lo como elemento.

### Exemplo Menu: 

![image](https://github.com/user-attachments/assets/80ce6755-c7a0-4fd2-bb04-a38c8b75d211)

![image](https://github.com/user-attachments/assets/458e5025-bd53-4a0c-b09d-56b8f78f2fa6)

### Exemplo Menu espaçado:

![image](https://github.com/user-attachments/assets/3643f191-d0d8-4746-a594-25ed7e7f2f42)

![image](https://github.com/user-attachments/assets/d02c7b49-8d78-46bb-bded-15f1012e9f45)

---

## clearArea
Essa função tem seu funcionamento semelhante ao "clrscr()", porém limpa apenas determinada área escolhida pelo programador.

Os parâmetros são:

    xI = posição horizontal inicial
    xF = posição horizontal final
    yI = posição vertical inicial
    yF = posição vertical final
    
### Exemplo: 

Código: 

![image](https://github.com/user-attachments/assets/a5ef78ce-af2d-4b91-9851-f942d05ad326)

Antes do clear: 

![image](https://github.com/user-attachments/assets/7af11388-5007-4f38-820c-4e82d2f319f7)

Depois do clear: 

![image](https://github.com/user-attachments/assets/2ecd86d9-efb9-4876-8967-e32b92f26d89)

---

## exibeTexto
Essa função espera como parâmetros:

    x = posição horizontal
    y = posição vertical
    txt = texto que deseja mostrar
    cor = cor que o texto sera exibido

### Exemplo:

![image](https://github.com/user-attachments/assets/16da4ef7-5635-4971-8d80-3c62129c2e6f)

![image](https://github.com/user-attachments/assets/b452cb95-26bd-4f60-b6ef-f67ea892fa1e)

---

## ligacao4Pontos
Essa função recebe como parâmetros:

    x = posição horizontal
    y = posição vertical

### Exemplo:

![image](https://github.com/user-attachments/assets/fd793c95-28da-4c80-b245-2a7b56a4302f)

![image](https://github.com/user-attachments/assets/0df1f800-a26d-41be-a8f1-1634c6b5793c)

---

# *Dicas de Clean Code*
Clean Code é um conceito que se refere à prática de escrever códigos de programação de uma maneira que seja fácil de entender, manter e modificar.

Princípios fundamentais do Clean Code:

    Legibilidade
    Simplicidade
    Nomenclatura Significativa
    Estruturação:
---

## Utilização de define
Utilizar defines é algo muito útil, pois se precisar trocar a estrutura visual do código, basta alterar o define e mudará o código por completo.

Imagine que você tem 100 "exibeTexto" em seu código, todos com o mesmo valor ou com uma sequência (Exemplo: cada exibe tem um espaçamento de 2 posições), se você decidir mudar seu design, precisará trocar também todos esses valores na mão.

Aí voce pensa "ah, mas eu posso usar replace", em um código extenso é bem provavél que tenha numeros repetidos, se você utilizar replace e trocar valores que não deveriam ser trocados, então seu código terá problemas...


### Mas como usar?
![image](https://github.com/user-attachments/assets/a6338934-906d-4338-91e7-0b175f7c592e)

Dessa forma, além de identificar pra que serve o exibeTexto, você estará facilitando para uma possível manutenção mais pra frente.

Podemos deixar melhor ainda:

![image](https://github.com/user-attachments/assets/5fdb7a40-e76e-4d2f-acef-02b4702b1e38)

Assim você estara escrevendo mais, porém é importante que qualquer pessoa que entenda da linguagem de programação, entenda à que aquele pedaço do código está se referindo.

---
## Criar funções
Agora utilizando as funções devemos deixar o entendimento mais fácil ainda.

### Exemplo

![image](https://github.com/user-attachments/assets/ce9a019e-4029-418d-a329-8e5c456ebe32)

Podemos também dar prosseguimento das exibições dessa forma:

![image](https://github.com/user-attachments/assets/50856b7d-56cd-4b80-a94c-c09473f9e79f)

Dessa forma, quando alterarmos o "define posicaoMensagemDisplayY", alteraremos todas as exibições do display no programa.

---

## Exemplo prático de Clean Code

Analise os 2 códigos e observe qual é o mais simples de se entender.

Sem Clean Code: [Código](https://gist.github.com/Pedro-Rotta/43439de8fe263b007f7862cd0f4b4ca5)

Com Clean Code: [Código](https://gist.github.com/Pedro-Rotta/0b8a9a0d152f3eb32369c3251bc32912)

---

# Exemplos de utilização na prática 🧑🏻‍💻🧑🏿‍💻

## Exemplo 1:

[Código](https://gist.github.com/Pedro-Rotta/5803eff254804f2bff22dea147a5977d)

![image](https://github.com/user-attachments/assets/dfdb80de-d6e7-48fd-822e-8c52eb64711c)

---

## Exemplo 2:

[Código](https://gist.github.com/Pedro-Rotta/6e1ecc6f5e3a7c8477318acfe679ea95)

![image](https://github.com/user-attachments/assets/d2e9fa2c-dfa4-4f93-96c4-96f15abd2178)
