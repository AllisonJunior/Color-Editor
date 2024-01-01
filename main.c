


/*
    NOME DO PROJETO: COLOR EDITOR
    O QUE É:         FERRAMENTA DE RENDERIZAÇÃO DE CORES NO CONSOLE
    OBJETIVO:        DEMONSTRAR O QUE SE É POSSÍVEL FAZER USANDO C
*/



# include "allen.h"



// FUNÇÕES GLOBAIS

void SetupConsole ( void );  // - Configuração Inicial do Console - //

void DrawnMenu     ( void ); // - Desenha a Interface do Menu no Console - //
void MenuActions   ( void ); // - Controla a Interface do Menu no Console - //

void DrawnStart    ( void ); // - Desenha a Interface de Criação de Design e a Área de Desenho - //
void StartActions  ( void ); // - Controla a Interface de Criação de Design e a Área de Desenho - //
void SaveGrid      ( void ); //

void DrawnLoad     ( void ); // - Desenha a Interface de Seleção de Designs - //
void ListContent   ( void ); // - Printa na Interface os Designs Criados - //
void FillGrid      ( void ); // - Preenche o GRID para Permitir a Visualização - //
void DrawnDesign   ( void ); // - Desenha o Design Selecionado - //

void DrawnAbout    ( void ); // - Desenha a Interface de Sobre do Programa - //
void DrawnClose    ( void ); // - Executa a Confirmação para Encerrar o Programas - //




// VARIÁVEIS GLOBAIS DE SUPORTE

int  kaj         = 0; /* VARIÁVEL DE CONTROLE DE LOOP - LINES */
int  jak         = 0; /* VARIÁVEL DE CONTROLE DE LOOP - COLUMNS */
int  PlayedAudio = 0; /* FLAG PARA CHECAR SE O AÚDIO INICIAL FOI EXECUTADO */
int  MenuChoice  = 0; /* DEFINE QUAL MENU SERÁ ABERTO */
int  MenuClose   = 0; /* FLAG PARA CHECAR SE O USUÁRIO ENCERROU O PROGRAMA */

int  GRID [14] [28];  /* MATRIZ PARA DEFINIR TODO O ÂMBITO DE DESENHO */



// STRINGS GLOBAIS DE NOMEAÇÃO E SUPORTE

char DesignLayout [100]; /* STRING QUE DEFINE O NOME DO DESIGN A SER SALVO */
char DesignSet    [100]; /* STRING QUE DEFINE QUAL DESIGN SERÁ VISUALIZADO */
char DesignCreate [100]; /* STRING QUE DEFINE O NOME DO DESIGN A SER SALVO < SUPORTE A DesignLayout > */
char DesignName   [25];  /* STRING QUE DEFINE O ID DO DESIGN A SER VISUALIZADO */





int
main ( void )
{
       // Configurações Iniciais de Padronização do Console
       SetupConsole ();

       // Iniciando o Menu Principal
       DrawnMenu ();
        MenuActions ();

       // Área de Execução do Programa
       if ( MenuChoice == 1 )
         DrawnStart ();

       if ( MenuChoice == 2 )
         DrawnLoad ();

       if ( MenuChoice == 3 )
         DrawnAbout ();

       if ( MenuChoice == 4 )
         DrawnClose ();
}





void
SetupConsole ( void )
{
    ENABLEPROPS     ();                                   // ATIVANDO OS CÓDIGOS DE ESCAPE
    PROP_HIDECURSOR ();                                   // ESCONDENDO O CURSOR ( PARA NÃO FICAR PISCANDO )

    if ( PlayedAudio == 0 ) SB_PLAYSOUND ( MB_ICONSTOP ); // EXECUTANDO UM SOM NO INICIO DO PROGRAMA

    // Desativando Funções Específicas do Console
    CS_DISABLEMINIMIZEBUTTON ();                          // DESATIVANDO O BOTÃO DE MINIMIZAR
    CS_DISABLEMAXIMIZEBUTTON ();                          // DESATIVANDO O BOTÃO DE MAXIMIZAR
    CS_DISABLERESIZE         ();                          // DESATIVANDO O RESIZE DO CONSOLE
    CS_DISABLESCROLLBAR      ();                          // DESATIVANDO A BARRA DE SCROLL DO CONSOLE

    CS_SETTITLE ("Color Editor");                         // DEFININDO O TÍTULO DO CONSOLE
    SYS_SETSIZE ( 60 , 22 );                              // DEFININDO O TAMANHO DO CONSOLE

    MenuClose = 0;                                        // VARIÁVEL DE SUPORTE PARA A FUNÇÃO DrawnClose ();
    PlayedAudio = 1;                                      // VARIÁVEL PARA CONTROLAR O SOM INICIAL

    FLEE_CREATEAFOLDER ( "DESIGNS" );                     // CRIANDO A PASTA NECESSÁRIA PARA O PROGRAMA, QUE SALVARÁ OS DESIGNS

    for ( kaj = 0; kaj < 14; kaj ++ )                     // LIMPANDO O GRID
       for ( jak = 0; jak < 28; jak ++ )
    GRID [kaj] [jak] = 0;
}





