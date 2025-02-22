void auxilioPosicoes(){
    for(int x = 1; x <= 121;x++){
        if(x%10 == 0){
            textcolor(RED);
            gotoxy(x, 1);
            printf("%d", x%10);
            textcolor(WHITE);
        }
        else{
            gotoxy(x, 1);
            printf("%d", x%10);
        }
    }
    for(int y = 2; y <= 30; y++){
        if(y%10 == 0){
            textcolor(RED);
            gotoxy(1,y);
            printf("%d\n", y);
            textcolor(WHITE);
        }
        else{
            if(y < 10){
                gotoxy(1,y);
                printf("0%d\n", y);
            }
            else{
                printf("%d\n", y);
            }
        }
    }
    gotoxy(1,1);
}
void linhaHorizontal(int y, int xI, int xF){
    while(xI <= xF){
        gotoxy(xI++,y);
        printf("%c", 205);
    }
}
void linhaHorizontalComLaterais(int y, int xI, int xF){
    gotoxy(xI++, y);
    printf("%c", 204);
    gotoxy(xF, y);
    printf("%c", 185);
    while(xI < xF){
        gotoxy(xI++,y);
        printf("%c", 205);
    }
}
void linhaVertical(int x, int yI, int yF){
    while(yI <= yF){
        gotoxy(x,yI);
        printf("%c", 186);
        yI++;
    }
}
void linhaVerticalComExtremidades(int x, int yI, int yF){
    gotoxy(x, yI++);
    printf("%c", 203);
    gotoxy(x, yF);
    printf("%c", 202);
    while(yI < yF){
        gotoxy(x,yI++);
        printf("%c", 186);
    }
}
void cantoSuperiorEsquerdo(int x, int y){
    gotoxy(x, y);
    printf("%c", 201);
}
void cantoSuperiorDireito(int x, int y){
    gotoxy(x, y);
    printf("%c", 187);
}
void cantoInferiorEsquerdo(int x, int y){
    gotoxy(x, y);
    printf("%c", 200);
}
void cantoInferiorDireito(int x, int y){
    gotoxy(x, y);
    printf("%c", 188);
}
void retangulo(int xI, int xF, int yI, int yF){
        linhaHorizontal(yI, xI, xF);
        linhaHorizontal(yF, xI, xF);
        linhaVertical(xI, yI, yF);
        linhaVertical(xF, yI, yF);
        cantoSuperiorEsquerdo(xI, yI);
        cantoSuperiorDireito(xF, yI);
        cantoInferiorEsquerdo(xI, yF);
        cantoInferiorDireito(xF, yF);
        textcolor(WHITE);
}
void atribuirCor(int cor){
    textcolor(cor);
}
void repetirCaracterHorizontal(int y, int xI, int xF, char caracter){
    while(xI <= xF){
        gotoxy(xI++, y);
        printf("%c", caracter);
    }
}
void repetirCaracterVertical(int x, int yI, int yF, char caracter){
    while(yI <= yF){
        gotoxy(x, yI++);
        printf("%c", caracter);
    }
}
void opcoesMenuEspacado(int qntOpcoes, int x, int y, char tit[][20]){
    int i = 0;
    for(int i=0;i <= qntOpcoes;i++, y+=2){
        if(i == qntOpcoes){
            gotoxy(x, y);
            printf("[ESC] %s", tit[i]);
        }
        else{
            gotoxy(x, y);
            printf("[%c] %s", i+65, tit[i]);
        }
    }
}
void opcoesMenu(int qntOpcoes, int x, int y, char tit[][20]){
    int i = 0;
    for(int i=0;i <= qntOpcoes;i++, y++){
        if(i == qntOpcoes){
            gotoxy(x, y);
            printf("[ESC] %s", tit[i]);
        }
        else{
            gotoxy(x, y);
            printf("[%c] %s", i+65, tit[i]);
        }
    }
}
void clearArea(int xI, int xF, int yI, int yF){
    while(yI <= yF){
        for(int i = xI; i <= xF;i++){
            gotoxy(i, yI);
            printf(" ");
        }
        yI++;
    }
}
void textoDisplay(int x, int y, char txt[]){
    gotoxy(x, y);
    printf("%s", txt);
}
void textoErro(int x, int y, char txt[], int cor){
    textcolor(cor);
    gotoxy(x, y);
    printf("Erro: %s", txt);
    textcolor(WHITE);
}
void ligacao4Pontos(int x, int y){
    gotoxy(x,y);
    printf("%c", 206);
}