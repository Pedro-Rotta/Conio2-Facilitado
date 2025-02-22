# Conio2 Facilitado
 Este é um arquivo de cabeçalho utilizado para tornar a utilização do Conio2 algo mais agradável e de forma mais ágil. 🚀
 
---

# ❓Como usar❓
 Para a utilização desse arquivo, será necessário algumas bibliotecas específicas, juntamente com o include do próprio arquivo.
 São as seguintes bibliotecas:
 
 ![image](https://github.com/user-attachments/assets/9ed9a4b1-7dac-4d52-b734-eaf09c36a2a4)
 
Lembrando que o arquivo "Conio2_Facilitado.h" deve estar no mesmo diretório que o seu arquivo executavel, comumente chamado de "main.c" ou "main.cpp".

![image](https://github.com/user-attachments/assets/591a0244-679b-4a92-a0a7-7329e8443bde)

👍 Após isso, o Conio2_Facilitado ja estara funcional. 👍

---

# 📔✏️Explicando as funções📔✏️
Pode se ter algumas duvidas sobre como funciona a utilização de uma função ou outra, mas não se preocupe, elas são bem simples de entender!
---
# auxilioPosicoes
 Esta função serve para facilitar a identificação das posições no CMD.
 
 # Exemplo: 
 
 ![image](https://github.com/user-attachments/assets/7ddaa0ef-edd3-45a2-a012-6d1bcea61423)

![image](https://github.com/user-attachments/assets/3c606d1a-302b-41a9-9303-5cb452452e51)

Sendo todo numero vermelho um décimo elemento.

---
# retangulo
Essa é a função que mais acelera seu desenvolvimento de interface no CMD.
Deve-se passar 4 parametros indicando o inicio e fim:

    xI = posição horizontal inicial
    xF = posição horizontal final
    yI = posição vertical inicial
    yF = posição vertical final

# Exemplo: 

![image](https://github.com/user-attachments/assets/60356762-55c3-4084-add3-3d6f7c936f34)


![image](https://github.com/user-attachments/assets/c8358311-748e-43f5-99b6-a93cb1ddd253)

---
# linhaHorizontal e linhaHorizontalComLaterais
 Estas funções servem para desenhar uma linha horizontal, com ou sem as laterais.
 
 Basta passar os parametros:

     y = posicao vertical
     xI = posicao horizontal inicial
     xF = posicao horizontal final

# Exemplo: 

![image](https://github.com/user-attachments/assets/da6cb18c-c6cc-4925-bd18-ed0dd61759c0)

![image](https://github.com/user-attachments/assets/e4bb807c-9d81-433b-b0b1-5b8523bcab4c)

# linhaVertical e linhaVerticalComExtremidades
Estas funções servem para desenhar uma linha vertical, com ou sem as extremidades.

Basta passar os parametros:

    x = posicao horizontal
    yI = posicao vertical inicial
    yF = posicao vertical final

# Exemplo: 

![image](https://github.com/user-attachments/assets/65f26a61-0476-4f53-97e6-ce0494c2f819)

![image](https://github.com/user-attachments/assets/20334418-e800-44a4-ae6e-e9bf3fb8b650)

---
# Cantos

A passagem de parametros são iguais para as 4 funções:

     cantoSuperiorEsquerdo
     cantoInferiorEsquerdo
     cantoSuperiorDireito
     cantoInferiorDireito
     
Deve-se passar a posição da linha horizontal (x) e da linha vertical y apenas.

# Exemplo: 

![image](https://github.com/user-attachments/assets/c70a38d5-2125-429c-a69e-620361b5d092) 

![image](https://github.com/user-attachments/assets/4f0e4eed-4704-41e9-bb55-ae4381c2438f)

---
# atribuirCor
Essa função tem o mesmo funcionamento de "textcolor" da biblioteca conio2, porém com outro nome, para quem preferir.

Deve ser passada a cor em inglês e maiuscula, caso não seja cumprido essas regras, o programa não compilara.

Site para ver todas as cores: https://conio.sourceforge.net/docs/html/conio2_8h.html#ab983350d6d1201c0ebd709320e7a0d50

Lembre-se sempre de voltar para a cor desejada, caso esteja escrevendo em branco, lembre de utilizar "atribuirCor(WHITE)" após trocar a cor.

# Exemplo: 
![image](https://github.com/user-attachments/assets/4d32e5b6-e2b1-4b15-9b18-9da16e2209db)

![image](https://github.com/user-attachments/assets/f391f691-e1fc-4ec8-bd45-1f791f626e38)

---
# repetirCaracaterHorizontal e repetirCaracterVertical
Essas funções tem a mesma passagem de parametros que as linhas, porém com o caractere desejado no final

Lembre-se sempre de passar o caractere entre aspras comuns;

# Exemplo:

![image](https://github.com/user-attachments/assets/7b8bef9c-a8f7-40b2-bc92-c5bfd63d3ddb)

![image](https://github.com/user-attachments/assets/3b3c71fd-917a-42b9-8185-cf599fd2d6c7)

---
# opcoesMenu e opcoesMenuEspacado
Essa função espera a quantidade de elementos no seu menu, a posição de onde deve começar e quais são os elementos.

Os elementos são passados por uma matrix de char (vetor de string), então voce deve cria-lo antes.

Criando os elementos: ![image](https://github.com/user-attachments/assets/e177a330-52aa-4203-ac6c-fc998bcbc052)

Lembrando que a quantidade de elementos define a quantidade de opcoes que seu menu vai ter [A-Z], o ultimo elemento sempre sera "[ESC]", sendo assim, deve-se atribuir a mensagem que o "[ESC]" recebera, mas sem conta-lo como elemento.
# Exemplo Menu: 

![image](https://github.com/user-attachments/assets/ac86c069-1e4a-46c7-9fb5-f064fdb20368)

![image](https://github.com/user-attachments/assets/458e5025-bd53-4a0c-b09d-56b8f78f2fa6)

# Exemplo Menu espaçado:

![image](https://github.com/user-attachments/assets/3643f191-d0d8-4746-a594-25ed7e7f2f42)

![image](https://github.com/user-attachments/assets/d02c7b49-8d78-46bb-bded-15f1012e9f45)

---
# clearArea
Essa função tem seu funcionamento semelhante ao "clrscr()", porém limpa apenas determinada área escolhida pelo programador.

os parametros são:

    xI = posição horizontal inicial
    xF = posição horizontal final
    yI = posição vertical inicial
    yF = posição vertical final
    
#Exemplo: 

Código: 

![image](https://github.com/user-attachments/assets/a5ef78ce-af2d-4b91-9851-f942d05ad326)

Antes do clear: 

![image](https://github.com/user-attachments/assets/7af11388-5007-4f38-820c-4e82d2f319f7)

Depois do clear: 

![image](https://github.com/user-attachments/assets/2ecd86d9-efb9-4876-8967-e32b92f26d89)

---
# exibeTexto
Essa função espera como parametro:

    x = posicao horizontal
    y = posicao vertical
    txt = texto que deseja mostrar
    cor = Cor que o texto sera exibido

# Exemplo:

![image](https://github.com/user-attachments/assets/16da4ef7-5635-4971-8d80-3c62129c2e6f)

![image](https://github.com/user-attachments/assets/b452cb95-26bd-4f60-b6ef-f67ea892fa1e)









