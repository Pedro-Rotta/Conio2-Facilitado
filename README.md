# Conio2 Facilitado
Este é um arquivo de cabeçalho utilizado para tornar a utilização do Conio2 algo mais agradável e ágil. 🚀
## O que é o Conio2?
Conio2 é uma biblioteca de programação em C que facilita a criação de interfaces de usuário em modo texto (ou seja, em um terminal ou console). Ela oferece funções para manipular a tela do console, como mover o cursor para diferentes posições, alterar as cores do texto e do fundo, e desenhar formas simples como linhas e retângulos.

---

## Instalação do Conio2

Segue um repositório do [mateus-sm](https://github.com/mateus-sm) detalhado sobre como instalar o Conio2 em seu computador,
neste repositório ele ensina a instalar diretamente no VS-Code.

[Repositório](https://github.com/mateus-sm/Conio2-VsCode)

---

# Índice 
- [Como usar](https://github.com/Pedro-Rotta/Conio2-Facilitado#como-usar)
- [Explicando as funções](https://github.com/Pedro-Rotta/Conio2-Facilitado#%EF%B8%8Fexplicando-as-fun%C3%A7%C3%B5es%EF%B8%8F)

- - [auxilioPosicoes](https://github.com/Pedro-Rotta/Conio2-Facilitado#auxilioposicoes)
- - [retangulo](https://github.com/Pedro-Rotta/Conio2-Facilitado#retangulo)
- - [exibeTexto](https://github.com/Pedro-Rotta/Conio2-Facilitado#exibetexto)
- - [linhaHorizontal e linhaHorizontalComLaterais](https://github.com/Pedro-Rotta/Conio2-Facilitado#linhahorizontal-e-linhahorizontalcomlaterais)
- - [linhaVertical e linhaVerticalComExtremidades](https://github.com/Pedro-Rotta/Conio2-Facilitado#linhavertical-e-linhaverticalcomextremidades)
- - [Cantos](https://github.com/Pedro-Rotta/Conio2-Facilitado#cantos)
- - [repetirCaracaterHorizontal e repetirCaracterVertical](https://github.com/Pedro-Rotta/Conio2-Facilitado#repetircaracaterhorizontal-e-repetircaractervertical)
- - [opcoesMenu e opcoesMenuEspacado](https://github.com/Pedro-Rotta/Conio2-Facilitado#opcoesmenu-e-opcoesmenuespacado)
- - [clearArea](https://github.com/Pedro-Rotta/Conio2-Facilitado#cleararea)
- - [ligacao4Pontos](https://github.com/Pedro-Rotta/Conio2-Facilitado#ligacao4pontos)
- - [pintarArea](https://github.com/Pedro-Rotta/Conio2-Facilitado#pintararea)
- - [prateleiraVertical](https://github.com/Pedro-Rotta/Conio2-Facilitado#prateleiravertical)
- - [prateleiraHorizontal](https://github.com/Pedro-Rotta/Conio2-Facilitado#prateleirahorizontal)
- - [preencherPrateleiraVertical](https://github.com/Pedro-Rotta/Conio2-Facilitado#preencherprateleiravertical)
- - [preencherPrateleiraHorizontal](https://github.com/Pedro-Rotta/Conio2-Facilitado#preencherprateleirahorizontal)
- [Dicas de Clean Code](https://github.com/Pedro-Rotta/Conio2-Facilitado#dicas-de-clean-code)
- - [O que é?](https://github.com/Pedro-Rotta/Conio2-Facilitado/edit/main/README.md#o-que-%C3%A9)
- - [Utilização de define](https://github.com/Pedro-Rotta/Conio2-Facilitado#utiliza%C3%A7%C3%A3o-de-define)
- - [Criar funções](https://github.com/Pedro-Rotta/Conio2-Facilitado#criar-fun%C3%A7%C3%B5es)
- - [Exemplo prático de Clean Code](https://github.com/Pedro-Rotta/Conio2-Facilitado#exemplo-pr%C3%A1tico-de-clean-code)
- [Exemplos de utilização na prática](https://github.com/Pedro-Rotta/Conio2-Facilitado#exemplos-de-utiliza%C3%A7%C3%A3o-na-pr%C3%A1tica-)
- [Agradecimentos e considerações finais](https://github.com/Pedro-Rotta/Conio2-Facilitado#agradecimentos-e-considera%C3%A7%C3%B5es-finais)
- - [Me siga nas redes sociais](https://github.com/Pedro-Rotta/Conio2-Facilitado#-me-siga-nas-redes-sociais)
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
           Exceto o "clearArea", tem "cor" como ultimo parâmetro
           Dos valores x e y começam pelo x
           Começam sempre pelo xI, quando houver
        
---

## auxilioPosicoes
Esta função serve para facilitar a identificação das posições no CMD.

Sendo todo número vermelho um décimo elemento.
### Exemplo: 

![image](https://github.com/user-attachments/assets/7ddaa0ef-edd3-45a2-a012-6d1bcea61423)

![image](https://github.com/user-attachments/assets/332ec241-66a6-4203-8c66-1f1b887b09a6)

---

## retangulo
Essa é a função que mais acelera seu desenvolvimento de interface no CMD. Deve-se passar 4 parâmetros indicando o início e fim:

## São os parâmetros:

    xI = posição horizontal inicial
    xF = posição horizontal final
    yI = posição vertical inicial
    yF = posição vertical final
    cor = cor do retangulo

### Exemplo: 

![image](https://github.com/user-attachments/assets/d6d89298-7a73-4657-85d2-d61e9e39b60e)

![image](https://github.com/user-attachments/assets/c8358311-748e-43f5-99b6-a93cb1ddd253)

---

## exibeTexto
Exibe o determinado texto.
## São os parâmetros:

    x = posição horizontal
    y = posição vertical
    txt = texto que deseja mostrar
    cor = cor que o texto sera exibido

### Exemplo:

![image](https://github.com/user-attachments/assets/16da4ef7-5635-4971-8d80-3c62129c2e6f)

![image](https://github.com/user-attachments/assets/b452cb95-26bd-4f60-b6ef-f67ea892fa1e)

---

## linhaHorizontal e linhaHorizontalComLaterais
Essas funções servem para desenhar uma linha vertical, com ou sem as extremidades.

## São os parâmetros:

     xI = posicao horizontal inicial
     xF = posicao horizontal final
     y = posicao vertical
     cor = cor da linha

### Exemplo: 

![image](https://github.com/user-attachments/assets/7d67501b-b163-42e8-b96e-ea7036f2ed60)

![image](https://github.com/user-attachments/assets/e4bb807c-9d81-433b-b0b1-5b8523bcab4c)

---

## linhaVertical e linhaVerticalComExtremidades
Estas funções servem para desenhar uma linha vertical, com ou sem as extremidades.

## São os parâmetros da linha vertical:

    x = posicao horizontal
    yI = posicao vertical inicial
    yF = posicao vertical final
    cor = cor da linha

### Exemplo: 

![image](https://github.com/user-attachments/assets/83ed81d7-9be3-4896-83a2-04203c2562f5)

![image](https://github.com/user-attachments/assets/20334418-e800-44a4-ae6e-e9bf3fb8b650)

---

## Cantos
Faz pontos de encontro canteiros.

A passagem de parâmetros é igual para as 4 funções:

     cantoSuperiorEsquerdo
     cantoInferiorEsquerdo
     cantoSuperiorDireito
     cantoInferiorDireito
     
## São os parâmetros:

     x = posição horizontal
     y = posição vertical
     cor = cor do canto

### Exemplo: 

![image](https://github.com/user-attachments/assets/fb07d4ee-b278-4fa2-9c44-9857182cfeb6)

![image](https://github.com/user-attachments/assets/4f0e4eed-4704-41e9-bb55-ae4381c2438f)

---

## repetirCaracaterHorizontal e repetirCaracterVertical
Essas funções desenham uma linha de caracteres.

## São os parâmetros da vertical:

    x = posição horizontal
    yI = posição vertical inicial
    yF = posição vertical final
    cor = cor dos caracteres
## São os parâmetros da horizontal:

    xI = posição horizontal inicial
    xF = posição horizontal final
    y = posição vertical
    cor = cor dos caracteres
    
Lembre-se sempre de passar o caractere entre aspas comuns.

### Exemplo:

![image](https://github.com/user-attachments/assets/21039331-b525-45bd-9c00-b6e8443a16fe)

![image](https://github.com/user-attachments/assets/3b3c71fd-917a-42b9-8185-cf599fd2d6c7)

---

## opcoesMenu e opcoesMenuEspacado
Cria um menu com todas as opcoes desejadas.

## São os parâmetros:

    qntOpcoes = quantidade de elementos
    x = posição horizontal
    y = posição vertical
    tit = elementos
    cor = cor do menu
    
Os elementos são passados por uma matriz de char (vetor de strings), então você deve criá-la antes.

Criando os elementos: 
![image](https://github.com/user-attachments/assets/e177a330-52aa-4203-ac6c-fc998bcbc052)

Lembrando que a quantidade de elementos define a quantidade de opções que seu menu vai ter [A-Z], o último elemento sempre será "[ESC]", sendo assim, deve-se atribuir a mensagem que o "[ESC]" receberá, mas sem contá-lo como elemento.

### Exemplo Menu: 

![image](https://github.com/user-attachments/assets/9cec35cf-4818-4d6e-a391-7bf1b7c0ba3f)

![image](https://github.com/user-attachments/assets/458e5025-bd53-4a0c-b09d-56b8f78f2fa6)

### Exemplo Menu espaçado:

![image](https://github.com/user-attachments/assets/3d3163c0-7902-4dca-8e69-df4da5e23b24)

![image](https://github.com/user-attachments/assets/d02c7b49-8d78-46bb-bded-15f1012e9f45)

---

## clearArea
Essa função tem seu funcionamento semelhante ao "clrscr()", porém limpa apenas determinada área escolhida pelo programador.

## São os parâmetros:

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

## ligacao4Pontos
Faz um ponto de encontro de 4 lados.

## São os parâmetros:

    x = posição horizontal
    y = posição vertical
    cor = cor da ligação

### Exemplo:

![image](https://github.com/user-attachments/assets/93d5cf60-a6da-466c-ba8b-3d416124e8ec)

![image](https://github.com/user-attachments/assets/0df1f800-a26d-41be-a8f1-1634c6b5793c)

---
## pintarArea
Pinta uma determinada area da sua escolha.

## São os parâmetros:

     xI = posição horizontal inicial
     xF = posição horizontal final
     yI = posição vertical inicial
     yF = posição vertical final
     cor = cor da area

### Exemplo:

![image](https://github.com/user-attachments/assets/21413457-c317-4abc-894c-bca14c046feb)

![image](https://github.com/user-attachments/assets/f7b14339-2710-495c-872b-d65f4b5132c1)

---

## prateleiraVertical
Faz um desenho de uma pratileira verticalmente.

## São os parâmetros:

     xI = posição horizontal inicial
     xF = posição horizontal final
     yI = posição vertical inicial
     yF = posição vertical final
     espacamento = espaco que tera de uma separacao a outra
     cor = cor da prateleira

### Exemplo:

![image](https://github.com/user-attachments/assets/340b1e7d-edf9-4fa9-a740-47d1ee90c7f4)

![image](https://github.com/user-attachments/assets/50b2d6e0-8c96-4c61-9594-f24b181985e3)

---

## prateleiraHorizontal
Faz um desenho de uma prateleira horizontalmente.

São os parâmetros:

     xI = posição horizontal inicial
     xF = posição horizontal final
     yI = posição vertical inicial
     yF = posição vertical final
     espacamento = espaco que tera de uma separacao a outra
     cor = cor da prateleira

### Exemplo:

![image](https://github.com/user-attachments/assets/f3fe8d2f-530b-4186-9400-2ddc498fd08d)

![image](https://github.com/user-attachments/assets/b3ab05e8-625a-40e4-8ae6-c63c40c208f7)

---

## preencherPrateleiraVertical
Preenche os dados da prateleira construida anteriormente.

## São os parametros:

     x = posição horizontal
     yI = posição vertical inicial
     yF = posição vertical final
     espacamento = espaço que terá de uma separação a outra
     preencher = dados que serão exibidos
     cor = cor da prateleira

### Exemplo:

![image](https://github.com/user-attachments/assets/4c8dc127-8ac9-4f7f-81dd-6e0fdc013159)

![image](https://github.com/user-attachments/assets/8ef5f6bd-736f-48f3-936a-7a717ced90ef)

---

## preencherPrateleiraHorizontal
Preenche os dados da pratelheira construida anteriormente.

## São os parâmetros:

     xI = posição horizontal inicial
     xF = posição horizontal final
     y = posição vertical
     espacamento = espaço que terá de uma separação a outra
     preencher = dados que serão exibidos
     cor = cor da prateleira

### Exemplo:

![image](https://github.com/user-attachments/assets/c0a74bbf-c900-422c-a302-6c9a1f9c2cf7)

![image](https://github.com/user-attachments/assets/eb87fc66-cc3b-4bb0-9fc1-473140452c71)

---

# *Dicas de Clean Code*
## O que é?

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

---

# Agradecimentos e considerações finais

---

Agradeço a você que leu até aqui! Ficarei muito feliz se quiser apoiar o projeto fazendo um fork, criando uma branch e desenvolvendo novas funcionalidades ou adicionando exemplos extras do que é possível fazer com a biblioteca conio2. Afinal, quando se trata de desenvolvimento, o céu é o limite! 🚀

Este repositório tem como principal objetivo ajudar aqueles que desejam explorar essa interface gráfica mais simples, seja por interesse próprio ou por falta de tempo para se aprofundar no design. Com este arquivo em mãos, é possível criar uma interface visual interessante para trabalhos acadêmicos e projetos pessoais sem gastar muito tempo.

## ⭐ Se este projeto foi útil para você ou despertou seu interesse, deixe uma estrela para ajudar na sua visibilidade e permitir que mais pessoas o encontrem!


### 📲 Me siga nas redes sociais

[![Instagram](https://img.shields.io/badge/-Instagram-E4405F?style=for-the-badge&logo=Instagram&logoColor=white)](https://www.instagram.com/p_rotta7/)

[![LinkedIn](https://img.shields.io/badge/-LinkedIn-0077B5?style=for-the-badge&logo=LinkedIn&logoColor=white)](https://www.linkedin.com/in/pedro-rotta-5985a0237/)

[![GitHub](https://img.shields.io/badge/-GitHub-181717?style=for-the-badge&logo=GitHub&logoColor=white)](https://github.com/Pedro-Rotta)