void
DrawnMenu ( void )
{
    /*

    INFORMAÇÕES INTERESSANTES:

    1. PROP_BACKGROUNDCOLOR -> DEFINE A COR DE FUNDO
    2. PROP_TEXTCOLOR       -> DEFINE A COR DO TEXTO
    3. PR_CHAR              -> PRINT FORMATADO DE CARACTERES
    4. PR                   -> PRINTF SIMPLIFICADO

    // STRUCT AQUI
    5. gotoxy               -> DEFINE A POSIÇÃO DO CURSOR ( O QUE PERMITE A ESTILIZAÇÃO )

    */



    // DESENHANDO / PRINTANDO O MENU



    /* Brush */
    PROP_BACKGROUNDCOLOR ( BLUE_BACKGROUND );
    PROP_TEXTCOLOR ( BLACK_TEXT );
    PR_CHAR ( ' ' , 60 * 22 );



    /* Nome do Programa */
    PROP_BACKGROUNDCOLOR ( CYAN_BACKGROUND );
    gotoxy ( 14 , 2 ); PR_CHAR ( ' ' , 32 );
    gotoxy ( 14 , 3 ); PR_CHAR ( ' ' , 32 );
    gotoxy ( 14 , 4 ); PR_CHAR ( ' ' , 32 );
    PROP_BACKGROUNDCOLOR ( BLUE_BACKGROUND );
    gotoxy ( 15 , 5 ); PR_CHAR ( 223 , 32 );
    gotoxy ( 46 , 4 ); PR_CHAR ( 219 , 1 );
    gotoxy ( 46 , 3 ); PR_CHAR ( 219 , 1 );
    PROP_BACKGROUNDCOLOR ( CYAN_BACKGROUND );



    /* Botão de Começar */
    gotoxy ( 24 , 7 ); PR_CHAR ( ' ' , 11 );
    PROP_TEXTCOLOR ( BLACK_TEXT );
    PROP_BACKGROUNDCOLOR ( BLUE_BACKGROUND );
    gotoxy ( 25 , 8 ); PR_CHAR ( 223 , 11 );
    gotoxy ( 35 , 7 ); PR_CHAR ( 220 , 1 );
    PROP_BACKGROUNDCOLOR ( CYAN_BACKGROUND );



    /* Botão de Load */
    gotoxy ( 24 , 10 ); PR_CHAR ( ' ' , 11 );
    PROP_TEXTCOLOR ( BLACK_TEXT );
    PROP_BACKGROUNDCOLOR ( BLUE_BACKGROUND );
    gotoxy ( 25 , 11 ); PR_CHAR ( 223 , 11 );
    gotoxy ( 35 , 10 ); PR_CHAR ( 220 , 1 );
    PROP_BACKGROUNDCOLOR ( CYAN_BACKGROUND );



    /* Botão de Sobre */
    gotoxy ( 24 , 13 ); PR_CHAR ( ' ' , 11 );
    PROP_TEXTCOLOR ( BLACK_TEXT );
    PROP_BACKGROUNDCOLOR ( BLUE_BACKGROUND );
    gotoxy ( 25 , 14 ); PR_CHAR ( 223 , 11 );
    gotoxy ( 35 , 13 ); PR_CHAR ( 220 , 1 );
    PROP_BACKGROUNDCOLOR ( CYAN_BACKGROUND );



    /* Botão de Fechar */
    gotoxy ( 24 , 16 ); PR_CHAR ( ' ' , 11 );
    PROP_TEXTCOLOR ( BLACK_TEXT );
    PROP_BACKGROUNDCOLOR ( BLUE_BACKGROUND );
    gotoxy ( 25 , 17 ); PR_CHAR ( 223 , 11 );
    gotoxy ( 35 , 16 ); PR_CHAR ( 220 , 1 );
    PROP_BACKGROUNDCOLOR ( BLUE_BACKGROUND );
    PROP_TEXTCOLOR ( WHITE_TEXT );



    /* Informação da versão */
    gotoxy ( 19 , 19 );
    PR_CHAR ( 175 , 1 );
    PR (" BETA PROGRAM v 1.2 ");
    PR_CHAR ( 174 , 1 );



    /* Detalhes Finais */
    PROP_TEXTCOLOR ( BLACK_TEXT );
    gotoxy ( 14 , 1 );  PR_CHAR ( 242 , 32 );
    gotoxy ( 24 , 6 );  PR_CHAR ( 242 , 11 );
    gotoxy ( 24 , 9 );  PR_CHAR ( 242 , 11 );
    gotoxy ( 24 , 12 ); PR_CHAR ( 242 , 11 );
    gotoxy ( 24 , 15 ); PR_CHAR ( 242 , 11 );
       for ( kaj = 0; kaj < 22; kaj++ ) { gotoxy ( 0 , kaj ); PR_CHAR ( 177 , 1 ); }
        for ( kaj = 0; kaj < 22; kaj++ ) { gotoxy ( 1 , kaj ); PR_CHAR ( 176 , 1 ); }
          for ( kaj = 0; kaj < 22; kaj++ ) { gotoxy ( 59 , kaj ); PR_CHAR ( 177 , 1 ); }
           for ( kaj = 0; kaj < 22; kaj++ ) { gotoxy ( 58 , kaj ); PR_CHAR ( 176 , 1 ); }



    /* Printando os textos dos botões */
    PROP_BACKGROUNDCOLOR ( CYAN_BACKGROUND );
    gotoxy ( 24 , 3 );  PR ("COLOR EDITOR");
    gotoxy ( 27 , 7 );  PR ("START");
    gotoxy ( 27 , 10 ); PR ("LOAD!");
    gotoxy ( 27 , 13 ); PR ("ABOUT");
    gotoxy ( 27 , 16 ); PR ("CLOSE");
}





void
MenuActions ( void )
{



    /*

    INFORMAÇÕES INTERESSANTES:

    1. CASE 80 -> SETA PARA CIMA
    2. CASE 72 -> SETA PARA BAIXO
    3. CASE 13 -> TECLA ENTER
    4. control -> CARACTERE EXECUTADO DENTRO DO LOOP PARA PEGAR AS TECLAS

    */



    char control;           // char de controle
    int  pos = MenuChoice;  // int  de posição



    // Loop Para Seleção de Menu
    while ( control not_eq 13 or MenuChoice == 0 )
    {


        // Pega a Tecla
        control = getch ();


        // Valida a Tecla
        switch ( control )
        {
        case 80: pos++; if ( pos > 4 ) pos = 1; break;
        case 72: pos--; if ( pos < 1 ) pos = 4; break;
        }


        // Executa o Movimento no Meny
        if ( pos == 1 ) { gotoxy ( 27 , 7 ); PROP_TEXTCOLOR ( WHITE_TEXT );  PR ("START"); MenuChoice = pos; }
        else            { gotoxy ( 27 , 7 ); PROP_TEXTCOLOR ( BLACK_TEXT );  PR ("START"); }

        if ( pos == 2 ) { gotoxy ( 27 , 10 ); PROP_TEXTCOLOR ( WHITE_TEXT ); PR ("LOAD!"); MenuChoice = pos; }
        else            { gotoxy ( 27 , 10 ); PROP_TEXTCOLOR ( BLACK_TEXT ); PR ("LOAD!"); }

        if ( pos == 3 ) { gotoxy ( 27 , 13 ); PROP_TEXTCOLOR ( WHITE_TEXT ); PR ("ABOUT"); MenuChoice = pos; }
        else            { gotoxy ( 27 , 13 ); PROP_TEXTCOLOR ( BLACK_TEXT ); PR ("ABOUT"); }

        if ( pos == 4 ) { gotoxy ( 27 , 16 ); PROP_TEXTCOLOR ( WHITE_TEXT ); PR ("CLOSE"); MenuChoice = pos; }
        else            { gotoxy ( 27 , 16 ); PROP_TEXTCOLOR ( BLACK_TEXT ); PR ("CLOSE"); }

    }
}





void
DrawnStart ( void )
{


    SYS_CLEARSCREEN ();
    PROP_RESETCOLOR ();
    MenuChoice = 0;



    /*

    INFORMAÇÕES INTERESSANTES: CRIAÇÃO DE DESIGN

    1. getS             -> ENTRADA DE STRING CONTROLADA
    2. FLEE_CREATEAFILE -> CRIA UM ARQUIVO
    3. FLEE_WRITEstring -> PRINTF DE ARQUIVOS ( PRINTA O CONTEÚDO NA ÚLTIMA POSIÇÃO DO CURSOR )

    */



    /* Brush */
    PROP_BACKGROUNDCOLOR ( BLUE_BACKGROUND );
    PROP_TEXTCOLOR ( BLACK_TEXT );
        PR_CHAR ( ' ' , 60 * 22 ); gotoxy ( 0 , 0 );


    PROP_BACKGROUNDCOLOR ( CYAN_BACKGROUND );
    gotoxy ( 14 , 7 );  PR_CHAR ( ' ' , 32 );
    gotoxy ( 14 , 8 );  PR_CHAR ( ' ' , 32 );
    gotoxy ( 14 , 9 );  PR_CHAR ( ' ' , 32 );
    gotoxy ( 14 , 10 ); PR_CHAR ( ' ' , 32 );
    gotoxy ( 14 , 11 ); PR_CHAR ( ' ' , 32 );
    gotoxy ( 14 , 12 ); PR_CHAR ( ' ' , 32 );
    PROP_BACKGROUNDCOLOR ( BLUE_BACKGROUND );
    gotoxy ( 15 , 13 ); PR_CHAR ( 223 , 32 );
    gotoxy ( 46 , 8 );  PR_CHAR ( 219 , 1 ); gotoxy ( 46 , 9 ); PR_CHAR ( 219 , 1 ); gotoxy ( 46 , 10 ); PR_CHAR ( 219 , 1 ); gotoxy ( 46 , 11 ); PR_CHAR ( 219 , 1 ); gotoxy ( 46 , 12 ); PR_CHAR ( 219 , 1 );
    gotoxy ( 14 , 7 );  PR_CHAR ( 242 , 32 );
    PROP_BACKGROUNDCOLOR ( CYAN_BACKGROUND );
    gotoxy ( 19 , 9 );  PR ("SET A NEW DESIGN NAME!");
    PROP_BACKGROUNDCOLOR ( BLUE_BACKGROUND );
    gotoxy ( 20 , 11 ); PR_CHAR ( ' ' , 19 );
    PROP_TEXTCOLOR ( WHITE_TEXT );
    gotoxy ( 17 , 20 ); PR ("TO RETURN TO MENU TYPE :q!");
    gotoxy ( 21 , 11 );



    /* Recebendo o Nome do Novo Design */
    getS ( "" , 0 , 0 , SZE , 17 , DesignCreate , ' ' , 0 );



    /* Executando umas Confirmações */
    if ( strcmp ( DesignCreate , ":q!" ) == 0 or strcmp ( DesignCreate , ":Q!" ) == 0 ) main ();
    else sprintf (  DesignLayout , "DESIGNS/%s.txt" , DesignCreate );



    /* Padronizando o Design */
    FLEE_CREATEAFILE ( DesignLayout );
    FLEE_WRITEstring ( DesignLayout , "28x14 = ");
    FLEE_WRITEstring ( DesignLayout , DesignCreate );
    FLEE_WRITEstring ( DesignLayout , "\n\n");
        for ( kaj = 0; kaj < 59 - 4; kaj++ ) FLEE_WRITEstring ( DesignLayout , "-");
    FLEE_WRITEstring ( DesignLayout , "\n");

    /*
        for ( kaj = 0; kaj < 14; kaj++ ) FLEE_WRITEstring ( DesignLayout , "0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0\n");
        for ( kaj = 0; kaj < 59 - 4; kaj++ )
        FLEE_WRITEstring ( DesignLayout , "-");
    */

    /*

    INFORMAÇÕES INTERESSANTES: DESENHO

    */



    SYS_CLEARSCREEN ();
    PROP_RESETCOLOR ();

    /* Brush */
    PROP_BACKGROUNDCOLOR ( BLUE_BACKGROUND );
    PROP_TEXTCOLOR ( BLACK_TEXT );
    PR_CHAR ( ' ' , 60 * 22 ); gotoxy ( 0 , 0 );



    /* Desenhando o GRID pt1 */
    PROP_TEXTCOLOR ( CYAN_TEXT );
    PROP_TEXTCOLOR ( WHITE_TEXT );
    gotoxy ( 14 , 1 );  PR ("EDITOR");
    gotoxy ( 5 , 2 );   PR ("DRAWN IN THE BOX BELLOW!");
    PROP_BACKGROUNDCOLOR ( CYAN_BACKGROUND );
    PROP_TEXTCOLOR ( BLACK_TEXT );
        for ( jak = 34; jak < 60; jak++ )
        for ( kaj = 0; kaj < 22; kaj++ ) { gotoxy ( jak , kaj ); PR_CHAR ( ' ' , 1 ); }
    gotoxy ( 43 , 1 );  PR ("COMMANDS");
    gotoxy ( 35 , 3 );  PR ("- TO RETURN TO MENU JUST");
    gotoxy ( 37 , 4 );  PR ("TYPE");
    PROP_TEXTCOLOR ( WHITE_TEXT );
    gotoxy ( 42 , 4 );  PR (":q!");
    PROP_TEXTCOLOR ( BLACK_TEXT );
    gotoxy ( 35 , 6 );  PR ("- PRESS");
    PROP_TEXTCOLOR ( WHITE_TEXT );
    gotoxy ( 43 , 6 );  PR ("ESC");
    PROP_TEXTCOLOR ( BLACK_TEXT );
    gotoxy ( 47 , 6 );  PR ("TO TYPE A");
    gotoxy ( 37 , 7 );  PR ("A COMMAND!");
    gotoxy ( 35 , 9 );  PR ("- TO SAVE THE DESIGN U");
    gotoxy ( 37 , 10 ); PR ("NEED TO TYPE");
    PROP_TEXTCOLOR ( WHITE_TEXT );
    gotoxy ( 50 , 10 ); PR ("SAVE");
    PROP_TEXTCOLOR ( BLACK_TEXT );
    gotoxy ( 37 , 18 ); PR ("TYPE UR COMMAND HERE");
    PROP_BACKGROUNDCOLOR ( BLUE_BACKGROUND );
    gotoxy ( 37 , 20 ); PR_CHAR ( ' ' , 20 );
    PROP_BACKGROUNDCOLOR ( CYAN_BACKGROUND );
    gotoxy ( 35 , 12 ); PR ("- TO PAINT U NEED TO USE");
    PROP_TEXTCOLOR ( WHITE_TEXT );
    gotoxy ( 35 , 13 ); PR ("  1, 2, 3, 4, 5, 6, 7, 8");
    PROP_TEXTCOLOR ( BLACK_TEXT );
    gotoxy ( 35 , 14 ); PR ("  KEYS TO PAINT!");



    /* Desenhando o GRID pt2 */
    PROP_BACKGROUNDCOLOR ( DEFAULT_BACKGROUND );
        for ( jak = 5; jak < 19; jak++ )
           for ( kaj = 3; kaj < 31; kaj++ ) { gotoxy ( kaj , jak ); PR_CHAR ( ' ' , 1 ); }
        for ( kaj = 7; kaj < 14; kaj++  ) { gotoxy ( 8 , kaj );     PR_CHAR ( 186 , 1 ); }
        for ( kaj = 7; kaj < 14; kaj++  ) { gotoxy ( 25 , kaj );    PR_CHAR ( 186 , 1 ); }



    /* Função Para Desenhar no Grid e Executar Comandos */
    StartActions ();
}





void
StartActions ( void )
{



    /*

    INFORMAÇÕES INTERESSANTES: COMANDOS E DESENHO NO GRID

    1. PROP_SHOWCURSOR   -> MOSTRA O CURSOR
    2. PROP_MOVEUP       -> MOVE O CURSOR PRA CIMA A QUANTIDADE DEFINIDA
    3. PROP_MOVEDOWN     -> MOVE O CURSOR PARA BAIXO A QUANTIDADE DEFINIDA
    4. PROP_MOVELEFT     -> MOVE O CURSOR PARA A ESQUERDA A QUANTIDADE DEFINIDA
    5. PROP_MOVERIGHT    -> MOVE O CURSOR PARA A DIREITA A QUANTIDADE DEFINIDAS
    6. PROP_HIDECURSOR   -> ESCONDE O CURSOR

    */



    char c;
    char COMMAND [20];
    int posX = 0;
    int posY = 0;



    PROP_SHOWCURSOR ();
    gotoxy ( 3 , 5 );



    while ( c not_eq 27 )
    {
         c = getch ();

        // < TECLA: CIMA  >//
        if ( c == 72 and posY > 0 )
        {
             PROP_MOVEUP ( 1 );
             posY--;
        }

        // < TECLA: BAIXO  >//
        if ( c == 80 and posY < 13 )
        {
             PROP_MOVEDOWN ( 1 );
             posY++;
        }

        // < TECLA: ESQUERDA  >//
        if ( c == 75 and posX > 0 )
        {
             PROP_MOVELEFT ( 1 );
             posX--;
        }

        // < TECLA: DIREITA  >//
        if ( c == 77 and posX < 27 )
        {
             PROP_MOVERIGHT ( 1 );
             posX++;
        }


        // PRETO
        if ( c == '1' and posX < 28 )
        {
            PROP_BACKGROUNDCOLOR ( DEFAULT_BACKGROUND );
            PR_CHAR ( ' ' , 1 );

            GRID [ posY ] [ posX ] = 0;

            posX++;
        }

        // VERMELHO
        if ( c == '2' and posX < 28 )
        {
            PROP_BACKGROUNDCOLOR ( RED_BACKGROUND );
            PR_CHAR ( ' ' , 1 );

            GRID [ posY ] [ posX ] = 1;

            posX++;
        }

        // VERDE
        if ( c == '3' and posX < 28 )
        {
            PROP_BACKGROUNDCOLOR ( GREEN_BACKGROUND );
            PR_CHAR ( ' ' , 1 );

            GRID [ posY ] [ posX ] = 2;

            posX++;
        }

        // AMARELO
        if ( c == '4' and posX < 28 )
        {
            PROP_BACKGROUNDCOLOR ( YELLOW_BACKGROUND );
            PR_CHAR ( ' ' , 1 );

            GRID [ posY ] [ posX ] = 3;

            posX++;
        }

        // AZUL
        if ( c == '5' and posX < 28 )
        {
            PROP_BACKGROUNDCOLOR ( BLUE_BACKGROUND );
            PR_CHAR ( ' ' , 1 );

            GRID [ posY ] [ posX ] = 4;

            posX++;
        }

        // MAGENTA
        if ( c == '6' and posX < 28 )
        {
            PROP_BACKGROUNDCOLOR ( MAGENTA_BACKGROUND );
            PR_CHAR ( ' ' , 1 );

            GRID [ posY ] [ posX ] = 5;

            posX++;
        }

        // CIANO
        if ( c == '7' and posX < 28 )
        {
            PROP_BACKGROUNDCOLOR ( CYAN_BACKGROUND );
            PR_CHAR ( ' ' , 1 );

            GRID [ posY ] [ posX ] = 6;

            posX++;
        }

        // BRANCO
        if ( c == '8' and posX < 28 )
        {
            PROP_BACKGROUNDCOLOR ( WHITE_BACKGROUND );
            PR_CHAR ( ' ' , 1 );

            GRID [ posY ] [ posX ] = 7;

            posX++;
        }

    }



    PROP_HIDECURSOR ();
    PROP_BACKGROUNDCOLOR ( BLUE_BACKGROUND );
    PROP_TEXTCOLOR ( WHITE_TEXT );



    // Recebendo os Comandos
    gotoxy ( 38 , 20 ); getS ( "" , 0 , 0 , SZE , 18 , COMMAND , ' ' , 0 );




    // Voltando ao Menu sem Salvar
    if ( strcmp ( COMMAND , ":q!" ) == 0 or strcmp ( COMMAND , ":Q!" ) == 0 ) main ();



    // Voltando a Desenhar no GRID
    if ( strcmp ( COMMAND , "R" ) == 0 or strcmp ( COMMAND , "r" ) == 0 )
    {
        gotoxy ( 38 , 20 ); PR_CHAR ( ' ' , 18 );

        // Recursividade
        // Voltando ao inicío dessa função
        StartActions ();
    }



    // Salvando o GRID Desenhado e Voltando ao Menu
    if ( strcmp ( COMMAND , "SAVE" ) == 0 or strcmp ( COMMAND , "save" ) == 0 ) SaveGrid ();



    // Caso Digite um Comando Inexistente
    else
    {
        SB_CREATEBOX ( "The command doesn't exists!" , "Command Tab", MB_OK | MB_ICONEXCLAMATION | MB_DEFBUTTON1 | MB_SYSTEMMODAL  );

        gotoxy ( 38 , 20 ); PR_CHAR ( ' ' , 18 );

        // Recursividade
        // Voltando ao inicío dessa função
        StartActions ();
    }

}




void
DrawnLoad ( void )
{



    SYS_CLEARSCREEN ();
    PROP_RESETCOLOR ();
    MenuChoice = 0;



    /* Brush */
    PROP_BACKGROUNDCOLOR ( BLUE_BACKGROUND );
    PROP_TEXTCOLOR ( BLACK_TEXT );
    PR_CHAR ( ' ' , 60 * 22 );



    /* Contents */
    gotoxy ( 14 , 1 ); PR ("DESIGNS");
    for ( kaj = 2; kaj < 20; kaj++ ) { gotoxy ( 1 , kaj ); PR_CHAR ( 186 , 1 ); gotoxy ( 33 , kaj ); PR_CHAR ( 186 , 1 ); }
    gotoxy ( 1 , 1 );   PR_CHAR ( 201 , 1 );
    gotoxy ( 2 , 1 );   PR_CHAR ( 205 , 11 );
    gotoxy ( 1 , 20 );  PR_CHAR ( 200 , 1 );
    gotoxy ( 2 , 20 );  PR_CHAR ( 205 , 31 );
    gotoxy ( 33 , 1 );  PR_CHAR ( 187 , 1 );
    gotoxy ( 33 , 20 ); PR_CHAR ( 188 , 1 );
    gotoxy ( 22 , 1 );  PR_CHAR ( 205 , 11 );
    PROP_TEXTCOLOR ( WHITE_TEXT );



    /* Listando os Designs no Console */
    ListContent ();



    /* Finalizando o Print de Detalhes */
    PROP_BACKGROUNDCOLOR ( CYAN_BACKGROUND );
    for ( jak = 35; jak < 60; jak++ )
    for ( kaj = 0; kaj < 22; kaj++ ) { gotoxy ( jak , kaj );   PR_CHAR ( ' ' , 1 ); }
    PROP_TEXTCOLOR ( BLACK_TEXT );
    gotoxy ( 42 , 10 ); PR ("LOAD DESIGN");
    PROP_TEXTCOLOR ( BLUE_TEXT );
    gotoxy ( 38 , 1 ); PR ("HOW TO USE:");
    PROP_TEXTCOLOR ( BLACK_TEXT );
    gotoxy ( 50 , 1 ); PR ("TYPE THE ");
    gotoxy ( 38 , 2 ); PR ("DESIGN NAME TO LOAD");
    gotoxy ( 38 , 3 ); PR ("AND TO RETURN TO THE");
    gotoxy ( 38 , 4 ); PR ("MENU TYPE :q!");
    PROP_BACKGROUNDCOLOR ( BLUE_BACKGROUND );
    gotoxy ( 36 , 13 ); PR_CHAR ( ' ' , 23 );
    PROP_TEXTCOLOR ( WHITE_TEXT );



    /* Recebendo o Design Para ser Executado */
    gotoxy ( 37 , 13 ); getS ( "" , 0 , 0 , SZE , 21 , DesignLayout , ' ' , 0 );



    /* Comparações para Saber se Irá Retornar ao Menu */
    if ( strcmp ( DesignLayout , ":q!" ) == 0 or strcmp ( DesignLayout , ":Q!" ) == 0 ) main ();

    sprintf ( DesignSet , "DESIGNS/%s" , DesignLayout );



    SYS_CLEARSCREEN ();
    PROP_RESETCOLOR ();



    /* Preenchendo o GRID com os Valores no Arquivo */
    FillGrid ();



    /* Finalização do Print */
    SYS_SETSIZE ( 40 , 20 );
    char new_title [100];
        sprintf ( new_title , "DESIGN VIEW: %s" , DesignLayout );
    SYS_SETTITLE ( new_title );
    PROP_TEXTCOLOR ( WHITE_TEXT );
    PROP_BACKGROUNDCOLOR ( BLUE_BACKGROUND );
    for ( kaj = 0; kaj < 20; kaj++ ) { gotoxy ( 0 , kaj );     PR_CHAR ( 177 , 1 ); }
       for ( kaj = 0; kaj < 20; kaj++ ) { gotoxy ( 1 , kaj );  PR_CHAR ( 176 , 1 ); }
    for ( kaj = 0; kaj < 20; kaj++ ) { gotoxy ( 38 , kaj );    PR_CHAR ( 176 , 1 ); }
       for ( kaj = 0; kaj < 20; kaj++ ) { gotoxy ( 39 , kaj ); PR_CHAR ( 177 , 1 ); }
    gotoxy ( 6 , 18 ); PR ("PRESS ESC TO RETURN TO MENU!");



    /* Printando o ID do Design */
    FLEE_GETCHstring ( DesignSet , 1 , 7 , 100 , DesignName );



    /* Detalhes Adicionais */
    PROP_TEXTCOLOR ( WHITE_TEXT );
    gotoxy ( 3 , 1 ); PR ( "DESIGN NAME: " );
    PROP_TEXTCOLOR ( GREEN_TEXT );
    gotoxy ( 15 , 1 ); PR ( DesignName );
    gotoxy ( 12 , 6 );

    /* Função que printa o GRID */
    DrawnDesign ();


    /* Para Retornar ao Menu o Usuário Precisa Pressionar ESC */
    while ( getch () not_eq 27 ) {} main ();
}





void
DrawnAbout ( void )
{



    SYS_CLEARSCREEN ();
    PROP_RESETCOLOR ();
    MenuChoice = 0;



    /* Brush */
    PROP_BACKGROUNDCOLOR ( BLUE_BACKGROUND );
    PROP_TEXTCOLOR ( BLACK_TEXT );
    PR_CHAR ( ' ' , 60 * 22 );



    /* Nome */
    PROP_BACKGROUNDCOLOR ( CYAN_BACKGROUND );
    gotoxy ( 14 , 2 ); PR_CHAR ( ' ' , 32 );
    gotoxy ( 14 , 3 ); PR_CHAR ( ' ' , 32 );
    gotoxy ( 14 , 4 ); PR_CHAR ( ' ' , 32 );



    /* Sobre */
    gotoxy ( 18 , 8 );  PR_CHAR ( ' ' , 24 );
    gotoxy ( 18 , 9 );  PR_CHAR ( ' ' , 24 );
    gotoxy ( 18 , 10 ); PR_CHAR ( ' ' , 24 );
    gotoxy ( 18 , 11 ); PR_CHAR ( ' ' , 24 );
    gotoxy ( 18 , 12 ); PR_CHAR ( ' ' , 24 );
    gotoxy ( 18 , 13 ); PR_CHAR ( ' ' , 24 );
    gotoxy ( 18 , 14 ); PR_CHAR ( ' ' , 24 );
    gotoxy ( 18 , 15 ); PR_CHAR ( ' ' , 24 );
    PROP_BACKGROUNDCOLOR ( BLUE_BACKGROUND );
       for ( kaj = 0; kaj < 22; kaj++ ) { gotoxy ( 0 , kaj ); PR_CHAR ( 177 , 1 ); }
    for ( kaj = 0; kaj < 22; kaj++ ) { gotoxy ( 1 , kaj ); PR_CHAR ( 176 , 1 ); }
       for ( kaj = 0; kaj < 22; kaj++ ) { gotoxy ( 59 , kaj ); PR_CHAR ( 177 , 1 ); }
    for ( kaj = 0; kaj < 22; kaj++ ) { gotoxy ( 58 , kaj ); PR_CHAR ( 176 , 1 ); }
    gotoxy ( 14 , 1 );  PR_CHAR ( 242 , 32 );
    gotoxy ( 18 , 7 );  PR_CHAR ( 242 , 24 );
    gotoxy ( 15 , 5 );  PR_CHAR ( 223 , 32 );
    gotoxy ( 46 , 4 );  PR_CHAR ( 219 , 1 );
    gotoxy ( 46 , 3 );  PR_CHAR ( 219 , 1 );
    gotoxy ( 19 , 16 ); PR_CHAR ( 223 , 24 );
       for ( jak = 9; jak <= 15; jak++ ) { gotoxy ( 42 , jak ); PR_CHAR ( 219 , 1 ); }
    PROP_BACKGROUNDCOLOR ( CYAN_BACKGROUND );



    /* Printando as Informações Finais */
    gotoxy ( 28 , 3 );  PR ("ABOUT");
    gotoxy ( 24 , 9 );  PR ("COLOR EDITOR");
    gotoxy ( 22 , 11 ); PR ("In-console color");
    gotoxy ( 23 , 12 ); PR ("rendering tool");
    gotoxy ( 21 , 13 ); PR ("using escape codes");
    gotoxy ( 24 , 14 ); PR ("and allen.h");
    PROP_BACKGROUNDCOLOR ( BLUE_BACKGROUND );
    PROP_TEXTCOLOR ( WHITE_TEXT );
    gotoxy ( 15 , 19 ); PR_CHAR ( 175 , 1 ); PR (" PRESS ESC TO RETURN TO MENU "); PR_CHAR ( 174 , 1 );



    /* Esperando o Usuário Apertar ESC */
    while ( getch () not_eq 27 ) {} main ();
}





void
DrawnClose ( void )
{

    // ESSA FUNÇÃO BASICAMENTE SERVE PARA EXECUTAR UM PROMPT PARA CONFIRMAR SE O USUÁRIO
    // REALMENTE QUER ENCERRAR O PROGRAMA

    MenuClose = SB_CREATEBOX ( "Do you want to close the application?" , "Please Confirm!" , MB_YESNO | MB_ICONQUESTION | MB_DEFBUTTON2 | MB_SYSTEMMODAL );

    MenuChoice = 0;

    if ( MenuClose not_eq IDYES ) main ();

    SYS_CLEARSCREEN ();
    PROP_RESETCOLOR ();
}





void
ListContent ( void )
{

     // ESSA FUNÇÃO BASICAMENTE VAI LER TODO OS ARQUIVOS DA PASTA DESIGN
     // E SIMPLESMENTE LISTAR NO CONSOLE TODOS OS ARQUIVOS QUE POSSUAM A
     // TERMINAÇÃO .txt QUE É O PADRÃO UTILIZADO PARA ARMAZENAR OS DESIGNS

     DIR * dir;
     struct dirent * ent;
     struct stat file_stat;

     char * folder_name = "DESIGNS";
     char * ext = ".txt";

     int ext_len = strlen ( ext );

     dir = opendir ( folder_name );

     kaj = 1;

     while ( ( ent = readdir ( dir ) ) not_eq NULL )
     {
          if ( strlen ( ent -> d_name ) >= ext_len and strcmp ( ent -> d_name + strlen ( ent -> d_name ) - ext_len , ext ) == 0 )
          {
             char path [ 1024 ];

             gotoxy ( 4 , kaj ); sprintf ( path , "%s/%s" , folder_name , ent -> d_name );

             if ( stat ( path , &file_stat ) == -1 ) continue;

             if ( S_ISREG ( file_stat.st_mode ) ) printf ("%s\n", ent -> d_name);
          }
          kaj++;
     }

    closedir ( dir );
}





void
FillGrid ( void )
{
     int c = 0;

     // ESSA FUNÇÃO BASICAMENTE VAI SALVAR NA MATRIZ GRID TODAS OS PIXELS PRESENTES NO ARQUIVO
     // ORGANIZANDO PARA QUE O PRINT DESSE ARQUIVO SEJA REALIZADO

     if ( fopen ( DesignSet , "r" ) == NULL )
     {
         SB_CREATEBOX ( "The informed design does not exist!" , "Problem reading the design!" , MB_OK | MB_ICONEXCLAMATION |MB_DEFBUTTON1 | MB_SYSTEMMODAL  );
         DrawnLoad ();
     }

     else
     {
    /* 0 */ for ( kaj = 0; kaj < 28; kaj++ ) { GRID [0] [kaj] = FLEE_GETCHint ( DesignSet , 4 , c + 1 , c + 2 ); c = c + 2; }
c = 0;
    /* 1 */ for ( kaj = 0; kaj < 28; kaj++ ) { GRID [1] [kaj] = FLEE_GETCHint ( DesignSet , 5 , c + 1 , c + 2 ); c = c + 2; }
c = 0;
    /* 2 */ for ( kaj = 0; kaj < 28; kaj++ ) { GRID [2] [kaj] = FLEE_GETCHint ( DesignSet , 6 , c + 1 , c + 2 ); c = c + 2; }
c = 0;
    /* 3 */ for ( kaj = 0; kaj < 28; kaj++ ) { GRID [3] [kaj] = FLEE_GETCHint ( DesignSet , 7 , c + 1 , c + 2 ); c = c + 2; }
c = 0;
    /* 4 */ for ( kaj = 0; kaj < 28; kaj++ ) { GRID [4] [kaj] = FLEE_GETCHint ( DesignSet , 8 , c + 1 , c + 2 ); c = c + 2; }
c = 0;
    /* 5 */ for ( kaj = 0; kaj < 28; kaj++ ) { GRID [5] [kaj] = FLEE_GETCHint ( DesignSet , 9 , c + 1 , c + 2 ); c = c + 2; }
c = 0;
    /* 6 */ for ( kaj = 0; kaj < 28; kaj++ ) { GRID [6] [kaj] = FLEE_GETCHint ( DesignSet , 10 , c + 1 , c + 2 ); c = c + 2; }
c = 0;
    /* 7 */ for ( kaj = 0; kaj < 28; kaj++ ) { GRID [7] [kaj] = FLEE_GETCHint ( DesignSet , 11 , c + 1 , c + 2 ); c = c + 2; }
c = 0;
    /* 8 */ for ( kaj = 0; kaj < 28; kaj++ ) { GRID [8] [kaj] = FLEE_GETCHint ( DesignSet , 12 , c + 1 , c + 2 ); c = c + 2; }
c = 0;
    /* 9 */ for ( kaj = 0; kaj < 28; kaj++ ) { GRID [9] [kaj] = FLEE_GETCHint ( DesignSet , 13 , c + 1 , c + 2 ); c = c + 2; }
c = 0;
    /* 10 */ for ( kaj = 0; kaj < 28; kaj++ ) { GRID [10] [kaj] = FLEE_GETCHint ( DesignSet , 14 , c + 1 , c + 2 ); c = c + 2; }
c = 0;
    /* 11 */ for ( kaj = 0; kaj < 28; kaj++ ) { GRID [11] [kaj] = FLEE_GETCHint ( DesignSet , 15 , c + 1 , c + 2 ); c = c + 2; }
c = 0;
    /* 12 */ for ( kaj = 0; kaj < 28; kaj++ ) { GRID [12] [kaj] = FLEE_GETCHint ( DesignSet , 16 , c + 1 , c + 2 ); c = c + 2; }
c = 0;
    /* 13 */ for ( kaj = 0; kaj < 28; kaj++ ) { GRID [13] [kaj] = FLEE_GETCHint ( DesignSet , 17 , c + 1 , c + 2 ); c = c + 2; }
}
}





void
DrawnDesign ( void )
{
        /* 0 */
        gotoxy ( 6 , 3 );
        for ( kaj = 0; kaj < 28; kaj++ )
        {
        if ( GRID [0] [kaj] == 0 ) PROP_TEXTCOLOR ( BLACK_TEXT );
        if ( GRID [0] [kaj] == 1 ) PROP_TEXTCOLOR ( RED_TEXT );
        if ( GRID [0] [kaj] == 2 ) PROP_TEXTCOLOR ( GREEN_TEXT );
        if ( GRID [0] [kaj] == 3 ) PROP_TEXTCOLOR ( YELLOW_TEXT );
        if ( GRID [0] [kaj] == 4 ) PROP_TEXTCOLOR ( BLUE_TEXT );
        if ( GRID [0] [kaj] == 5 ) PROP_TEXTCOLOR ( MAGENTA_TEXT );
        if ( GRID [0] [kaj] == 6 ) PROP_TEXTCOLOR ( CYAN_TEXT );
        if ( GRID [0] [kaj] == 7 ) PROP_TEXTCOLOR ( WHITE_TEXT );

        PR_CHAR ( 219 , 1 );
        }

        /* 1 */
        gotoxy ( 6 , 4 );
        for ( kaj = 0; kaj < 28; kaj++ )
        {
        if ( GRID [1] [kaj] == 0 ) PROP_TEXTCOLOR ( BLACK_TEXT );
        if ( GRID [1] [kaj] == 1 ) PROP_TEXTCOLOR ( RED_TEXT );
        if ( GRID [1] [kaj] == 2 ) PROP_TEXTCOLOR ( GREEN_TEXT );
        if ( GRID [1] [kaj] == 3 ) PROP_TEXTCOLOR ( YELLOW_TEXT );
        if ( GRID [1] [kaj] == 4 ) PROP_TEXTCOLOR ( BLUE_TEXT );
        if ( GRID [1] [kaj] == 5 ) PROP_TEXTCOLOR ( MAGENTA_TEXT );
        if ( GRID [1] [kaj] == 6 ) PROP_TEXTCOLOR ( CYAN_TEXT );
        if ( GRID [1] [kaj] == 7 ) PROP_TEXTCOLOR ( WHITE_TEXT );

        PR_CHAR ( 219 , 1 );
        }

        /* 2 */
        gotoxy ( 6 , 5 );
        for ( kaj = 0; kaj < 28; kaj++ )
        {
        if ( GRID [2] [kaj] == 0 ) PROP_TEXTCOLOR ( BLACK_TEXT );
        if ( GRID [2] [kaj] == 1 ) PROP_TEXTCOLOR ( RED_TEXT );
        if ( GRID [2] [kaj] == 2 ) PROP_TEXTCOLOR ( GREEN_TEXT );
        if ( GRID [2] [kaj] == 3 ) PROP_TEXTCOLOR ( YELLOW_TEXT );
        if ( GRID [2] [kaj] == 4 ) PROP_TEXTCOLOR ( BLUE_TEXT );
        if ( GRID [2] [kaj] == 5 ) PROP_TEXTCOLOR ( MAGENTA_TEXT );
        if ( GRID [2] [kaj] == 6 ) PROP_TEXTCOLOR ( CYAN_TEXT );
        if ( GRID [2] [kaj] == 7 ) PROP_TEXTCOLOR ( WHITE_TEXT );

        PR_CHAR ( 219 , 1 );
        }

        /* 3 */
        gotoxy ( 6 , 6 );
        for ( kaj = 0; kaj < 28; kaj++ )
        {
        if ( GRID [3] [kaj] == 0 ) PROP_TEXTCOLOR ( BLACK_TEXT );
        if ( GRID [3] [kaj] == 1 ) PROP_TEXTCOLOR ( RED_TEXT );
        if ( GRID [3] [kaj] == 2 ) PROP_TEXTCOLOR ( GREEN_TEXT );
        if ( GRID [3] [kaj] == 3 ) PROP_TEXTCOLOR ( YELLOW_TEXT );
        if ( GRID [3] [kaj] == 4 ) PROP_TEXTCOLOR ( BLUE_TEXT );
        if ( GRID [3] [kaj] == 5 ) PROP_TEXTCOLOR ( MAGENTA_TEXT );
        if ( GRID [3] [kaj] == 6 ) PROP_TEXTCOLOR ( CYAN_TEXT );
        if ( GRID [3] [kaj] == 7 ) PROP_TEXTCOLOR ( WHITE_TEXT );

        PR_CHAR ( 219 , 1 );
        }

        /* 4 */
        gotoxy ( 6 , 7 );
        for ( kaj = 0; kaj < 28; kaj++ )
        {
        if ( GRID [4] [kaj] == 0 ) PROP_TEXTCOLOR ( BLACK_TEXT );
        if ( GRID [4] [kaj] == 1 ) PROP_TEXTCOLOR ( RED_TEXT );
        if ( GRID [4] [kaj] == 2 ) PROP_TEXTCOLOR ( GREEN_TEXT );
        if ( GRID [4] [kaj] == 3 ) PROP_TEXTCOLOR ( YELLOW_TEXT );
        if ( GRID [4] [kaj] == 4 ) PROP_TEXTCOLOR ( BLUE_TEXT );
        if ( GRID [4] [kaj] == 5 ) PROP_TEXTCOLOR ( MAGENTA_TEXT );
        if ( GRID [4] [kaj] == 6 ) PROP_TEXTCOLOR ( CYAN_TEXT );
        if ( GRID [4] [kaj] == 7 ) PROP_TEXTCOLOR ( WHITE_TEXT );

        PR_CHAR ( 219 , 1 );

        }

        /* 5 */
        gotoxy ( 6 , 8 );
        for ( kaj = 0; kaj < 28; kaj++ )
        {
        if ( GRID [5] [kaj] == 0 ) PROP_TEXTCOLOR ( BLACK_TEXT );
        if ( GRID [5] [kaj] == 1 ) PROP_TEXTCOLOR ( RED_TEXT );
        if ( GRID [5] [kaj] == 2 ) PROP_TEXTCOLOR ( GREEN_TEXT );
        if ( GRID [5] [kaj] == 3 ) PROP_TEXTCOLOR ( YELLOW_TEXT );
        if ( GRID [5] [kaj] == 4 ) PROP_TEXTCOLOR ( BLUE_TEXT );
        if ( GRID [5] [kaj] == 5 ) PROP_TEXTCOLOR ( MAGENTA_TEXT );
        if ( GRID [5] [kaj] == 6 ) PROP_TEXTCOLOR ( CYAN_TEXT );
        if ( GRID [5] [kaj] == 7 ) PROP_TEXTCOLOR ( WHITE_TEXT );

        PR_CHAR ( 219 , 1 );
        }

        /* 6 */
        gotoxy ( 6 , 9 );
        for ( kaj = 0; kaj < 28; kaj++ )
        {
        if ( GRID [6] [kaj] == 0 ) PROP_TEXTCOLOR ( BLACK_TEXT );
        if ( GRID [6] [kaj] == 1 ) PROP_TEXTCOLOR ( RED_TEXT );
        if ( GRID [6] [kaj] == 2 ) PROP_TEXTCOLOR ( GREEN_TEXT );
        if ( GRID [6] [kaj] == 3 ) PROP_TEXTCOLOR ( YELLOW_TEXT );
        if ( GRID [6] [kaj] == 4 ) PROP_TEXTCOLOR ( BLUE_TEXT );
        if ( GRID [6] [kaj] == 5 ) PROP_TEXTCOLOR ( MAGENTA_TEXT );
        if ( GRID [6] [kaj] == 6 ) PROP_TEXTCOLOR ( CYAN_TEXT );
        if ( GRID [6] [kaj] == 7 ) PROP_TEXTCOLOR ( WHITE_TEXT );

        PR_CHAR ( 219 , 1 );
        }

        /* 7 */
        gotoxy ( 6 , 10 );
        for ( kaj = 0; kaj < 28; kaj++ )
        {
        if ( GRID [7] [kaj] == 0 ) PROP_TEXTCOLOR ( BLACK_TEXT );
        if ( GRID [7] [kaj] == 1 ) PROP_TEXTCOLOR ( RED_TEXT );
        if ( GRID [7] [kaj] == 2 ) PROP_TEXTCOLOR ( GREEN_TEXT );
        if ( GRID [7] [kaj] == 3 ) PROP_TEXTCOLOR ( YELLOW_TEXT );
        if ( GRID [7] [kaj] == 4 ) PROP_TEXTCOLOR ( BLUE_TEXT );
        if ( GRID [7] [kaj] == 5 ) PROP_TEXTCOLOR ( MAGENTA_TEXT );
        if ( GRID [7] [kaj] == 6 ) PROP_TEXTCOLOR ( CYAN_TEXT );
        if ( GRID [7] [kaj] == 7 ) PROP_TEXTCOLOR ( WHITE_TEXT );

        PR_CHAR ( 219 , 1 );
        }

        /* 8 */
        gotoxy ( 6 , 11 );
        for ( kaj = 0; kaj < 28; kaj++ )
        {
        if ( GRID [8] [kaj] == 0 ) PROP_TEXTCOLOR ( BLACK_TEXT );
        if ( GRID [8] [kaj] == 1 ) PROP_TEXTCOLOR ( RED_TEXT );
        if ( GRID [8] [kaj] == 2 ) PROP_TEXTCOLOR ( GREEN_TEXT );
        if ( GRID [8] [kaj] == 3 ) PROP_TEXTCOLOR ( YELLOW_TEXT );
        if ( GRID [8] [kaj] == 4 ) PROP_TEXTCOLOR ( BLUE_TEXT );
        if ( GRID [8] [kaj] == 5 ) PROP_TEXTCOLOR ( MAGENTA_TEXT );
        if ( GRID [8] [kaj] == 6 ) PROP_TEXTCOLOR ( CYAN_TEXT );
        if ( GRID [8] [kaj] == 7 ) PROP_TEXTCOLOR ( WHITE_TEXT );

        PR_CHAR ( 219 , 1 );
        }

        /* 9 */
        gotoxy ( 6 , 12 );
        for ( kaj = 0; kaj < 28; kaj++ )
        {
        if ( GRID [9] [kaj] == 0 ) PROP_TEXTCOLOR ( BLACK_TEXT );
        if ( GRID [9] [kaj] == 1 ) PROP_TEXTCOLOR ( RED_TEXT );
        if ( GRID [9] [kaj] == 2 ) PROP_TEXTCOLOR ( GREEN_TEXT );
        if ( GRID [9] [kaj] == 3 ) PROP_TEXTCOLOR ( YELLOW_TEXT );
        if ( GRID [9] [kaj] == 4 ) PROP_TEXTCOLOR ( BLUE_TEXT );
        if ( GRID [9] [kaj] == 5 ) PROP_TEXTCOLOR ( MAGENTA_TEXT );
        if ( GRID [9] [kaj] == 6 ) PROP_TEXTCOLOR ( CYAN_TEXT );
        if ( GRID [9] [kaj] == 7 ) PROP_TEXTCOLOR ( WHITE_TEXT );

        PR_CHAR ( 219 , 1 );
        }

        /* 10 */
        gotoxy ( 6 , 13 );
        for ( kaj = 0; kaj < 28; kaj++ )
        {
        if ( GRID [10] [kaj] == 0 ) PROP_TEXTCOLOR ( BLACK_TEXT );
        if ( GRID [10] [kaj] == 1 ) PROP_TEXTCOLOR ( RED_TEXT );
        if ( GRID [10] [kaj] == 2 ) PROP_TEXTCOLOR ( GREEN_TEXT );
        if ( GRID [10] [kaj] == 3 ) PROP_TEXTCOLOR ( YELLOW_TEXT );
        if ( GRID [10] [kaj] == 4 ) PROP_TEXTCOLOR ( BLUE_TEXT );
        if ( GRID [10] [kaj] == 5 ) PROP_TEXTCOLOR ( MAGENTA_TEXT );
        if ( GRID [10] [kaj] == 6 ) PROP_TEXTCOLOR ( CYAN_TEXT );
        if ( GRID [10] [kaj] == 7 ) PROP_TEXTCOLOR ( WHITE_TEXT );

        PR_CHAR ( 219 , 1 );
        }

        /* 11 */
        gotoxy ( 6 , 14 );
        for ( kaj = 0; kaj < 28; kaj++ )
        {
        if ( GRID [11] [kaj] == 0 ) PROP_TEXTCOLOR ( BLACK_TEXT );
        if ( GRID [11] [kaj] == 1 ) PROP_TEXTCOLOR ( RED_TEXT );
        if ( GRID [11] [kaj] == 2 ) PROP_TEXTCOLOR ( GREEN_TEXT );
        if ( GRID [11] [kaj] == 3 ) PROP_TEXTCOLOR ( YELLOW_TEXT );
        if ( GRID [11] [kaj] == 4 ) PROP_TEXTCOLOR ( BLUE_TEXT );
        if ( GRID [11] [kaj] == 5 ) PROP_TEXTCOLOR ( MAGENTA_TEXT );
        if ( GRID [11] [kaj] == 6 ) PROP_TEXTCOLOR ( CYAN_TEXT );
        if ( GRID [11] [kaj] == 7 ) PROP_TEXTCOLOR ( WHITE_TEXT );

        PR_CHAR ( 219 , 1 );
        }

        /* 12 */
        gotoxy ( 6 , 15 );
        for ( kaj = 0; kaj < 28; kaj++ )
        {
        if ( GRID [12] [kaj] == 0 ) PROP_TEXTCOLOR ( BLACK_TEXT );
        if ( GRID [12] [kaj] == 1 ) PROP_TEXTCOLOR ( RED_TEXT );
        if ( GRID [12] [kaj] == 2 ) PROP_TEXTCOLOR ( GREEN_TEXT );
        if ( GRID [12] [kaj] == 3 ) PROP_TEXTCOLOR ( YELLOW_TEXT );
        if ( GRID [12] [kaj] == 4 ) PROP_TEXTCOLOR ( BLUE_TEXT );
        if ( GRID [12] [kaj] == 5 ) PROP_TEXTCOLOR ( MAGENTA_TEXT );
        if ( GRID [12] [kaj] == 6 ) PROP_TEXTCOLOR ( CYAN_TEXT );
        if ( GRID [12] [kaj] == 7 ) PROP_TEXTCOLOR ( WHITE_TEXT );

        PR_CHAR ( 219 , 1 );
        }

        /* 13 */
        gotoxy ( 6 , 16 );
        for ( kaj = 0; kaj < 28; kaj++ )
        {
        if ( GRID [13] [kaj] == 0 ) PROP_TEXTCOLOR ( BLACK_TEXT );
        if ( GRID [13] [kaj] == 1 ) PROP_TEXTCOLOR ( RED_TEXT );
        if ( GRID [13] [kaj] == 2 ) PROP_TEXTCOLOR ( GREEN_TEXT );
        if ( GRID [13] [kaj] == 3 ) PROP_TEXTCOLOR ( YELLOW_TEXT );
        if ( GRID [13] [kaj] == 4 ) PROP_TEXTCOLOR ( BLUE_TEXT );
        if ( GRID [13] [kaj] == 5 ) PROP_TEXTCOLOR ( MAGENTA_TEXT );
        if ( GRID [13] [kaj] == 6 ) PROP_TEXTCOLOR ( CYAN_TEXT );
        if ( GRID [13] [kaj] == 7 ) PROP_TEXTCOLOR ( WHITE_TEXT );

        PR_CHAR ( 219 , 1 );
        }
}





void
SaveGrid ( void )
{
    SYS_CLEARSCREEN ();
    PROP_RESTORECONSOLE ();


    /* Limpando o GRID */
    // for ( kaj = 4; kaj < 18; kaj++ )
    // limpar_linha ( DesignLayout , kaj );

    /* Preenchendo o GRID */

    system ("CLS");

    for ( kaj = 0; kaj <28; kaj++ ) FLEE_WRITEintl ( DesignLayout , GRID [0] [kaj] , 4 );
    for ( kaj = 0; kaj <28; kaj++ ) FLEE_WRITEintl ( DesignLayout , GRID [1] [kaj] , 5 );
    for ( kaj = 0; kaj <28; kaj++ ) FLEE_WRITEintl ( DesignLayout , GRID [2] [kaj] , 6 );
    for ( kaj = 0; kaj <28; kaj++ ) FLEE_WRITEintl ( DesignLayout , GRID [3] [kaj] , 7 );
    for ( kaj = 0; kaj <28; kaj++ ) FLEE_WRITEintl ( DesignLayout , GRID [4] [kaj] , 8 );
    for ( kaj = 0; kaj <28; kaj++ ) FLEE_WRITEintl ( DesignLayout , GRID [5] [kaj] , 9 );
    for ( kaj = 0; kaj <28; kaj++ ) FLEE_WRITEintl ( DesignLayout , GRID [6] [kaj] , 10 );
    for ( kaj = 0; kaj <28; kaj++ ) FLEE_WRITEintl ( DesignLayout , GRID [7] [kaj] , 11 );
    for ( kaj = 0; kaj <28; kaj++ ) FLEE_WRITEintl ( DesignLayout , GRID [8] [kaj] , 12 );

    for ( kaj = 0; kaj <28; kaj++ ) FLEE_WRITEintl ( DesignLayout , GRID [9] [kaj] ,  13 );
    for ( kaj = 0; kaj <28; kaj++ ) FLEE_WRITEintl ( DesignLayout , GRID [10] [kaj] , 14 );
    for ( kaj = 0; kaj <28; kaj++ ) FLEE_WRITEintl ( DesignLayout , GRID [11] [kaj] , 15 );
    for ( kaj = 0; kaj <28; kaj++ ) FLEE_WRITEintl ( DesignLayout , GRID [12] [kaj] , 16 );
    for ( kaj = 0; kaj <28; kaj++ ) FLEE_WRITEintl ( DesignLayout , GRID [13] [kaj] , 17 );

    for ( kaj = 0; kaj < 59 - 4; kaj++ ) FLEE_WRITEstring ( DesignLayout , "-");

    main ();
}


