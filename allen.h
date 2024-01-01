



/*
 * MADE IN:     JATAÍ - GO , IN 2º SEMESTER OF COMPUTER SCIENCE
 * NAME:        allen.h
 * DESCRIPTION: DYNAMIC CODE SIMPLIFICATION LIBRARY IN C LANGUAGE
 * COMPILER:    TDM-GCC
 * DEVELOPER:   ALLISON DANTAS ROCHA DE SOUZA JÚNIOR
 * OBJECTIVE:   EASY PROGRAMMING IN C
 */




# ifndef _ALLEN_



// CONSOLE STANDARDIZATION

# define MAX_PATH_LENGTH PATH_MAX
# define WM_SETBKCOLOR 0x2001
# ifndef _WIN32_WINNT
# define _WIN32_WINNT 0x0500
# endif
# define STATIC_TEXT_CLASS_NAME "STATIC"
# ifndef ENABLE_VIRTUAL_TERMINAL_PROCESSING
# define ENABLE_VIRTUAL_TERMINAL_PROCESSING  0x0004
# endif



// STANDARD LIBRARIES

# include <stdio.h>
# include <stdlib.h>
# include <math.h>
# include <errno.h>
# include <setjmp.h>
# include <assert.h>
# include <signal.h>
# include <locale.h>
# include <string.h>
# include <Windows.h>
# include <stdarg.h>
# include <commctrl.h>
# include <iso646.h>
# include <ctype.h>
# include <stdbool.h>
# include <conio.h>
# include <time.h>
# include <dirent.h>
# include <sys/stat.h>
# include <sys/types.h>
# include <pthread.h>
# include <limits.h>



// MACROS: CONSOLE REGIONS / CODE PAGES

# define DEFAULT     850
# define BRAZIL     1252
# define LATIN      1250
# define CIRILICO   1251
# define JAPAN       932
# define COREAN      949
# define GREGO      1253
# define TURCO      1254
# define ISO       65001



// MACROS: TEXT STYLING

# define BRIGHT1       0
# define BRIGHT2       1
# define UNBRIGHT      2
# define ITALIC        3
# define UNDERLINE     4
# define BLINKER1      5
# define BLINKER2      6
# define BACKSET       7
# define HIDE          8
# define CUT           9



// MACROS: OPERATORS

# define HT 989
# define LT 898
# define EQ 888
# define DF 999
# define HE 998
# define LE 889
# define NRM 22
# define CRY 33
# define SZE 44
# define PWD 87
# define ONS 13
# define PWS 82
# define ONN 34
# define PWN 23
# define PAR              54
# define IMPAR            85
# define MULTIPLO         62
# define QUADRADO_X_DF_Y  78
# define QUADRADO_X_EQ_Y  43
# define INVERSO          82
# define CRESCENTE      1004
# define DECRESCENTE    4001
# define NOTMULTIPLO    0404



// MACROS: STRING FUNCTIONS ( GWC_STRING | PR_STRING )

# define stringSZ      92
# define stringEQ      32
# define stringDF      23
# define stringNR      22
# define stringIV      99
# define stringHB      88
# define stringLB      77
# define stringCY      90
# define nosubs         0
# define notext    "@%!*"
# define nosize         0
# define notoken   ")123"
# define norchar   '_'



// MACROS: ALLEN DEFINED

# define YES              1
# define yes              1
# define SIM              1
# define sim              1
# define NO               0
# define no               0
# define NAO              0
# define nao              0
# define se              if
# define e_se       else if
# define outro         else
# define para           for
# define quebre       break
# define caso          case
# define caractere     char
# define constante    const
# define padrao     default
# define outro_caso default
# define faca            do
# define enquanto     while
# define real         float
# define real_64     double
# define inteiro        int
# define longo         long
# define retorne     return
# define devolva     return
# define salve       return
# define curto        short
# define tamanho_de  sizeof
# define estatico    static
# define registro    struct
# define escolha     switch
# define tipo_de    typedef
# define uniao        union
# define vazio         void
# define open             (
# define close            )
# define end              ;
# define booleana      bool



# endif



// GLOBAL FUNCTIONS



/* 1. PR FUNCTIONS */

void PR              ( const char * TEXT );
void PRL             ( int TIMES );
void PRS             ( int TIMES );
void PR_INT          ( int VARIABLE );
void PR_CHAR         ( char VARIABLE , int TIMES );
void PR_FLOAT        ( float VARIABLE , int COMMAS );
void PR_DOUBLE       ( double VARIABLE , int COMMAS );
void PR_STRING       ( char STRING [ ] , int HOW_TO_PRINT , char REPLACEMENT_CHAR , int NUMBER_OF_REPLACEMENTS , ... );
void PRV_INT         ( int REVERSE , int SIZE , int TYPE , int SPACE , const char* ANY_TEXT , const char * ANY_TEXT2 , int ARRAY [ ] );
void PRV_FLOAT       ( int REVERSE , int SIZE , int TYPE , int SPACE , int COMMA, const char ANY_TEXT [ ] , const char ANY_TEXT2 [ ], float ARRAY [ ] );
void PRV_DOUBLE      ( int REVERSE , int SIZE , int TYPE , int SPACE , int COMMA, const char ANY_TEXT [ ] , const char ANY_TEXT2 [ ], double ARRAY [ ] );
void PRM_INT         ( int REVERSE , int STYLE , int LINES , int COLS , int SPACE , const char LEFT_TEXT [ ] , const char RIGHT_TEXT [ ] ,  int B_ARRAY [ LINES ] [ COLS ] );
void PRM_FLOAT       ( int REVERSE , int STYLE , int LINES , int COLS , int SPACE , int COMMA , const char LEFT_TEXT [ ] , const char RIGHT_TEXT [ ] ,  float B_ARRAY [ LINES ] [ COLS ] );
void PRM_DOUBLE      ( int REVERSE , int STYLE , int LINES , int COLS , int SPACE , int COMMA , const char LEFT_TEXT [ ] , const char RIGHT_TEXT [ ] ,  double B_ARRAY [ LINES ] [ COLS ] );
void PRL_INT         ( int REVERSE , int HOW_MANY_STRINGS , int SIZE_OF_THESE_STRINGS , int SPACE , const char TEXT1 [] , const char TEXT2 [] ,  int array [] , char string [ HOW_MANY_STRINGS ] [ SIZE_OF_THESE_STRINGS ] , int MORE_SPACE );
void PRL_FLOAT       ( int REVERSE , int HOW_MANY_STRINGS , int SIZE_OF_THESE_STRINGS , int SPACE , int COMMA, const char TEXT1 [] , const char TEXT2 [] ,  float array [] , char string [HOW_MANY_STRINGS] [SIZE_OF_THESE_STRINGS], int MORE_SPACE );
void PRL_DOUBLE      ( int REVERSE , int HOW_MANY_STRINGS , int SIZE_OF_THESE_STRINGS , int SPACE , int COMMA, const char TEXT1 [] , const char TEXT2 [] ,  double array [] , char string [ HOW_MANY_STRINGS ] [ SIZE_OF_THESE_STRINGS ] , int MORE_SPACE );
void PR_intVETOR     ( int SIZE , int ARRAY [ ] );
void PR_intMATRIZ    ( int LINES , int COLS , int B_ARRAY [LINES] [COLS] );
void PR_floatVETOR   ( int SIZE , int COMMA , float ARRAY [] );
void PR_floatMATRIZ  ( int LINES , int COLS , int COMMA , float B_ARRAY [LINES] [COLS] );
void PR_doubleVETOR  ( int SIZE , int COMMA , double ARRAY [] );
void PR_doubleMATRIZ ( int LINES , int COLS , int COMMA , double B_ARRAY [LINES] [COLS] );
void PR_charVETOR    ( int SIZE , char ARRAY [] );
void PR_charMATRIZ   ( int LINES , int COLS , char B_ARRAY [LINES] [COLS] );




/* 2. CS FUNCTIONS */

void  CS_SETREGION             ( int REGION );
void  CS_SETTITLE              ( const char* TITLE );
void  CS_SETFULLSCREEN         ( void );
void  CS_DISABLEMAXIMIZEBUTTON ( void );
void  CS_DISABLEMINIMIZEBUTTON ( void );
void  CS_DISABLECLOSEBUTTON    ( void );
void  CS_DISABLEALLBUTTONS     ( void );
void  CS_DISABLERESIZE         ( void );
void  CS_DISABLESCROLLBAR      ( void );
void  CS_SETTEXTATTRIBUTE      ( int VARIATION );
void  CS_SETPOSITION           ( int X , int Y );
void  CS_SETSIZE               ( int WIDHT , int HEIGHT );
void  CS_SETCURSORATTRIBUTES   ( bool HIDE_ , bool BOLDCURSOR );
COORD CS_GETCURSORPOSITION     ( void );
void  CS_SETCURSORPOSITION     ( COORD newPos );
void  CS_SETVISIBILITY         ( bool HIDE_ );
void  NEWCONSOLE               ( void );
void  CLOSECONSOLE             ( void );




/* 3. SYS FUNCTIONS */

void SYS_SETREGION         ( int REGION );
void SYS_SETSIZE           ( int COLS , int LINES );
void SYS_SETCOLOR          ( char TEXTCOLOR , char BACKGROUNDCOLOR );
void SYS_SETTITLE          ( const char* TITLE );
void SYS_PAUSE             ( int HIDE_ );
void SYS_GCCVERSION        ( void );
void SYS_RESTARTCOMPUTER   ( void );
void SYS_SETFULLSCREEN     ( void );
void SYS_POPS              ( const char* COMMAND );
void SYS_CLEARSCREEN       ( void );
void SYS_READFILE          ( const char* FILENAME );
void SYS_LISTDIR           ( const char * DIR );
void SYS_CREATEDIR         ( const char* DIR );
void SYS_REMOVEDIR         ( const char* DIR );
void SYS_COPYFILE          ( const char* FILE , const char* DIR );
void SYS_MOVEDIR           ( const char* DIR , const char* FINALDIR );
void SYS_DELETEFILE        ( const char* FILE );
void SYS_RENAMEFILE        ( const char* FILE , const char* NEW_NAME );
void echo                 ( const char* TEXT );
void SYS_PING              ( void );
void SYS_SHOWSAVEDWIFI     ( void );
void SYS_SHOWSAVEDWIFIINFO ( const char * WIFI );
void SYS_INFO              ( void );
void SYS_WEATHER           ( const char * REGION );




/* 4. PROPS FUNCTIONS */

enum   COLORS { DEFAULT_TEXT , BLACK_TEXT = 30 , RED_TEXT , GREEN_TEXT , YELLOW_TEXT , BLUE_TEXT , MAGENTA_TEXT , CYAN_TEXT , WHITE_TEXT , DEFAULT_BACKGROUND = 40 , RED_BACKGROUND , GREEN_BACKGROUND , YELLOW_BACKGROUND , BLUE_BACKGROUND , MAGENTA_BACKGROUND , CYAN_BACKGROUND , WHITE_BACKGROUND };
enum   CLEARCODES { ClearTheTextFromTheCursorToTheEnd, ClearTheTextFromTheCursorToTheStart, ClearTheScreen };
static HANDLE stdoutHandle , stdinHandle;
static DWORD  outModeInit  , inModeInit;
static inline void ENABLEPROPS                ( void );
static inline void PROP_RESTORECONSOLE        ( void );
static inline void PROP_TEXTCOLOR             ( int CODE );
static inline void PROP_STYLE                 ( int CODE );
static inline void PROP_BACKGROUNDCOLOR       ( int CODE );
static inline void PROP_RESETCOLOR            ( void );
static inline void PROP_CLEARSCREEN           ( void );
static inline void PROP_CLEARBELOW            ( void );
static inline void PROP_CLEARABOVE            ( void );
static inline void PROP_CLEARLINE             ( void );
static inline void PROP_CLEARLEFT             ( void );
static inline void PROP_CLEARRIGHT            ( void );
static inline void PROP_MOVEUP                ( int POSITION );
static inline void PROP_MOVEDOWN              ( int POSITION );
static inline void PROP_MOVERIGHT             ( int POSITION );
static inline void PROP_MOVELEFT              ( int POSITION );
static inline void PROP_MOVECURSOR            ( int X , int Y );
static inline void PROP_SAVECURSOR            ( void );
static inline void PROP_LOADCURSOR            ( void );
static inline void PROP_HIDECURSOR            ( void );
static inline void PROP_SHOWCURSOR            ( void );




/* 5. G FUNCTIONS */

static inline void BUFFER     ( void );
int                G_INT      ( void );
char               G_CHAR     ( void );
float              G_FLOAT    ( void );
double             G_DOUBLE   ( void );
void               G_STRING   ( char STRING [] );
int                GWC_INT    ( int VALUE , int CONDITION , int COMPARATOR , const char* TEXT , int LINE , int SPACES );
float              GWC_FLOAT  ( float VALUE , int CONDITION , float COMPARATOR , const char* TEXT , int LINE , int SPACES );
double             GWC_DOUBLE ( double VALUE , int CONDITION , double COMPARATOR , const char* TEXT , int LINE , int SPACES );
char               GWC_CHAR   ( char VALUE , int CONDITION , char COMPARATOR , const char* TEXT , int LINE , int SPACES );
char               GWC_STRING ( const char *QUESTION , char STRING [] , int LINES , int SPACES , int TYPE_OF , int SIZE_LIMITER , char TEXT_COMPARATOR [] , char EXIT_TOKEN [] );
int                getI       ( const char *QUESTION_TEXT , int LINES , int SPACES , int CONDITION , int COMPARATOR );
float              getF       ( const char *QUESTION_TEXT , int LINES , int SPACES , int CONDITION , float COMPARATOR );
double             getD       ( const char *QUESTION_TEXT , int LINES , int SPACES , int CONDITION , double COMPARATOR );
char               getS       ( const char *QUESTION_TEXT , int LINES , int SPACES , int CONDITION , int MAX_SIZE , char STRING [MAX_SIZE] , char TOKEN , int NUMBER_OF_REPLACEMENTS , ... );




/* 6. allen FUNCTIONS */

int  allen_GETDIGITS              ( int VARIABLE );
void gotoxy                       ( int X , int Y );
void allen_TESTCODEPAGE           ( int CODE_PAGE );
void allen_CLEARSTRING            ( char *STRING );
int  allen_HIGHERARRAYint         ( int SIZE , int ARRAY [] );
int  allen_HIGHERBARRAYint        ( int LINES , int COLUNS , int B_ARRAY [LINES] [COLUNS] );
int  allen_LOWERARRAYint          ( int SIZE , int ARRAY [] );
int  allen_LOWERBARRAYint         ( int LINES , int COLUNS , int B_ARRAY [LINES] [COLUNS] );
int  allen_SUBSINTARRAY           ( int SIZE , int ARRAY [] , int CONDITION , int COMPARATOR , int TOKEN );
int  allen_COPYINTARRAY           ( int SIZE , int ARRAY [] , int CONDITION , int COMPARATOR , int NEW_ARRAY [] );
void allen_CLEARINTARRAY          ( int SIZE , int ARRAY [] );
int  allen_SUBSINTBARRAY          ( int LINES , int COLUNS , int CONDITION , int COMPARATOR , int TOKEN , int B_ARRAY [LINES] [COLUNS] );
int  allen_COPYINTBARRAY          ( int LINES , int COLUNS , int CONDITION , int COMPARATOR , int B_ARRAY [LINES] [COLUNS] , int NEW_B_ARRAY [LINES] [COLUNS] );
void allen_CLEARINTBARRAY         ( int LINES , int COLUNS , int B_ARRAY [ LINES ] [ COLUNS ] );
void allen_ADDTOSTRING            ( char STRING [] , char ADD [] );
void allen_REMAKESTRING           ( char STRING [] , char REMAKE [] );




/* 7. SB FUNCTIONS */

int  SB_CREATEBOX ( LPCTSTR BOX_TEXT , LPCTSTR BOX_CAPTION, UINT BOX_TYPE );
void SB_PLAYSOUND ( UINT SOUND );




/* 8. MATTE FUNCTIONS */

double MATTE_cosseno             ( double SIN , bool PRINT , int COMMAS );
double MATTE_cosemrad            ( double ANGULO , bool PRINT , int COMMAS );
double MATTE_coshiperbolico      ( double ANGULO , bool PRINT , int COMMAS );
double MATTE_seno                ( double SIN , bool PRINT , int COMMAS );
double MATTE_senoemrad           ( double ANGULO , bool PRINT , int COMMAS );
double MATTE_senohiperbolico     ( double ANGULO , bool PRINT , int COMMAS );
double MATTE_tangente            ( double TAN , bool PRINT , int COMMAS );
double MATTE_tangenteemrad       ( double ANGULO , bool PRINT , int COMMAS );
double MATTE_tangentehiperbolica ( double ANGULO , bool PRINT , int COMMAS );
double MATTE_arcotangente        ( double X , double Y , bool PRINT , int COMMAS );
double MATTE_arredondarparamaior ( double X , bool PRINT , int COMMAS );
double MATTE_arredondarparamenor ( double X , bool PRINT , int COMMAS );
double MATTE_exp                 ( double X , bool PRINT , int COMMAS );
double MATTE_modulo              ( double X , bool PRINT , int COMMAS );
double MATTE_ldexp               ( double X , int EXPOENTE , bool PRINT , int COMMAS );
double MATTE_log                 ( double X , bool PRINT , int COMMAS );
double MATTE_log10               ( double X , bool PRINT , int COMMAS );
double MATTE_soapartedecimal     ( double X , bool PRINT , int COMMAS );
double MATTE_potencia            ( double BASE , double EXPO , bool PRINT , int COMMAS );
double MATTE_raizquadrada        ( double X , bool PRINT , int COMMAS );




/* 9. LOCH FUNCTIONS */

void LOCH_LOCAL ( void );
void LOCH_SETLOCAL ( char REGION [] );




/* 10. FLEE FUNCTIONS */

void   FLEE_PUTS                 ( const char * FILE_NAME, bool ADD , const char * TEXT , ...  );
void   FLEE_CREATEAFILE          ( const char * FILE_NAME );
void   FLEE_RENAMEAFILE          ( const char * FILE_NAME , const char * NEW_FILE_NAME );
void   FLEE_MOVEAFILE            ( const char * FILE_NAME , const char * NEW_DIRECTORY );
void   FLEE_COPYAFILE            ( const char * FILE_NAME , const char * NEW_FOLDER , const char* NEW_FILENAME  );
void   FLEE_CREATEAFILEANDFOLDER ( const char * FOLDER_NAME , const char * FILE_NAME );
void   FLEE_CREATEAFOLDER        ( const char * FOLDER_NAME );
void   FLEE_DELETEAFILE          ( const char * FILE_NAME );
void   FLEE_DELETEAFOLDER        ( const char * FOLDER_NAME );
void   FLEE_MOVEAFOLDER          ( const char * FOLDER_NAME , const char * NEW_PATH );
void   FLEE_COPYAFOLDER          ( const char * FOLDER_NAME, const char* SAVE_PATH, const char* NEW_NAME );
void   FLEE_SYSTEMFOLDER         ( const char * SYSTEM_FOLDER_NAME , char * FOLDER , char * SAVE_PATH );
void   FLEE_Sint                 ( int VALUE , const char * FILE_NAME );
int    FLEE_Lint                 ( const char * FILE_NAME );
void   FLEE_Schar                ( char CHARACTER , const char * FILE_NAME );
char   FLEE_Lchar                ( const char * FILE_NAME );
void   FLEE_Sfloat               ( float VALUE , int COMMAS , const char * FILE_NAME );
float  FLEE_Lfloat               ( const char * FILE_NAME );
void   FLEE_Sdouble              ( double VALUE , int COMMAS , const char * FILE_NAME );
double FLEE_Ldouble              ( const char * FILE_NAME );
void   FLEE_Sstring              ( const char * FILE_NAME , const char * STRING );
void   FLEE_Lstring              ( const char * FILE_NAME, char * STRING );
int    FLEE_COUNTLINES           ( const char * FILE_NAME );
int    FLEE_COUNTWORDS           ( const char * FILE_NAME );
int    FLEE_COUNTNUMBERS         ( const char * FILE_NAME );
int    FLEE_COUNTint             ( const char * FILE_NAME , int VALUE );
int    FLEE_COUNTfloat           ( const char * FILE_NAME , float VALUE );
int    FLEE_COUNTdouble          ( const char * FILE_NAME , double VALUE );
int    FLEE_COUNTchar            ( const char * FILE_NAME , char CHAR );
int    FLEE_COUNTstring          ( const char * FILE_NAME , const char * STRING );
int    FLEE_GLOBALSUBSint        ( const char * FILE_NAME, int VALUE , const char * TOKEN );
int    FLEE_LOCALSUBSint         ( const char * FILE_NAME , int VALUE , const char * TOKEN );
int    FLEE_GLOBALSUBSintl       ( const char * FILE_NAME , int WHAT_LINE , int VALUE , const char* TOKEN );
int    FLEE_LOCALSUBSintl        ( const char * FILE_NAME , int WHAT_LINE , int VALUE , const char * TOKEN );
int    FLEE_GLOBALSUBSfloat      ( const char * FILE_NAME , float VALUE , int COMMAS , const char * TOKEN );
int    FLEE_LOCALSUBSfloat       ( const char * FILE_NAME , float VALUE , int COMMAS , const char * TOKEN );
int    FLEE_GLOBALSUBSfloatl     ( const char * FILE_NAME , int WHAT_LINE , float VALUE, int COMMAS , const char * TOKEN );
int    FLEE_LOCALSUBSfloatl      ( const char * FILE_NAME , int WHAT_LINE , float VALUE , int COMMAS , const char * TOKEN );
int    FLEE_GLOBALSUBSdouble     ( const char * FILE_NAME , double VALUE , int COMMAS , const char * TOKEN );
int    FLEE_LOCALSUBSdouble      ( const char * FILE_NAME , double VALUE , int COMMAS , const char * TOKEN );
int    FLEE_GLOBALSUBSdoublel    ( const char * FILE_NAME , int WHAT_LINE , double VALUE, int COMMAS , const char * TOKEN );
int    FLEE_LOCALSUBSdoublel     ( const char * FILE_NAME , int WHAT_LINE , double VALUE , int COMMAS , const char * TOKEN );
int    FLEE_GLOBALSUBSchar       ( const char * FILE_NAME , char VALUE , const char * TOKEN );
int    FLEE_LOCALSUBSchar        ( const char * FILE_NAME , char VALUE , const char * TOKEN );
int    FLEE_GLOBALSUBScharl      ( const char * FILE_NAME , int WHAT_LINE , char VALUE , const char * TOKEN );
int    FLEE_LOCALSUBScharl       ( const char * FILE_NAME , int WHAT_LINE , char VALUE , const char * TOKEN );
int    FLEE_GLOBALSUBSstring     ( const char * FILE_NAME , const char * OLD_WORD , const char * TOKEN );
int    FLEE_LOCALSUBSstring      ( const char * FILE_NAME , const char * OLD_WORD , const char * TOKEN );
int    FLEE_GLOBALSUBSstringl    ( const char * FILE_NAME , int WHAT_LINE , const char * STRING , const char * TOKEN );
int    FLEE_LOCALSUBSstringl     ( const char * FILE_NAME , int WHAT_LINE , const char * STRING , const char * TOKEN );
void   FLEE_WRITEint             ( const char * FILE_NAME , int VALUE );
void   FLEE_WRITEintl 	         ( const char * FILE_NAME , int VALUE , int WHAT_LINE );
void   FLEE_WRITESUPAint         ( const char * FILE_NAME , int VALUE , int WHAT_LINE , int WHAT_COLUMN );
void   FLEE_WRITEfloat           ( const char * FILE_NAME , float VALUE , int COMMAS );
void   FLEE_WRITEfloatl          ( const char * FILE_NAME , float VALUE , int COMMAS , int WHAT_LINE );
void   FLEE_WRITESUPAfloat       ( const char * FILE_NAME , float VALUE , int COMMA , int WHAT_LINE , int WHAT_COLUMN );
void   FLEE_WRITEdouble          ( const char * FILE_NAME , double VALUE , int COMMAS );
void   FLEE_WRITEdoublel         ( const char * FILE_NAME , double VALUE , int COMMAS , int WHAT_LINE );
void   FLEE_WRITESUPAdouble      ( const char * FILE_NAME , double VALUE , int COMMA , int WHAT_LINE , int WHAT_COLUMN );
void   FLEE_WRITEchar            ( const char * FILE_NAME , char VALUE );
void   FLEE_WRITEcharl           ( const char * FILE_NAME , char VALUE , int WHAT_LINE );
void   FLEE_WRITESUPAchar        ( const char * FILE_NAME , char VALUE , int WHAT_LINE , int WHAT_COLUMN );
void   FLEE_WRITEstring          ( const char * FILE_NAME , const char * STRING );
void   FLEE_WRITEstringl         ( const char * FILE_NAME , const char * STRING , int WHAT_LINE );
void   FLEE_WRITESUPAstring      ( const char * FILE_NAME , const char * STRING , int WHAT_LINE , int WHAT_COLUMN );
int    FLEE_GETSint              ( const char * FILE_NAME , int WHAT_LINE );
int    FLEE_GETSLint             ( const char * FILE_NAME , int WHAT_LINE , int COL );
int    FLEE_GETCHint             ( const char * FILE_NAME, int WHAT_LINE, int START_COL, int END_COL );
float  FLEE_GETSfloat            ( const char * FILE_NAME , int WHAT_LINE );
float  FLEE_GETSLfloat           ( const char * FILE_NAME , int WHAT_LINE , int COL );
float  FLEE_GETCHfloat           ( const char * FILE_NAME , int WHAT_LINE , int START_COL , int END_COL );
double FLEE_GETSdouble           ( const char * FILE_NAME , int WHAT_LINE );
double FLEE_GETSLdouble          ( const char * FILE_NAME , int WHAT_LINE , int COL );
double FLEE_GETCHdouble          ( const char * FILE_NAME , int WHAT_LINE , int START_COL , int END_COL );
char   FLEE_GETCHchar            ( const char * FILE_NAME , int WHAT_LINE , int START_COL , int END_COL );
char   FLEE_GETSLchar            ( const char * FILE_NAME , int WHAT_LINE , int COL );
void   FLEE_GETSstring           ( const char * FILE_NAME , char * STRING, int WHAT_LINE );
void   FLEE_GETCHstring          ( const char * FILE_NAME , int WHAT_LINE , int START_COL , int END_COL , char * STRING );
void   FLEE_GETSLstring          ( const char * FILE_NAME , int WHAT_LINE , int COL , char * STRING );
void   FLEE_PRINT                ( const char * FILE_NAME );
void   FLEE_PRINTLINE            ( const char * FILE_NAME , int WHAT_LINE );
void   FLEE_PRINTCOL             ( const char * FILE_NAME , int WHAT_LINE , int WHAT_COL );
void   FLEE_PRINTAREA            ( const char* FILE_NAME , int WHAT_LINE , int START_COL , int END_COL );




/* PR */




// FUNCTION: WRITES A STRING OF TYPE CONST TO THE CONSOLE
// @param01: TEXT { RECEIVES A STRING OR A "" TEXT }
void
PR ( const char * TEXT )
{
     printf ( TEXT );
}





// FUNCTION: WRITES ON THE CONSOLE A NUMBER OF LINES
// @param01: TIMES { HOW MANY TIMES WILL PRINT '\n' ON THE CONSOLE }
void
PRL ( int TIMES )
{
     for ( ; TIMES > 0 ; TIMES-- )
     printf ("\n");
}





// FUNCTION: WRITES ON THE CONSOLE A NUMBER OF EMPTY SPACES
// @param01: TIMES { HOW MANY TIMES WILL PRINT ' ' ON THE CONSOLE }
void
PRS ( int TIMES )
{
     for ( ; TIMES > 0; TIMES-- )
     printf (" ");
}





// FUNCTION: WRITES ON THE CONSOLE A INT VALUE OR A INT VARIABLE
// @param01: VARIABLE { WHAT VALUE WILL BE PRINTED }
void
PR_INT ( int VARIABLE )
{
     printf ("%d", VARIABLE);
}





// FUNCTION: WRITES ON THE CONSOLE A CHAR VALUE OR VARIABLE, A N TIMES
// @param01: VARIABLE { WHAT CHAR WILL BE PRINTED }
// @param02: TIMES { HOW MANY TIMES THE CHAR WILL BE PRINTED }
void
PR_CHAR ( char VARIABLE , int TIMES )
{
     for ( ; TIMES > 0; TIMES-- )
     printf ("%c", VARIABLE);
}





// FUNCTION: WRITES ON THE CONSOLE A FLOAT VALUE OR VARIABLE
// @param01: VARIABLE { WHAT VALUE WILL BE PRINTED }
// @param02: COMMAS { HOW MANY DECIMAL HOUSES WILL BE PRINTED }
void
PR_FLOAT ( float VARIABLE , int COMMAS )
{
     printf ("%.*f ", ( COMMAS <= 0 ) ? 0 : COMMAS , VARIABLE );
}





// FUNCTION: WRITES ON THE CONSOLE A DOUBLE VALUE OR VARIABLE
// @param01: VARIABLE { WHAT VALUE WILL BE PRINTED }
// @param02: COMMAS { HOW MANY DECIMAL HOUSES WILL BE PRINTED }
void
PR_DOUBLE ( double VARIABLE, int COMMAS )
{
     printf ("%.*lf ", ( COMMAS <= 0 ) ? 0 : COMMAS , VARIABLE );
}





// FUNCTION: WRITES ON THE CONSOLE A FORMATED STRING
// @param01: STRING { WHAT STRING THE FUNCTION WILL USE }
// @param02: HOW_TO_PRINT { HOW THIS STRING WILL BE PRINTED ( stringNR , stringIV , stringHB , stringLB , stringCY ) }
// @param03: REPLACEMENT_CHAR { IF HOW_TO_PRINT = stringCY, A CHAR SHOULD BE PLACED, FOR EXAMPLE '*', IF DON'T HAVE ONE USE nochartoken }
// @param04: NUMBER_OF_REPLACEMENTS { IF HOW_TO_PRINT = stringCY , AND U WANNA REPLACE 'a' , 'e' , 'i' , '#', SO NUMBER_OF_REPLACEMENTS SHOULD BE = 4 }
// @param05: ... { HERE IS THE PLACE THAT THE SUBSTITUION CHARS SHOULD BE PUT }
void
PR_STRING ( char STRING [ ] , int HOW_TO_PRINT , char REPLACEMENT_CHAR , int NUMBER_OF_REPLACEMENTS , ... )
{

     va_list args;
     va_start ( args , NUMBER_OF_REPLACEMENTS );
     char subs [ NUMBER_OF_REPLACEMENTS ];
     int kaj;


     for ( kaj = 0; kaj < NUMBER_OF_REPLACEMENTS; kaj++ ) subs [ kaj ] = va_arg ( args , int );


     switch ( HOW_TO_PRINT )
     {
              case stringNR:
                                 printf("%s", STRING);
              break;



              case stringIV:
                                   for ( kaj = strlen ( STRING ) - 1; kaj >= 0; kaj-- ) putchar ( STRING [ kaj ] );
              break;



              case stringHB:
                                   for ( kaj = 0; kaj < strlen(STRING); kaj++ ) putchar ( toupper ( STRING [ kaj ] ) );
              break;



              case stringLB:
                                   for ( kaj = 0; kaj < strlen ( STRING ); kaj++ ) putchar ( tolower ( STRING [ kaj ] ) );
              break;



              case stringCY:

                                 for ( int i = 0; i < strlen ( STRING ); i++ )
                                 {
                                       char c = STRING [ i ];

                                              for ( int j = 0; j < NUMBER_OF_REPLACEMENTS; j++ )
                                                       if ( c == subs [ j ]) { c = REPLACEMENT_CHAR; break; }
                                 putchar ( c );
                                 }
                                 break;
    }

    va_end ( args );
}





// FUNCTION: WRITES ON THE CONSOLE A FORMATED INT ARRAY
// @param01: REVERSE { THE ARRAY WILL BE PRINTED REVERSED? }
// @param02: SIZE { THE SIZE OF THE ARRAY THAT WILL BE USED }
// @param03: TYPE { PRINT VARIATION }
// @param04: SPACE { HOW MANY SPACES WILL BE PRINTED AFTER A VALUE OF THE ARRAY HAVE BEEN PRINTED }
// @param05: ANY_TEXT { TEXT THAT WILL BE DISPLAYED BEFORE THE VALUE }
// @param06: ANY_TEXT2 { TEXT THAT WILL BE DISPLAYED AFTER THE VALUE }
// @param07: ARRAY { THE ARRAY THAT WILL BE USED }
void
PRV_INT ( int REVERSE , int SIZE , int TYPE , int SPACE , const char * ANY_TEXT , const char * ANY_TEXT2 , int ARRAY [ ] )
{


       int GUARD = SPACE;


       if ( REVERSE == 0 )
       {


            if ( TYPE == 1 )
            {

                 for ( int kaj = 0; kaj < SIZE; kaj++ )
                 {
                       printf ("%d", ARRAY [kaj]);
                       while ( SPACE > 0 ) { printf(" "); SPACE--; }
                       SPACE = GUARD;
                 }
            }



            if ( TYPE == 2 )
            {
                 for ( int kaj = 0; kaj < SIZE; kaj++ )
                 {
                       printf ("%s%d", ANY_TEXT, ARRAY [kaj]);
                       while ( SPACE > 0 ) { printf(" "); SPACE--; }
                       SPACE = GUARD;
                 }
            }



            if ( TYPE == 3 )
            {
                 for ( int kaj = 0; kaj < SIZE; kaj++ )
                 {
                       printf ("%s%d%s", ANY_TEXT, ARRAY [kaj], ANY_TEXT2);
                       while ( SPACE > 0 ) { printf(" "); SPACE--; }
                       SPACE = GUARD;
                 }
            }



            if ( TYPE == 4 )
            {
                 for ( int kaj = 0; kaj < SIZE; kaj++ )
                 {
                       printf ("\n");

                       printf ("\n%d%s", ARRAY [kaj], ANY_TEXT);
                       while ( SPACE > 0 ) { printf(" "); SPACE--; }
                       SPACE = GUARD;
                 }
            }



            if ( TYPE == 5 )
            {
                 for ( int kaj = 0; kaj < SIZE; kaj++ )
                 {
                       printf ("\n");
                       printf ("\n%s%d%s", ANY_TEXT, ARRAY [kaj], ANY_TEXT2);
                       while ( SPACE > 0 ) { printf(" "); SPACE--; }
                       SPACE = GUARD;
                 }
            }



            if ( TYPE == 6 )
            {
                 for ( int kaj = 0; kaj < SIZE; kaj++ )
                 {
                       printf ("\n");
                       printf ("%d", ARRAY [kaj]);
                       while ( SPACE > 0 ) { printf(" "); SPACE--; }
                       SPACE = GUARD;
                 }
            }

       }



       if ( REVERSE == 1 )
       {


            if ( TYPE == 1 )
            {
                 for ( int kaj = SIZE - 1; kaj >= 0; kaj-- )
                 {
                       printf ("%d", ARRAY [kaj]);
                       while ( SPACE > 0 ) { printf(" "); SPACE--; }
                       SPACE = GUARD;
                 }
            }



       if ( TYPE == 2 )
       {
            for ( int kaj = SIZE - 1; kaj >= 0; kaj-- )
            {
                  printf ("%s%d", ANY_TEXT, ARRAY [kaj]);
                  while ( SPACE > 0 ) { printf(" "); SPACE--; }
                  SPACE = GUARD;
            }
       }



       if ( TYPE == 3 )
       {
            for ( int kaj = SIZE - 1; kaj >= 0; kaj-- )
            {
                  printf ("%s%d%s", ANY_TEXT, ARRAY [kaj], ANY_TEXT2);
                  while ( SPACE > 0 ) { printf(" "); SPACE--; }
                  SPACE = GUARD;
            }
       }



       if ( TYPE == 4 )
       {
            for ( int kaj = SIZE - 1; kaj >= 0; kaj-- )
            {
                  printf ("\n");
                  printf ("%s%d", ANY_TEXT, ARRAY [kaj]);
                  while ( SPACE > 0 ) { printf(" "); SPACE--; }
                  SPACE = GUARD;
            }
       }



       if ( TYPE == 5 )
       {
            for ( int kaj = SIZE - 1; kaj >= 0; kaj-- )
            {
                  printf ("\n");
                  printf ("%s%d%s", ANY_TEXT, ARRAY [kaj], ANY_TEXT2);
                  while ( SPACE > 0 ) { printf(" "); SPACE--; }
                  SPACE = GUARD;
            }
       }



       if ( TYPE == 6 )
       {
            for ( int kaj = SIZE - 1; kaj >= 0; kaj-- )
            {
                  printf ("\n");
                  printf ("%d", ARRAY [kaj]);
                  while ( SPACE > 0 ) { printf(" "); SPACE--; }
                  SPACE = GUARD;
            }
       }



       }

}





// FUNCTION: WRITES ON THE CONSOLE A FORMATED FLOAT ARRAY
// @param01: REVERSE { THE ARRAY WILL BE PRINTED REVERSED? }
// @param02: SIZE { THE SIZE OF THE ARRAY THAT WILL BE USED }
// @param03: TYPE { PRINT VARIATION }
// @param04: SPACE { HOW MANY SPACES WILL BE PRINTED AFTER A VALUE OF THE ARRAY HAVE BEEN PRINTED }
// @param05: COMMA { HOW MANY DECIMAL HOUSES WILL BE PRINTED }
// @param06: ANY_TEXT { TEXT THAT WILL BE DISPLAYED BEFORE THE VALUE }
// @param07: ANY_TEXT2 { TEXT THAT WILL BE DISPLAYED AFTER THE VALUE }
// @param08: ARRAY { THE ARRAY THAT WILL BE USED }
void
PRV_FLOAT ( int REVERSE , int SIZE , int TYPE , int SPACE , int COMMA, const char ANY_TEXT [] , const char ANY_TEXT2 [], float ARRAY [] )
{


       int guard = SPACE;


       if ( REVERSE == 0 )
       {


            if ( TYPE == 1 )
            {
                 for ( int kaj = 0; kaj < SIZE; kaj++ )
                 {
                       printf("%.*f", (COMMA <= 0) ? 0 : COMMA, ARRAY[kaj]);
                       while ( SPACE > 0 ) { printf(" "); SPACE--; }
                       SPACE = guard;
                 }
            }



            if ( TYPE == 2 )
            {
                 for ( int kaj = 0; kaj < SIZE; kaj++ )
                 {
                       printf("%s%.*f", (COMMA <= 0) ? 0 : ANY_TEXT, COMMA, ARRAY[kaj]);
                       while ( SPACE > 0 ) { printf(" "); SPACE--; }
                       SPACE = guard;
                 }
            }



            if ( TYPE == 3 )
            {
                 for ( int kaj = 0; kaj < SIZE; kaj++ )
                 {
                       printf("%s%.*f%s", (COMMA <= 0) ? 0 : ANY_TEXT, COMMA, ARRAY[kaj], ANY_TEXT2);
                       while ( SPACE > 0 ) { printf(" "); SPACE--; }
                       SPACE = guard;
                 }
            }



            if ( TYPE == 4 )
            {
                 for ( int kaj = 0; kaj < SIZE; kaj++ )
                 {
                       printf ("\n");
                       printf("%.*f%s", (COMMA <= 0) ? 0 : COMMA, ARRAY[kaj], ANY_TEXT);
                       while ( SPACE > 0 ) { printf(" "); SPACE--; }
                       SPACE = guard;
                 }
            }



            if ( TYPE == 5 )
            {
                 for ( int kaj = 0; kaj < SIZE; kaj++ )
                 {
                       printf ("\n");
                       printf("%s%.*f%s", (COMMA <= 0) ? 0 : ANY_TEXT, COMMA, ARRAY[kaj], ANY_TEXT2);
                       while ( SPACE > 0 ) { printf(" "); SPACE--; }
                       SPACE = guard;
                 }
            }




            if ( TYPE == 6 )
            {
                 for ( int kaj = 0; kaj < SIZE; kaj++ )
                 {
                       printf ("\n");
                       printf("%.*f", (COMMA <= 0) ? 0 : COMMA, ARRAY[kaj]);
                       while ( SPACE > 0 ) { printf(" "); SPACE--; }
                       SPACE = guard;
                 }
            }

       }



       if ( REVERSE == 1 )
       {


            if ( TYPE == 1 )
            {
                 for ( int kaj = SIZE - 1; kaj >= 0; kaj-- )
                 {
                       printf("%.*f", (COMMA <= 0) ? 0 : COMMA, ARRAY[kaj]);
                       while ( SPACE > 0 ) { printf(" "); SPACE--; }
                       SPACE = guard;
                 }
            }




            if ( TYPE == 2 )
            {
                 for ( int kaj = SIZE - 1; kaj >= 0; kaj-- )
                 {
                       printf("%s%.*f", (COMMA <= 0) ? 0 : ANY_TEXT, COMMA, ARRAY[kaj]);
                       while ( SPACE > 0 ) { printf(" "); SPACE--; }
                       SPACE = guard;
                 }
            }




            if ( TYPE == 3 )
            {
                 for ( int kaj = SIZE - 1; kaj >= 0; kaj-- )
                 {
                       printf("%s%.*f%s", (COMMA <= 0) ? 0 : ANY_TEXT, COMMA, ARRAY[kaj], ANY_TEXT2);
                       while ( SPACE > 0 ) { printf(" "); SPACE--; }
                       SPACE = guard;
                 }
            }




            if ( TYPE == 4 )
            {
                 for ( int kaj = SIZE - 1; kaj >= 0; kaj-- )
                 {
                       printf ("\n");
                       printf("%.*f%s", (COMMA <= 0) ? 0 : COMMA, ARRAY[kaj], ANY_TEXT);
                       while ( SPACE > 0 ) { printf(" "); SPACE--; }
                       SPACE = guard;
                 }
            }



            if ( TYPE == 5 )
            {
                 for ( int kaj = SIZE - 1; kaj >= 0; kaj-- )
                 {
                       printf ("\n");
                       printf("%s%.*f%s", (COMMA <= 0) ? 0 : ANY_TEXT, COMMA, ARRAY[kaj], ANY_TEXT2);
                       while ( SPACE > 0 ) { printf(" "); SPACE--; }
                       SPACE = guard;
                 }
            }



            if ( TYPE == 6 )
            {
                 for ( int kaj = SIZE - 1; kaj >= 0; kaj-- )
                 {
                       printf ("\n");
                       printf("%.*f", (COMMA <= 0) ? 0 : COMMA, ARRAY[kaj]);
                       while ( SPACE > 0 ) { printf(" "); SPACE--; }
                       SPACE = guard;
                 }
            }

       }
}





// FUNCTION: WRITES ON THE CONSOLE A FORMATED DOUBLE ARRAY
// @param01: REVERSE { THE ARRAY WILL BE PRINTED REVERSED? }
// @param02: SIZE { THE SIZE OF THE ARRAY THAT WILL BE USED }
// @param03: TYPE { PRINT VARIATION }
// @param04: SPACE { HOW MANY SPACES WILL BE PRINTED AFTER A VALUE OF THE ARRAY HAVE BEEN PRINTED }
// @param05: COMMA { HOW MANY DECIMAL HOUSES WILL BE PRINTED }
// @param06: ANY_TEXT { TEXT THAT WILL BE DISPLAYED BEFORE THE VALUE }
// @param07: ANY_TEXT2 { TEXT THAT WILL BE DISPLAYED AFTER THE VALUE }
// @param08: ARRAY { THE ARRAY THAT WILL BE USED }
void
PRV_DOUBLE ( int REVERSE , int SIZE , int TYPE , int SPACE , int COMMA, const char ANY_TEXT [] , const char ANY_TEXT2 [], double ARRAY [] )
{


       int guard = SPACE;


       if ( REVERSE == 0 )
       {


            if ( TYPE == 1 )
            {
                 for ( int kaj = 0; kaj < SIZE; kaj++ )
                 {
                       printf("%.*lf", (COMMA <= 0) ? 0 : COMMA, ARRAY[kaj]);
                       while ( SPACE > 0 ) { printf(" "); SPACE--; }
                       SPACE = guard;
                 }
            }



            if ( TYPE == 2 )
            {
                 for ( int kaj = 0; kaj < SIZE; kaj++ )
                 {
                       printf("%s%.*lf", (COMMA <= 0) ? 0 : ANY_TEXT, COMMA, ARRAY[kaj]);
                       while ( SPACE > 0 ) { printf(" "); SPACE--; }
                       SPACE = guard;
                 }
            }



            if ( TYPE == 3 )
            {
                 for ( int kaj = 0; kaj < SIZE; kaj++ )
                 {
                       printf("%s%.*lf%s", (COMMA <= 0) ? 0 : ANY_TEXT, COMMA, ARRAY[kaj], ANY_TEXT2);
                       while ( SPACE > 0 ) { printf(" "); SPACE--; }
                       SPACE = guard;
                 }
            }



            if ( TYPE == 4 )
            {
                 for ( int kaj = 0; kaj < SIZE; kaj++ )
                 {
                       printf ("\n");
                       printf("%.*lf%s", (COMMA <= 0) ? 0 : COMMA, ARRAY[kaj], ANY_TEXT);
                       while ( SPACE > 0 ) { printf(" "); SPACE--; }
                       SPACE = guard;
                 }
            }



            if ( TYPE == 5 )
            {
                 for ( int kaj = 0; kaj < SIZE; kaj++ )
                 {
                       printf ("\n");
                       printf("%s%.*lf%s", (COMMA <= 0) ? 0 : ANY_TEXT, COMMA, ARRAY[kaj], ANY_TEXT2);
                       while ( SPACE > 0 ) { printf(" "); SPACE--; }
                       SPACE = guard;
                 }
            }




            if ( TYPE == 6 )
            {
                 for ( int kaj = 0; kaj < SIZE; kaj++ )
                 {
                       printf ("\n");
                       printf("%.*lf", (COMMA <= 0) ? 0 : COMMA, ARRAY[kaj]);
                       while ( SPACE > 0 ) { printf(" "); SPACE--; }
                       SPACE = guard;
                 }
            }

       }



       if ( REVERSE == 1 )
       {


            if ( TYPE == 1 )
            {
                 for ( int kaj = SIZE - 1; kaj >= 0; kaj-- )
                 {
                       printf("%.*lf", (COMMA <= 0) ? 0 : COMMA, ARRAY[kaj]);
                       while ( SPACE > 0 ) { printf(" "); SPACE--; }
                       SPACE = guard;
                 }
            }




            if ( TYPE == 2 )
            {
                 for ( int kaj = SIZE - 1; kaj >= 0; kaj-- )
                 {
                       printf("%s%.*lf", (COMMA <= 0) ? 0 : ANY_TEXT, COMMA, ARRAY[kaj]);
                       while ( SPACE > 0 ) { printf(" "); SPACE--; }
                       SPACE = guard;
                 }
            }




            if ( TYPE == 3 )
            {
                 for ( int kaj = SIZE - 1; kaj >= 0; kaj-- )
                 {
                       printf("%s%.*lf%s", (COMMA <= 0) ? 0 : ANY_TEXT, COMMA, ARRAY[kaj], ANY_TEXT2);
                       while ( SPACE > 0 ) { printf(" "); SPACE--; }
                       SPACE = guard;
                 }
            }




            if ( TYPE == 4 )
            {
                 for ( int kaj = SIZE - 1; kaj >= 0; kaj-- )
                 {
                       printf ("\n");
                       printf("%.*lf%s", (COMMA <= 0) ? 0 : COMMA, ARRAY[kaj], ANY_TEXT);
                       while ( SPACE > 0 ) { printf(" "); SPACE--; }
                       SPACE = guard;
                 }
            }



            if ( TYPE == 5 )
            {
                 for ( int kaj = SIZE - 1; kaj >= 0; kaj-- )
                 {
                       printf ("\n");
                       printf("%s%.*lf%s", (COMMA <= 0) ? 0 : ANY_TEXT, COMMA, ARRAY[kaj], ANY_TEXT2);
                       while ( SPACE > 0 ) { printf(" "); SPACE--; }
                       SPACE = guard;
                 }
            }



            if ( TYPE == 6 )
            {
                 for ( int kaj = SIZE - 1; kaj >= 0; kaj-- )
                 {
                       printf ("\n");
                       printf("%.*lf", (COMMA <= 0) ? 0 : COMMA, ARRAY[kaj]);
                       while ( SPACE > 0 ) { printf(" "); SPACE--; }
                       SPACE = guard;
                 }
            }

       }
}





// FUNCTION: WRITES ON THE CONSOLE A FORMATED INT BIDIMENSIONAL ARRAY
// @param01: REVERSE { THE ARRAY WILL BE PRINTED REVERSED? }
// @param02: STYLE { THE BIDIMENSIONAL ARRAY PRINT STYLE THAT COMES FROM 1 TO 4 }
// @param03: LINES { HOW MANY LINES THE BIDIMENSIONAL ARRAY HAVE }
// @param04: COLS { HOW MANY COLS THE BIDIMENSIONAL ARRAY HAVE }
// @param05: SPACE { HOW MANY SPACES WILL BE PRINTED AFTER A VALUE OF THE ARRAY HAVE BEEN PRINTED }
// @param06: LEFT_TEXT { TEXT THAT WILL BE DISPLAYED BEFORE THE VALUE }
// @param07: RIGHT_TEXT { TEXT THAT WILL BE DISPLAYED AFTER THE VALUE }
// @param08: B_ARRAY { THE BIDIMENSIONAL ARRAY THAT WILL BE USED }
void
PRM_INT ( int REVERSE , int STYLE , int LINES , int COLS , int SPACE , const char LEFT_TEXT [] , const char RIGHT_TEXT [] ,  int B_ARRAY [LINES] [COLS] )
{


       int kaj = 0;
       int jak = 0;
       int higher = 0;
       int digits = 0;
       int guardby = SPACE;


       switch ( REVERSE )
       {


                case 0:

                if ( STYLE <= 1 )
                {

                     for ( kaj = 0 ; kaj < LINES; kaj++ )
                     for ( jak = 0 ; jak < COLS;  jak++ )
                     {
                           printf ("%s%d%s", LEFT_TEXT, B_ARRAY [kaj] [jak], RIGHT_TEXT);
                           while ( SPACE > 0 ) { printf(" "); SPACE--; }
                           SPACE = guardby;
                     }

                }

                if ( STYLE == 2 )
                {

                     for ( kaj = 0 ; kaj < LINES; kaj++ )
                     for ( jak = 0 ; jak < COLS;  jak++ )
                     {
                           printf ("%s%d%s\n", LEFT_TEXT, B_ARRAY [kaj] [jak], RIGHT_TEXT);
                           while ( SPACE > 0 ) { printf(" "); SPACE--; }
                           SPACE = guardby;
                     }

                }

                if ( STYLE == 3 )
                {

                     for ( kaj = 0 ; kaj < LINES; kaj++ )
                     for ( jak = 0 ; jak < COLS;  jak++ )
                     {
                           printf ("%s%d%s", LEFT_TEXT, B_ARRAY [kaj] [jak], RIGHT_TEXT);
                           while ( SPACE > 0 ) { printf(" "); SPACE--; }
                           SPACE = guardby;

                           if ( jak == COLS - 1 )
                           printf ("\n");
                     }

                }

                if ( STYLE >= 4 )
                {

                     for ( kaj = 0 ; kaj < LINES; kaj++ )
                     for ( jak = 0 ; jak < COLS;  jak++ )
                     {
                           if ( B_ARRAY [kaj] [jak] >= higher )
                           higher = B_ARRAY [kaj] [jak];
                     }


                     for ( kaj = 0 ; kaj < LINES; kaj++ )
                     for ( jak = 0 ; jak < COLS;  jak++ )
                     {
                           while ( higher not_eq 0 )
                           {
                                   higher /= 10;
                                   digits++;
                           }
                     }


                     for ( kaj = 0 ; kaj < LINES; kaj++ )
                     for ( jak = 0 ; jak < COLS;  jak++ )
                     {
                           printf ("%s%*d%s", LEFT_TEXT, digits, B_ARRAY [kaj] [jak], RIGHT_TEXT);
                           while ( SPACE > 0 ) { printf(" "); SPACE--; }
                           SPACE = guardby;

                           if ( jak == COLS - 1 )
                           printf ("\n");
                     }

                }

                break;


                case 1:

                if ( STYLE <= 1 )
                {

                     for ( kaj = LINES - 1; kaj >= 0; kaj-- )
                     for ( jak = COLS - 1; jak >= 0;  jak-- )
                     {
                           printf ("%s%d%s", LEFT_TEXT, B_ARRAY [kaj] [jak], RIGHT_TEXT);
                           while ( SPACE > 0 ) { printf(" "); SPACE--; }
                           SPACE = guardby;
                     }

                }

                if ( STYLE == 2 )
                {

                     for ( kaj = LINES - 1; kaj >= 0; kaj-- )
                     for ( jak = COLS - 1; jak >= 0;  jak-- )
                     {
                           printf ("%s%d%s\n", LEFT_TEXT, B_ARRAY [kaj] [jak], RIGHT_TEXT);
                           while ( SPACE > 0 ) { printf(" "); SPACE--; }
                           SPACE = guardby;
                     }

                }

                if ( STYLE == 3 )
                {

                      for ( kaj = LINES - 1; kaj >= 0; kaj-- )
                      for ( jak = COLS - 1; jak >= 0;  jak-- )
                      {
                            printf ("%s%d%s", LEFT_TEXT, B_ARRAY [kaj] [jak], RIGHT_TEXT);
                            while ( SPACE > 0 ) { printf(" "); SPACE--; }
                            SPACE = guardby;

                            if ( jak == 0 )
                            printf ("\n");
                      }

                }

                if ( STYLE >= 4 )
                {

                     for ( kaj = 0 ; kaj < LINES; kaj++ )
                     for ( jak = 0 ; jak < COLS;  jak++ )
                     {
                           if ( B_ARRAY [kaj] [jak] >= higher )
                           higher = B_ARRAY [kaj] [jak];
                     }

                     for ( kaj = 0 ; kaj < LINES; kaj++ )
                     for ( jak = 0 ; jak < COLS;  jak++ )
                     {
                           while ( higher not_eq 0 )
                           {
                                   higher /= 10;
                                   digits++;
                           }
                     }

                     for ( kaj = LINES - 1; kaj >= 0; kaj-- )
                     for ( jak = COLS - 1; jak >= 0;  jak-- )
                     {
                           printf ("%s%*d%s", LEFT_TEXT, digits, B_ARRAY [kaj] [jak], RIGHT_TEXT);
                           while ( SPACE > 0 ) { printf(" "); SPACE--; }
                           SPACE = guardby;

                           if ( jak == 0 )
                           printf ("\n");
                     }

                }

                break;

                default:
                         exit (1);
                break;

       }
}





// FUNCTION: WRITES ON THE CONSOLE A FORMATED FLOAT BIDIMENSIONAL ARRAY
// @param01: REVERSE { THE ARRAY WILL BE PRINTED REVERSED? }
// @param02: STYLE { THE BIDIMENSIONAL ARRAY PRINT STYLE THAT COMES FROM 1 TO 4 }
// @param03: LINES { HOW MANY LINES THE BIDIMENSIONAL ARRAY HAVE }
// @param04: COLS { HOW MANY COLS THE BIDIMENSIONAL ARRAY HAVE }
// @param05: SPACE { HOW MANY SPACES WILL BE PRINTED AFTER A VALUE OF THE ARRAY HAVE BEEN PRINTED }
// @param06: COMMA { HOW MANY DECIMAL HOUSES WILL BE PRINTED }
// @param07: LEFT_TEXT { TEXT THAT WILL BE DISPLAYED BEFORE THE VALUE }
// @param08: RIGHT_TEXT { TEXT THAT WILL BE DISPLAYED AFTER THE VALUE }
// @param09: B_ARRAY { THE BIDIMENSIONAL ARRAY THAT WILL BE USED }
void
PRM_FLOAT ( int REVERSE , int STYLE , int LINES , int COLS , int SPACE , int COMMA , const char LEFT_TEXT [] , const char RIGHT_TEXT [] ,  float B_ARRAY [LINES] [COLS] )
{


       int kaj = 0;
       int jak = 0;
       int guardby = SPACE;


       switch ( REVERSE )
       {

       case 0:

       if ( STYLE <= 1 )
       {
            for ( kaj = 0 ; kaj < LINES; kaj++ )
            for ( jak = 0 ; jak < COLS;  jak++ )
            {
                  printf ("%s%.*f%s", LEFT_TEXT, COMMA, B_ARRAY [kaj] [jak], RIGHT_TEXT);
                  while ( SPACE > 0 ) { printf(" "); SPACE--; }
                  SPACE = guardby;
            }
       }

       if ( STYLE == 2 )
       {
            for ( kaj = 0 ; kaj < LINES; kaj++ )
            for ( jak = 0 ; jak < COLS;  jak++ )
            {
                  printf ("%s%.*f%s\n", LEFT_TEXT, COMMA, B_ARRAY [kaj] [jak], RIGHT_TEXT);
                  while ( SPACE > 0 ) { printf(" "); SPACE--; }
                  SPACE = guardby;
            }
       }

       if ( STYLE >= 3 )
       {
            for ( kaj = 0 ; kaj < LINES; kaj++ )
            for ( jak = 0 ; jak < COLS;  jak++ )
            {
                  printf ("%s%.*f%s", LEFT_TEXT, COMMA, B_ARRAY [kaj] [jak], RIGHT_TEXT);
                  while ( SPACE > 0 ) { printf(" "); SPACE--; }
                  SPACE = guardby;

                  if ( jak == COLS - 1 )
                  printf ("\n");
            }
       }

       break;

       case 1:

       if ( STYLE <= 1 )
       {
            for ( kaj = LINES - 1; kaj >= 0; kaj-- )
            for ( jak = COLS - 1; jak >= 0;  jak-- )
            {
                  printf ("%s%.*f%s", LEFT_TEXT, COMMA, B_ARRAY [kaj] [jak], RIGHT_TEXT);
                  while ( SPACE > 0 ) { printf(" "); SPACE--; }
                  SPACE = guardby;
            }
       }

       if ( STYLE == 2 )
       {
            for ( kaj = LINES - 1; kaj >= 0; kaj-- )
            for ( jak = COLS - 1; jak >= 0;  jak-- )
            {
                  while ( SPACE > 0 ) { printf(" "); SPACE--; }
                  printf ("%s%.*f%s\n", LEFT_TEXT, COMMA, B_ARRAY [kaj] [jak], RIGHT_TEXT);
                  SPACE = guardby;
            }
       }

       if ( STYLE >= 3 )
       {

            for ( kaj = LINES - 1; kaj >= 0; kaj-- )
            for ( jak = COLS - 1; jak >= 0;  jak-- )
            {
                  printf ("%s%.*f%s", LEFT_TEXT, COMMA, B_ARRAY [kaj] [jak], RIGHT_TEXT);
                  while ( SPACE > 0 ) { printf(" "); SPACE--; }
                  SPACE = guardby;

                  if ( jak == 0 )
                  printf ("\n");
            }
       }

       break;

       default:
               exit (1);
       break;

       }
}





// FUNCTION: WRITES ON THE CONSOLE A FORMATED DOUBLE BIDIMENSIONAL ARRAY
// @param01: REVERSE { THE ARRAY WILL BE PRINTED REVERSED? }
// @param02: STYLE { THE BIDIMENSIONAL ARRAY PRINT STYLE THAT COMES FROM 1 TO 4 }
// @param03: LINES { HOW MANY LINES THE BIDIMENSIONAL ARRAY HAVE }
// @param04: COLS { HOW MANY COLS THE BIDIMENSIONAL ARRAY HAVE }
// @param05: SPACE { HOW MANY SPACES WILL BE PRINTED AFTER A VALUE OF THE ARRAY HAVE BEEN PRINTED }
// @param06: COMMA { HOW MANY DECIMAL HOUSES WILL BE PRINTED }
// @param07: LEFT_TEXT { TEXT THAT WILL BE DISPLAYED BEFORE THE VALUE }
// @param08: RIGHT_TEXT { TEXT THAT WILL BE DISPLAYED AFTER THE VALUE }
// @param09: B_ARRAY { THE BIDIMENSIONAL ARRAY THAT WILL BE USED }
void
PRM_DOUBLE ( int REVERSE , int STYLE , int LINES , int COLS , int SPACE , int COMMA , const char LEFT_TEXT [] , const char RIGHT_TEXT [] ,  double B_ARRAY [LINES] [COLS] )
{


       int kaj = 0;
       int jak = 0;
       int guardby = SPACE;


       switch ( REVERSE )
       {

       case 0:

       if ( STYLE <= 1 )
       {
            for ( kaj = 0 ; kaj < LINES; kaj++ )
            for ( jak = 0 ; jak < COLS;  jak++ )
            {
                  printf ("%s%.*lf%s", LEFT_TEXT, COMMA, B_ARRAY [kaj] [jak], RIGHT_TEXT);
                  while ( SPACE > 0 ) { printf(" "); SPACE--; }
                  SPACE = guardby;
            }
       }

       if ( STYLE == 2 )
       {
            for ( kaj = 0 ; kaj < LINES; kaj++ )
            for ( jak = 0 ; jak < COLS;  jak++ )
            {
                  printf ("%s%.*lf%s\n", LEFT_TEXT, COMMA, B_ARRAY [kaj] [jak], RIGHT_TEXT);
                  while ( SPACE > 0 ) { printf(" "); SPACE--; }
                  SPACE = guardby;
            }
       }

       if ( STYLE >= 3 )
       {
            for ( kaj = 0 ; kaj < LINES; kaj++ )
            for ( jak = 0 ; jak < COLS;  jak++ )
            {
                  printf ("%s%.*lf%s", LEFT_TEXT, COMMA, B_ARRAY [kaj] [jak], RIGHT_TEXT);
                  while ( SPACE > 0 ) { printf(" "); SPACE--; }
                  SPACE = guardby;

                  if ( jak == COLS - 1 )
                  printf ("\n");
            }
       }

       break;

       case 1:

       if ( STYLE <= 1 )
       {
            for ( kaj = LINES - 1; kaj >= 0; kaj-- )
            for ( jak = COLS - 1; jak >= 0;  jak-- )
            {
                  printf ("%s%.*lf%s", LEFT_TEXT, COMMA, B_ARRAY [kaj] [jak], RIGHT_TEXT);
                  while ( SPACE > 0 ) { printf(" "); SPACE--; }
                  SPACE = guardby;
            }
       }

       if ( STYLE == 2 )
       {
            for ( kaj = LINES - 1; kaj >= 0; kaj-- )
            for ( jak = COLS - 1; jak >= 0;  jak-- )
            {


                  printf ("%s%.*lf%s\n", LEFT_TEXT, COMMA, B_ARRAY [kaj] [jak], RIGHT_TEXT);
                  while ( SPACE > 0 ) { printf(" "); SPACE--; }
                  SPACE = guardby;
            }
       }

       if ( STYLE >= 3 )
       {

            for ( kaj = LINES - 1; kaj >= 0; kaj-- )
            for ( jak = COLS - 1; jak >= 0;  jak-- )
            {
                  printf ("%s%.*lf%s", LEFT_TEXT, COMMA, B_ARRAY [kaj] [jak], RIGHT_TEXT);
                  while ( SPACE > 0 ) { printf(" "); SPACE--; }
                  SPACE = guardby;

                  if ( jak == 0 )
                  printf ("\n");
            }
       }

       break;

       default:
               exit (1);
       break;

       }
}





// FUNCTION: WRITES ON THE CONSOLE A STRING LIST WITH THE SUPORT OF A INT ARRAY
// @param01: REVERSE { THE LIST WILL BE PRINTED REVERSED? }
// @param02: HOW_MANY_STRINGS { THE NUMBER OF WORDS ON THE STRING ARRAY }
// @param03: SIZE_OF_THESE_STRINGS { THE SIZE OF THE STRINGS ON THE ARRAY }
// @param04: SPACE { THE SPACE AFTER A LIST VALUE }
// @param05: TEXT1 { TEXT BEFORE THE STRING PRINT }
// @param06: TEXT2 { TEXT AFTER THE STRING PRINT }
// @param06: array { INT ARRAY TO PRINT BEFORE THE LIST }
// @param07: string { STRING ARRAY THAT WILL BE USED ON THIS FUNCTION }
// @param08: MORE_SPACE { IF EQUAL 1 PRINTS TWO BREAKLINES }
void
PRL_INT ( int REVERSE , int HOW_MANY_STRINGS , int SIZE_OF_THESE_STRINGS , int SPACE , const char TEXT1 [] , const char TEXT2 [] ,  int array [] , char string [ HOW_MANY_STRINGS ] [ SIZE_OF_THESE_STRINGS ] , int MORE_SPACE )
{

          int guard = SPACE;

          if ( REVERSE == 0 )
          {
               for ( int kaj = 0; kaj < HOW_MANY_STRINGS; kaj++ )
               {
                     printf ("%s%d%s%s", TEXT1, array[kaj], TEXT2, string [kaj]);

                     if ( MORE_SPACE == 1 ) printf ("\n\n");
                     else printf ("\n");

                     while ( SPACE > 0 ) { printf(" "); SPACE--; }
                     SPACE = guard;
               }
          }

          if ( REVERSE == 1 )
          {
               for ( int kaj = HOW_MANY_STRINGS - 1; kaj >= 0; kaj-- )
               {
                     printf ("%s%d%s%s", TEXT1, array[kaj], TEXT2, string [kaj]);

                     if ( MORE_SPACE == 1 ) printf ("\n\n");
                     else printf ("\n");

                     while ( SPACE > 0 ) { printf(" "); SPACE--; }
                     SPACE = guard;
               }
          }

}





// FUNCTION: WRITES ON THE CONSOLE A STRING LIST WITH THE SUPORT OF A FLOAT ARRAY
// @param01: REVERSE { THE LIST WILL BE PRINTED REVERSED? }
// @param02: HOW_MANY_STRINGS { THE NUMBER OF WORDS ON THE STRING ARRAY }
// @param03: SIZE_OF_THESE_STRINGS { THE SIZE OF THE STRINGS ON THE ARRAY }
// @param04: SPACE { THE SPACE AFTER A LIST VALUE }
// @param05: COMMA { DEFINES HOW MANY DECIMAL HOUSES WILL BE PRINTED }
// @param06: TEXT1 { TEXT BEFORE THE STRING PRINT }
// @param07: TEXT2 { TEXT AFTER THE STRING PRINT }
// @param086: array { FLOAT ARRAY TO PRINT BEFORE THE LIST }
// @param09: string { STRING ARRAY THAT WILL BE USED ON THIS FUNCTION }
// @param10: MORE_SPACE { IF EQUAL 1 PRINTS TWO BREAKLINES }
void
PRL_FLOAT ( int REVERSE , int HOW_MANY_STRINGS , int SIZE_OF_THESE_STRINGS , int SPACE , int COMMA, const char TEXT1 [] , const char TEXT2 [] ,  float array [] , char string [ HOW_MANY_STRINGS ] [ SIZE_OF_THESE_STRINGS ] , int MORE_SPACE )
{

          int guard = SPACE;

          if ( REVERSE == 0 )
          {
               for ( int kaj = 0; kaj < HOW_MANY_STRINGS; kaj++ )
               {
                     printf("%s%.*f%s%s", ( COMMA <= 0) ? 0 : TEXT1, COMMA, array [ kaj ] , TEXT2 , string [ kaj ] );

                     if ( MORE_SPACE == 1 ) printf ("\n\n");
                     else printf ("\n");

                     while ( SPACE > 0 ) { printf(" "); SPACE--; }
                     SPACE = guard;
               }
          }

          if ( REVERSE == 1 )
          {
               for ( int kaj = HOW_MANY_STRINGS - 1; kaj >= 0; kaj-- )
               {

                     printf("%s%.*f%s%s", (COMMA <= 0) ? 0 : TEXT1, COMMA, array[kaj], TEXT2, string [kaj]);

                     if ( MORE_SPACE == 1 ) printf ("\n\n");
                     else printf ("\n");

                     while ( SPACE > 0 ) { printf(" "); SPACE--; }
                     SPACE = guard;
               }
          }
}





// FUNCTION: WRITES ON THE CONSOLE A STRING LIST WITH THE SUPORT OF A DOUBLE ARRAY
// @param01: REVERSE { THE LIST WILL BE PRINTED REVERSED? }
// @param02: HOW_MANY_STRINGS { THE NUMBER OF WORDS ON THE STRING ARRAY }
// @param03: SIZE_OF_THESE_STRINGS { THE SIZE OF THE STRINGS ON THE ARRAY }
// @param04: SPACE { THE SPACE AFTER A LIST VALUE }
// @param05: COMMA { DEFINES HOW MANY DECIMAL HOUSES WILL BE PRINTED }
// @param06: TEXT1 { TEXT BEFORE THE STRING PRINT }
// @param07: TEXT2 { TEXT AFTER THE STRING PRINT }
// @param086: array { DOUBLE ARRAY TO PRINT BEFORE THE LIST }
// @param09: string { STRING ARRAY THAT WILL BE USED ON THIS FUNCTION }
// @param10: MORE_SPACE { IF EQUAL 1 PRINTS TWO BREAKLINES }
void
PRL_DOUBLE ( int REVERSE , int HOW_MANY_STRINGS , int SIZE_OF_THESE_STRINGS , int SPACE , int COMMA, const char TEXT1 [] , const char TEXT2 [] ,  double array [] , char string [ HOW_MANY_STRINGS ] [ SIZE_OF_THESE_STRINGS ] , int MORE_SPACE )
{

          int guard = SPACE;

          if ( REVERSE == 0 )
          {
               for ( int kaj = 0; kaj < HOW_MANY_STRINGS; kaj++ )
               {
                     printf("%s%.*lf%s%s", ( COMMA <= 0) ? 0 : TEXT1, COMMA, array [ kaj ] , TEXT2 , string [ kaj ] );

                     if ( MORE_SPACE == 1 ) printf ("\n\n");
                     else printf ("\n");

                     while ( SPACE > 0 ) { printf(" "); SPACE--; }
                     SPACE = guard;
               }
          }

          if ( REVERSE == 1 )
          {
               for ( int kaj = HOW_MANY_STRINGS - 1; kaj >= 0; kaj-- )
               {

                     printf("%s%.*lf%s%s", (COMMA <= 0) ? 0 : TEXT1, COMMA, array[kaj], TEXT2, string [kaj]);

                     if ( MORE_SPACE == 1 ) printf ("\n\n");
                     else printf ("\n");

                     while ( SPACE > 0 ) { printf(" "); SPACE--; }
                     SPACE = guard;
               }
          }
}





// FUNCTION: WRITES ON THE CONSOLE A SIMPLE PRINT OF A INT ARRAY
// @param01: SIZE { SIZE OF THE ARRAY THAT WILL BE PRINTED }
// @param02: ARRAY { THE INT ARRAY THAT WILL BE USED }
void
PR_intVETOR ( int SIZE , int ARRAY [] )
{
    int kaj = 0;
    for ( kaj = 0; kaj < SIZE; kaj++ ) printf ("%d ", ARRAY [kaj] );
}





// FUNCTION: WRITES ON THE CONSOLE A SIMPLE PRINT OF A INT BIDIMENSIONAL ARRAY
// @param01: LINES { LINES OF THE ARRAY THAT WILL BE PRINTED }
// @param02: COLS { COLS OF  THE ARRAY THAT WILL BE PRINTED }
// @param03: B_ARRAY { THE BIDIMENISIONAL ARRAY THAT WILL BE USED }
void
PR_intMATRIZ ( int LINES , int COLS , int B_ARRAY [LINES] [COLS] )
{
    int kaj = 0, jak = 0;
    for ( kaj = 0; kaj < LINES; kaj++ ) for ( jak = 0; jak < COLS; jak++ )
          printf ("%d ", B_ARRAY [kaj] [jak] );
}





// FUNCTION: WRITES ON THE CONSOLE A SIMPLE PRINT OF A FLOAT ARRAY
// @param01: SIZE { SIZE OF THE ARRAY THAT WILL BE PRINTED }
// @param02: COMMA { SET HOW MANY DECIMAL HOUSES WILL BE PRINTED }
// @param03: ARRAY { THE INT ARRAY THAT WILL BE USED }
void
PR_floatVETOR ( int SIZE , int COMMA , float ARRAY [] )
{
    int kaj = 0;
    for ( kaj = 0; kaj < SIZE; kaj++ )
          printf("%.*f ", (COMMA <= 0) ? 0 : COMMA , ARRAY [kaj] );
}





// FUNCTION: WRITES ON THE CONSOLE A SIMPLE PRINT OF A FLOAT BIDIMENSIONAL ARRAY
// @param01: LINES { LINES OF THE ARRAY THAT WILL BE PRINTED }
// @param02: COLS { COLS OF  THE ARRAY THAT WILL BE PRINTED }
// @param03: COMMA { SET HOW MANY DECIMAL HOUSES WILL BE PRINTED }
// @param04: B_ARRAY { THE BIDIMENISIONAL ARRAY THAT WILL BE USED }
void
PR_floatMATRIZ ( int LINES , int COLS , int COMMA , float B_ARRAY [LINES] [COLS] )
{
    int kaj = 0, jak = 0;
    for ( kaj = 0; kaj < LINES; kaj++ ) for ( jak = 0; jak < COLS; jak++ )
          printf ("%.*f ", (COMMA <= 0) ? 0 : COMMA , B_ARRAY [kaj] [jak] );
}





// FUNCTION: WRITES ON THE CONSOLE A SIMPLE PRINT OF A DOUBLE ARRAY
// @param01: SIZE { SIZE OF THE ARRAY THAT WILL BE PRINTED }
// @param02: COMMA { SET HOW MANY DECIMAL HOUSES WILL BE PRINTED }
// @param03: ARRAY { THE INT ARRAY THAT WILL BE USED }
void
PR_doubleVETOR ( int SIZE , int COMMA , double ARRAY [] )
{
    int kaj = 0;
    for ( kaj = 0; kaj < SIZE; kaj++ )
          printf("%.*lf ", (COMMA <= 0) ? 0 : COMMA , ARRAY [kaj] );
}





// FUNCTION: WRITES ON THE CONSOLE A SIMPLE PRINT OF A DOUBLE BIDIMENSIONAL ARRAY
// @param01: LINES { LINES OF THE ARRAY THAT WILL BE PRINTED }
// @param02: COLS { COLS OF  THE ARRAY THAT WILL BE PRINTED }
// @param03: COMMA { SET HOW MANY DECIMAL HOUSES WILL BE PRINTED }
// @param04: B_ARRAY { THE BIDIMENISIONAL ARRAY THAT WILL BE USED }
void
PR_doubleMATRIZ ( int LINES , int COLS , int COMMA , double B_ARRAY [LINES] [COLS] )
{
    int kaj = 0, jak = 0;
    for ( kaj = 0; kaj < LINES; kaj++ ) for ( jak = 0; jak < COLS; jak++ )
          printf ("%.*lf ", (COMMA <= 0) ? 0 : COMMA , B_ARRAY [kaj] [jak] );
}





// FUNCTION: WRITES ON THE CONSOLE A SIMPLE PRINT OF A CHAR ARRAY
// @param01: SIZE { SIZE OF THE ARRAY THAT WILL BE PRINTED }
// @param02: ARRAY { THE INT ARRAY THAT WILL BE USED }
void
PR_charVETOR ( int SIZE , char ARRAY [] )
{
    int kaj = 0;
    for ( kaj = 0; kaj < SIZE; kaj++ ) printf ("%c ", ARRAY [kaj] );
}





// FUNCTION: WRITES ON THE CONSOLE A SIMPLE PRINT OF A CHAR BIDIMENSIONAL ARRAY
// @param01: LINES { LINES OF THE ARRAY THAT WILL BE PRINTED }
// @param02: COLS { COLS OF  THE ARRAY THAT WILL BE PRINTED }
// @param03: B_ARRAY { THE BIDIMENISIONAL ARRAY THAT WILL BE USED }
void
PR_charMATRIZ ( int LINES , int COLS , char B_ARRAY [ LINES ] [ COLS ] )
{
     int kaj = 0, jak = 0;
     for ( kaj = 0; kaj < LINES; kaj++ ) for ( jak = 0; jak < COLS; jak++ )
           printf ("%c ", B_ARRAY [kaj] [jak] );
}




/* CS */




// FUNCTION: SET CONSOLE CODE PAGE / SET CONSOLE REGION
// @param01: REGION { SET THE CONSOLE REGION USING THE REGION MACROS }
void
CS_SETREGION ( int REGION )
{
     SetConsoleOutputCP ( REGION );
}





// FUNCTION: SET CONSOLE TITLE
// @param01: TITLE { NAME OF THE CONSOLE TITLE }
void
CS_SETTITLE ( const char * TITLE )
{
     SetConsoleTitle ( TITLE );
}





// FUNCTION: SET CONSOLE TO FULLSCREEN MODE
void
CS_SETFULLSCREEN ( void )
{
     HWND co = GetConsoleWindow ();
     ShowWindow ( co , SW_SHOWMAXIMIZED );
}





// FUNCTION: DISABLE THE MAXIMIZE BUTTON ON THE CONSOLE
void
CS_DISABLEMAXIMIZEBUTTON ( void )
{
     HWND co = GetConsoleWindow ();
     DWORD sty = GetWindowLong ( co , GWL_STYLE );

     sty &= ~WS_MAXIMIZEBOX;
     SetWindowLong ( co, GWL_STYLE , sty );
}





// FUNCTION: DISABLE THE MINIMIZE BUTTON ON THE CONSOLE
void
CS_DISABLEMINIMIZEBUTTON ( void )
{
     HWND co = GetConsoleWindow ();
     DWORD sty = GetWindowLong ( co , GWL_STYLE );

     sty &= ~WS_MINIMIZEBOX;
     SetWindowLong ( co , GWL_STYLE , sty );
}





// FUNCTION: DISABLE THE CLOSE BUTTON ON THE CONSOLE
void
CS_DISABLECLOSEBUTTON ( void )
{
     HWND hwnd = GetConsoleWindow ();
     HMENU hmenu = GetSystemMenu ( hwnd , FALSE );

     EnableMenuItem ( hmenu , SC_CLOSE , MF_GRAYED );
     RemoveMenu ( hmenu , SC_CLOSE , MF_BYCOMMAND );
}





// FUNCTION: DISABLE ALL CONSOLE BUTTONS
void
CS_DISABLEALLBUTTONS ( void )
{
    HWND co = GetConsoleWindow ();
    DWORD sty = GetWindowLong ( co , GWL_STYLE );

    sty &= ~WS_SYSMENU;
    SetWindowLong ( co , GWL_STYLE , sty);
}





// FUNCTION: DISABLE THE RESIZE PROPERTY OF THE CONSOLE
void
CS_DISABLERESIZE ( void )
{
     HWND co = GetConsoleWindow ();

     DWORD sty = GetWindowLong ( co , GWL_STYLE );
     sty &= ~WS_SIZEBOX;

     SetWindowLong ( co , GWL_STYLE , sty );
}





// FUNCTION: DISABLE THE SCROLLBAR PROPERTY OF THE CONSOLE
void
CS_DISABLESCROLLBAR ( void )
{
     HANDLE hConsole = GetStdHandle ( STD_OUTPUT_HANDLE );
     CONSOLE_SCREEN_BUFFER_INFO csbi;

     GetConsoleScreenBufferInfo ( hConsole , &csbi );

     COORD bufferSize = { csbi.srWindow.Right - csbi.srWindow.Left + 1, csbi.srWindow.Bottom - csbi.srWindow.Top + 1 };

     SetConsoleScreenBufferSize ( hConsole , bufferSize );
}





// FUNCTION: SET TEXT COLOR VARIATION
// @param01: VARIATION { SET THE VARIAITON OF COLOR THAT WINDOWS.H PROVIDES }
void
CS_SETTEXTATTRIBUTE ( int VARIATION )
{
     SetConsoleTextAttribute ( GetStdHandle ( STD_OUTPUT_HANDLE ) , VARIATION );
}





// FUNCTION: SET THE CONSOLE POSITION
// @param01: X { SET X POSITION OF THE CONSOLE }
// @param02: Y { SET Y POSITION OF THE CONSOLE }
void
CS_SETPOSITION ( int X , int Y )
{
     HWND CW = GetConsoleWindow ();
     SetWindowPos ( CW , 0 , X , Y , 0 , 0 , SWP_NOSIZE | SWP_NOZORDER );
}





// FUNCTION: SET THE CONSOLE SIZE
// @param01: WIDTH { SET THE CONSOLE WIDTH }
// @param02: HEIGHT { SET THE CONSOLE HEIGHT }
void
CS_SETSIZE ( int WIDHT , int HEIGHT )
{
     WIDHT--; HEIGHT--;

     SMALL_RECT windowSize = { 0 , 0 , WIDHT , HEIGHT };
     SetConsoleWindowInfo ( GetStdHandle ( STD_OUTPUT_HANDLE ) , TRUE , &windowSize );
}





// FUNCTION: SET THE ATRIBUTES OF THE CURSOR USED ON THE CONSOLE
// @param01: HIDE_ { SET THE CONSOLE CURSOR VISIBILITY }
// @param02: BOLDCURSOR { SET THE CONSOLE CURSOR BOLDNESS }
void
CS_SETCURSORATTRIBUTES ( bool HIDE_ , bool BOLDCURSOR )
{
     HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
     CONSOLE_CURSOR_INFO info;

     if ( BOLDCURSOR == true ) info.dwSize = 100;
     if ( BOLDCURSOR == false ) info.dwSize = 1;

     if ( HIDE == true ) info.bVisible = FALSE;
     if ( HIDE == false ) info.bVisible = TRUE;

     SetConsoleCursorInfo(consoleHandle, &info);
}





// FUNCTION: GET THE CURSOR ACTUAL POSITION
COORD
CS_GETCURSORPOSITION ( void )
{
     HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
     CONSOLE_SCREEN_BUFFER_INFO consoleInfo;

     GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
     COORD cursorPos = consoleInfo.dwCursorPosition;

     return cursorPos;
}





// FUNCTION: SET THE NEW CURSOR POSITION ON CONSOLE
// @param01: newPOS { SET THE NEW CURSOR POSITION }
void
CS_SETCURSORPOSITION ( COORD newPos )
{
     HANDLE hConsole = GetStdHandle ( STD_OUTPUT_HANDLE );
     SetConsoleCursorPosition ( hConsole, newPos );
}





// FUNCTION: SET CONSOLE VISIBILITY ( VISIBLE OR NOT )
// @param01: HIDE_ { SET THE CONSOLE VISIBILITY }
void
CS_SETVISIBILITY ( bool HIDE_ )
{
     HWND consoleWindow = GetConsoleWindow ();

     if ( HIDE_ == true  ) ShowWindow ( consoleWindow , SW_HIDE );
     if ( HIDE_ == false ) ShowWindow ( consoleWindow , SW_SHOW );
}





// FUNCTION: DESTROY THE OLD CONSOLE AND OPEN A NEW
void
NEWCONSOLE ( void )
{
     FreeConsole ();
     AllocConsole ();

     freopen ("CONOUT$" , "w" , stdout );
     freopen ("CONIN$"  , "r" , stdin  );
}





// FUNCTION: END APLICATION
void
CLOSECONSOLE ( void )
{
     HWND console_window = GetConsoleWindow ();
     if ( console_window not_eq NULL ) PostMessage ( console_window , WM_CLOSE , 0 , 0 );
}




// SYS




// FUNCTION: END APLICATION
// @param01: REGION { SET CONSOLE REGION USING SYSTEM FUNCTION }
void
SYS_SETREGION ( int REGION )
{
     char command [20];

     sprintf ( command , "CHCP %d > NULL", REGION );
     system  ( command );
}





// FUNCTION: RESTART THE COMPUTER
void SYS_RESTARTCOMPUTER ( void )
{
     system ("Restart-Computer");
}





// FUNCTION: SET THE CONSOLE SIZE USING COLS AND LINES
// @param01: COLS { SET THE CONSOLE WINDOW COLS }
// @param02: LINES { SET THE CONSOLE WINDOW LINES }
void
SYS_SETSIZE ( int COLS , int LINES )
{
     if ( COLS <= 14 ) COLS  = 15;
     if ( LINES <= 0 ) LINES = 1;

     char command [30];

     sprintf ( command , "MODE CON: COLS=%d LINES=%d" , COLS , LINES );
     system  ( command );
}





// FUNCTION: SET SYSTEM COLOR
// @param01: TEXTCOLOR { SET THE TEXT COLOR USING CHAR OF WINDOW SYSTEM COLORS }
// @param02: BACKGROUNDCOLOR { SET THE BACKGROUND COLOR USING CHAR OF WINDOW SYSTEM COLORS }
void
SYS_SETCOLOR ( char TEXTCOLOR , char BACKGROUNDCOLOR )
{
     char command [ 30 ];

     sprintf ( command , "COLOR %c%c" , BACKGROUNDCOLOR , TEXTCOLOR );
     system  ( command );
}





// FUNCTION: SET CONSOLE WINDOW CAPTION
// @param01: TITLE { SET THE NEW CONSOLE TITLE }
void
SYS_SETTITLE ( const char* TITLE )
{
     char command [50];

     sprintf ( command , "TITLE %s" , TITLE );
     system  ( command );
}





// FUNCTION: SET SYSTEM COLOR
// @param01: HIDE_ { IF HIDE_ = 1 THE PAUSE WILL NOT SHOW THE TEXT ELSE WILL }
void
SYS_PAUSE ( int HIDE_ )
{
     if ( HIDE_ == 1 ) system ("PAUSE > NULL");
     else               system ("PAUSE");
}





// FUNCTION: SET THE PROGRAM TO FULLSCREEN LIKE ALT+ENTER
void
SYS_SETFULLSCREEN ( void )
{
     keybd_event ( VK_MENU, 0x36, 0, 0 );
     keybd_event ( VK_RETURN, 0x1C, 0, 0 );
     keybd_event ( VK_RETURN, 0x1C, KEYEVENTF_KEYUP, 0 );
     keybd_event ( VK_MENU, 0x38, KEYEVENTF_KEYUP, 0 );
}





// FUNCTION: PRINT THE USER C COMPILER VERSION / INFORMATION
void
SYS_GCCVERSION ( void )
{
     system ("gcc --version");
}





// FUNCTION: THIS FUNCTION LET THE USER EXEC A SYSTEM COMMAND LIKE system ("")
// @param01: COMMAND { THE COMMAND THAT WILL BE EXECUTED }
void
SYS_POPS ( const char* COMMAND )
{
     system ( COMMAND );
}





// FUNCTION: CLEAR SCREEN
void
SYS_CLEARSCREEN ( void )
{
     system ("CLS");
}





// FUNCTION: PRINT ALL THE CONTENT OF A READABLE FILE
// @param01: FILENAME { THE FILE THAT WILL BE READ }
void
SYS_READFILE ( const char* FILENAME )
{
     char command [50];

     sprintf ( command , "TYPE %s" , FILENAME );
     system  ( command );
}





// FUNCTION: LIST THE DIRECTORIES
// @param01: DIR { THE NAME OF THE DIRECTORY }
void
SYS_LISTDIR ( const char * DIR )
{
    char command [50];

    sprintf ( command , "dir %s " , DIR );

    system (command);
}





// FUNCTION: CREATE A FOLDER / DIRECTORY
// @param01: DIR { THE NAME OF THE NEW DIRECTORY }
void
SYS_CREATEDIR ( const char* DIR )
{
    char command [50];

    sprintf ( command , "md %s" , DIR );
    system  ( command );
}





// FUNCTION: REMOVE A DIRECTORY
// @param01: DIR { THE NAME OF THE DIRECTORY THAT WILL BE REMOVED }
void
SYS_REMOVEDIR ( const char* DIR )
{
    char command [50];

    sprintf ( command , "rd %s" , DIR );
    system  ( command );
}





// FUNCTION: COPY SOMETHING TO A DIR
// @param01: FILE { THE NAME OF THE FILE }
// @param02: DIR { THE DIR THAT WILL SAVE }
void
SYS_COPYFILE ( const char* FILE , const char* DIR )
{
    char command [50];

    sprintf ( command , "copy %s %s" , FILE , DIR );
    system  ( command );
}





// FUNCTION: MOVE SOMETHING ( A FOLDER ) TO A NEW DIRECTORY
// @param01: DIR { THE NAME OF THE FOLDER }
// @param02: FINALDIR { THE DIR THAT WILL RECEIVE THE MOVED FOLDER }
void
SYS_MOVEDIR ( const char* DIR , const char* FINALDIR )
{
    char command [50];

    sprintf ( command , "move %s %s" , DIR , FINALDIR );
    system  ( command );
}





// FUNCTION: DELETE A FILE
// @param01: FILE { DELETES A FILE OR A FOLDER }
void
SYS_DELETEFILE ( const char* FILE )
{
    char command [50];

    sprintf ( command , "del %s" , FILE );
    system  ( command );
}





// FUNCTION: RENAME SOMETHING
// @param01: FILE { THE NAME OF THE FILE }
// @param02: NEW_NAME { THE NEW NAME FOR THIS FILE }
void
SYS_RENAMEFILE ( const char* FILE , const char* NEW_NAME )
{
    char command [50];

    sprintf ( command , "ren %s %s" , FILE , NEW_NAME );
    system  ( command );
}





// FUNCTION: SYSTEM PRINTF
// @param01: ECHO { THE TEXT THAT U WANNA PRINT }
void
echo ( const char* TEXT )
{
    char command [50];

    sprintf ( command , "echo %s" , TEXT );
    system  ( command );
}





// FUNCTION: PRINT THE USER PING
void
SYS_PING ( void )
{
    system ("IPCONFIG");
    system ("NETSTAT");
}





// FUNCTION: PRINT THE LIST OF AVALIABLE WIFI
void
SYS_SHOWSAVEDWIFI ( void )
{
   system ("netsh wlan show profile");
}





// FUNCTION: PRINT THE INFO AVALIABLE OF A SAVED WIFI
// @param01: WIFI { THE NAME OF WIFI }
void
SYS_SHOWSAVEDWIFIINFO ( const char * WIFI )
{
    char butterfly [ 100 ];

    sprintf ( butterfly , "netsh wlan show profile ""%s"" key=clear", WIFI );

    system (butterfly);
}





// FUNCTION: PRINT ALL THE AVALIABLE INFO OF YOUR SYSTEM
void
SYS_INFO ( void )
{
    system ( "systeminfo" );
}





// FUNCTION: PRINT THE ACTUAL WEATHER INFO
// @param01: REGION { THE NAME OF VALID REGION }
void
SYS_WEATHER ( const char * REGION )
{
   char butterfly [100];

   sprintf ( butterfly , "curl wttr.in/%s" , REGION );

   system ( butterfly );
}




// PROP




// FUNCTION: ENABLE THE PROPS, TO USE THESE PROPS VARIATIONS
static inline
void
ENABLEPROPS ( void )
{
     DWORD outMode = 0 , inMode = 0;

     stdoutHandle = GetStdHandle  ( STD_OUTPUT_HANDLE );
     stdinHandle  = GetStdHandle  ( STD_INPUT_HANDLE  );

     if ( stdoutHandle == INVALID_HANDLE_VALUE || stdinHandle == INVALID_HANDLE_VALUE ) exit ( GetLastError () );
     if ( !GetConsoleMode ( stdoutHandle , &outMode ) || !GetConsoleMode ( stdinHandle , &inMode ) ) exit ( GetLastError() );

     outModeInit = outMode;
     inModeInit = inMode;

     outMode |= ENABLE_VIRTUAL_TERMINAL_PROCESSING;
     inMode &= ~( ENABLE_ECHO_INPUT | ENABLE_LINE_INPUT );

     if ( !SetConsoleMode ( stdoutHandle , outMode ) || !SetConsoleMode ( stdinHandle , inMode ) ) exit ( GetLastError () );
     system ("CLS");
}





// FUNCTION: RETURN THE CONSOLE TO THE DEFAULT CONFIGURATIONS
static inline
void
PROP_RESTORECONSOLE ( void )
{
     printf ("\x1b[0m");

     if ( !SetConsoleMode ( stdoutHandle , outModeInit ) || !SetConsoleMode ( stdinHandle , inModeInit ) ) exit ( GetLastError () );
}





// FUNCTION: SET THE TEXT COLOR
// @param01: CODE { USING THE COLOR MACROS SET THE TEXT COLOR }
static inline
void
PROP_TEXTCOLOR ( int CODE )
{
     printf ("\x1b[%dm" , CODE);
}





// FUNCTION: SET THE TEXT STYLE
// @param01: CODE { USING THE STYLE MACROS SET THE TEXT STYLE }
static inline
void
PROP_STYLE ( int CODE )
{
     printf ("\x1b[%d;1m" , CODE );
}





// FUNCTION: SET THE BACKGROUND COLOR
// @param01: CODE { USING THE COLOR MACROS SET THE TEXT COLOR }
static inline
void
PROP_BACKGROUNDCOLOR ( int CODE )
{
     printf ("\x1b[%dm" , CODE );
}





// FUNCTION: RESET ANY ALTERATION MADE IN THE CONSOLE AFTER THE THIS FUNCTION CALL
static inline
void
PROP_RESETCOLOR ( void )
{
     printf ("\x1b[%dm" , DEFAULT_TEXT );
}





// FUNCTION: CLEAR ALL THE SCREEN
static inline
void
PROP_CLEARSCREEN ( void )
{
     printf ("\x1b[%dJ" , ClearTheScreen );
}





// FUNCTION: CLEAR BELOW THE CALL LINE OF THIS FUNCTION
static inline
void
PROP_CLEARBELOW ( void )
{
     printf ("\x1b[%dJ" , ClearTheTextFromTheCursorToTheEnd );
}





// FUNCTION: CLEAR ABOVE THE CALL LINE OF THIS FUNCTION
static inline
void
PROP_CLEARABOVE ( void )
{
     printf ("\x1b[%dJ" , ClearTheTextFromTheCursorToTheStart );
}





// FUNCTION: CLEAR THE CONTENT OF THE LINE
static inline
void
PROP_CLEARLINE ( void )
{
     printf ("\x1b[%dK" , ClearTheScreen );
}





// FUNCTION: CLEAR FROM THE CURSOR TO THE RIGHT
static inline
void
PROP_CLEARRIGHT ( void )
{
     printf ("\x1b[%dK" , ClearTheTextFromTheCursorToTheEnd );
}





// FUNCTION: CLEAR FROM THE CURSOR TO THE LEFT
static inline
void
PROP_CLEARLEFT ( void )
{
     printf ("\x1b[%dK" , ClearTheTextFromTheCursorToTheStart );
}





// FUNCTION: MOVE THE CURSOR UPWARD Nº TIMES
// @param01: POSITION { THE TIMES THAT THE CURSOR WILL GO UP }
static inline
void
PROP_MOVEUP ( int POSITION )
{
     printf ("\x1b[%dA" , POSITION);
}





// FUNCTION: MOVE THE CURSOR DOWNWARD Nº TIMES
// @param01: POSITION { THE TIMES THAT THE CURSOR WILL GO DOWN }
static inline
void
PROP_MOVEDOWN ( int POSITION )
{
     printf ("\x1b[%dB" , POSITION );
}





// FUNCTION: MOVE THE CURSOR RIGHTWARD Nº TIMES
// @param01: POSITION { THE TIMES THAT THE CURSOR WILL GO RIGHT }
static inline
void
PROP_MOVERIGHT ( int POSITION )
{
     printf ("\x1b[%dC" , POSITION );
}





// FUNCTION: MOVE THE CURSOR LEFTWARD Nº TIMES
// @param01: POSITION { THE TIMES THAT THE CURSOR WILL GO LEFT }
static inline
void
PROP_MOVELEFT ( int POSITION )
{
     printf ("\x1b[%dD" , POSITION );
}





// FUNCTION: MOVE THE CURSOR TO A ESPECIFIC POSITION
// @param01: ROW { THE NEW LINE TO THE CURSOR }
// @param02: COL { THE NEW COL TO THE CURSOR }
static inline
void
PROP_MOVECURSOR ( int X , int Y )
{
     printf ("\x1b[%d;%df" , Y , X );
}





// FUNCTION: SAVE THE CURSOR ACTUAL POSITION
static inline
void
PROP_SAVECURSOR ( void )
{
     printf ("\x1b%d" , 7 );
}





// FUNCTION: LOAD THE SAVED CURSOR POSITION
static inline
void
PROP_LOADCURSOR ( void )
{
     printf ("\x1b%d" , 8 );
}





// FUNCTION: HIDE THE CURSOR
static inline
void
PROP_HIDECURSOR ( void )
{
     printf("\e[?25l");
}





// FUNCTION: SHOW THE CURSOR
static inline
void
PROP_SHOWCURSOR ( void )
{
     printf("\e[?25h");
}




// G




// FUNCTION: CLEAR THE STDIN AND STDOUT
static inline
void
BUFFER ( void )
{
     setbuf ( stdin , NULL );
     fflush ( stdin );
     setbuf ( stdout , NULL );
     fflush ( stdout );
}





// FUNCTION: GET A INT VALUE FROM USER
int
G_INT ( void )
{
     int INT_VALUE;

     scanf (" %d", &INT_VALUE);
     setbuf (stdin, NULL);

     return INT_VALUE;
}





// FUNCTION: GET A CHAR VALUE FROM USER
char
G_CHAR ( void )
{
     char CHAR_VALUE;

     scanf ("%c", &CHAR_VALUE);
     setbuf (stdin, NULL);

     return CHAR_VALUE;
}





// FUNCTION: GET A FLOAT VALUE FROM USER
float
G_FLOAT ( void )
{
     float FLOAT_VALUE;

     scanf ("%f", &FLOAT_VALUE);
     setbuf (stdin, NULL);

     return FLOAT_VALUE;
}





// FUNCTION: GET A DOUBLE VALUE FROM USER
double
G_DOUBLE ( void )
{
     double DOUBLE_VALUE;

     scanf ("%lf", &DOUBLE_VALUE);
     setbuf (stdin, NULL);

     return DOUBLE_VALUE;
}





// FUNCTION: GET A STRING FROM USER
// @param01: STRING { THIS IS THE STRING THAT WILL SAVE THE USER INPUT }
void
G_STRING ( char STRING [] )
{
    scanf ("%[^\n]", STRING );
    setbuf ( stdin , NULL );
}





// FUNCTION: GET A INT VALUE FROM USER WITH CONDITIONS
// @param01: VALUE { VARIABLE THAT WILL BE USED TO COMPARE WITH COMPARATOR }
// @param02: CONDITION { USE THE OPERATORS MACROS }
// @param03: COMPARATOR { THIS IS THE INT VALUE THAT WILL BE USED WITH VALUE }
// @param04: TEXT { PRINT OF THE QUESTION TO THE USER }
// @param05: LINE { HOW MANY LINES WILL JUMP }
// @param05: SPACES { HOW MANY LINES WILL PRINT }
int
GWC_INT ( int VALUE , int CONDITION , int COMPARATOR , const char* TEXT , int LINE , int SPACES )
{

          switch ( CONDITION )
          {

          case HT:

                  do
                  {
                    for (int kaj = 0; kaj < LINE; kaj++ ) printf ("\n");
                    for (int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

                    printf ("%s", TEXT);
                    scanf ("%d", &VALUE);
                    setbuf (stdin, NULL);

                  } while ( VALUE > COMPARATOR );

          break;

          case LT:

                  do
                  {
                    for (int kaj = 0; kaj < LINE; kaj++ ) printf ("\n");
                    for (int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

                    printf ("%s", TEXT);
                    scanf ("%d", &VALUE);
                    setbuf (stdin, NULL);

                  } while ( VALUE < COMPARATOR );

          break;

          case HE:

                  do
                  {
                    for (int kaj = 0; kaj < LINE; kaj++ ) printf ("\n");
                    for (int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

                    printf ("%s", TEXT);
                    scanf ("%d", &VALUE);
                    setbuf (stdin, NULL);

                  } while ( VALUE >= COMPARATOR );

          break;

          case LE:

                  do
                  {
                    for (int kaj = 0; kaj < LINE; kaj++ ) printf ("\n");
                    for (int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

                    printf ("%s", TEXT);
                    scanf ("%d", &VALUE);
                    setbuf (stdin, NULL);

                  } while ( VALUE <= COMPARATOR );

          break;

          case EQ:

                  do
                  {
                    for (int kaj = 0; kaj < LINE; kaj++ ) printf ("\n");
                    for (int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

                    printf ("%s", TEXT);
                    scanf ("%d", &VALUE);
                    setbuf (stdin, NULL);

                  } while ( VALUE == COMPARATOR );

          break;

          case DF:

                  do
                  {
                    for (int kaj = 0; kaj < LINE; kaj++ ) printf ("\n");
                    for (int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

                    printf ("%s", TEXT);
                    scanf ("%d", &VALUE);
                    setbuf (stdin, NULL);

                  } while ( VALUE != COMPARATOR );

          break;

          case NRM:

                    for (int kaj = 0; kaj < LINE; kaj++ ) printf ("\n");
                    for (int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

                    printf ("%s", TEXT);
                    scanf ("%d", &VALUE);
                    setbuf (stdin, NULL);

          break;

          }

return VALUE;
}





// FUNCTION: GET A FLOAT VALUE FROM USER WITH CONDITIONS
// @param01: VALUE { VARIABLE THAT WILL BE USED TO COMPARE WITH COMPARATOR }
// @param02: CONDITION { USE THE OPERATORS MACROS }
// @param03: COMPARATOR { THIS IS THE INT VALUE THAT WILL BE USED WITH VALUE }
// @param04: TEXT { PRINT OF THE QUESTION TO THE USER }
// @param05: LINE { HOW MANY LINES WILL JUMP }
// @param05: SPACES { HOW MANY LINES WILL PRINT }
float
GWC_FLOAT ( float VALUE , int CONDITION , float COMPARATOR , const char* TEXT , int LINE , int SPACES )
{

          switch ( CONDITION )
          {

          case HT:

                  do
                  {
                    for (int kaj = 0; kaj < LINE; kaj++ ) printf ("\n");
                    for (int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

                    printf ("%s", TEXT);
                    scanf ("%f", &VALUE);
                    setbuf (stdin, NULL);

                  } while ( VALUE > COMPARATOR );

          break;

          case LT:

                  do
                  {
                    for (int kaj = 0; kaj < LINE; kaj++ ) printf ("\n");
                    for (int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

                    printf ("%s", TEXT);
                    scanf ("%f", &VALUE);
                    setbuf (stdin, NULL);

                  } while ( VALUE < COMPARATOR );

          break;

          case HE:

                  do
                  {
                    for (int kaj = 0; kaj < LINE; kaj++ ) printf ("\n");
                    for (int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

                    printf ("%s", TEXT);
                    scanf ("%f", &VALUE);
                    setbuf (stdin, NULL);

                  } while ( VALUE >= COMPARATOR );

          break;

          case LE:

                  do
                  {
                    for (int kaj = 0; kaj < LINE; kaj++ ) printf ("\n");
                    for (int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

                    printf ("%s", TEXT);
                    scanf ("%f", &VALUE);
                    setbuf (stdin, NULL);

                  } while ( VALUE <= COMPARATOR );

          break;

          case EQ:

                  do
                  {
                    for (int kaj = 0; kaj < LINE; kaj++ ) printf ("\n");
                    for (int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

                    printf ("%s", TEXT);
                    scanf ("%f", &VALUE);
                    setbuf (stdin, NULL);

                  } while ( VALUE == COMPARATOR );

          break;

          case DF:

                  do
                  {
                    for (int kaj = 0; kaj < LINE; kaj++ ) printf ("\n");
                    for (int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

                    printf ("%s", TEXT);
                    scanf ("%f", &VALUE);
                    setbuf (stdin, NULL);

                  } while ( VALUE != COMPARATOR );

          break;

          case NRM:

                for (int kaj = 0; kaj < LINE; kaj++ ) printf ("\n");
                for (int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

                    printf ("%s", TEXT);
                    scanf ("%f", &VALUE);
                    setbuf (stdin, NULL);

          break;

          }

return VALUE;
}





// FUNCTION: GET A DOUBLE VALUE FROM USER WITH CONDITIONS
// @param01: VALUE { VARIABLE THAT WILL BE USED TO COMPARE WITH COMPARATOR }
// @param02: CONDITION { USE THE OPERATORS MACROS }
// @param03: COMPARATOR { THIS IS THE INT VALUE THAT WILL BE USED WITH VALUE }
// @param04: TEXT { PRINT OF THE QUESTION TO THE USER }
// @param05: LINE { HOW MANY LINES WILL JUMP }
// @param05: SPACES { HOW MANY LINES WILL PRINT }
double
GWC_DOUBLE ( double VALUE , int CONDITION , double COMPARATOR , const char* TEXT , int LINE , int SPACES )
{

          switch ( CONDITION )
          {

          case HT:

                  do
                  {
                    for (int kaj = 0; kaj < LINE; kaj++ ) printf ("\n");
                    for (int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

                    printf ("%s", TEXT);
                    scanf ("%lf", &VALUE);
                    setbuf (stdin, NULL);

                  } while ( VALUE > COMPARATOR );

          break;

          case LT:

                  do
                  {
                    for (int kaj = 0; kaj < LINE; kaj++ ) printf ("\n");
                    for (int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

                    printf ("%s", TEXT);
                    scanf ("%lf", &VALUE);
                    setbuf (stdin, NULL);

                  } while ( VALUE < COMPARATOR );

          break;

          case HE:

                  do
                  {
                    for (int kaj = 0; kaj < LINE; kaj++ ) printf ("\n");
                    for (int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

                    printf ("%s", TEXT);
                    scanf ("%lf", &VALUE);
                    setbuf (stdin, NULL);

                  } while ( VALUE >= COMPARATOR );

          break;

          case LE:

                  do
                  {
                    for (int kaj = 0; kaj < LINE; kaj++ ) printf ("\n");
                    for (int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

                    printf ("%s", TEXT);
                    scanf ("%lf", &VALUE);
                    setbuf (stdin, NULL);

                  } while ( VALUE <= COMPARATOR );

          break;

          case EQ:

                  do
                  {
                    for (int kaj = 0; kaj < LINE; kaj++ ) printf ("\n");
                    for (int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

                    printf ("%s", TEXT);
                    scanf ("%lf", &VALUE);
                    setbuf (stdin, NULL);

                  } while ( VALUE == COMPARATOR );

          break;

          case DF:

                  do
                  {
                    for (int kaj = 0; kaj < LINE; kaj++ ) printf ("\n");
                    for (int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

                    printf ("%s", TEXT);
                    scanf ("%lf", &VALUE);
                    setbuf (stdin, NULL);

                  } while ( VALUE != COMPARATOR );

          break;

          case NRM:

                    for (int kaj = 0; kaj < LINE; kaj++ ) printf ("\n");
                    for (int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

                    printf ("%s", TEXT);
                    scanf ("%lf", &VALUE);
                    setbuf (stdin, NULL);

          break;

          }

return VALUE;
}





// FUNCTION: GET A CHAR VALUE FROM USER WITH CONDITIONS
// @param01: VALUE { VARIABLE THAT WILL BE USED TO COMPARE WITH COMPARATOR }
// @param02: CONDITION { USE THE OPERATORS MACROS }
// @param03: COMPARATOR { THIS IS THE INT VALUE THAT WILL BE USED WITH VALUE }
// @param04: TEXT { PRINT OF THE QUESTION TO THE USER }
// @param05: LINE { HOW MANY LINES WILL JUMP }
// @param05: SPACES { HOW MANY LINES WILL PRINT }
char
GWC_CHAR ( char VALUE , int CONDITION , char COMPARATOR , const char* TEXT , int LINE , int SPACES )
{

          switch ( CONDITION )
          {

          case EQ:

                  do
                  {
                    for (int kaj = 0; kaj < LINE; kaj++ ) printf ("\n");
                    for (int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

                    printf ("%s", TEXT);
                    scanf ("%c", &VALUE);
                    setbuf (stdin, NULL);

                  } while ( VALUE == COMPARATOR );

          break;

          case DF:

                  do
                  {
                    for (int kaj = 0; kaj < LINE; kaj++ ) printf ("\n");
                    for (int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

                    printf ("%s", TEXT);
                    scanf ("%c", &VALUE);
                    setbuf (stdin, NULL);

                  } while ( VALUE != COMPARATOR );

          break;

          case NRM:

                    for (int kaj = 0; kaj < LINE; kaj++ ) printf ("\n");
                    for (int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

                    printf ("%s", TEXT);
                    scanf ("%c", &VALUE);
                    setbuf (stdin, NULL);

          break;

          }

return VALUE;
}





// FUNCTION: GET A STRING VALUE FROM USER WITH CONDITIONS
// @param01: QUESTION { THE TEXT THAT WILL PRINT BEFORE THE USER INPUT }
// @param02: STRING { THE STRING THAT WILL USED TO COMPARE  }
// @param03: LINES { HOW MANY LINES WILL BE PRINTED BEFORE THE INPUT }
// @param04: SPACES { HOW MANY SPACES WILL BE PRINTED BEFORE THE INPUT }
// @param05: TYPE_OF { USING THE STRING MACROS SET THE TIPE OF CONDITIONATOR }
// @param05: SIZE_LIMITER { IF THE MACRO IS "stringSZ" WILL REPEAT THE INPUT UNTIL THE USER STRING GET THE SAME SIZE OR LOWER  }
// @param05: TEXT_COMPARATOR { IT'S THE TEXT THAT WILL BE COMPARED WITH THE STRING }
// @param05: EXIT_TOKEN { IT'S A EXIT TOKEN, THAT MEANS IF U WANT THE USER DO BREAK FROM THE LOOP U USE THIS }
char
GWC_STRING ( const char * QUESTION , char STRING [] , int LINES , int SPACES , int TYPE_OF , int SIZE_LIMITER , char TEXT_COMPARATOR [] , char EXIT_TOKEN [] )
{

    int kaj = 0;

             switch ( TYPE_OF )
             {
                    case stringSZ:
                                 do
                                 {
                                     for ( kaj = 0; kaj < LINES; kaj++ ) printf ("\n");
                                     for ( kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

                                     printf ("%s", QUESTION);
                                     scanf ("%[^\n]", STRING);
                                     setbuf ( stdin , NULL );

                                     if ( strcmp ( STRING , EXIT_TOKEN ) == 0 ) return *EXIT_TOKEN;

                                 } while ( strlen ( STRING ) > SIZE_LIMITER or strlen ( STRING ) == 0 or STRING [0] == ' ' );
                    break;

                    case stringDF:
                                 do
                                 {
                                     for ( kaj = 0; kaj < LINES; kaj++ ) printf ("\n");
                                     for ( kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

                                     printf ("%s", QUESTION);
                                     scanf ("%[^\n]", STRING);
                                     setbuf ( stdin , NULL );

                                     if ( strcmp ( STRING , EXIT_TOKEN ) == 0 ) return *EXIT_TOKEN;

                                 } while ( strcmp ( STRING , TEXT_COMPARATOR ) not_eq 0 );
                    break;

                    case stringEQ:
                                 do
                                 {
                                     for ( kaj = 0; kaj < LINES; kaj++ ) printf ("\n");
                                     for ( kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

                                     printf ("%s", QUESTION);
                                     scanf ("%[^\n]", STRING);
                                     setbuf ( stdin , NULL );

                                     if ( strcmp ( STRING , EXIT_TOKEN ) == 0 ) return *EXIT_TOKEN;

                                 } while ( strcmp ( STRING , TEXT_COMPARATOR ) == 0 );
                    break;

                    case stringNR:
                                     for ( kaj = 0; kaj < LINES; kaj++ ) printf ("\n");
                                     for ( kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

                                     printf ("%s", QUESTION);
                                     scanf ("%[^\n]", STRING);
                                     setbuf ( stdin , NULL );
                    break;
             }


             return * STRING;
}





// FUNCTION: GET A INT VALUE USING allen STYLE
// @param01: QUESTION_TEXT { THIS IS THE TEXT THAT WILL APPEAR BEFORE THE INPUT }
// @param02: LINES { HOW MANY LINES WILL BE PRINTED }
// @param03: SPACES { HOW MANY SPACES WILL BE PRINTED }
// @param04: CONDITION { USING THE OPERATORS MACRO SET THE WAY THAT WILL BE VALIDATED THE INPUT }
// @param05: COMPARATOR { IT'S A INT VALUE THAT WILL BE USED TO COMPARE WITH THE INPUT  }
int
getI ( const char * QUESTION_TEXT , int LINES , int SPACES , int CONDITION , int COMPARATOR )
{

    int RESULT = 0;

    char c;
    char matr [100];
    int  pos;

    // CONDITIONS

    switch ( CONDITION )
    {




     case HT:

      do
     {

     pos = 0;

     for ( int kaj = 0; kaj < LINES; kaj++ ) printf ("\n");
     for ( int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

     printf ("%s", QUESTION_TEXT);

      do
     {
              c = getch ();

              if ( isdigit ( c ) not_eq 0 )
              {
                   matr [pos] = c;
                   pos++;
                   printf ("%c", c);
              }
              else
              if ( c == 8 and pos )
              {
                   matr [pos] = 0;
                   pos--;
                   printf ("\b \b");
              }
     }
      while ( c not_eq 13 or pos == 0 );

              matr [pos] = 0;
              RESULT = atoi ( matr );
     }
      while ( RESULT > COMPARATOR );
      break;




     case LT:
     do
     {

     pos = 0;

     for ( int kaj = 0; kaj < LINES; kaj++ ) printf ("\n");
     for ( int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

     printf ("%s", QUESTION_TEXT);

      do
     {
              c = getch ();

              if ( isdigit ( c ) not_eq 0 )
              {
                   matr [pos] = c;
                   pos++;
                   printf ("%c", c);
              }
              else
              if ( c == 8 and pos )
              {
                   matr [pos] = 0;
                   pos--;
                   printf ("\b \b");
              }
     }
      while ( c not_eq 13 or pos == 0 );

              matr [pos] = 0;
              RESULT = atoi ( matr );
     }
      while ( RESULT < COMPARATOR );
     break;




     case EQ:
     do
     {

     pos = 0;

     for ( int kaj = 0; kaj < LINES; kaj++ ) printf ("\n");
     for ( int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

     printf ("%s", QUESTION_TEXT);

      do
     {
              c = getch ();

              if ( isdigit ( c ) not_eq 0 )
              {
                   matr [pos] = c;
                   pos++;
                   printf ("%c", c);
              }
              else
              if ( c == 8 and pos )
              {
                   matr [pos] = 0;
                   pos--;
                   printf ("\b \b");
              }
     }
      while ( c not_eq 13 or pos == 0 );

              matr [pos] = 0;
              RESULT = atoi ( matr );
     }
      while ( RESULT == COMPARATOR );
     break;




     case DF:
     do
     {

     pos = 0;

     for ( int kaj = 0; kaj < LINES; kaj++ ) printf ("\n");
     for ( int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

     printf ("%s", QUESTION_TEXT);

      do
     {
              c = getch ();

              if ( isdigit ( c ) not_eq 0 )
              {
                   matr [pos] = c;
                   pos++;
                   printf ("%c", c);
              }
              else
              if ( c == 8 and pos )
              {
                   matr [pos] = 0;
                   pos--;
                   printf ("\b \b");
              }
     }
      while ( c not_eq 13 or pos == 0 );

              matr [pos] = 0;
              RESULT = atoi ( matr );
     }
      while ( RESULT not_eq COMPARATOR );
     break;




     case HE:
     do
     {

     pos = 0;

     for ( int kaj = 0; kaj < LINES; kaj++ ) printf ("\n");
     for ( int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

     printf ("%s", QUESTION_TEXT);

      do
     {
              c = getch ();

              if ( isdigit ( c ) not_eq 0 )
              {
                   matr [pos] = c;
                   pos++;
                   printf ("%c", c);
              }
              else
              if ( c == 8 and pos )
              {
                   matr [pos] = 0;
                   pos--;
                   printf ("\b \b");
              }
     }
      while ( c not_eq 13 or pos == 0 );

              matr [pos] = 0;
              RESULT = atoi ( matr );
     }
      while ( RESULT >= COMPARATOR );
     break;




     case LE:
     do
     {

     pos = 0;

     for ( int kaj = 0; kaj < LINES; kaj++ ) printf ("\n");
     for ( int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

     printf ("%s", QUESTION_TEXT);

      do
     {
              c = getch ();

              if ( isdigit ( c ) not_eq 0 )
              {
                   matr [pos] = c;
                   pos++;
                   printf ("%c", c);
              }
              else
              if ( c == 8 and pos )
              {
                   matr [pos] = 0;
                   pos--;
                   printf ("\b \b");
              }
     }
      while ( c not_eq 13 or pos == 0 );

              matr [pos] = 0;
              RESULT = atoi ( matr );
     }
      while ( RESULT <= COMPARATOR );
     break;




     case NRM:

     for ( int kaj = 0; kaj < LINES; kaj++ ) printf ("\n");
     for ( int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

     printf ("%s", QUESTION_TEXT);

      do
     {
              c = getch ();

              if ( isdigit ( c ) not_eq 0 )
              {
                   matr [pos] = c;
                   pos++;
                   printf ("%c", c);
              }
              else
              if ( c == 8 and pos )
              {
                   matr [pos] = 0;
                   pos--;
                   printf ("\b \b");
              }
     }
      while ( c not_eq 13 or pos == 0 );

                matr [pos] = 0;
                RESULT = atoi ( matr );

     break;


    } // end of the switch


    return RESULT;          /* RETURN THE REQUISITED VALUE */
}





// FUNCTION: GET A FLOAT VALUE USING allen STYLE
// @param01: QUESTION_TEXT { THIS IS THE TEXT THAT WILL APPEAR BEFORE THE INPUT }
// @param02: LINES { HOW MANY LINES WILL BE PRINTED }
// @param03: SPACES { HOW MANY SPACES WILL BE PRINTED }
// @param04: CONDITION { USING THE OPERATORS MACRO SET THE WAY THAT WILL BE VALIDATED THE INPUT }
// @param05: COMPARATOR { IT'S A INT VALUE THAT WILL BE USED TO COMPARE WITH THE INPUT  }
float
getF ( const char * QUESTION_TEXT , int LINES , int SPACES , int CONDITION , float COMPARATOR )
{

    float RESULT = 0;
    int COMMA = 0;

    char c;
    char matr [100];
    int  pos;

    // CONDITIONS

    switch ( CONDITION )
    {




     case HT:

      do
     {

     pos = 0;
     COMMA = 0;

     for ( int kaj = 0; kaj < LINES; kaj++ ) printf ("\n");
     for ( int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

     printf ("%s", QUESTION_TEXT);

      do
     {
              c = getch ();

              if ( isdigit ( c ) not_eq 0 )
              {
                   matr [pos] = c;
                   pos++;
                   printf ("%c", c);
              }
              else
              if ( c == '.' and COMMA == 0 or c == ',' and COMMA == 0 )
              {
                   matr [pos] = '.';
                   pos++;
                   printf (".");
                   COMMA = 1;
              }
              else
              if ( c == 8 and pos )
              {

                   if ( matr [pos - 1] == '.' ) COMMA = 0;

                   matr [pos] = 0;
                   pos--;
                   printf ("\b \b");
              }

     }
      while ( c not_eq 13 or pos == 0 );

              matr [pos] = 0;
              RESULT = atof ( matr );
     }
      while ( RESULT > COMPARATOR );
      break;




     case LT:
     do
     {

     pos = 0;
     COMMA = 0;

     for ( int kaj = 0; kaj < LINES; kaj++ ) printf ("\n");
     for ( int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

     printf ("%s", QUESTION_TEXT);

      do
     {
              c = getch ();

              if ( isdigit ( c ) not_eq 0 )
              {
                   matr [pos] = c;
                   pos++;
                   printf ("%c", c);
              }
              else
              if ( c == '.' and COMMA == 0 or c == ',' and COMMA == 0 )
              {
                   matr [pos] = '.';
                   pos++;
                   printf (".");
                   COMMA = 1;
              }
              else
              if ( c == 8 and pos )
              {

                   if ( matr [pos - 1] == '.' ) COMMA = 0;

                   matr [pos] = 0;
                   pos--;
                   printf ("\b \b");
              }

     }
      while ( c not_eq 13 or pos == 0 );

              matr [pos] = 0;
              RESULT = atof ( matr );
     }
      while ( RESULT < COMPARATOR );
     break;




     case EQ:
     do
     {

     pos = 0;
     COMMA = 0;

     for ( int kaj = 0; kaj < LINES; kaj++ ) printf ("\n");
     for ( int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

     printf ("%s", QUESTION_TEXT);

      do
     {
              c = getch ();

              if ( isdigit ( c ) not_eq 0 )
              {
                   matr [pos] = c;
                   pos++;
                   printf ("%c", c);
              }
              else
              if ( c == '.' and COMMA == 0 or c == ',' and COMMA == 0 )
              {
                   matr [pos] = '.';
                   pos++;
                   printf (".");
                   COMMA = 1;
              }
              else
              if ( c == 8 and pos )
              {

                   if ( matr [pos - 1] == '.' ) COMMA = 0;

                   matr [pos] = 0;
                   pos--;
                   printf ("\b \b");
              }

     }
      while ( c not_eq 13 or pos == 0 );

              matr [pos] = 0;
              RESULT = atof ( matr );
     }
      while ( RESULT == COMPARATOR );
     break;




     case DF:
     do
     {

     pos = 0;
     COMMA = 0;

     for ( int kaj = 0; kaj < LINES; kaj++ ) printf ("\n");
     for ( int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

     printf ("%s", QUESTION_TEXT);

      do
     {
              c = getch ();

              if ( isdigit ( c ) not_eq 0 )
              {
                   matr [pos] = c;
                   pos++;
                   printf ("%c", c);
              }
              else
              if ( c == '.' and COMMA == 0 or c == ',' and COMMA == 0 )
              {
                   matr [pos] = '.';
                   pos++;
                   printf (".");
                   COMMA = 1;
              }
              else
              if ( c == 8 and pos )
              {

                   if ( matr [pos - 1] == '.' ) COMMA = 0;

                   matr [pos] = 0;
                   pos--;
                   printf ("\b \b");
              }

     }
      while ( c not_eq 13 or pos == 0 );

              matr [pos] = 0;
              RESULT = atof ( matr );
     }
      while ( RESULT not_eq COMPARATOR );
     break;



     case HE:
     do
     {

     pos = 0;
     COMMA = 0;

     for ( int kaj = 0; kaj < LINES; kaj++ ) printf ("\n");
     for ( int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

     printf ("%s", QUESTION_TEXT);

      do
     {
              c = getch ();

              if ( isdigit ( c ) not_eq 0 )
              {
                   matr [pos] = c;
                   pos++;
                   printf ("%c", c);
              }
              else
              if ( c == '.' and COMMA == 0 or c == ',' and COMMA == 0 )
              {
                   matr [pos] = '.';
                   pos++;
                   printf (".");
                   COMMA = 1;
              }
              else
              if ( c == 8 and pos )
              {

                   if ( matr [pos - 1] == '.' ) COMMA = 0;

                   matr [pos] = 0;
                   pos--;
                   printf ("\b \b");
              }

     }
      while ( c not_eq 13 or pos == 0 );

              matr [pos] = 0;
              RESULT = atof ( matr );
     }
      while ( RESULT >= COMPARATOR );
     break;




     case LE:
     do
     {

     pos = 0;
     COMMA = 0;

     for ( int kaj = 0; kaj < LINES; kaj++ ) printf ("\n");
     for ( int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

     printf ("%s", QUESTION_TEXT);

      do
     {
              c = getch ();

              if ( isdigit ( c ) not_eq 0 )
              {
                   matr [pos] = c;
                   pos++;
                   printf ("%c", c);
              }
              else
              if ( c == '.' and COMMA == 0 or c == ',' and COMMA == 0 )
              {
                   matr [pos] = '.';
                   pos++;
                   printf (".");
                   COMMA = 1;
              }
              else
              if ( c == 8 and pos )
              {

                   if ( matr [pos - 1] == '.' ) COMMA = 0;

                   matr [pos] = 0;
                   pos--;
                   printf ("\b \b");
              }

     }
      while ( c not_eq 13 or pos == 0 );

              matr [pos] = 0;
              RESULT = atof ( matr );
     }
      while ( RESULT <= COMPARATOR );
     break;




     case NRM:

     pos = 0;
     COMMA = 0;

     for ( int kaj = 0; kaj < LINES; kaj++ ) printf ("\n");
     for ( int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

     printf ("%s", QUESTION_TEXT);

      do
     {
              c = getch ();

              if ( isdigit ( c ) not_eq 0 )
              {
                   matr [pos] = c;
                   pos++;
                   printf ("%c", c);
              }
              else
              if ( c == '.' and COMMA == 0 or c == ',' and COMMA == 0 )
              {
                   matr [pos] = '.';
                   pos++;
                   printf (".");
                   COMMA = 1;
              }
              else
              if ( c == 8 and pos )
              {

                   if ( matr [pos - 1] == '.' ) COMMA = 0;

                   matr [pos] = 0;
                   pos--;
                   printf ("\b \b");
              }

     }
      while ( c not_eq 13 or pos == 0 );

              matr [pos] = 0;
              RESULT = atof ( matr );
     break;


    } // end of the switch


    return RESULT;
}





// FUNCTION: GET A DOUBLE VALUE USING allen STYLE
// @param01: QUESTION_TEXT { THIS IS THE TEXT THAT WILL APPEAR BEFORE THE INPUT }
// @param02: LINES { HOW MANY LINES WILL BE PRINTED }
// @param03: SPACES { HOW MANY SPACES WILL BE PRINTED }
// @param04: CONDITION { USING THE OPERATORS MACRO SET THE WAY THAT WILL BE VALIDATED THE INPUT }
// @param05: COMPARATOR { IT'S A INT VALUE THAT WILL BE USED TO COMPARE WITH THE INPUT  }
double
getD ( const char * QUESTION_TEXT , int LINES , int SPACES , int CONDITION , double COMPARATOR )
{

    double RESULT = 0;
    int COMMA = 0;

    char c;
    char matr [50];
    int  pos;

    // CONDITIONS

    switch ( CONDITION )
    {




     case HT:

      do
     {

     pos = 0;
     COMMA = 0;

     for ( int kaj = 0; kaj < LINES; kaj++ ) printf ("\n");
     for ( int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

     printf ("%s", QUESTION_TEXT);

      do
     {
              c = getch ();

              if ( isdigit ( c ) not_eq 0 )
              {
                   matr [pos] = c;
                   pos++;
                   printf ("%c", c);
              }
              else
              if ( c == '.' and COMMA == 0 or c == ',' and COMMA == 0 )
              {
                   matr [pos] = '.';
                   pos++;
                   printf (".");
                   COMMA = 1;
              }
              else
              if ( c == 8 and pos )
              {

                   if ( matr [pos - 1] == '.' ) COMMA = 0;

                   matr [pos] = 0;
                   pos--;
                   printf ("\b \b");
              }

     }
      while ( c not_eq 13 or pos == 0 );

              matr [pos] = 0;
              RESULT = strtod ( matr , NULL );
     }
      while ( RESULT > COMPARATOR );
      break;




     case LT:
     do
     {

     pos = 0;
     COMMA = 0;

     for ( int kaj = 0; kaj < LINES; kaj++ ) printf ("\n");
     for ( int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

     printf ("%s", QUESTION_TEXT);

      do
     {
              c = getch ();

              if ( isdigit ( c ) not_eq 0 )
              {
                   matr [pos] = c;
                   pos++;
                   printf ("%c", c);
              }
              else
              if ( c == '.' and COMMA == 0 or c == ',' and COMMA == 0 )
              {
                   matr [pos] = '.';
                   pos++;
                   printf (".");
                   COMMA = 1;
              }
              else
              if ( c == 8 and pos )
              {

                   if ( matr [pos - 1] == '.' ) COMMA = 0;

                   matr [pos] = 0;
                   pos--;
                   printf ("\b \b");
              }

     }
      while ( c not_eq 13 or pos == 0 );

              matr [pos] = 0;
              RESULT = strtod ( matr , NULL );
     }
      while ( RESULT < COMPARATOR );
     break;




     case EQ:
     do
     {

     pos = 0;
     COMMA = 0;

     for ( int kaj = 0; kaj < LINES; kaj++ ) printf ("\n");
     for ( int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

     printf ("%s", QUESTION_TEXT);

      do
     {
              c = getch ();

              if ( isdigit ( c ) not_eq 0 )
              {
                   matr [pos] = c;
                   pos++;
                   printf ("%c", c);
              }
              else
              if ( c == '.' and COMMA == 0 or c == ',' and COMMA == 0 )
              {
                   matr [pos] = '.';
                   pos++;
                   printf (".");
                   COMMA = 1;
              }
              else
              if ( c == 8 and pos )
              {

                   if ( matr [pos - 1] == '.' ) COMMA = 0;

                   matr [pos] = 0;
                   pos--;
                   printf ("\b \b");
              }

     }
      while ( c not_eq 13 or pos == 0 );

              matr [pos] = 0;
              RESULT = strtod ( matr , NULL );
     }
      while ( RESULT == COMPARATOR );
     break;




     case DF:
     do
     {

     pos = 0;
     COMMA = 0;

     for ( int kaj = 0; kaj < LINES; kaj++ ) printf ("\n");
     for ( int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

     printf ("%s", QUESTION_TEXT);

      do
     {
              c = getch ();

              if ( isdigit ( c ) not_eq 0 )
              {
                   matr [pos] = c;
                   pos++;
                   printf ("%c", c);
              }
              else
              if ( c == '.' and COMMA == 0 or c == ',' and COMMA == 0 )
              {
                   matr [pos] = '.';
                   pos++;
                   printf (".");
                   COMMA = 1;
              }
              else
              if ( c == 8 and pos )
              {

                   if ( matr [pos - 1] == '.' ) COMMA = 0;

                   matr [pos] = 0;
                   pos--;
                   printf ("\b \b");
              }

     }
      while ( c not_eq 13 or pos == 0 );

              matr [pos] = 0;
              RESULT = strtod ( matr , NULL );
     }
      while ( RESULT not_eq COMPARATOR );
     break;



     case HE:
     do
     {

     pos = 0;
     COMMA = 0;

     for ( int kaj = 0; kaj < LINES; kaj++ ) printf ("\n");
     for ( int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

     printf ("%s", QUESTION_TEXT);

      do
     {
              c = getch ();

              if ( isdigit ( c ) not_eq 0 )
              {
                   matr [pos] = c;
                   pos++;
                   printf ("%c", c);
              }
              else
              if ( c == '.' and COMMA == 0 or c == ',' and COMMA == 0 )
              {
                   matr [pos] = '.';
                   pos++;
                   printf (".");
                   COMMA = 1;
              }
              else
              if ( c == 8 and pos )
              {

                   if ( matr [pos - 1] == '.' ) COMMA = 0;

                   matr [pos] = 0;
                   pos--;
                   printf ("\b \b");
              }

     }
      while ( c not_eq 13 or pos == 0 );

              matr [pos] = 0;
              RESULT = strtod ( matr , NULL );
     }
      while ( RESULT >= COMPARATOR );
     break;




     case LE:
     do
     {

     pos = 0;
     COMMA = 0;

     for ( int kaj = 0; kaj < LINES; kaj++ ) printf ("\n");
     for ( int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

     printf ("%s", QUESTION_TEXT);

      do
     {
              c = getch ();

              if ( isdigit ( c ) not_eq 0 )
              {
                   matr [pos] = c;
                   pos++;
                   printf ("%c", c);
              }
              else
              if ( c == '.' and COMMA == 0 or c == ',' and COMMA == 0 )
              {
                   matr [pos] = '.';
                   pos++;
                   printf (".");
                   COMMA = 1;
              }
              else
              if ( c == 8 and pos )
              {

                   if ( matr [pos - 1] == '.' ) COMMA = 0;

                   matr [pos] = 0;
                   pos--;
                   printf ("\b \b");
              }

     }
      while ( c not_eq 13 or pos == 0 );

              matr [pos] = 0;
              RESULT = strtod ( matr , NULL );
     }
      while ( RESULT <= COMPARATOR );
     break;




     case NRM:

     pos = 0;
     COMMA = 0;

     for ( int kaj = 0; kaj < LINES; kaj++ ) printf ("\n");
     for ( int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

     printf ("%s", QUESTION_TEXT);

      do
     {
              c = getch ();

              if ( isdigit ( c ) not_eq 0 )
              {
                   matr [pos] = c;
                   pos++;
                   printf ("%c", c);
              }
              else
              if ( c == '.' and COMMA == 0 or c == ',' and COMMA == 0 )
              {
                   matr [pos] = '.';
                   pos++;
                   printf (".");
                   COMMA = 1;
              }
              else
              if ( c == 8 and pos )
              {

                   if ( matr [pos - 1] == '.' ) COMMA = 0;

                   matr [pos] = 0;
                   pos--;
                   printf ("\b \b");
              }

     }
      while ( c not_eq 13 or pos == 0 );

              matr [pos] = 0;
              RESULT = strtod ( matr , NULL );
     break;


    } // end of the switch


    return RESULT;
}





// FUNCTION: GET A STRING VALUE USING allen STYLE
// @param01: QUESTION_TEXT { TEXT THAT WILL BE PRINTED BEFORE THE INPUT }
// @param02: LINES { HOW MANY PRINT OF \N }
// @param03: SPACES { HOW MANY PRINT OF ' ' }
// @param04: CONDITION { THE OPERATOR MACROS }
// @param05: MAX_SIZE { IF THE COMPARATOR USED IS SZE WILL LIMIT THE PRINT OF A VALUE }
// @param06: STRING { THE STRING VALUE THAT WILL BE SAVED }
// @param07: TOKEN { IT'S A CHAR THAT WILL REPLACE SOMETHING IF THE MACRO USED IS CRY }
// @param08: NUMBER_OF_REPLACEMENTS { THE QUANTITY OF REPLACEMENTS }
char
getS ( const char * QUESTION_TEXT , int LINES , int SPACES , int CONDITION , int MAX_SIZE , char STRING [MAX_SIZE] , char TOKEN , int NUMBER_OF_REPLACEMENTS , ... )
{

    va_list args;
    va_start ( args , NUMBER_OF_REPLACEMENTS );

    char c;

    char toCRY [NUMBER_OF_REPLACEMENTS];

    int  pos = 0;

    for ( pos = 0; pos < NUMBER_OF_REPLACEMENTS; pos++ ) toCRY [ pos ] = va_arg ( args , int );

    switch ( CONDITION )
    {


     case SZE:

     pos = 0;

     for ( int kaj = 0; kaj < LINES; kaj++ ) printf ("\n");
     for ( int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

     printf ("%s", QUESTION_TEXT);

      do
     {
              c = getch ();

              if ( isalpha ( c ) not_eq 0 and pos < MAX_SIZE )
              {
                   STRING [pos] = c;
                   pos++;
                   printf ("%c", c);
              }

              /* SPACE */
              else
              if ( c == 32 and pos < MAX_SIZE ) { STRING [pos] = ' '; pos++;
                   printf (" ");
              }

              /* @ */
              else
              if ( c == 64 and pos < MAX_SIZE ) { STRING [pos] = '@'; pos++;
                   printf ("@");
              }

              /* + */
              else
              if ( c == 43 and pos < MAX_SIZE ) { STRING [pos] = '+'; pos++;
                   printf ("+");
              }

              /* - */
              else
              if ( c == 45 and pos < MAX_SIZE ) { STRING [pos] = '-'; pos++;
                   printf ("-");
              }

              /* / */
              else
              if ( c == 47 and pos < MAX_SIZE ) { STRING [pos] = '/'; pos++;
                   printf ("/");
              }

              /* \ */
              else
              if ( c == 92 and pos < MAX_SIZE ) { STRING [pos] = c; pos++;
                   printf ("\\");
              }

              /* . */
              else
              if ( c == 46 and pos < MAX_SIZE ) { STRING [pos] = '.'; pos++;
                   printf (".");
              }

              /* , */
              else
              if ( c == 44 and pos < MAX_SIZE ) { STRING [pos] = ','; pos++;
                   printf (",");
              }

              /* ~ */
              else
              if ( c == 126 and pos < MAX_SIZE ) { STRING [pos] = '~'; pos++;
                   printf ("~");
              }

              /* } */
              else
              if ( c == 125 and pos < MAX_SIZE ) { STRING [pos] = '}'; pos++;
                   printf ("}");
              }

              /* { */
              else
              if ( c == 123 and pos < MAX_SIZE ) { STRING [pos] = '{'; pos++;
                   printf ("{");
              }

              /* _ */
              else
              if ( c == 95 and pos < MAX_SIZE ) { STRING [pos] = '_'; pos++;
                   printf ("_");
              }

              /* # */
              else
              if ( c == 35 and pos < MAX_SIZE ) { STRING [pos] = '#'; pos++;
                   printf ("#");
              }

              /* ! */
              else
              if ( c == 33 and pos < MAX_SIZE ) { STRING [pos] = '!'; pos++;
                   printf ("!");
              }

              /* ( */
              else
              if ( c == 40 and pos < MAX_SIZE ) { STRING [pos] = '('; pos++;
                   printf ("(");
              }

              /* ) */
              else
              if ( c == 41 and pos < MAX_SIZE ) { STRING [pos] = ')'; pos++;
                   printf (")");
              }

              /* & */
              else
              if ( c == 38 and pos < MAX_SIZE ) { STRING [pos] = '&'; pos++;
                   printf ("%c", c);
              }

              /* % */
              else
              if ( c == 37 and pos < MAX_SIZE ) { STRING [pos] = '%'; pos++;
                   printf ("%c", c);
              }

              /* " */
              else
              if ( c == 34 and pos < MAX_SIZE ) { STRING [pos] = '"'; pos++;
                   printf ("%c", c);
              }

              /* ' */
              else
              if ( c == 39 and pos < MAX_SIZE ) { STRING [pos] = c; pos++;
                   printf ("'");
              }

              /* * */
              else
              if ( c == 42 and pos < MAX_SIZE ) { STRING [pos] = c; pos++;
                   printf ("*");
              }

              /* $ */
              else
              if ( c == 36 and pos < MAX_SIZE ) { STRING [pos] = '$'; pos++;
                   printf ("$");
              }

              /* : */
              else
              if ( c == 58 and pos < MAX_SIZE ) { STRING [pos] = ':'; pos++;
                   printf (":");
              }

              /* ; */
              else
              if ( c == 59 and pos < MAX_SIZE ) { STRING [pos] = ';'; pos++;
                   printf (";");
              }

              /* < */
              else
              if ( c == 60 and pos < MAX_SIZE ) { STRING [pos] = '<'; pos++;
                   printf ("<");
              }

              /* = */
              else
              if ( c == 61 and pos < MAX_SIZE ) { STRING [pos] = '='; pos++;
                   printf ("=");
              }

              /* > */
              else
              if ( c == 62 and pos < MAX_SIZE ) { STRING [pos] = '>'; pos++;
                   printf (">");
              }

              /* ? */
              else
              if ( c == 62 and pos < MAX_SIZE ) { STRING [pos] = '?'; pos++;
                   printf ("?");
              }

              /* [ */
              else
              if ( c == 91 and pos < MAX_SIZE ) { STRING [pos] = '['; pos++;
                   printf ("[");
              }

              /* ] */
              else
              if ( c == 93 and pos < MAX_SIZE ) { STRING [pos] = ']'; pos++;
                   printf ("]");
              }

              /* | */
              else
              if ( c == 124 and pos < MAX_SIZE ) { STRING [pos] = '|'; pos++;
                   printf ("|");
              }

              /* ` */
              else
              if ( c == 96 and pos < MAX_SIZE ) { STRING [pos] = '`'; pos++;
                   printf ("`");
              }

              // ALPHABET

              /* H , K , M , P */
              else if ( c == 72 and pos < MAX_SIZE ) { STRING [pos] = 'H'; pos++; printf ("H"); }
              else if ( c == 75 and pos < MAX_SIZE ) { STRING [pos] = 'K'; pos++; printf ("K"); }
              else if ( c == 77 and pos < MAX_SIZE ) { STRING [pos] = 'M'; pos++; printf ("M"); }
              else if ( c == 80 and pos < MAX_SIZE ) { STRING [pos] = 'P'; pos++; printf ("P"); }

              if ( isalnum ( c ) not_eq 0 and isalpha ( c ) == 0 and pos < MAX_SIZE )
              {
                   STRING [pos] = c;
                   pos++;
                   printf ("%c", c);
              }

              else
              if ( c == 8 and pos > 0 )
              {
                  STRING [pos] = 0;
                  pos--;
                  printf ("\b \b");
              }

     }
      while ( c not_eq 13 or pos == 0 );

      STRING [pos] = 0;


      break;

      case CRY:

      pos = 0;

     for ( int kaj = 0; kaj < LINES; kaj++ ) printf ("\n");
     for ( int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

     printf ("%s", QUESTION_TEXT);

      do
     {
              c = getch ();

              if ( isalpha ( c ) not_eq 0 and pos < MAX_SIZE )
              {
                   STRING [pos] = c;
                   pos++;
                   printf ("%c", c);
              }

              /* SPACE */
              else
              if ( c == 32 and pos < MAX_SIZE ) { STRING [pos] = ' '; pos++;
                   printf (" ");
              }

              /* @ */
              else
              if ( c == 64 and pos < MAX_SIZE ) { STRING [pos] = '@'; pos++;
                   printf ("@");
              }

              /* + */
              else
              if ( c == 43 and pos < MAX_SIZE ) { STRING [pos] = '+'; pos++;
                   printf ("+");
              }

              /* - */
              else
              if ( c == 45 and pos < MAX_SIZE ) { STRING [pos] = '-'; pos++;
                   printf ("-");
              }

              /* / */
              else
              if ( c == 47 and pos < MAX_SIZE ) { STRING [pos] = '/'; pos++;
                   printf ("/");
              }

              /* \ */
              else
              if ( c == 92 and pos < MAX_SIZE ) { STRING [pos] = c; pos++;
                   printf ("\\");
              }

              /* . */
              else
              if ( c == 46 and pos < MAX_SIZE ) { STRING [pos] = '.'; pos++;
                   printf (".");
              }

              /* , */
              else
              if ( c == 44 and pos < MAX_SIZE ) { STRING [pos] = ','; pos++;
                   printf (",");
              }

              /* ~ */
              else
              if ( c == 126 and pos < MAX_SIZE ) { STRING [pos] = '~'; pos++;
                   printf ("~");
              }

              /* } */
              else
              if ( c == 125 and pos < MAX_SIZE ) { STRING [pos] = '}'; pos++;
                   printf ("}");
              }

              /* { */
              else
              if ( c == 123 and pos < MAX_SIZE ) { STRING [pos] = '{'; pos++;
                   printf ("{");
              }

              /* _ */
              else
              if ( c == 95 and pos < MAX_SIZE ) { STRING [pos] = '_'; pos++;
                   printf ("_");
              }

              /* # */
              else
              if ( c == 35 and pos < MAX_SIZE ) { STRING [pos] = '#'; pos++;
                   printf ("#");
              }

              /* ! */
              else
              if ( c == 33 and pos < MAX_SIZE ) { STRING [pos] = '!'; pos++;
                   printf ("!");
              }

              /* ( */
              else
              if ( c == 40 and pos < MAX_SIZE ) { STRING [pos] = '('; pos++;
                   printf ("(");
              }

              /* ) */
              else
              if ( c == 41 and pos < MAX_SIZE ) { STRING [pos] = ')'; pos++;
                   printf (")");
              }

              /* & */
              else
              if ( c == 38 and pos < MAX_SIZE ) { STRING [pos] = '&'; pos++;
                   printf ("%c", c);
              }

              /* % */
              else
              if ( c == 37 and pos < MAX_SIZE ) { STRING [pos] = '%'; pos++;
                   printf ("%c", c);
              }

              /* " */
              else
              if ( c == 34 and pos < MAX_SIZE ) { STRING [pos] = '"'; pos++;
                   printf ("%c", c);
              }

              /* ' */
              else
              if ( c == 39 and pos < MAX_SIZE ) { STRING [pos] = c; pos++;
                   printf ("'");
              }

              /* * */
              else
              if ( c == 42 and pos < MAX_SIZE ) { STRING [pos] = c; pos++;
                   printf ("*");
              }

              /* $ */
              else
              if ( c == 36 and pos < MAX_SIZE ) { STRING [pos] = '$'; pos++;
                   printf ("$");
              }

              /* : */
              else
              if ( c == 58 and pos < MAX_SIZE ) { STRING [pos] = ':'; pos++;
                   printf (":");
              }

              /* ; */
              else
              if ( c == 59 and pos < MAX_SIZE ) { STRING [pos] = ';'; pos++;
                   printf (";");
              }

              /* < */
              else
              if ( c == 60 and pos < MAX_SIZE ) { STRING [pos] = '<'; pos++;
                   printf ("<");
              }

              /* = */
              else
              if ( c == 61 and pos < MAX_SIZE ) { STRING [pos] = '='; pos++;
                   printf ("=");
              }

              /* > */
              else
              if ( c == 62 and pos < MAX_SIZE ) { STRING [pos] = '>'; pos++;
                   printf (">");
              }

              /* ? */
              else
              if ( c == 62 and pos < MAX_SIZE ) { STRING [pos] = '?'; pos++;
                   printf ("?");
              }

              /* [ */
              else
              if ( c == 91 and pos < MAX_SIZE ) { STRING [pos] = '['; pos++;
                   printf ("[");
              }

              /* ] */
              else
              if ( c == 93 and pos < MAX_SIZE ) { STRING [pos] = ']'; pos++;
                   printf ("]");
              }

              /* | */
              else
              if ( c == 124 and pos < MAX_SIZE ) { STRING [pos] = '|'; pos++;
                   printf ("|");
              }

              /* ` */
              else
              if ( c == 96 and pos < MAX_SIZE ) { STRING [pos] = '`'; pos++;
                   printf ("`");
              }

              // ALPHABET

              /* H , K , M , P */
              else if ( c == 72 and pos < MAX_SIZE ) { STRING [pos] = 'H'; pos++; printf ("H"); }
              else if ( c == 75 and pos < MAX_SIZE ) { STRING [pos] = 'K'; pos++; printf ("K"); }
              else if ( c == 77 and pos < MAX_SIZE ) { STRING [pos] = 'M'; pos++; printf ("M"); }
              else if ( c == 80 and pos < MAX_SIZE ) { STRING [pos] = 'P'; pos++; printf ("P"); }

              if ( isalnum ( c ) not_eq 0 and isalpha ( c ) == 0 and pos < MAX_SIZE )
              {
                   STRING [pos] = c;
                   pos++;
                   printf ("%c", c);
              }

              else
              if ( c == 8 and pos > 0 )
              {
                  STRING [pos] = 0;
                  pos--;
                  printf ("\b \b");
              }

     }
      while ( c not_eq 13 or pos == 0 );

      STRING [pos] = 0;

      for ( int i = 0; i < strlen ( STRING ); i++ )
      {
                 for ( int j = 0; j < NUMBER_OF_REPLACEMENTS; j++ )
                 if ( STRING [ i ] == toCRY [j] ) { STRING [i] = TOKEN; }
      }
      return *STRING;

      case PWD:

           pos = 0;

     for ( int kaj = 0; kaj < LINES; kaj++ ) printf ("\n");
     for ( int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

     printf ("%s", QUESTION_TEXT);

      do
     {
              c = getch ();

              if ( isalpha ( c ) not_eq 0 and pos < MAX_SIZE )
              {
                   STRING [pos] = c;
                   pos++;
                   printf ("%c", TOKEN);
              }

              /* SPACE */
              else
              if ( c == 32 and pos < MAX_SIZE ) { STRING [pos] = ' '; pos++;
                   printf ("%c", TOKEN);
              }

              /* @ */
              else
              if ( c == 64 and pos < MAX_SIZE ) { STRING [pos] = '@'; pos++;
                   printf ("%c", TOKEN);
              }

              /* + */
              else
              if ( c == 43 and pos < MAX_SIZE ) { STRING [pos] = '+'; pos++;
                   printf ("%c", TOKEN);
              }

              /* - */
              else
              if ( c == 45 and pos < MAX_SIZE ) { STRING [pos] = '-'; pos++;
                   printf ("%c", TOKEN);
              }

              /* / */
              else
              if ( c == 47 and pos < MAX_SIZE ) { STRING [pos] = '/'; pos++;
                   printf ("%c", TOKEN);
              }

              /* \ */
              else
              if ( c == 92 and pos < MAX_SIZE ) { STRING [pos] = c; pos++;
                   printf ("%c", TOKEN);
              }

              /* . */
              else
              if ( c == 46 and pos < MAX_SIZE ) { STRING [pos] = '.'; pos++;
                   printf ("%c", TOKEN);
              }

              /* , */
              else
              if ( c == 44 and pos < MAX_SIZE ) { STRING [pos] = ','; pos++;
                   printf ("%c", TOKEN);
              }

              /* ~ */
              else
              if ( c == 126 and pos < MAX_SIZE ) { STRING [pos] = '~'; pos++;
                   printf ("%c", TOKEN);
              }

              /* } */
              else
              if ( c == 125 and pos < MAX_SIZE ) { STRING [pos] = '}'; pos++;
                   printf ("%c", TOKEN);
              }

              /* { */
              else
              if ( c == 123 and pos < MAX_SIZE ) { STRING [pos] = '{'; pos++;
                   printf ("%c", TOKEN);
              }

              /* _ */
              else
              if ( c == 95 and pos < MAX_SIZE ) { STRING [pos] = '_'; pos++;
                   printf ("%c", TOKEN);
              }

              /* # */
              else
              if ( c == 35 and pos < MAX_SIZE ) { STRING [pos] = '#'; pos++;
                   printf ("%c", TOKEN);
              }

              /* ! */
              else
              if ( c == 33 and pos < MAX_SIZE ) { STRING [pos] = '!'; pos++;
                   printf ("%c", TOKEN);
              }

              /* ( */
              else
              if ( c == 40 and pos < MAX_SIZE ) { STRING [pos] = '('; pos++;
                   printf ("%c", TOKEN);
              }

              /* ) */
              else
              if ( c == 41 and pos < MAX_SIZE ) { STRING [pos] = ')'; pos++;
                   printf ("%c", TOKEN);
              }

              /* & */
              else
              if ( c == 38 and pos < MAX_SIZE ) { STRING [pos] = '&'; pos++;
                   printf ("%c", TOKEN);
              }

              /* % */
              else
              if ( c == 37 and pos < MAX_SIZE ) { STRING [pos] = '%'; pos++;
                   printf ("%c", TOKEN);
              }

              /* " */
              else
              if ( c == 34 and pos < MAX_SIZE ) { STRING [pos] = '"'; pos++;
                   printf ("%c", TOKEN);
              }

              /* ' */
              else
              if ( c == 39 and pos < MAX_SIZE ) { STRING [pos] = c; pos++;
                   printf ("%c", TOKEN);
              }

              /* * */
              else
              if ( c == 42 and pos < MAX_SIZE ) { STRING [pos] = c; pos++;
                   printf ("%c", TOKEN);
              }

              /* $ */
              else
              if ( c == 36 and pos < MAX_SIZE ) { STRING [pos] = '$'; pos++;
                   printf ("%c", TOKEN);
              }

              /* : */
              else
              if ( c == 58 and pos < MAX_SIZE ) { STRING [pos] = ':'; pos++;
                   printf ("%c", TOKEN);
              }

              /* ; */
              else
              if ( c == 59 and pos < MAX_SIZE ) { STRING [pos] = ';'; pos++;
                   printf ("%c", TOKEN);
              }

              /* < */
              else
              if ( c == 60 and pos < MAX_SIZE ) { STRING [pos] = '<'; pos++;
                   printf ("%c", TOKEN);
              }

              /* = */
              else
              if ( c == 61 and pos < MAX_SIZE ) { STRING [pos] = '='; pos++;
                   printf ("%c", TOKEN);
              }

              /* > */
              else
              if ( c == 62 and pos < MAX_SIZE ) { STRING [pos] = '>'; pos++;
                   printf ("%c", TOKEN);
              }

              /* ? */
              else
              if ( c == 62 and pos < MAX_SIZE ) { STRING [pos] = '?'; pos++;
                   printf ("%c", TOKEN);
              }

              /* [ */
              else
              if ( c == 91 and pos < MAX_SIZE ) { STRING [pos] = '['; pos++;
                   printf ("%c", TOKEN);
              }

              /* ] */
              else
              if ( c == 93 and pos < MAX_SIZE ) { STRING [pos] = ']'; pos++;
                   printf ("%c", TOKEN);
              }

              /* | */
              else
              if ( c == 124 and pos < MAX_SIZE ) { STRING [pos] = '|'; pos++;
                   printf ("%c", TOKEN);
              }

              /* ` */
              else
              if ( c == 96 and pos < MAX_SIZE ) { STRING [pos] = '`'; pos++;
                   printf ("%c", TOKEN);
              }

              // ALPHABET

              /* H , K , M , P */
              else if ( c == 72 and pos < MAX_SIZE ) { STRING [pos] = 'H'; pos++; printf ("%c", TOKEN); }
              else if ( c == 75 and pos < MAX_SIZE ) { STRING [pos] = 'K'; pos++; printf ("%c", TOKEN); }
              else if ( c == 77 and pos < MAX_SIZE ) { STRING [pos] = 'M'; pos++; printf ("%c", TOKEN); }
              else if ( c == 80 and pos < MAX_SIZE ) { STRING [pos] = 'P'; pos++; printf ("%c", TOKEN); }

              if ( isalnum ( c ) not_eq 0 and isalpha ( c ) == 0 and pos < MAX_SIZE )
              {
                   STRING [pos] = c;
                   pos++;
                   printf ("%c", TOKEN);
              }

              else
              if ( c == 8 and pos > 0 )
              {
                  STRING [pos] = 0;
                  pos--;
                  printf ("\b \b");
              }

     }
      while ( c not_eq 13 or pos == 0 );

      STRING [pos] = 0;

      return *STRING;

      break;

      case ONS:

      pos = 0;

     for ( int kaj = 0; kaj < LINES; kaj++ ) printf ("\n");
     for ( int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

     printf ("%s", QUESTION_TEXT);

      do
     {
              c = getch ();

              if ( isalpha ( c ) not_eq 0 and pos < MAX_SIZE )
              {
                   STRING [pos] = c;
                   pos++;
                   printf ("%c", c);
              }

              /* SPACE */
              else
              if ( c == 32 and pos < MAX_SIZE ) { STRING [pos] = ' '; pos++;
                   printf (" ");
              }

              /* @ */
              else
              if ( c == 64 and pos < MAX_SIZE ) { STRING [pos] = '@'; pos++;
                   printf ("@");
              }

              /* + */
              else
              if ( c == 43 and pos < MAX_SIZE ) { STRING [pos] = '+'; pos++;
                   printf ("+");
              }

              /* - */
              else
              if ( c == 45 and pos < MAX_SIZE ) { STRING [pos] = '-'; pos++;
                   printf ("-");
              }

              /* / */
              else
              if ( c == 47 and pos < MAX_SIZE ) { STRING [pos] = '/'; pos++;
                   printf ("/");
              }

              /* \ */
              else
              if ( c == 92 and pos < MAX_SIZE ) { STRING [pos] = c; pos++;
                   printf ("\\");
              }

              /* . */
              else
              if ( c == 46 and pos < MAX_SIZE ) { STRING [pos] = '.'; pos++;
                   printf (".");
              }

              /* , */
              else
              if ( c == 44 and pos < MAX_SIZE ) { STRING [pos] = ','; pos++;
                   printf (",");
              }

              /* ~ */
              else
              if ( c == 126 and pos < MAX_SIZE ) { STRING [pos] = '~'; pos++;
                   printf ("~");
              }

              /* } */
              else
              if ( c == 125 and pos < MAX_SIZE ) { STRING [pos] = '}'; pos++;
                   printf ("}");
              }

              /* { */
              else
              if ( c == 123 and pos < MAX_SIZE ) { STRING [pos] = '{'; pos++;
                   printf ("{");
              }

              /* _ */
              else
              if ( c == 95 and pos < MAX_SIZE ) { STRING [pos] = '_'; pos++;
                   printf ("_");
              }

              /* # */
              else
              if ( c == 35 and pos < MAX_SIZE ) { STRING [pos] = '#'; pos++;
                   printf ("#");
              }

              /* ! */
              else
              if ( c == 33 and pos < MAX_SIZE ) { STRING [pos] = '!'; pos++;
                   printf ("!");
              }

              /* ( */
              else
              if ( c == 40 and pos < MAX_SIZE ) { STRING [pos] = '('; pos++;
                   printf ("(");
              }

              /* ) */
              else
              if ( c == 41 and pos < MAX_SIZE ) { STRING [pos] = ')'; pos++;
                   printf (")");
              }

              /* & */
              else
              if ( c == 38 and pos < MAX_SIZE ) { STRING [pos] = '&'; pos++;
                   printf ("%c", c);
              }

              /* % */
              else
              if ( c == 37 and pos < MAX_SIZE ) { STRING [pos] = '%'; pos++;
                   printf ("%c", c);
              }

              /* " */
              else
              if ( c == 34 and pos < MAX_SIZE ) { STRING [pos] = '"'; pos++;
                   printf ("%c", c);
              }

              /* ' */
              else
              if ( c == 39 and pos < MAX_SIZE ) { STRING [pos] = c; pos++;
                   printf ("'");
              }

              /* * */
              else
              if ( c == 42 and pos < MAX_SIZE ) { STRING [pos] = c; pos++;
                   printf ("*");
              }

              /* $ */
              else
              if ( c == 36 and pos < MAX_SIZE ) { STRING [pos] = '$'; pos++;
                   printf ("$");
              }

              /* : */
              else
              if ( c == 58 and pos < MAX_SIZE ) { STRING [pos] = ':'; pos++;
                   printf (":");
              }

              /* ; */
              else
              if ( c == 59 and pos < MAX_SIZE ) { STRING [pos] = ';'; pos++;
                   printf (";");
              }

              /* < */
              else
              if ( c == 60 and pos < MAX_SIZE ) { STRING [pos] = '<'; pos++;
                   printf ("<");
              }

              /* = */
              else
              if ( c == 61 and pos < MAX_SIZE ) { STRING [pos] = '='; pos++;
                   printf ("=");
              }

              /* > */
              else
              if ( c == 62 and pos < MAX_SIZE ) { STRING [pos] = '>'; pos++;
                   printf (">");
              }

              /* ? */
              else
              if ( c == 62 and pos < MAX_SIZE ) { STRING [pos] = '?'; pos++;
                   printf ("?");
              }

              /* [ */
              else
              if ( c == 91 and pos < MAX_SIZE ) { STRING [pos] = '['; pos++;
                   printf ("[");
              }

              /* ] */
              else
              if ( c == 93 and pos < MAX_SIZE ) { STRING [pos] = ']'; pos++;
                   printf ("]");
              }

              /* | */
              else
              if ( c == 124 and pos < MAX_SIZE ) { STRING [pos] = '|'; pos++;
                   printf ("|");
              }

              /* ` */
              else
              if ( c == 96 and pos < MAX_SIZE ) { STRING [pos] = '`'; pos++;
                   printf ("`");
              }

              // ALPHABET

              /* H , K , M , P */
              else if ( c == 72 and pos < MAX_SIZE ) { STRING [pos] = 'H'; pos++; printf ("H"); }
              else if ( c == 75 and pos < MAX_SIZE ) { STRING [pos] = 'K'; pos++; printf ("K"); }
              else if ( c == 77 and pos < MAX_SIZE ) { STRING [pos] = 'M'; pos++; printf ("M"); }
              else if ( c == 80 and pos < MAX_SIZE ) { STRING [pos] = 'P'; pos++; printf ("P"); }

              else
              if ( c == 8 and pos > 0 )
              {
                  STRING [pos] = 0;
                  pos--;
                  printf ("\b \b");
              }

     }
      while ( c not_eq 13 or pos == 0 );

      STRING [pos] = 0;

      break;






      case PWS:

      pos = 0;

     for ( int kaj = 0; kaj < LINES; kaj++ ) printf ("\n");
     for ( int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

     printf ("%s", QUESTION_TEXT);

      do
     {
              c = getch ();

              if ( isalpha ( c ) not_eq 0 and pos < MAX_SIZE )
              {
                   STRING [pos] = c;
                   pos++;
                   printf ("%c", TOKEN);
              }

              /* SPACE */
              else
              if ( c == 32 and pos < MAX_SIZE ) { STRING [pos] = ' '; pos++;
                   printf ("%c", TOKEN);
              }

              /* @ */
              else
              if ( c == 64 and pos < MAX_SIZE ) { STRING [pos] = '@'; pos++;
                   printf ("%c", TOKEN);
              }

              /* + */
              else
              if ( c == 43 and pos < MAX_SIZE ) { STRING [pos] = '+'; pos++;
                   printf ("%c", TOKEN);
              }

              /* - */
              else
              if ( c == 45 and pos < MAX_SIZE ) { STRING [pos] = '-'; pos++;
                   printf ("%c", TOKEN);
              }

              /* / */
              else
              if ( c == 47 and pos < MAX_SIZE ) { STRING [pos] = '/'; pos++;
                   printf ("%c", TOKEN);
              }

              /* \ */
              else
              if ( c == 92 and pos < MAX_SIZE ) { STRING [pos] = c; pos++;
                   printf ("%c", TOKEN);
              }

              /* . */
              else
              if ( c == 46 and pos < MAX_SIZE ) { STRING [pos] = '.'; pos++;
                   printf ("%c", TOKEN);
              }

              /* , */
              else
              if ( c == 44 and pos < MAX_SIZE ) { STRING [pos] = ','; pos++;
                   printf ("%c", TOKEN);
              }

              /* ~ */
              else
              if ( c == 126 and pos < MAX_SIZE ) { STRING [pos] = '~'; pos++;
                   printf ("%c", TOKEN);
              }

              /* } */
              else
              if ( c == 125 and pos < MAX_SIZE ) { STRING [pos] = '}'; pos++;
                   printf ("%c", TOKEN);
              }

              /* { */
              else
              if ( c == 123 and pos < MAX_SIZE ) { STRING [pos] = '{'; pos++;
                   printf ("%c", TOKEN);
              }

              /* _ */
              else
              if ( c == 95 and pos < MAX_SIZE ) { STRING [pos] = '_'; pos++;
                   printf ("%c", TOKEN);
              }

              /* # */
              else
              if ( c == 35 and pos < MAX_SIZE ) { STRING [pos] = '#'; pos++;
                   printf ("%c", TOKEN);
              }

              /* ! */
              else
              if ( c == 33 and pos < MAX_SIZE ) { STRING [pos] = '!'; pos++;
                   printf ("%c", TOKEN);
              }

              /* ( */
              else
              if ( c == 40 and pos < MAX_SIZE ) { STRING [pos] = '('; pos++;
                   printf ("%c", TOKEN);
              }

              /* ) */
              else
              if ( c == 41 and pos < MAX_SIZE ) { STRING [pos] = ')'; pos++;
                   printf ("%c", TOKEN);
              }

              /* & */
              else
              if ( c == 38 and pos < MAX_SIZE ) { STRING [pos] = '&'; pos++;
                   printf ("%c", TOKEN);
              }

              /* % */
              else
              if ( c == 37 and pos < MAX_SIZE ) { STRING [pos] = '%'; pos++;
                   printf ("%c", TOKEN);
              }

              /* " */
              else
              if ( c == 34 and pos < MAX_SIZE ) { STRING [pos] = '"'; pos++;
                   printf ("%c", TOKEN);
              }

              /* ' */
              else
              if ( c == 39 and pos < MAX_SIZE ) { STRING [pos] = c; pos++;
                   printf ("%c", TOKEN);
              }

              /* * */
              else
              if ( c == 42 and pos < MAX_SIZE ) { STRING [pos] = c; pos++;
                   printf ("%c", TOKEN);
              }

              /* $ */
              else
              if ( c == 36 and pos < MAX_SIZE ) { STRING [pos] = '$'; pos++;
                   printf ("%c", TOKEN);
              }

              /* : */
              else
              if ( c == 58 and pos < MAX_SIZE ) { STRING [pos] = ':'; pos++;
                   printf ("%c", TOKEN);
              }

              /* ; */
              else
              if ( c == 59 and pos < MAX_SIZE ) { STRING [pos] = ';'; pos++;
                   printf ("%c", TOKEN);
              }

              /* < */
              else
              if ( c == 60 and pos < MAX_SIZE ) { STRING [pos] = '<'; pos++;
                   printf ("%c", TOKEN);
              }

              /* = */
              else
              if ( c == 61 and pos < MAX_SIZE ) { STRING [pos] = '='; pos++;
                   printf ("%c", TOKEN);
              }

              /* > */
              else
              if ( c == 62 and pos < MAX_SIZE ) { STRING [pos] = '>'; pos++;
                   printf ("%c", TOKEN);
              }

              /* ? */
              else
              if ( c == 62 and pos < MAX_SIZE ) { STRING [pos] = '?'; pos++;
                   printf ("%c", TOKEN);
              }

              /* [ */
              else
              if ( c == 91 and pos < MAX_SIZE ) { STRING [pos] = '['; pos++;
                   printf ("%c", TOKEN);
              }

              /* ] */
              else
              if ( c == 93 and pos < MAX_SIZE ) { STRING [pos] = ']'; pos++;
                   printf ("%c", TOKEN);
              }

              /* | */
              else
              if ( c == 124 and pos < MAX_SIZE ) { STRING [pos] = '|'; pos++;
                   printf ("%c", TOKEN);
              }

              /* ` */
              else
              if ( c == 96 and pos < MAX_SIZE ) { STRING [pos] = '`'; pos++;
                   printf ("%c", TOKEN);
              }

              // ALPHABET

              /* H , K , M , P */
              else if ( c == 72 and pos < MAX_SIZE ) { STRING [pos] = 'H'; pos++; printf ("%c", TOKEN); }
              else if ( c == 75 and pos < MAX_SIZE ) { STRING [pos] = 'K'; pos++; printf ("%c", TOKEN); }
              else if ( c == 77 and pos < MAX_SIZE ) { STRING [pos] = 'M'; pos++; printf ("%c", TOKEN); }
              else if ( c == 80 and pos < MAX_SIZE ) { STRING [pos] = 'P'; pos++; printf ("%c", TOKEN); }

              else
              if ( c == 8 and pos > 0 )
              {
                  STRING [pos] = 0;
                  pos--;
                  printf ("\b \b");
              }

     }
      while ( c not_eq 13 or pos == 0 );

      STRING [pos] = 0;

      return *STRING;

      break;




      case ONN:

      pos = 0;

     for ( int kaj = 0; kaj < LINES; kaj++ ) printf ("\n");
     for ( int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

     printf ("%s", QUESTION_TEXT);

      do
     {
              c = getch ();

              if ( isalnum ( c ) not_eq 0 and isalpha ( c ) == 0 and pos < MAX_SIZE )
              {
                   STRING [pos] = c;
                   pos++;
                   printf ("%c", c);
              }

              else
              if ( c == 8 and pos > 0 )
              {
                  STRING [pos] = 0;
                  pos--;
                  printf ("\b \b");
              }

     }
      while ( c not_eq 13 or pos == 0 );

      STRING [pos] = 0;

      break;




      case PWN:

      pos = 0;

     for ( int kaj = 0; kaj < LINES; kaj++ ) printf ("\n");
     for ( int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

     printf ("%s", QUESTION_TEXT);

      do
     {
              c = getch ();

              if ( isalnum ( c ) not_eq 0 and isalpha ( c ) == 0 and pos < MAX_SIZE )
              {
                   STRING [pos] = c;
                   pos++;
                   printf ("%c", TOKEN);
              }

              else
              if ( c == 8 and pos > 0 )
              {
                  STRING [pos] = 0;
                  pos--;
                  printf ("\b \b");
              }

     }
      while ( c not_eq 13 or pos == 0 );

      STRING [pos] = 0;

      return *STRING;

      break;

    }


    va_end ( args );

    return *STRING;
}




// allen




// FUNCTION: COUNTS AND RETURN THE LENGHT OF A INT VALUE
// @param01: VARIABLE { IT'S A INT VALUE THAT WILL COUNT THE QUANTITY OF HOUSES }
int
allen_GETDIGITS ( int VARIABLE )
{
     int counting = 0;

     while ( VARIABLE not_eq 0 )
     {
        VARIABLE /= 10;
        counting++;
     }

     return counting;
}





// FUNCTION: SET THE CURSOR POSITION X AND Y
// @param01: X { SET X CURSOR POSITION }
// @param02: Y { SET Y CURSOR POSITION }
void
gotoxy ( int X , int Y )
{
     COORD coord;
     coord.X = X;
     coord.Y = Y;
     SetConsoleCursorPosition ( GetStdHandle ( STD_OUTPUT_HANDLE ), coord );
}





// FUNCTION: PRINT ALL THE AVALIABE ASCII CODE OF A PAGE
// @param01: CODE_PAGE { THE CODE PAGE TO USE TO PRINT }
void
allen_TESTCODEPAGE ( int CODE_PAGE )
{
         SetConsoleOutputCP ( CODE_PAGE );

         for ( int kaj = 0; kaj < 300; kaj++ )
            printf ("Caractere %d -> ( %c )\n", kaj , kaj );
}





// FUNCTION: THIS FUNCTION WILL CLEAR ALL THE STRING
// @param01: STRING { THE STRING THAT WILL BE CLEANED }
void
allen_CLEARSTRING ( char * STRING )
{
    memset ( STRING , 0, strlen ( STRING ) );
}





// FUNCTION: RETURNS THE HIGHER VALUE OF A INT ARRAY
// @param01: SIZE { THE SIZE OF THE ARRAY }
// @param02: ARRAY { THE ARRAY ITSELF }
int
allen_HIGHERARRAYint ( int SIZE , int ARRAY [] )
{
                   int HIGHER = ARRAY [0];

  for ( int i = 1; i < SIZE; i++ )
     if ( ARRAY [i] > HIGHER ) HIGHER = ARRAY [i];

  return HIGHER;
}





// FUNCTION: RETURNS THE HIGHER VALUE OF A BIDIMENSIONAL INT ARRAY
// @param01: LINES { HOW MANY LINES THIS B. ARRAY HAVE }
// @param02: COLUNS { HOW MANY COLS THIS B. ARRAY HAVE }
// @param03: B_ARRAY { THE B_ARRAY ITSELF }
int
allen_HIGHERBARRAYint ( int LINES , int COLUNS , int B_ARRAY [LINES] [COLUNS] )
{
                   int HIGHER = B_ARRAY [0] [0];
                   int l = 0, c = 0;

  for ( l = 0; l < LINES; l++ )
        for ( c = 0; c < COLUNS; c++ )
            if ( B_ARRAY [l] [c] > HIGHER )
                HIGHER = B_ARRAY [l] [c];

  return HIGHER;
}





// FUNCTION: RETURNS THE LOWER INT VALUE OF A ARRAY
// @param01: SIZE { THE LENGTH OF THE ARRAY }
// @param02: ARRAY { THE ARRAY ITSELF }
int
allen_LOWERARRAYint ( int SIZE , int ARRAY [] )
{
                   int LOWER = ARRAY [0];
                   int i = 0;

  for ( i = 1; i < SIZE; i++ )
     if ( ARRAY [i] < LOWER ) LOWER = ARRAY [i];

  return LOWER;
}





// FUNCTION: RETURNS THE LOWER INT VALUE OF A BIDIMENSIONAL ARRAY
// @param01: LINES { THE LINES OF THE B_ARRAY }
// @param02: COLUNS { THE COLUNS OF THE B_ARRAY }
// @param03: B_ARRAY { THE B_ARRAY ITSELF }
int
allen_LOWERBARRAYint ( int LINES , int COLUNS , int B_ARRAY [LINES] [COLUNS] )
{
                   int LOWER = INT_MAX;
                   int l = 0, c = 0;

  for ( l = 0; l < LINES; l++ )
        for ( c = 0; c < COLUNS; c++ )
            if ( B_ARRAY [l] [c] < LOWER )
                LOWER = B_ARRAY [l] [c];

  return LOWER;
}





// FUNCTION: CHANGE SOMETHING FROM THE ARRAY
// @param01: SIZE { THE LENGTH OF THE ARRAY }
// @param02: ARRAY { THE ARRAY ITSELF }
// @param03: CONDITION { THE CONDITION TO CHANGE }
// @param04: COMPARATOR { THE COMPARATOR TO EVALIDATE }
// @param05: TOKEN { CHANGE FOR THIS }
int
allen_SUBSINTARRAY ( int SIZE , int ARRAY [] , int CONDITION , int COMPARATOR , int TOKEN )
{

    int kaj = 0, jak = 0 , pos = 0, COPYA [SIZE], temp = 0;

     switch ( CONDITION )
     {
     case HT:
         for ( kaj = 0; kaj < SIZE; kaj++ )
           if ( ARRAY [kaj] > COMPARATOR ) { ARRAY [kaj] = TOKEN; pos++; }
                return pos;
     break;

     case LT:
          for ( kaj = 0; kaj < SIZE; kaj++ )
           if ( ARRAY [kaj] < COMPARATOR ) { ARRAY [kaj] = TOKEN; pos++; }
                return pos;
     break;

     case EQ:
          for ( kaj = 0; kaj < SIZE; kaj++ )
           if ( ARRAY [kaj] == COMPARATOR ) { ARRAY [kaj] = TOKEN; pos++; }
                return pos;
     break;

     case DF:
          for ( kaj = 0; kaj < SIZE; kaj++ )
           if ( ARRAY [kaj] not_eq COMPARATOR ) { ARRAY [kaj] = TOKEN; pos++; }
                return pos;
     break;

     case HE:
          for ( kaj = 0; kaj < SIZE; kaj++ )
            if ( ARRAY [kaj] >= COMPARATOR ) { ARRAY [kaj] = TOKEN; pos++; }
                 return pos;
     break;

     case LE:
          for ( kaj = 0; kaj < SIZE; kaj++ )
           if ( ARRAY [kaj] <= COMPARATOR ) { ARRAY [kaj] = TOKEN; pos++; }
                return pos;
     break;

     case PAR:
         for ( kaj = 0; kaj < SIZE; kaj++ )
           if ( ARRAY [kaj] % 2 == 0 ) { ARRAY [kaj] = TOKEN; pos++; }
                return pos;
     break;

     case IMPAR:
         for ( kaj = 0; kaj < SIZE; kaj++ )
           if ( ARRAY [kaj] % 2 not_eq 0 ) { ARRAY [kaj] = TOKEN; pos++; }
                return pos;
     break;

     case MULTIPLO:
         for ( kaj = 0; kaj < SIZE; kaj++ )
           if ( ARRAY [kaj] % COMPARATOR == 0 ) { ARRAY [kaj] = TOKEN; pos++; }
                return pos;
     break;

     case NOTMULTIPLO:
         for ( kaj = 0; kaj < SIZE; kaj++ )
           if ( ARRAY [kaj] % COMPARATOR not_eq 0 ) { ARRAY [kaj] = TOKEN; pos++; }
                return pos;
     break;

     case QUADRADO_X_EQ_Y:
         for ( kaj = 0; kaj < SIZE; kaj++ )
           if ( pow ( ARRAY [kaj] , 2 ) == COMPARATOR ) { ARRAY [kaj] = TOKEN; pos++; }
                return pos;
     break;

     case QUADRADO_X_DF_Y:
         for ( kaj = 0; kaj < SIZE; kaj++ )
           if ( pow ( ARRAY [kaj] , 2 ) not_eq COMPARATOR ) { ARRAY [kaj] = TOKEN; pos++; }
                return pos;
     break;

     case INVERSO:

         for ( kaj = 0; kaj < SIZE; kaj++ )
               COPYA [kaj] = ARRAY [kaj];

         for ( kaj = SIZE - 1; kaj > -1; kaj-- )
         {
               ARRAY [pos] = COPYA [kaj];
               pos++;
         }

     return pos;
     break;

     case CRESCENTE:
                   for ( kaj = 0; kaj < SIZE - 1; kaj++ )
                       for ( jak = kaj + 1; jak < SIZE; jak++ )
                             if ( ARRAY [kaj] > ARRAY [jak] )
                             {
                                  temp = ARRAY [kaj];
                                  ARRAY [kaj] = ARRAY [jak];
                                  ARRAY [jak] = temp;
                                  pos++;
                             }
     return pos;
     break;


     case DECRESCENTE:
                    for ( kaj = 0; kaj < SIZE - 1; kaj++ )
                       for ( jak = kaj + 1; jak < SIZE; jak++ )
                             if ( ARRAY [kaj] < ARRAY [jak] )
                             {
                                  temp = ARRAY [kaj];
                                  ARRAY [kaj] = ARRAY [jak];
                                  ARRAY [jak] = temp;
                                  pos++;
                             }

     break;

     }

     return pos;
}





// FUNCTION: COPY THE CONTENT OF A ARRAY TO A NEW ONE
// @param01: SIZE { THE LENGTH OF THE ARRAY }
// @param02: ARRAY { THE ARRAY ITSELF }
// @param03: CONDITION { THE CONDITION TO CHANGE }
// @param04: COMPARATOR { THE COMPARATOR TO EVALIDATE }
// @param05: NEW_ARRAY { THE NEW ARRAY THAT WILL RECEIVE }
int
allen_COPYINTARRAY ( int SIZE , int ARRAY [] , int CONDITION , int COMPARATOR , int NEW_ARRAY [] )
{
    int jak = 0, kaj = 0, pos = 0, temp = 0;

    switch ( CONDITION )
     {
     case HT:
            for ( jak = 0; jak < SIZE; jak++ )
                  if ( ARRAY [jak] > COMPARATOR ) { NEW_ARRAY [pos] = ARRAY [jak]; pos++; }

     return pos;
     break;

     case LT:
            for ( jak = 0; jak < SIZE; jak++ )
                  if ( ARRAY [jak] < COMPARATOR ) { NEW_ARRAY [pos] = ARRAY [jak]; pos++; }
     return pos;
     break;

     case EQ:
            for ( jak = 0; jak < SIZE; jak++ )
                  if ( ARRAY [jak] == COMPARATOR ) { NEW_ARRAY [pos] = ARRAY [jak]; pos++; }
     return pos;
     break;

     case DF:
            for ( jak = 0; jak < SIZE; jak++ )
                  if ( ARRAY [jak] not_eq COMPARATOR ) { NEW_ARRAY [pos] = ARRAY [jak]; pos++; }
     return pos;
     break;

     case HE:
            for ( jak = 0; jak < SIZE; jak++ )
                  if ( ARRAY [jak] >= COMPARATOR ) { NEW_ARRAY [pos] = ARRAY [jak]; pos++; }
     return pos;
     break;

     case LE:
            for ( jak = 0; jak < SIZE; jak++ )
                  if ( ARRAY [jak] <= COMPARATOR ) { NEW_ARRAY [pos] = ARRAY [jak]; pos++; }
     return pos;
     break;

     case PAR:
             for ( jak = 0; jak < SIZE; jak++ )
                  if ( ARRAY [jak] % 2 == 0 ) { NEW_ARRAY [pos] = ARRAY [jak]; pos++; }
     return pos;
     break;

     case IMPAR:
               for ( jak = 0; jak < SIZE; jak++ )
                  if ( ARRAY [jak] % 2 not_eq 0 ) { NEW_ARRAY [pos] = ARRAY [jak]; pos++; }
     return pos;
     break;

     case MULTIPLO:
                  for ( jak = 0; jak < SIZE; jak++ )
                     if ( ARRAY [jak] % COMPARATOR == 0 ) { NEW_ARRAY [pos] = ARRAY [jak]; pos++; }
     return pos;
     break;

     case  NOTMULTIPLO:
                      for ( jak = 0; jak < SIZE; jak++ )
                         if ( ARRAY [jak] % COMPARATOR not_eq 0 ) { NEW_ARRAY [pos] = ARRAY [jak]; pos++; }
     return pos;
     break;

     case QUADRADO_X_EQ_Y:
                         for ( jak = 0; jak < SIZE; jak++ )
                         if ( pow ( ARRAY [jak] , 2 ) == COMPARATOR ) { NEW_ARRAY [pos] = ARRAY [jak]; pos++; }
     return pos;
     break;

     case QUADRADO_X_DF_Y:
                        for ( jak = 0; jak < SIZE; jak++ )
                        if ( pow ( ARRAY [jak] , 2 ) not_eq COMPARATOR ) { NEW_ARRAY [pos] = ARRAY [jak]; pos++; }
     return pos;
     break;

     case INVERSO:
                        for ( jak = 0; jak < SIZE; jak++ )
                              NEW_ARRAY [jak] = ARRAY [jak];

                        for ( jak = SIZE - 1; jak > -1; jak-- )
                        {
                               NEW_ARRAY [pos] = ARRAY [jak];
                               pos++;
                        }
     return pos;
     break;

     case CRESCENTE:
                       for ( kaj = 0; kaj < SIZE - 1; kaj++ )
                       {
                       for ( jak = kaj + 1; jak < SIZE; jak++ )
                             if ( ARRAY [kaj] > ARRAY [jak] )
                             {
                                  temp = ARRAY [kaj];
                                  ARRAY [kaj] = ARRAY [jak];
                                  ARRAY [jak] = temp;
                                  pos++;
                             }
                       }
                       for ( kaj = 0; kaj < SIZE; kaj++ )
     NEW_ARRAY [kaj] = ARRAY [kaj];
     return pos;
     break;

     case DECRESCENTE:

                     for ( kaj = 0; kaj < SIZE - 1; kaj++ )
                     {
                       for ( jak = kaj + 1; jak < SIZE; jak++ )
                             if ( ARRAY [kaj] < ARRAY [jak] )
                             {
                                  temp = ARRAY [kaj];
                                  ARRAY [kaj] = ARRAY [jak];
                                  ARRAY [jak] = temp;
                                  pos++;
                             }
                     }
                       for ( kaj = 0; kaj < SIZE; kaj++ )
     NEW_ARRAY [kaj] = ARRAY [kaj];

     break;

     }
     return pos;
}





// FUNCTION: CLEAR A INT ARRAY
// @param01: SIZE { THE LENGTH OF THE ARRAY }
// @param02: ARRAY { THE ARRAY ITSELF }
void
allen_CLEARINTARRAY  ( int SIZE , int ARRAY [] )
{
      int jaks;

      for ( jaks = 0; jaks < SIZE; jaks++ ) ARRAY [jaks] = 0;
}





// FUNCTION: CHANGE SOMETHING IN THE INT B_ARRAY
// @param01: LINES { THE LINES OF THE B_ARRAY }
// @param02: COLUNS { THE COLUNS OF THE B_ARRAY }
// @param03: CONDITION { THE CONDITION TO CHANGE }
// @param04: COMPARATOR { THE COMPARATOR TO EVALIDATE }
// @param05: B_ARRAY { THE B_ARRAY ITSELF }
int
allen_SUBSINTBARRAY ( int LINES , int COLUNS , int CONDITION , int COMPARATOR , int TOKEN , int B_ARRAY [LINES] [COLUNS] )
{
    int pos = 0 , kaj = 0, jak = 0, low_1 = 0, low_2 = 0, COPYA [LINES] [COLUNS], SIZE = LINES * COLUNS , VET [SIZE];

    switch ( CONDITION )
     {
     case HT:
             for ( kaj = 0; kaj < LINES; kaj++ ) for ( jak = 0; jak < COLUNS; jak++ )
                   if ( B_ARRAY [kaj] [jak] > COMPARATOR ) { B_ARRAY [kaj] [jak] = TOKEN; pos++; }

     return pos;
     break;

     case LT:
             for ( kaj = 0; kaj < LINES; kaj++ ) for ( jak = 0; jak < COLUNS; jak++ )
                   if ( B_ARRAY [kaj] [jak] < COMPARATOR ) { B_ARRAY [kaj] [jak] = TOKEN; pos++; }
     return pos;
     break;

     case EQ:
            for ( kaj = 0; kaj < LINES; kaj++ ) for ( jak = 0; jak < COLUNS; jak++ )
                  if ( B_ARRAY [kaj] [jak] == COMPARATOR ) { B_ARRAY [kaj] [jak] = TOKEN; pos++; }
     return pos;
     break;

     case DF:
             for ( kaj = 0; kaj < LINES; kaj++ ) for ( jak = 0; jak < COLUNS; jak++ )
                   if ( B_ARRAY [kaj] [jak] not_eq COMPARATOR ) { B_ARRAY [kaj] [jak] = TOKEN; pos++; }
     return pos;
     break;

     case HE:
             for ( kaj = 0; kaj < LINES; kaj++ ) for ( jak = 0; jak < COLUNS; jak++ )
                   if ( B_ARRAY [kaj] [jak] >= COMPARATOR ) { B_ARRAY [kaj] [jak] = TOKEN; pos++; }
     return pos;
     break;

     case LE:
             for ( kaj = 0; kaj < LINES; kaj++ ) for ( jak = 0; jak < COLUNS; jak++ )
                   if ( B_ARRAY [kaj] [jak] <= COMPARATOR ) { B_ARRAY [kaj] [jak] = TOKEN; pos++; }
     return pos;
     break;

     case PAR:
              for ( kaj = 0; kaj < LINES; kaj++ ) for ( jak = 0; jak < COLUNS; jak++ )
                   if ( B_ARRAY [kaj] [jak] % 2 == 0 ) { B_ARRAY [kaj] [jak] = TOKEN; pos++; }
     return pos;
     break;

     case IMPAR:
                for ( kaj = 0; kaj < LINES; kaj++ ) for ( jak = 0; jak < COLUNS; jak++ )
                   if ( B_ARRAY [kaj] [jak] % 2 not_eq 0 ) { B_ARRAY [kaj] [jak] = TOKEN; pos++; }
     return pos;
     break;

     case MULTIPLO:
                   for ( kaj = 0; kaj < LINES; kaj++ ) for ( jak = 0; jak < COLUNS; jak++ )
                         if ( B_ARRAY [kaj] [jak] % COMPARATOR == 0 ) { B_ARRAY [kaj] [jak] = TOKEN; pos++; }
     return pos;
     break;

     case NOTMULTIPLO:
                      for ( kaj = 0; kaj < LINES; kaj++ ) for ( jak = 0; jak < COLUNS; jak++ )
                            if ( B_ARRAY [kaj] [jak] % COMPARATOR not_eq 0 ) { B_ARRAY [kaj] [jak] = TOKEN; pos++; }
     return pos;
     break;

     case QUADRADO_X_EQ_Y:
                          for ( kaj = 0; kaj < LINES; kaj++ ) for ( jak = 0; jak < COLUNS; jak++ )
                                if ( pow ( B_ARRAY [kaj] [jak] , 2 ) == COMPARATOR ) { B_ARRAY [kaj] [jak] = TOKEN; pos++; }
     return pos;
     break;

     case QUADRADO_X_DF_Y:
                          for ( kaj = 0; kaj < LINES; kaj++ ) for ( jak = 0; jak < COLUNS; jak++ )
                                if ( pow ( B_ARRAY [kaj] [jak] , 2 ) not_eq COMPARATOR ) { B_ARRAY [kaj] [jak] = TOKEN; pos++; }
     return pos;
     break;

     case INVERSO:
                         for ( kaj = LINES - 1; kaj >= 0; kaj-- , low_1++ ) for ( jak = COLUNS - 1; jak >= 0; jak-- , low_2++ )
                         { COPYA [ low_1 ] [ low_2 ] = B_ARRAY [ kaj ] [ jak ]; pos++; }


                         low_1 = 0; low_2 = 0;

                         for ( kaj = 0; kaj < LINES;  low_1++ , kaj++ ) for ( jak = 0; jak < COLUNS; low_2++ , jak++ )
                         B_ARRAY [ kaj ] [ jak ] = COPYA [ low_1 ] [ low_2 ];
     return pos;
     break;

     case CRESCENTE:
                         low_1 = 0;

                         for ( kaj = 0; kaj < LINES; kaj++ ) for ( jak = 0; jak < COLUNS; jak++ )
                         {
                              VET [ low_1 ] = B_ARRAY [ kaj ] [ jak ];
                              low_1++;
                         }

                         for ( kaj = 0; kaj < SIZE - 1; kaj++ ) for ( jak = kaj + 1; jak < SIZE; jak++ )

                            if ( VET [kaj] > VET [jak] )
                            {
                                  low_2 = VET [kaj];
                                  VET [kaj] = VET [jak];
                                  VET [jak] = low_2;
                                  pos++;
                            }

                         low_2 = 0;

                         for ( kaj = 0; kaj < LINES; kaj++ ) for ( jak = 0; jak < COLUNS; jak++ )
                         {
                            B_ARRAY [ kaj ] [ jak ] = VET [low_2];
                            low_2++;
                         }
     return pos;
     break;


     case DECRESCENTE:
                                                  low_1 = 0;

                         for ( kaj = 0; kaj < LINES; kaj++ ) for ( jak = 0; jak < COLUNS; jak++ )
                         {
                              VET [ low_1 ] = B_ARRAY [ kaj ] [ jak ];
                              // printf ("%d " , VET [low_1] );
                              low_1++;
                         }

                         for ( kaj = 0; kaj < SIZE - 1; kaj++ ) for ( jak = kaj + 1; jak < SIZE; jak++ )

                            if ( VET [kaj] < VET [jak] )
                            {
                                  low_2 = VET [kaj];
                                  VET [kaj] = VET [jak];
                                  VET [jak] = low_2;
                                  pos++;
                            }

                         low_2 = 0;

                         for ( kaj = 0; kaj < LINES; kaj++ ) for ( jak = 0; jak < COLUNS; jak++ )
                         {
                            B_ARRAY [ kaj ] [ jak ] = VET [low_2];
                            low_2++;
                         }
     return pos;
     break;

     }

    return pos;
}





// FUNCTION: COPY THE CONTENT OF A B_ARRAY TO A NEW ONE
// @param01: LINES { THE LINES OF THE B_ARRAY }
// @param02: COLUNS { THE COLUNS OF THE B_ARRAY }
// @param03: CONDITION { THE CONDITION TO CHANGE }
// @param04: COMPARATOR { THE COMPARATOR TO EVALIDATE }
// @param05: B_ARRAY { THE ARRAY ITSELF }
// @param06: NEW_B_ARRAY { THE NEW ARRAY }
int
allen_COPYINTBARRAY ( int LINES , int COLUNS , int CONDITION , int COMPARATOR , int B_ARRAY [LINES] [COLUNS] , int NEW_B_ARRAY [LINES] [COLUNS] )
{
    int pos = 0 , kaj = 0, jak = 0, low_1 = 0, low_2 = 0, COPYA [LINES] [COLUNS], SIZE = LINES * COLUNS , VET [SIZE], i = 0, j = 0;

    switch ( CONDITION )
     {
     case HT:
             for ( kaj = 0; kaj < LINES; kaj++ ) for ( jak = 0; jak < COLUNS; jak++ )
                   if ( B_ARRAY [kaj] [jak] > COMPARATOR ) { NEW_B_ARRAY [i] [j] = B_ARRAY [kaj] [jak];  pos++; j++; if ( j == COLUNS ) i++; }
     return pos;
     break;


     case LT:
             for ( kaj = 0; kaj < LINES; kaj++ ) for ( jak = 0; jak < COLUNS; jak++ )
                   if ( B_ARRAY [kaj] [jak] < COMPARATOR ) { NEW_B_ARRAY [i] [j] = B_ARRAY [kaj] [jak];  pos++; j++; if ( j == COLUNS ) i++; }
     return pos;
     break;



     case EQ:
            for ( kaj = 0; kaj < LINES; kaj++ ) for ( jak = 0; jak < COLUNS; jak++ )
                   if ( B_ARRAY [kaj] [jak] == COMPARATOR ) { NEW_B_ARRAY [i] [j] = B_ARRAY [kaj] [jak];  pos++; j++; if ( j == COLUNS ) i++;  }
     return pos;
     break;



     case DF:
             for ( kaj = 0; kaj < LINES; kaj++ ) for ( jak = 0; jak < COLUNS; jak++ )
                   if ( B_ARRAY [kaj] [jak] not_eq COMPARATOR ) { NEW_B_ARRAY [i] [j] = B_ARRAY [kaj] [jak];  pos++; j++; if ( j == COLUNS ) i++; }
     return pos;
     break;



     case HE:
             for ( kaj = 0; kaj < LINES; kaj++ ) for ( jak = 0; jak < COLUNS; jak++ )
                   if ( B_ARRAY [kaj] [jak] >= COMPARATOR ) { NEW_B_ARRAY [i] [j] = B_ARRAY [kaj] [jak];  pos++; j++; if ( j == COLUNS ) i++; }
     return pos;
     break;



     case LE:
             for ( kaj = 0; kaj < LINES; kaj++ ) for ( jak = 0; jak < COLUNS; jak++ )
                   if ( B_ARRAY [kaj] [jak] <= COMPARATOR ) { NEW_B_ARRAY [i] [j] = B_ARRAY [kaj] [jak];  pos++; j++; if ( j == COLUNS ) i++; }
     return pos;
     break;



     case PAR:
              for ( kaj = 0; kaj < LINES; kaj++ ) for ( jak = 0; jak < COLUNS; jak++ )
                   if ( B_ARRAY [kaj] [jak] % 2 == 0 ) { NEW_B_ARRAY [i] [j] = B_ARRAY [kaj] [jak];  pos++; j++; if ( j == COLUNS ) i++;  }
     return pos;
     break;



     case IMPAR:
                for ( kaj = 0; kaj < LINES; kaj++ ) for ( jak = 0; jak < COLUNS; jak++ )
                   if ( B_ARRAY [kaj] [jak] % 2 not_eq 0 ) { NEW_B_ARRAY [i] [j] = B_ARRAY [kaj] [jak];  pos++; j++; if ( j == COLUNS ) i++; }
     return pos;
     break;



     case MULTIPLO:
                   for ( kaj = 0; kaj < LINES; kaj++ ) for ( jak = 0; jak < COLUNS; jak++ )
                         if ( B_ARRAY [kaj] [jak] % COMPARATOR == 0 ) { NEW_B_ARRAY [i] [j] = B_ARRAY [kaj] [jak];  pos++; j++; if ( j == COLUNS ) i++; }
     return pos;
     break;



     case NOTMULTIPLO:
                      for ( kaj = 0; kaj < LINES; kaj++ ) for ( jak = 0; jak < COLUNS; jak++ )
                         if ( B_ARRAY [kaj] [jak] % COMPARATOR not_eq 0 ) { NEW_B_ARRAY [i] [j] = B_ARRAY [kaj] [jak];  pos++; j++; if ( j == COLUNS ) i++; }
     return pos;
     break;



     case QUADRADO_X_EQ_Y:
                          for ( kaj = 0; kaj < LINES; kaj++ ) for ( jak = 0; jak < COLUNS; jak++ )
                             if ( pow ( B_ARRAY [kaj] [jak] , 2 ) == COMPARATOR ) { NEW_B_ARRAY [i] [j] = B_ARRAY [kaj] [jak];  pos++; j++; if ( j == COLUNS ) i++; }
     return pos;
     break;



     case QUADRADO_X_DF_Y:
                          for ( kaj = 0; kaj < LINES; kaj++ ) for ( jak = 0; jak < COLUNS; jak++ )
                             if ( pow ( B_ARRAY [kaj] [jak] , 2 ) not_eq COMPARATOR ) { NEW_B_ARRAY [i] [j] = B_ARRAY [kaj] [jak];  pos++; j++; if ( j == COLUNS ) i++; }
     return pos;
     break;



     case INVERSO:
                         for ( kaj = LINES - 1; kaj >= 0; kaj-- , low_1++ ) for ( jak = COLUNS - 1; jak >= 0; jak-- , low_2++ )
                         { COPYA [ low_1 ] [ low_2 ] = B_ARRAY [ kaj ] [ jak ]; pos++; }


                         low_1 = 0; low_2 = 0;

                         for ( kaj = 0; kaj < LINES;  low_1++ , kaj++ ) for ( jak = 0; jak < COLUNS; low_2++ , jak++ )
                         NEW_B_ARRAY [ kaj ] [ jak ] = COPYA [ low_1 ] [ low_2 ];
     return pos;
     break;



     case CRESCENTE:
                         low_1 = 0;

                         for ( kaj = 0; kaj < LINES; kaj++ ) for ( jak = 0; jak < COLUNS; jak++ )
                         {
                              VET [ low_1 ] = B_ARRAY [ kaj ] [ jak ];
                              low_1++;
                         }

                         for ( kaj = 0; kaj < SIZE - 1; kaj++ ) for ( jak = kaj + 1; jak < SIZE; jak++ )

                            if ( VET [kaj] > VET [jak] )
                            {
                                  low_2 = VET [kaj];
                                  VET [kaj] = VET [jak];
                                  VET [jak] = low_2;
                                  pos++;
                            }

                         low_2 = 0;

                         for ( kaj = 0; kaj < LINES; kaj++ ) for ( jak = 0; jak < COLUNS; jak++ )
                         {
                            NEW_B_ARRAY [ kaj ] [ jak ] = VET [low_2];
                            low_2++;
                         }
     return pos;
     break;


     case DECRESCENTE:
                                                  low_1 = 0;

                         for ( kaj = 0; kaj < LINES; kaj++ ) for ( jak = 0; jak < COLUNS; jak++ )
                         {
                              VET [ low_1 ] = B_ARRAY [ kaj ] [ jak ];
                              // printf ("%d " , VET [low_1] );
                              low_1++;
                         }

                         for ( kaj = 0; kaj < SIZE - 1; kaj++ ) for ( jak = kaj + 1; jak < SIZE; jak++ )

                            if ( VET [kaj] < VET [jak] )
                            {
                                  low_2 = VET [kaj];
                                  VET [kaj] = VET [jak];
                                  VET [jak] = low_2;
                                  pos++;
                            }

                         low_2 = 0;

                         for ( kaj = 0; kaj < LINES; kaj++ ) for ( jak = 0; jak < COLUNS; jak++ )
                         {
                            NEW_B_ARRAY [ kaj ] [ jak ] = VET [low_2];
                            low_2++;
                         }
     return pos;
     break;

     }

    return pos;
}





// FUNCTION: CLEAR A INT B_ARRAY
// @param01: LINES { THE LINES OF THE B_ARRAY }
// @param02: COLUNS { THE COLUNS OF THE B_ARRAY }
// @param05: B_ARRAY { THE ARRAY ITSELF }
void
allen_CLEARINTBARRAY  ( int LINES , int COLUNS , int B_ARRAY [ LINES ] [ COLUNS ] )
{
      int allen, llen;

      for ( allen = 0; allen < LINES; allen++ ) for ( llen = 0; llen < COLUNS; llen++ ) B_ARRAY [allen] [llen] = 0;
}





// FUNCTION: ADD TO A EXISTING STRING ANOTHER CONTENT
// @param01: STRING { THE STRING THAT WILL RECEIVE }
// @param02: ADD { THE NEW CONTENT THAT WILL BE ADDED TO THE STRING }
void
allen_ADDTOSTRING ( char STRING [] , char ADD [] )
{
    sprintf ( STRING , "%s%s" , STRING , ADD );
}





// FUNCTION: REMAKE THE STRING IF WAS "ROBSON" AFTER THE USE OF THIS FUNCTION WILL BE THE NEW %s
// @param01: STRING { THE STRING THAT WILL RECEIVE }
// @param02: REMAKE { THE NEW STRING THAT WILL REPLACE STRING }
void
allen_REMAKESTRING ( char STRING [] , char REMAKE [] )
{
     sprintf ( STRING , "%s" , REMAKE );
}




// SB




// FUNCTION: CREATE A MESSAGE BOX
// @param01: BOX_TEXT { THE TEXT THAT WILL BE PRINTED INSIDE THE BOX }
// @param02: BOX_CAPTION { THE BOX CAPTION }
// @param02: BOX_TYPE { THE BOX STYLE | ESPECIFICATIONS }
int
SB_CREATEBOX ( LPCTSTR BOX_TEXT , LPCTSTR BOX_CAPTION, UINT BOX_TYPE )
{
    return MessageBox ( NULL , BOX_TEXT, BOX_CAPTION, BOX_TYPE );
}





// FUNCTION: PLAY A SYSTEM SOUND
// @param01: SOUND { PLAY A SYSTEM SOUND }
void
SB_PLAYSOUND ( UINT SOUND )
{
   MessageBeep ( SOUND );
}




// MATTE FUNCTIONS




// FUNCTION: RETURNS THE COSINE RADIAN ANGLE
// @param01: COS { THE COSINE OF A ANGLE }
// @param02: PRINT { IF TRUE PRINTS THE RESULT }
// @param03: COMMAS { SET HOW MANY COMMAS WILL BE PRINTED }
double
MATTE_cosseno ( double COS , bool PRINT , int COMMAS )
{
                COS = acos ( COS );

                if ( PRINT == true ) printf ("%.*lf", (COMMAS <= 0) ? 0 : COMMAS, COS);

                return COS;
}





// FUNCTION: RETURNS THE SINE RADIAN ANGLE
// @param01: SIN { THE SIN OF A ANGLE }
// @param02: PRINT { IF TRUE PRINTS THE RESULT }
// @param03: COMMAS { SET HOW MANY COMMAS WILL BE PRINTED }
double
MATTE_seno ( double SIN , bool PRINT , int COMMAS )
{
             SIN = asin ( SIN );

             if ( PRINT == true ) printf ("%.*lf", (COMMAS <= 0) ? 0 : COMMAS, SIN);

             return SIN;
}





// FUNCTION: RETURNS THE TANGENT RADIAN ANGLE
// @param01: TAN { THE TANGENT OF A ANGLE }
// @param02: PRINT { IF TRUE PRINTS THE RESULT }
// @param03: COMMAS { SET HOW MANY COMMAS WILL BE PRINTED }
double
MATTE_tangente ( double TAN , bool PRINT , int COMMAS )
{
                 TAN = atan ( TAN );

                 if ( PRINT == true ) printf ("%.*lf", (COMMAS <= 0) ? 0 : COMMAS, TAN);

                 return TAN;
}





// FUNCTION: RETURNS THE TANGENT RADIAN ANGLE
// @param01: X { THE X COORDINATE }
// @param02: Y { THE Y COORDINATE }
// @param03: PRINT { IF TRUE PRINTS THE RESULT }
// @param04: COMMAS { SET HOW MANY COMMAS WILL BE PRINTED }
double
MATTE_arcotangente ( double X , double Y , bool PRINT , int COMMAS )
{


                     double ARCO = atan2 ( Y , X );

                     if ( PRINT == true ) printf ("%.*lf", (COMMAS <= 0) ? 0 : COMMAS, ARCO);

                     return ARCO;
}





// FUNCTION: ROUNDS A DOUBLE VALUE TO A HIGHER VALUE AND RETURN
// @param01: X { THE VALUE THAT WILL BE USED }
// @param02: PRINT { IF TRUE PRINTS THE RESULT }
// @param03: COMMAS { SET HOW MANY COMMAS WILL BE PRINTED }
double
MATTE_arredondarparamaior ( double X , bool PRINT , int COMMAS )
{
                            X = ceil ( X );

                            if ( PRINT == true ) printf ("%.*lf", (COMMAS <= 0) ? 0 : COMMAS, X);

                            return X;
}





// FUNCTION: RETURNS THE COSINE OF THE INFORMED ANGLE
// @param01: ANGULO { THE ANGLE VALUE THAT WILL BE USED }
// @param02: PRINT { IF TRUE PRINTS THE RESULT }
// @param03: COMMAS { SET HOW MANY COMMAS WILL BE PRINTED }
double
MATTE_cosemrad ( double ANGULO , bool PRINT , int COMMAS )
{
                 ANGULO = cos ( ANGULO );

                 if ( PRINT == true ) printf ("%.*lf", (COMMAS <= 0) ? 0 : COMMAS, ANGULO);

                 return ANGULO;
}





// FUNCTION: RETURNS THE HYPERBOLIC COSINE OF THE ANGLE
// @param01: ANGULO { THE ANGLE VALUE THAT WILL BE USED }
// @param02: PRINT { IF TRUE PRINTS THE RESULT }
// @param03: COMMAS { SET HOW MANY COMMAS WILL BE PRINTED }
double
MATTE_coshiperbolico ( double ANGULO , bool PRINT , int COMMAS )
{
                       ANGULO = cosh ( ANGULO );

                       if ( PRINT == true ) printf ("%.*lf", (COMMAS <= 0) ? 0 : COMMAS, ANGULO);

                       return ANGULO;
}





// FUNCTION: RETURNS THE EULER NUMBER (~2.71) RAISED TO X
// @param01: X { A DOUBLE VALUE }
// @param02: PRINT { IF TRUE PRINTS THE RESULT }
// @param03: COMMAS { SET HOW MANY COMMAS WILL BE PRINTED }
double
MATTE_exp ( double X , bool PRINT , int COMMAS )
{
            X = exp ( X );

            if ( PRINT == true ) printf ("%.*lf", (COMMAS <= 0) ? 0 : COMMAS, X);

            return X;
}





// FUNCTION: RETURNS THE MODULUS OF A DOUBLE NUMBER
// @param01: X { A DOUBLE VALUE }
// @param02: PRINT { IF TRUE PRINTS THE RESULT }
// @param03: COMMAS { SET HOW MANY COMMAS WILL BE PRINTED }
double
MATTE_modulo ( double X , bool PRINT , int COMMAS )
{
               X = fabs ( X );

               if ( PRINT == true ) printf ("%.*lf", (COMMAS <= 0) ? 0 : COMMAS, X);

               return X;
}





// FUNCTION: RETURNS THE SMALLEST INT VALUE
// @param01: X { A DOUBLE VALUE }
// @param02: PRINT { IF TRUE PRINTS THE RESULT }
// @param03: COMMAS { SET HOW MANY COMMAS WILL BE PRINTED }
double
MATTE_arredondarparamenor ( double X , bool PRINT , int COMMAS )
{
                            X = floor ( X );

                            if ( PRINT == true ) printf ("%.*lf", (COMMAS <= 0) ? 0 : COMMAS, X);

                            return X;
}





// FUNCTION: RETURNS THE X * EXPOENTE ^ exp
// @param01: X { A DOUBLE VALUE }
// @param02: EXPOENTE { A INT VALUE }
// @param03: PRINT { IF TRUE PRINTS THE RESULT }
// @param04: COMMAS { SET HOW MANY COMMAS WILL BE PRINTED }
double
MATTE_ldexp ( double X , int EXPOENTE , bool PRINT , int COMMAS )
{
                 X = ldexp ( X , EXPOENTE );

                 if ( PRINT == true ) printf ("%.*lf", (COMMAS <= 0) ? 0 : COMMAS, X);

                 return X;
}





// FUNCTION: RETURNS THE LOGARITHM OF X IN THE e BASE
// @param01: X { A DOUBLE VALUE }
// @param02: PRINT { IF TRUE PRINTS THE RESULT }
// @param03: COMMAS { SET HOW MANY COMMAS WILL BE PRINTED }
double
MATTE_log ( double X , bool PRINT , int COMMAS )
{
            X = log ( X );

            if ( PRINT == true ) printf ("%.*lf", (COMMAS <= 0) ? 0 : COMMAS, X);

            return X;
}





// FUNCTION: RETURNS THE LOGARITHM OF X IN THE 10 BASE
// @param01: X { A DOUBLE VALUE }
// @param02: PRINT { IF TRUE PRINTS THE RESULT }
// @param03: COMMAS { SET HOW MANY COMMAS WILL BE PRINTED }
double
MATTE_log10 ( double X , bool PRINT , int COMMAS )
{
              X = log10 ( X );

              if ( PRINT == true ) printf ("%.*lf", (COMMAS <= 0) ? 0 : COMMAS, X);

              return X;
}





// FUNCTION: RETURNS ONLY THE DECIMAL PART OF THE X
// @param01: X { A DOUBLE VALUE }
// @param02: PRINT { IF TRUE PRINTS THE RESULT }
// @param03: COMMAS { SET HOW MANY COMMAS WILL BE PRINTED }
double
MATTE_soapartedecimal ( double X , bool PRINT , int COMMAS )
{
        double P;

                        X = modf ( X , &P );

                        if ( PRINT == true ) printf ("%.*lf", (COMMAS <= 0) ? 0 : COMMAS, X);

                        return X;
}





// FUNCTION: RETURNS BASE ^ EXPO
// @param01: BASE { A DOUBLE VALUE }
// @param02: EXPO { A DOUBLE VALUE }
// @param03: PRINT { IF TRUE PRINTS THE RESULT }
// @param04: COMMAS { SET HOW MANY COMMAS WILL BE PRINTED }
double
MATTE_potencia ( double BASE , double EXPO , bool PRINT , int COMMAS )
{
                 double RESULT;

                 RESULT = pow ( BASE , EXPO );

                 if ( PRINT == true ) printf ("%.*lf", (COMMAS <= 0) ? 0 : COMMAS, RESULT);

                 return RESULT;
}





// FUNCTION: RETURNS THE SINE ANGLE
// @param01: ANGULO { A DOUBLE VALUE }
// @param02: PRINT { IF TRUE PRINTS THE RESULT }
// @param03: COMMAS { SET HOW MANY COMMAS WILL BE PRINTED }
double
MATTE_senoemrad ( double ANGULO , bool PRINT , int COMMAS )
{
                  ANGULO = sin ( ANGULO );

                  if ( PRINT == true ) printf ("%.*lf", (COMMAS <= 0) ? 0 : COMMAS, ANGULO);

                  return ANGULO;
}





// FUNCTION: RETURNS THE HIPERBOLIC SINE ANGLE
// @param01: ANGULO { A DOUBLE VALUE }
// @param02: PRINT { IF TRUE PRINTS THE RESULT }
// @param03: COMMAS { SET HOW MANY COMMAS WILL BE PRINTED }
double
MATTE_senohiperbolico ( double ANGULO , bool PRINT , int COMMAS )
{
                        ANGULO = sinh ( ANGULO );

                        if ( PRINT == true ) printf ("%.*lf", (COMMAS <= 0) ? 0 : COMMAS, ANGULO);

                        return ANGULO;
}





// FUNCTION: RETURNS THE SQUARE ROT OF X
// @param01: X { A DOUBLE VALUE }
// @param02: PRINT { IF TRUE PRINTS THE RESULT }
// @param03: COMMAS { SET HOW MANY COMMAS WILL BE PRINTED }
double
MATTE_raizquadrada ( double X , bool PRINT , int COMMAS )
{
                     X = sqrt ( X );

                     if ( PRINT == true ) printf ("%.*lf", (COMMAS <= 0) ? 0 : COMMAS, X);

                     return X;
}





// FUNCTION: RETURNS THE ANGLE TANGENT
// @param01: ANGULO { A DOUBLE VALUE }
// @param02: PRINT { IF TRUE PRINTS THE RESULT }
// @param03: COMMAS { SET HOW MANY COMMAS WILL BE PRINTED }
double
MATTE_tangenteemrad ( double ANGULO , bool PRINT , int COMMAS )
{
                      ANGULO = tan ( ANGULO );

                      if ( PRINT == true ) printf ("%.*lf", (COMMAS <= 0) ? 0 : COMMAS, ANGULO);

                      return ANGULO;
}





// FUNCTION: RETURNS THE HIPERBOLIC ANGLE TANGENT
// @param01: ANGULO { A DOUBLE VALUE }
// @param02: PRINT { IF TRUE PRINTS THE RESULT }
// @param03: COMMAS { SET HOW MANY COMMAS WILL BE PRINTED }
double
MATTE_tangentehiperbolica ( double ANGULO , bool PRINT , int COMMAS )
{
                            ANGULO = tanh ( ANGULO );

                            if ( PRINT == true ) printf ("%.*lf", (COMMAS <= 0) ? 0 : COMMAS, ANGULO);

                            return ANGULO;
}




// LOCH




// FUNCTION: SET THE CONSOLE REGION TO PORTUGUESE
void
LOCH_LOCAL ( void )
{
    setlocale ( LC_ALL , "portuguese_brazil" );
}





// FUNCTION: SET THE CONSOLE REGION TO A USER DEFINED VERSION
// @param01: TEXT { A REGION VALID TO LOCALE }
void
LOCH_SETLOCAL ( char REGION [] )
{
    setlocale ( LC_ALL , REGION );
}




// FLEE FUNCTIONS




// FUNCTION: WORKS LIKE PRINTF BUT FOR FILES
// @param01: FILE_NAME { THE NAME / PATH OF THE FILE }
// @param02: ADD { A REGION VALID TO LOCALE }
// @param03: TEXT { A REGION VALID TO LOCALE }
void
FLEE_PUTS ( const char * FILE_NAME, bool ADD , const char * TEXT , ... )
{

    FILE * file;

    if ( ADD == true  ) { file = fopen ( FILE_NAME , "a"); }
    if ( ADD == false ) { file = fopen ( FILE_NAME , "w"); }

    // if ( file == NULL ) printf ("Error with the file!\n");

    va_list args;
    va_start ( args , TEXT );
    vfprintf ( file , TEXT , args );
    va_end   ( args );

    fclose ( file );
}





// FUNCTION: CREATE A NEW FILE
// @param01: FILE_NAME { THE NAME OF THE FILE }
void
FLEE_CREATEAFILE ( const char* FILE_NAME )
{

                  FILE* file = fopen ( FILE_NAME , "w" );

                  // if ( file == NULL ) printf ("Error creating file!");

                  fclose ( file );
}





// FUNCTION: RENAME A EXISTING FILE
// @param01: FILE_NAME { THE NAME OF THE FILE }
// @param02: NEW_FILE_NAME { THE NEW NAME TO THIS FILE }
void
FLEE_RENAMEAFILE ( const char* FILE_NAME , const char * NEW_FILE_NAME )
{

                    rename ( FILE_NAME , NEW_FILE_NAME );

                    // int RESULT = rename ( FILE_NAME , NEW_FILE_NAME );
                    // if ( RESULT not_eq 0 ) printf ("Erro on renaming the file");
}





// FUNCTION: MOVE A ESPECIFIC FILE TO ANOTHER DIRECTORY
// @param01: FILE_NAME { THE NAME OF THE FILE }
// @param02: NEW_DIRECTORY { THE NEW PLACE OF SAVE }
void
FLEE_MOVEAFILE ( const char * FILE_NAME , const char * NEW_DIRECTORY )
{

                 char NEW_DIR [50];
                 sprintf ( NEW_DIR , "./%s/%s" , NEW_DIRECTORY , FILE_NAME  );

                 rename ( FILE_NAME , NEW_DIR );

                 // int RESULT = rename ( FILE_NAME , NEW_DIR );
                 // if ( RESULT not_eq 0 ) printf ("Error moving the file!");

}





// FUNCTION: COPY A ESPECIFIC FILE TO ANOTHER DIRECTORY WITH A NEW NAME
// @param01: FILE_NAME { THE NAME OF THE FILE }
// @param02: NEW_FOLDER { THE FOLDER PLACE THAT WILL RECEIVE THE COPY }
// @param03: NEW_FILENAME { THE NEW NAME TO THE FILE_NAME }
void
FLEE_COPYAFILE ( const char * FILE_NAME , const char * NEW_FOLDER , const char* NEW_FILENAME )
{
    char CHECKNAME [1024];
    sprintf ( CHECKNAME , "./%s", FILE_NAME);

    FILE* ORIGIN = fopen ( CHECKNAME , "rb");

    // if ( ORIGIN == NULL ) printf("Erro ao copiar o arquivo!");

    char NEW_FOLDER_PLACE[200];
    sprintf(NEW_FOLDER_PLACE, "./%s/%s", NEW_FOLDER, NEW_FILENAME);

    FILE* ENDPOINT = fopen(NEW_FOLDER_PLACE, "wb");
    // if (ENDPOINT == NULL) { printf("Erro ao copiar o arquivo!"); fclose(ORIGIN); }

    char buffer[1024];
    size_t bytes_lidos;

    while ((bytes_lidos = fread(buffer, sizeof(char), sizeof(buffer), ORIGIN)) > 0) fwrite(buffer, sizeof(char), bytes_lidos, ENDPOINT);

    fclose(ORIGIN);
    fclose(ENDPOINT);
}





// FUNCTION: CREATE A FOLDER AND A FILE
// @param01: FOLDER_NAME { THE NAME OF THE FOLDER THAT WILL BE CREATED }
// @param02: FILE_NAME { THE FOLDER PLACE THAT WILL CREATE THE FILE }
void
FLEE_CREATEAFILEANDFOLDER ( const char* FOLDER_NAME , const char* FILE_NAME )
{
                            mkdir ( FOLDER_NAME );

                            char FINAL [50];
                            sprintf ( FINAL , "./%s/%s" , FOLDER_NAME , FILE_NAME );

                            FILE* file = fopen ( FINAL , "w" );

                            // if ( file == NULL ) printf ("Error with the creation!");

                            fclose ( file );

}





// FUNCTION: CREATE A FOLDER
// @param01: FOLDER_NAME { THE NAME OF THE FOLDER THAT WILL BE CREATED }
void
FLEE_CREATEAFOLDER ( const char * FOLDER_NAME )
{

                     mkdir ( FOLDER_NAME );

                     // int RESULT = mkdir ( FOLDER_NAME );
                     // if ( RESULT not_eq 0 ) printf ("Error creating folder!");

}





// FUNCTION: DELETE A ESPECIFIC FILE
// @param01: FILE_NAME { THE FILE THAT WILL BE DELETED }
void
FLEE_DELETEAFILE ( const char * FILE_NAME )
{

                  remove ( FILE_NAME );
                  // int RESULT = remove ( FILE_NAME );
                  // if ( RESULT not_eq 0 ) printf ("Error removing the file!");

}





// FUNCTION: DELETE A FOLDER
// @param01: FOLDER_NAME { THE FOLDER THAT WILL BE DELETED }
void
FLEE_DELETEAFOLDER ( const char * FOLDER_NAME )
{

    DIR *FOLDER = opendir ( FOLDER_NAME );
    struct dirent *arquivo;
    char caminho[1000];
    struct stat info;

    while ( ( arquivo = readdir ( FOLDER ) ) != NULL )
    {
              if ( strcmp ( arquivo -> d_name , "." ) not_eq 0 and strcmp ( arquivo -> d_name , ".." ) not_eq 0 )
              {
                   sprintf ( caminho , "./%s/%s" , FOLDER_NAME , arquivo -> d_name );

              if ( stat ( caminho , &info ) not_eq 0 )
              {
                // printf("Error with the following file %s.", caminho );
                continue;
              }
              if ( S_ISDIR ( info.st_mode ) ) FLEE_DELETEAFOLDER ( caminho );
              else                                        remove ( caminho );

              }
    }

    closedir ( FOLDER );
    rmdir ( FOLDER_NAME );
    // int RESULT = rmdir ( FOLDER_NAME );
    // if ( RESULT not_eq 0 ) printf ("Error deleting the folder!");

}





// FUNCTION: DELETE A FOLDER
// @param01: FOLDER_NAME { THE FOLDER THAT WILL BE MOVED }
// @param02: NEW_PATH { THE NEW PATH OF THE FOLDER }
void
FLEE_MOVEAFOLDER ( const char * FOLDER_NAME , const char * NEW_PATH )
{

                   DIR* dir = opendir ( FOLDER_NAME );

                   // if ( dir == NULL ) printf ("Failed to open directory!");

                   mkdir ( NEW_PATH );
                   // int ret = mkdir ( NEW_PATH );

                   struct dirent * entry;

                   char source_path [ 1024 ];
                   char dest_path   [ 1024 ];

                   while ( ( entry = readdir ( dir ) ) not_eq NULL )
                   {
                             if ( strcmp ( entry -> d_name , "." ) == 0 or strcmp ( entry -> d_name , ".." ) == 0) continue;

                             sprintf ( source_path , "%s/%s" , FOLDER_NAME , entry -> d_name );
                             sprintf ( dest_path   , "%s/%s" , NEW_PATH   , entry -> d_name );

                       struct stat stat_buf;

                                   if ( stat ( source_path , &stat_buf ) not_eq 0 ) { /* printf("Failed to get file status!"); */ continue; }
                                   if ( S_ISDIR ( stat_buf.st_mode ) )
                                   {
                                        FLEE_MOVEAFOLDER ( source_path , dest_path );
                                        rmdir ( source_path );
                                        // ret = rmdir ( source_path );
                                        // if ( ret not_eq 0 ) printf ("Failed to delete subfolder!");
                                   }
                                   else
                                   {
                                       FILE* source_file = fopen ( source_path , "rb" );
                                       if ( source_file == NULL ) { /* printf("Failed to open source file!"); */ continue; }

                                       FILE* dest_file = fopen ( dest_path , "wb" );
                                       if ( dest_file == NULL ) { /* printf("Failed to open destination file!"); */ fclose ( source_file );  continue; }

                                       char buffer [1024];
                                       size_t bytes_read;

                       while ( ( bytes_read = fread ( buffer , sizeof ( char ) , sizeof ( buffer ) , source_file ) ) > 0)
                       fwrite ( buffer , sizeof ( char ) , bytes_read , dest_file );

                       fclose ( source_file );
                       fclose ( dest_file );

                                remove ( source_path );
                                // ret = remove ( source_path );
                                // if (ret not_eq 0) printf("Failed to delete file!");
                                   }
                   }
                   closedir ( dir );
                   rmdir (FOLDER_NAME);

}





// FUNCTION: COPY A FOLDER TO ANOTHER
// @param01: FOLDER_NAME { THE FOLDER THAT WILL BE COPIED }
// @param02: SAVE_PATH { THE NEW PATH OF THIS COPIED FOLDER }
// @param03: NEW_NAME { THE NEW NAME FOR THIS FOLDER }
void
FLEE_COPYAFOLDER ( const char * FOLDER_NAME, const char* SAVE_PATH, const char* NEW_NAME )
{
    DIR* dir = opendir(FOLDER_NAME);

    // if ( dir == NULL ) printf("Failed to open directory!");


    char* new_folder_path = malloc(strlen(SAVE_PATH) + strlen(NEW_NAME) + 2);  // 1 for / and 1 for \0
    sprintf(new_folder_path, "%s/%s", SAVE_PATH, NEW_NAME);
    mkdir(new_folder_path);

    struct dirent* entry;
    char source_path[1024];
    char dest_path[1024];

    while ((entry = readdir(dir)) != NULL) {
        if (strcmp(entry->d_name, ".") == 0 || strcmp(entry->d_name, "..") == 0) {
            continue;
        }

        sprintf(source_path, "%s/%s", FOLDER_NAME, entry->d_name);
        sprintf(dest_path, "%s/%s", new_folder_path, entry->d_name);

        struct stat stat_buf;
        if (stat(source_path, &stat_buf) != 0) {
            // printf("Failed to get file status!");
            continue;
        }

        if (S_ISDIR(stat_buf.st_mode)) {
            FLEE_COPYAFOLDER(source_path, new_folder_path, entry->d_name);
        }
        else {
            FILE* source_file = fopen(source_path, "rb");
            if (source_file == NULL) {
                // printf("Failed to open source file!");
                continue;
            }

            FILE* dest_file = fopen(dest_path, "wb");
            if (dest_file == NULL) {
                // printf("Failed to open destination file!");
                fclose(source_file);
                continue;
            }

            char buffer[1024];
            size_t bytes_read;

            while ((bytes_read = fread(buffer, sizeof(char), sizeof(buffer), source_file)) > 0) {
                fwrite(buffer, sizeof(char), bytes_read, dest_file);
            }

            fclose(source_file);
            fclose(dest_file);
        }
    }

    closedir(dir);
    free(new_folder_path);
}





// FUNCTION: GET A ESPECIFIC SYSTEM FOLDER
// @param01: SYSTEM_FOLDER_NAME { THE ESPECIFIC WINDOWS FOLDER }
// @param02: FOLDER { FOLDER NAME TO BE CREATED IN THIS PATH }
// @param03: SAVE_PATH { THE STRING THAT WILL RECEIVE THE PATH }
void
FLEE_SYSTEMFOLDER ( const char * SYSTEM_FOLDER_NAME , char * FOLDER , char * SAVE_PATH )
{
     sprintf ( SAVE_PATH , "%s\\%s\\" , getenv ( SYSTEM_FOLDER_NAME ) , FOLDER );
}





// FUNCTION: SIMPLE PRINT OF A INT ON A FILE
// @param01: VALUE { THE VALUE }
// @param02: FILE_NAME { THE FILE NAME }
void
FLEE_Sint ( int VALUE , const char * FILE_NAME )
{

    FILE* fp = fopen ( FILE_NAME , "w");
    // if (fp == NULL)  printf("Erro ao abrir o arquivo.\n");

    fprintf ( fp , "%d" , VALUE );
    fclose ( fp );

}





// FUNCTION: GETS A INT VALUE FROM A FILE
// @param02: FILE_NAME { THE FILE NAME THAT WILL GET A INT VALUE }
int
FLEE_Lint ( const char * FILE_NAME )
{

    int RETURN_VALUE;

    FILE* fp = fopen ( FILE_NAME , "r" );

    // if ( fp == NULL ) printf("Erro ao abrir o arquivo.\n");

    fscanf ( fp, "%d", &RETURN_VALUE);
    fclose ( fp );

    return RETURN_VALUE;
}





// FUNCTION: SIMPLE PRINT OF A CHAR ON A FILE
// @param01: VALUE { THE VALUE }
// @param02: FILE_NAME { THE FILE NAME }
void
FLEE_Schar ( char CHARACTER , const char * FILE_NAME )
{
    FILE* fp = fopen ( FILE_NAME, "w");

    // if ( fp == NULL ) printf ("Erro ao abrir o arquivo.\n");

    fputc ( CHARACTER , fp );
    fclose ( fp );
}





// FUNCTION: GETS A CHAR VALUE FROM A FILE
// @param01: FILE_NAME { THE FILE NAME THAT WILL BE USED }
char
FLEE_Lchar ( const char * FILE_NAME )
{

    char CHARACTER;

    FILE* fp = fopen ( FILE_NAME, "r" );

    // if ( fp == NULL ) printf ("Erro ao abrir o arquivo.\n");

    CHARACTER = fgetc ( fp );
    fclose ( fp );

    return CHARACTER;
}





// FUNCTION: PRINTS A FLOAT VALUE ON A FILE
// @param01: VALUE { THE FLOAT VALUE THAT WILL BE PRINTED }
// @param02: COMMAS { HOW MANY HOUSE COMMAS WILL BE PRINTED }
// @param03: FILE_NAME { THE FILE NAME THAT WILL BE USED }
void
FLEE_Sfloat ( float VALUE , int COMMAS , const char * FILE_NAME )
{

    FILE * fp = fopen ( FILE_NAME , "w" );

    // if ( fp == NULL ) printf ("Erro ao abrir o arquivo.\n");

    char format [20];

    sprintf ( format , "%%.%df" , COMMAS );
    fprintf ( fp , format , VALUE );
    fclose  ( fp );

}





// FUNCTION: GETS A FLOAT VALUE FROM THE FIILE
// @param01: FILE_NAME { THE FILE THAT WILL BE USED }
float
FLEE_Lfloat ( const char * FILE_NAME )
{

    float RETURN_VALUE;
    char str[100];

    FILE* fp = fopen ( FILE_NAME , "r" );

    // if (fp == NULL) printf("Erro ao abrir o arquivo.\n");

    fgets  ( str , 100 , fp );
    sscanf ( str , "%f" , &RETURN_VALUE );
    fclose ( fp );

    return RETURN_VALUE;
}





// FUNCTION: PRINTS A DOUBLE VALUE ON A FILE
// @param01: VALUE { THE DOUBLE VALUE THAT WILL BE PRINTED }
// @param02: COMMAS { HOW MANY HOUSE COMMAS WILL BE PRINTED }
// @param03: FILE_NAME { THE FILE NAME THAT WILL BE USED }
void
FLEE_Sdouble ( double VALUE , int COMMAS , const char * FILE_NAME )
{

    FILE* fp = fopen ( FILE_NAME, "w" );

    // if ( fp == NULL ) printf("Erro ao abrir o arquivo.\n");

    char format[20];

    sprintf ( format , "%%.%dlf" , COMMAS );
    fprintf ( fp , format , VALUE );
    fclose  ( fp );

}





// FUNCTION: GETS A DOUBLE VALUE FROM THE FIILE
// @param01: FILE_NAME { THE FILE THAT WILL BE USED }
double
FLEE_Ldouble ( const char* FILE_NAME )
{

    double RETURN_VALUE;
    char str [ 100 ];

    FILE* fp = fopen ( FILE_NAME , "r" );

    // if ( fp == NULL ) printf("Erro ao abrir o arquivo.\n");

    fgets  ( str , 100 , fp );
    sscanf ( str , "%lf" , &RETURN_VALUE );
    fclose ( fp );

    return RETURN_VALUE;
}





// FUNCTION: PRINTS A STRING ON A FILE
// @param01: FILE_NAME { THE FILE THAT WILL RECEIVE THE TEXT }
// @param02: STRING { WHAT WILL BE PRINTED }
void
FLEE_Sstring ( const char * FILE_NAME , const char * STRING  )
{

    FILE* fp = fopen ( FILE_NAME , "w");

    // if (fp == NULL) printf ("Erro ao abrir o arquivo.\n");

    fprintf ( fp , "%s" , STRING );
    fclose  ( fp );

}





// FUNCTION: GETS ALL THE TEXT OF A FILE
// @param01: FILE_NAME { THE FILE THAT WILL BE USED }
// @param02: STRING { THE STRING THAT WILL SAVE THE TEXT TAKEN }
void
FLEE_Lstring ( const char* FILE_NAME, char* STRING )
{
    // SetConsoleOutputCP ( 65001 );

    FILE * file = fopen ( FILE_NAME , "r" );
    // if ( file == NULL ) printf ("Error opening the file\n");

    char line [ 999999 ];
    STRING [ 0 ]  = '\0';

    while ( fgets ( line , 999999 , file ) not_eq NULL ) strncat ( STRING , line , 999999 - strlen ( STRING ) - 1 );
    fclose ( file );

    // SetConsoleOutputCP ( 850 );
}





// FUNCTION: COUNT HOW MANY LINES THE FILE HAVE AND RETURNS IT TO A VARIABLE
// @param01: FILE_NAME { THE FILE THAT WILL BE USED }
int
FLEE_COUNTLINES ( const char * FILE_NAME )
{

    FILE* fp = fopen ( FILE_NAME , "r" );

    // if (fp == NULL) printf("Error opening the file\n");

    int NUMBER_OF_LINES = 0;

    char buffer [ 1024 * 100 ];

    while ( fgets ( buffer , sizeof ( buffer ) , fp ) ) NUMBER_OF_LINES++;

    fclose ( fp );

    return NUMBER_OF_LINES;
}





// FUNCTION: COUNT HOW MANY WORDS HAVE ON THE FILE
// @param01: FILE_NAME { THE FILE THAT WILL BE USED }
int
FLEE_COUNTWORDS ( const char * FILE_NAME )
{

    FILE* fp = fopen ( FILE_NAME , "r" );

    // if ( fp == NULL ) printf("Erro ao abrir o arquivo.\n");

    int NUMBER_OF_WORDS = 0;

    char word [100];

    while ( fscanf ( fp , "%s" , word ) != EOF ) NUMBER_OF_WORDS++;

    fclose ( fp );

    return NUMBER_OF_WORDS;
}





// FUNCTION: COUNT HOW MANY NUMBERS EXIST ON THE FILE
// @param01: FILE_NAME { THE FILE THAT WILL BE USED }
int
FLEE_COUNTNUMBERS ( const char * FILE_NAME )
{


    FILE* fp;

    int count_int = 0;
    int count_float = 0;
    int ch;

    fp = fopen ( FILE_NAME, "r" );
    // if ( fp == NULL ) perror ("Error opening file");


    while ( ( ch = fgetc ( fp ) ) not_eq EOF )
    {
        if ( isdigit ( ch ) or ch == '.' or ch == ',' )
        {
             while ( isdigit ( ch ) or ch == '.' or ch == ',' ) ch = fgetc ( fp );

             if ( ch == '.' or ch == ',' ) count_float++;

             else count_int++;
        }
    }

    fclose ( fp );

    return count_int + count_float;
}





// FUNCTION: COUNT HOW MANY ESPECIFIC INT NUMBERS EXIST ON THE FILE
// @param01: FILE_NAME { THE FILE THAT WILL BE USED }
// @param02: VALUE { THE VALUE THAT WILL BE SEARCHED }
int
FLEE_COUNTint ( const char * FILE_NAME , int VALUE )
{

    FILE *fp = fopen ( FILE_NAME , "r" );
    int RETURN_VALUE = 0;

    // if ( fp == NULL ) printf("Erro ao abrir o arquivo.\n");

    char c;
    int num = 0;
    int is_num = 0;

    while ( ( c = fgetc ( fp ) ) not_eq EOF )
    {
           if ( c == ' ' or c == '\t' or c == '\n' )
           {
                if ( is_num and num == VALUE ) RETURN_VALUE++;

                num = 0;
                is_num = 0;
           }

           else if ( c >= '0' and c <= '9' ) { num = num * 10 + (c - '0'); is_num = 1; }

           else if ( c == '.' )
           {
                     is_num = 0;
                     num = 0;

           while ( ( c = fgetc ( fp ) ) not_eq EOF ) if ( c == ' ' or c == '\t' or c == '\n' ) break;

           }
    }

    if ( is_num and num == VALUE ) RETURN_VALUE++;

    fclose ( fp );


    return RETURN_VALUE;
}





// FUNCTION: COUNT HOW MANY ESPECIFIC FLOAT NUMBERS EXIST ON THE FILE
// @param01: FILE_NAME { THE FILE THAT WILL BE USED }
// @param02: VALUE { THE VALUE THAT WILL BE SEARCHED }
int
FLEE_COUNTfloat ( const char * FILE_NAME , float VALUE )
{


                  FILE* fp;
             char buffer [ 99999 ];
              int len;
            float num, diff;
              int RETURN_VALUE = 0;

    fp = fopen ( FILE_NAME , "r" );

    // if ( ( fp = fopen ( FILE_NAME , "r" ) ) == NULL ) fprintf ( stderr, "Error opening the file!\n");

    while ( fgets ( buffer , 99999 , fp ) )
    {
        len = strlen ( buffer );

        if ( len > 0 and buffer [ len - 1 ] == '\n' ) buffer [ len - 1 ] = '\0';

        char * comma = strchr ( buffer , ',' );
        while ( comma not_eq NULL ) { *comma = '.'; comma = strchr(comma, ','); }
        char* token = strtok ( buffer , " " );

        while ( token not_eq NULL )
        {
                num = atof ( token );
                diff = num - VALUE;

            if ( diff > -0.0001 and diff < 0.0001 ) RETURN_VALUE++;
            token = strtok ( NULL , " " );
        }
    }

    fclose ( fp );

    return RETURN_VALUE;
}





// FUNCTION: COUNT HOW MANY ESPECIFIC DOUBLE NUMBERS EXIST ON THE FILE
// @param01: FILE_NAME { THE FILE THAT WILL BE USED }
// @param02: VALUE { THE VALUE THAT WILL BE SEARCHED }
int
FLEE_COUNTdouble ( const char * FILE_NAME , double VALUE )
{

                  FILE* fp;
             char buffer [ 99999 ];
              int len;
            double num, diff;
              int RETURN_VALUE = 0;

    fp = fopen ( FILE_NAME , "r" );

    // if ( ( fp = fopen ( FILE_NAME , "r" ) ) == NULL ) fprintf ( stderr, "Error opening the file!\n");

    while ( fgets ( buffer , 99999 , fp ) )
    {
        len = strlen ( buffer );

        if ( len > 0 and buffer [ len - 1 ] == '\n' ) buffer [ len - 1 ] = '\0';

        char * comma = strchr ( buffer , ',' );
        while ( comma not_eq NULL ) { *comma = '.'; comma = strchr(comma, ','); }
        char* token = strtok ( buffer , " " );

        while ( token not_eq NULL )
        {
                num = atof ( token );
                diff = num - VALUE;

            if ( diff > -0.0001 and diff < 0.0001 ) RETURN_VALUE++;
            token = strtok ( NULL , " " );
        }
    }

    fclose ( fp );

    return RETURN_VALUE;
}





// FUNCTION: COUNT HOW MANY ESPECIFIC CHARS EXIST ON THE FILE
// @param01: FILE_NAME { THE FILE THAT WILL BE USED }
// @param02: CHAR { THE VALUE THAT WILL BE SEARCHED }
int
FLEE_COUNTchar ( const char * FILE_NAME , char CHAR )
{

    FILE* fp;
    char buffer[99999];
    int len, i;
    int RETURN_VALUE = 0;

    fp = fopen ( FILE_NAME , "r" );

    // if ( ( fp = fopen ( FILE_NAME , "r" ) ) == NULL ) fprintf ( stderr , "Erro ao abrir o arquivo.\n" );

    while ( fgets ( buffer , 99999 , fp ) )
    {
            len = strlen ( buffer );
                for ( i = 0; i < len; i++ ) if ( buffer [ i ] == CHAR ) RETURN_VALUE++;



    }

    fclose ( fp );

    return RETURN_VALUE;
}





// FUNCTION: COUNT HOW MANY ESPECIFIC WORDS EXIST ON THE FILE
// @param01: FILE_NAME { THE FILE THAT WILL BE USED }
// @param02: STRING { THE VALUE THAT WILL BE SEARCHED }
int
FLEE_COUNTstring ( const char * FILE_NAME , const char * STRING )
{

    FILE* fp;

    char buffer [ 99999 ];
    int RETURN_VALUE = 0;

    fp = fopen ( FILE_NAME , "r" );

    // if ( ( fp = fopen ( FILE_NAME , "r" ) ) == NULL ) fprintf ( stderr, "Erro ao abrir o arquivo.\n");

    int string_len = strlen ( STRING );

    while ( fgets ( buffer , 99999 , fp ) )
    {
            int buffer_len = strlen ( buffer );

            if ( buffer [ buffer_len - 1 ] == '\n' ) { buffer [ buffer_len - 1 ] = '\0'; buffer_len--; }

            char* ptr = buffer;

            while ( ( ptr = strstr ( ptr , STRING ) ) not_eq NULL )
            {
                      if ( ( ptr == buffer or isspace ( * ( ptr - 1 ) ) ) and ( ptr + string_len == buffer + buffer_len or isspace ( * ( ptr + string_len ) ) ) )
                      RETURN_VALUE++;
            ptr++;
            }
    }

    fclose ( fp );

    return RETURN_VALUE;
}





// FUNCTION: REPLACES GLOBALY ALL THE INT OCORRENCES
// @param01: FILE_NAME { THE FILE THAT WILL BE USED }
// @param02: VALUE { THE VALUE THAT WILL BE REPLACED }
// @param03: TOKEN { THE TOKEN THAT WILL BE IN THE PLACE }
int
FLEE_GLOBALSUBSint ( const char * FILE_NAME, int VALUE , const char * TOKEN )
{

    FILE * file;
    char STRING_VALUE[50];

    sprintf ( STRING_VALUE , "%d" , VALUE );

    char temp_filename [] = "allen.txt";
    int old_word_len = strlen ( STRING_VALUE );

    int RETURN_VALUE = 0;

    file = fopen ( FILE_NAME , "r" );
    // if ( file == NULL ) printf ("Failed to open the file!\n");

    FILE * temp_file = fopen ( temp_filename , "w" );
    // if ( temp_file == NULL ) { printf("Error with the file reading!\n"); fclose ( file ); }

         char line [ 99999 ];

    while ( fgets ( line , 99999 , file ) )
    {
         char * pos = line;

         while ( ( pos = strstr ( pos , STRING_VALUE ) ) not_eq NULL )
         {
              char temp [ 100 ] = "";
              int len = pos - line;

                   strncat ( temp , line , len );
                   strcat  ( temp , TOKEN );
                   pos += old_word_len;

                   strcpy  ( line , pos );
                   pos = line;

                   strncat ( temp , line , strlen ( line ) );
                   strcpy  ( line , temp );
                   RETURN_VALUE++;
         }

        fwrite ( line , strlen ( line ) , 1 , temp_file );
    }

    fclose ( file );    fclose ( temp_file );   remove ( FILE_NAME ); rename ( temp_filename , FILE_NAME );

    return RETURN_VALUE;
}





// FUNCTION: REPLACES GLOBALY ALL THE FLOAT OCORRENCES
// @param01: FILE_NAME { THE FILE THAT WILL BE USED }
// @param02: VALUE { THE VALUE THAT WILL BE REPLACED }
// @param03: COMMAS { HOW MANY COMMAS THIS FUNCTION WILL CONSIDER }
// @param04: TOKEN { THE TOKEN THAT WILL BE IN THE PLACE }
int
FLEE_GLOBALSUBSfloat ( const char * FILE_NAME , float VALUE , int COMMAS , const char * TOKEN )
{

     FILE * file;
     FILE * temp_file;

     char temp_filename [ ] = "allen.txt";
     char line [ 99999 ];
     char string_value [ 50 ];
     char * pos;
     int old_word_len , new_word_len;
     int return_value = 0;

         snprintf ( string_value , 50 , "%.*f" , COMMAS , VALUE );

     for ( pos = string_value; * pos not_eq '\0'; pos++ ) if ( * pos == ',') * pos = '.';

     old_word_len = strlen ( string_value );
     new_word_len = strlen ( TOKEN );

     file = fopen ( FILE_NAME , "r" );
           // if ( file == NULL ) printf ("Failed to open the file!\n");

     temp_file = fopen ( temp_filename , "w" );
              if ( temp_file == NULL ) { /* printf ("Failed to open temporary file!\n"); */ fclose ( file ); }

              while ( fgets ( line , 99999 , file ) )
              {
                   char * comma = strchr ( line , ',' );

                   while ( comma not_eq NULL ) { * comma = '.'; comma = strchr ( comma , ','); }

                   pos = line;

              while ( ( pos = strstr ( pos , string_value ) ) not_eq NULL )
              {
                   fwrite ( line , pos - line , 1 , temp_file );
                   fwrite ( TOKEN , new_word_len , 1 , temp_file );
                   pos += old_word_len;

                         if ( * pos == '.' )
                         {
                                pos++;
                                int i;

                           for ( i = 0; i < COMMAS and * pos not_eq '\0'; i++, pos++ ) fwrite ( pos , 1 , 1 , temp_file );

                                old_word_len += i - COMMAS;
                         }

               strcpy ( line , pos );
               pos = line;
               return_value++;
              }

     fwrite ( line , strlen ( line ) , 1 , temp_file );

    }

     fclose ( file ); fclose ( temp_file );

     remove ( FILE_NAME );
     // if ( remove ( FILE_NAME ) not_eq 0 )                 printf ("Failed on the end of the function execution!");
     rename ( temp_filename , FILE_NAME );
     // if ( rename ( temp_filename , FILE_NAME ) not_eq 0 ) printf ("Failed on the end of the function execution!");


     return return_value;
}





// FUNCTION: REPLACES GLOBALY ALL THE DOUBLE OCORRENCES
// @param01: FILE_NAME { THE FILE THAT WILL BE USED }
// @param02: VALUE { THE VALUE THAT WILL BE REPLACED }
// @param03: COMMAS { HOW MANY COMMAS THIS FUNCTION WILL CONSIDER }
// @param04: TOKEN { THE TOKEN THAT WILL BE IN THE PLACE }
int
FLEE_GLOBALSUBSdouble ( const char * FILE_NAME , double VALUE , int COMMAS , const char * TOKEN )
{

     FILE * file;
     FILE * temp_file;

     char temp_filename [ ] = "allen.txt";
     char line [ 99999 ];
     char string_value [ 50 ];
     char * pos;
     int old_word_len , new_word_len;
     int return_value = 0;

         snprintf ( string_value , 50 , "%.*lf" , COMMAS , VALUE );

     for ( pos = string_value; * pos not_eq '\0'; pos++ ) if ( * pos == ',') * pos = '.';

     old_word_len = strlen ( string_value );
     new_word_len = strlen ( TOKEN );

     file = fopen ( FILE_NAME , "r" );
           // if ( file == NULL ) printf ("Failed to open the file!\n");

     temp_file = fopen ( temp_filename , "w" );
              if ( temp_file == NULL ) { /* printf ("Failed to open temporary file!\n"); */ fclose ( file ); }

              while ( fgets ( line , 99999 , file ) )
              {
                   char * comma = strchr ( line , ',' );

                   while ( comma not_eq NULL ) { * comma = '.'; comma = strchr ( comma , ','); }

                   pos = line;

              while ( ( pos = strstr ( pos , string_value ) ) not_eq NULL )
              {
                   fwrite ( line , pos - line , 1 , temp_file );
                   fwrite ( TOKEN , new_word_len , 1 , temp_file );
                   pos += old_word_len;

                         if ( * pos == '.' )
                         {
                                pos++;
                                int i;

                           for ( i = 0; i < COMMAS and * pos not_eq '\0'; i++, pos++ ) fwrite ( pos , 1 , 1 , temp_file );

                                old_word_len += i - COMMAS;
                         }

               strcpy ( line , pos );
               pos = line;
               return_value++;
              }

     fwrite ( line , strlen ( line ) , 1 , temp_file );

    }

     fclose ( file ); fclose ( temp_file );

     remove ( FILE_NAME );
     // if ( remove ( FILE_NAME ) not_eq 0 )                 printf ("Failed on the end of the function execution!");
     rename ( temp_filename , FILE_NAME );
     // if ( rename ( temp_filename , FILE_NAME ) not_eq 0 ) printf ("Failed on the end of the function execution!");

     return return_value;
}





// FUNCTION: REPLACES GLOBALY ALL THE CHAR OCORRENCES
// @param01: FILE_NAME { THE FILE THAT WILL BE USED }
// @param02: VALUE { THE VALUE THAT WILL BE REPLACED }
// @param03: TOKEN { THE TOKEN THAT WILL BE IN THE PLACE }
int
FLEE_GLOBALSUBSchar ( const char * FILE_NAME , char VALUE , const char * TOKEN )
{

     FILE * file;

    char STRING_VALUE [ 2 ] = "";
    STRING_VALUE      [ 0 ] = VALUE;

    char temp_filename [ ] = "allen.txt";
    int  old_word_len      = strlen ( STRING_VALUE );
    int new_word_len       = strlen ( TOKEN );
    int RETURN_VALUE       = 0;

                            file = fopen ( FILE_NAME , "r" );
                            // if ( file == NULL ) printf ("Failed to open the file!");

                            FILE * temp_file = fopen ( temp_filename , "w" );
                            if ( temp_file == NULL ) { /* printf ("Error with the file reading!\n"); */ fclose ( file ); }

    char line [ 99999 ];

         while ( fgets ( line , 99999 , file ) )
         {
              char * pos = line;

         while ( ( pos = strstr ( pos , STRING_VALUE ) ) not_eq NULL )
         {
              if ( * pos not_eq VALUE and pos [ old_word_len ] not_eq ' ' and pos [ old_word_len ] not_eq '\n' ) { pos += old_word_len; continue; }

                fwrite ( line  , pos - line   , 1 , temp_file );
                fwrite ( TOKEN , new_word_len , 1 , temp_file );
                pos += old_word_len;

                strcpy ( line , pos );
                pos = line;
                RETURN_VALUE++;
         }

          fwrite ( line , strlen ( line ) , 1 , temp_file );

         }

    fclose ( file );    fclose ( temp_file );  remove ( FILE_NAME );    rename ( temp_filename , FILE_NAME );

    return RETURN_VALUE;
}





// FUNCTION: REPLACES GLOBALY ALL THE STRING OCORRENCES
// @param01: FILE_NAME { THE FILE THAT WILL BE USED }
// @param02: OLD_WORD { THE STRING THAT WILL BE REPLACED }
// @param03: TOKEN { THE TOKEN THAT WILL BE IN THE PLACE }
int
FLEE_GLOBALSUBSstring ( const char * FILE_NAME , const char * OLD_WORD , const char * TOKEN )
{

    FILE * file;

    char temp_filename [] = "allen.txt";
    int old_word_len = strlen ( OLD_WORD );
    int new_word_len =  strlen ( TOKEN);

    int RETURN_VALUE = 0;

    file = fopen ( FILE_NAME, "r");
    // if ( file == NULL) printf("Failed to open the file!");

    FILE * temp_file = fopen ( temp_filename , "w" );
    if ( temp_file == NULL ) { /* printf("Error with the file reading!\n"); */ fclose ( file ); }

    char line [ 99999 ];

    while ( fgets ( line , 99999 , file ) )
    {
         char * pos = line;

               while ( ( pos = strstr ( pos , OLD_WORD ) ) not_eq NULL )
               {
                      fwrite ( line  , pos - line   , 1 , temp_file );
                      fwrite ( TOKEN , new_word_len , 1 , temp_file );
                      pos += old_word_len;

                      strcpy ( line , pos );
                      pos = line;
                      RETURN_VALUE++;
               }

        fwrite ( line , strlen ( line ) , 1 , temp_file );
    }

    fclose ( file ); fclose ( temp_file ); remove ( FILE_NAME ); rename ( temp_filename , FILE_NAME );

    return RETURN_VALUE;
}





// FUNCTION: REPLACES LOCALLY ALL THE INT OCORRENCES
// @param01: FILE_NAME { THE FILE THAT WILL BE USED }
// @param02: VALUE { THE VALUE THAT WILL BE REPLACED }
// @param03: TOKEN { THE TOKEN THAT WILL BE IN THE PLACE }
int
FLEE_LOCALSUBSint ( const char * FILE_NAME , int VALUE , const char * TOKEN )
{

    FILE * file;
    char STRING_VALUE [ 50 ];

         sprintf ( STRING_VALUE , "%d" , VALUE );

    char temp_filename [ ] = "allen.txt";
    int  old_word_len      = strlen ( STRING_VALUE );
    int  new_word_len      = strlen ( TOKEN );

    int RETURN_VALUE = 0;

    file = fopen ( FILE_NAME , "r" );
    // if ( file == NULL ) printf ("Failed to open the file!\n");

    FILE * temp_file = fopen ( temp_filename , "w" );
    if ( temp_file == NULL ) { /* printf ("Error with the file reading!\n"); */ fclose ( file ); }

    char line [ 99999 ];

         while ( fgets ( line , 99999 , file ) )
         {
              char * pos = line;

         while ( ( pos = strstr ( pos , STRING_VALUE ) ) not_eq NULL )
         {
              if ( ( * ( pos + old_word_len ) == ' ' or * ( pos + old_word_len ) == '\n' or * ( pos + old_word_len ) == '\0' ) and ( pos == line or * ( pos - 1 ) == ' ' or * ( pos - 1 ) == '\n' or * ( pos - 1 ) == '\0' ) )
              {
                   fwrite ( line , pos - line , 1 , temp_file );
                   fwrite ( TOKEN , new_word_len , 1 , temp_file );
                   pos += old_word_len;

                   strcpy ( line , pos );
                   pos = line;
                   RETURN_VALUE++;
              }
              else pos += old_word_len;
         }

              fwrite ( line , strlen ( line ) , 1 , temp_file );
         }

    fclose ( file );    fclose ( temp_file );   remove ( FILE_NAME );    rename ( temp_filename , FILE_NAME );

    return RETURN_VALUE;
}





// FUNCTION: REPLACES LOCALLY ALL THE FLOAT OCORRENCES
// @param01: FILE_NAME { THE FILE THAT WILL BE USED }
// @param02: VALUE { THE VALUE THAT WILL BE REPLACED }
// @param03: COMMAS { HOW MANY DECIMAL HOUSES WILL BE CHANGED }
// @param04: TOKEN { THE TOKEN THAT WILL BE IN THE PLACE }
int
FLEE_LOCALSUBSfloat ( const char * FILE_NAME , float VALUE , int COMMAS , const char * TOKEN )
{

    FILE * file;
    FILE * temp_file;

         char   temp_filename [ ] = "allen.txt";
         char   line [ 99999 ];
         char   string_value [ 50 ];
         char * pos;
         int    old_word_len , new_word_len;
         int    return_value = 0;

    snprintf ( string_value , 50 , "%.*f" , COMMAS , VALUE );

            for ( pos = string_value; * pos not_eq '\0'; pos++ ) if ( * pos == ',') * pos = '.';

    old_word_len = strlen ( string_value );
    new_word_len = strlen ( TOKEN );

                file = fopen ( FILE_NAME , "r" );
                // if ( file == NULL ) printf ("Failed to open the file!\n");

                temp_file = fopen ( temp_filename , "w" );
                if ( temp_file == NULL ) { /* printf ("Failed to open temporary file!\n"); */ fclose ( file ); }

    while ( fgets ( line , 99999 , file ) )
    {

         char * comma = strchr ( line , ',' );

    while ( comma not_eq NULL ) { * comma = '.'; comma = strchr ( comma , ',' ); }
    pos = line;

    while ( ( pos = strstr ( pos , string_value ) ) not_eq NULL )
    {
         if ( ( pos == line or isspace ( * ( pos - 1 ) ) ) and isspace ( * ( pos + old_word_len ) ) )
         {
           fwrite ( line  , pos - line   , 1 , temp_file );
           fwrite ( TOKEN , new_word_len , 1 , temp_file );
           pos += old_word_len;

         if ( * pos == '.' )
         {
                pos++;
            int i;

                for ( i = 0; i < COMMAS and * pos not_eq '\0'; i++, pos++ ) fwrite ( pos , 1 , 1 , temp_file );
                old_word_len += i - COMMAS;
         }

              strcpy ( line , pos );
              pos = line;
              return_value++;

         }

         else pos += old_word_len;

    }

         fwrite ( line , strlen ( line ) , 1 , temp_file );
    }

    fclose ( file );    fclose ( temp_file );

    remove ( FILE_NAME );
    // if ( remove ( FILE_NAME ) not_eq 0 )                 printf ("Error with the end of the function!");
    rename ( temp_filename , FILE_NAME );
    // if ( rename ( temp_filename , FILE_NAME ) not_eq 0 ) printf ("Error with the end of the function!");

    return return_value;
}





// FUNCTION: REPLACES LOCALLY ALL THE DOUBLE OCORRENCES
// @param01: FILE_NAME { THE FILE THAT WILL BE USED }
// @param02: VALUE { THE VALUE THAT WILL BE REPLACED }
// @param03: COMMAS { HOW MANY DECIMAL HOUSES WILL BE CHANGED }
// @param04: TOKEN { THE TOKEN THAT WILL BE IN THE PLACE }
int
FLEE_LOCALSUBSdouble ( const char * FILE_NAME , double VALUE , int COMMAS , const char * TOKEN )
{

    FILE * file;
    FILE * temp_file;

         char   temp_filename [ ] = "allen.txt";
         char   line [ 99999 ];
         char   string_value [ 50 ];
         char * pos;
         int    old_word_len , new_word_len;
         int    return_value = 0;

    snprintf ( string_value , 50 , "%.*lf" , COMMAS , VALUE );

            for ( pos = string_value; * pos not_eq '\0'; pos++ ) if ( * pos == ',') * pos = '.';

    old_word_len = strlen ( string_value );
    new_word_len = strlen ( TOKEN );

                file = fopen ( FILE_NAME , "r" );
                // if ( file == NULL ) printf ("Failed to open the file!\n");

                temp_file = fopen ( temp_filename , "w" );
                if ( temp_file == NULL ) { /* printf ("Failed to open temporary file!\n"); */ fclose ( file ); }

    while ( fgets ( line , 99999 , file ) )
    {

         char * comma = strchr ( line , ',' );

    while ( comma not_eq NULL ) { * comma = '.'; comma = strchr ( comma , ',' ); }
    pos = line;

    while ( ( pos = strstr ( pos , string_value ) ) not_eq NULL )
    {
         if ( ( pos == line or isspace ( * ( pos - 1 ) ) ) and isspace ( * ( pos + old_word_len ) ) )
         {
           fwrite ( line  , pos - line   , 1 , temp_file );
           fwrite ( TOKEN , new_word_len , 1 , temp_file );
           pos += old_word_len;

         if ( * pos == '.' )
         {
                pos++;
            int i;

                for ( i = 0; i < COMMAS and * pos not_eq '\0'; i++, pos++ ) fwrite ( pos , 1 , 1 , temp_file );
                old_word_len += i - COMMAS;
         }

              strcpy ( line , pos );
              pos = line;
              return_value++;

         }

         else pos += old_word_len;

    }

         fwrite ( line , strlen ( line ) , 1 , temp_file );
    }

    fclose ( file );    fclose ( temp_file );

    remove ( FILE_NAME );
    // if ( remove ( FILE_NAME ) not_eq 0 )                 printf ("Error with the end of the function!");
    rename ( temp_filename , FILE_NAME );
    // if ( rename ( temp_filename , FILE_NAME ) not_eq 0 ) printf ("Error with the end of the function!");


    return return_value;
}





// FUNCTION: REPLACES LOCALLY ALL THE CHAR OCORRENCES
// @param01: FILE_NAME { THE FILE THAT WILL BE USED }
// @param02: VALUE { THE VALUE THAT WILL BE REPLACED }
// @param03: TOKEN { THE TOKEN THAT WILL BE IN THE PLACE }
int
FLEE_LOCALSUBSchar ( const char * FILE_NAME , char VALUE , const char* TOKEN )
{
    FILE* file;
    char STRING_VALUE[2];
    sprintf(STRING_VALUE, "%c", VALUE);

    char temp_filename[] = "allen.txt";
    int old_word_len = strlen(STRING_VALUE);
    int new_word_len = strlen(TOKEN);
    int RETURN_VALUE = 0;

    file = fopen(FILE_NAME, "r");
    // if (file == NULL) printf("Failed to open the file!");

    FILE* temp_file = fopen(temp_filename, "w");
    if (temp_file == NULL) { /* printf("Error with the file reading!\n"); */ fclose(file); }

    char line[99999];

    while (fgets(line, 99999, file))
    {
        char* pos = line;

        while ((pos = strstr(pos, STRING_VALUE)) != NULL)
        {
            if ((pos == line || *(pos - 1) == ' ' || *(pos - 1) == '\n') &&
                ((*(pos + old_word_len) == '\0') || *(pos + old_word_len) == ' ' || *(pos + old_word_len) == '\n'))
            {
                fwrite(line, pos - line, 1, temp_file);
                fwrite(TOKEN, new_word_len, 1, temp_file);
                pos += old_word_len;
                strcpy(line, pos);
                pos = line;
                RETURN_VALUE++;
            }
            else
            {
                pos += old_word_len;
            }
        }

        fwrite(line, strlen(line), 1, temp_file);
    }

    fclose(file);
    fclose(temp_file);
    remove(FILE_NAME);
    rename(temp_filename, FILE_NAME);

    return RETURN_VALUE;
}





// FUNCTION: REPLACES LOCALLY ALL THE STRING OCORRENCES
// @param01: FILE_NAME { THE FILE THAT WILL BE USED }
// @param02: OLD_WORLD { THE STRING THAT WILL BE REPLACED }
// @param03: TOKEN { THE TOKEN THAT WILL BE IN THE PLACE }
int
FLEE_LOCALSUBSstring ( const char * FILE_NAME , const char * OLD_WORD , const char * TOKEN )
{

    FILE * file;
    char temp_filename [ ] = "allen.txt";

    int old_word_len = strlen ( OLD_WORD );
    int new_word_len = strlen ( TOKEN );
    int RETURN_VALUE = 0;

    file = fopen ( FILE_NAME , "r" );
    // if ( file == NULL ) printf ("Failed to open the file!");

    FILE * temp_file = fopen ( temp_filename , "w" );
    if ( temp_file == NULL ) { /* printf ("Error with the file reading!\n"); */ fclose ( file ); }

    char line [ 99999 ];

        while ( fgets ( line , 99999 , file ) )
        {

             char * pos = line;

        while ( ( pos = strstr ( pos , OLD_WORD ) ) not_eq NULL )
        {

             if ( ( pos == line or isspace ( * ( pos - 1 ) ) ) and ( pos [ old_word_len ] == '\0' or isspace ( pos [ old_word_len ] ) ) )
             {
                 fwrite ( line  , pos - line   , 1 , temp_file );
                 fwrite ( TOKEN , new_word_len , 1 , temp_file );
                 pos += old_word_len;

                  strcpy ( line , pos );
                  pos = line;
                  RETURN_VALUE++;
             }
             else pos += old_word_len;
        }

        fwrite ( line , strlen ( line ) , 1 , temp_file );

        }

    fclose ( file );    fclose ( temp_file );   remove ( FILE_NAME );   rename ( temp_filename , FILE_NAME );


    return RETURN_VALUE;
}





// FUNCTION: REPLACES GLOBALLY ALL THE INT OCORRENCES
// @param01: FILE_NAME { THE FILE THAT WILL BE USED }
// @param02: WHAT_LINE { THE LINE THAT WILL BE CHANGED }
// @param03: VALUE { THE INT THAT WILL BE REPLACED }
// @param04: TOKEN { THE TOKEN THAT WILL BE IN THE PLACE }
int
FLEE_GLOBALSUBSintl ( const char* FILE_NAME , int WHAT_LINE , int VALUE , const char* TOKEN )
{

     FILE* file;
     char STRING_VALUE [ 50 ];

                         sprintf ( STRING_VALUE , "%d" , VALUE );

     char temp_filename [ ] = "allen.txt";
     int  old_word_len      = strlen ( STRING_VALUE );
     int  RETURN_VALUE      = 0;
     int  current_line      = 1;

          file = fopen(FILE_NAME, "r");
              // if ( file == NULL ) printf ("Failed to open the file!\n");

          FILE * temp_file = fopen ( temp_filename , "w" );
              if ( temp_file == NULL ) { /* printf ("Error with the file reading!\n"); */ fclose ( file ); }

     char line [ 99999 ];

     while ( fgets ( line , 99999 , file ) )
     {

          if ( current_line == WHAT_LINE )
          {
              char* pos = line;

     while ( ( pos = strstr ( pos , STRING_VALUE ) ) not_eq NULL )
     {
                char temp [ 100 ] = "";
                int  len          = pos - line;

                     strncat ( temp , line , len );
                     strcat  ( temp , TOKEN );
                     pos += old_word_len;

                     strcpy ( line , pos );
                     pos = line;

                strncat ( temp , line , strlen ( line ) );
                strcpy  ( line , temp );
                RETURN_VALUE++;
     }
     }

      fwrite ( line , strlen ( line ) , 1 , temp_file );
      current_line++;

    }

    fclose ( file );    fclose ( temp_file );   remove ( FILE_NAME );    rename ( temp_filename , FILE_NAME );

    return RETURN_VALUE;
}





// FUNCTION: REPLACES LOCALLY ALL THE INT OCORRENCES
// @param01: FILE_NAME { THE FILE THAT WILL BE USED }
// @param02: WHAT_LINE { THE LINE THAT WILL BE CHANGED }
// @param03: VALUE { THE INT THAT WILL BE REPLACED }
// @param04: TOKEN { THE TOKEN THAT WILL BE IN THE PLACE }
int
FLEE_LOCALSUBSintl ( const char * FILE_NAME , int WHAT_LINE , int VALUE , const char * TOKEN )
{

    FILE* file;
    char STRING_VALUE [ 50 ];

                            sprintf ( STRING_VALUE , "%d" , VALUE );

    char temp_filename [ ]  = "allen.txt";
    int  old_word_len       = strlen ( STRING_VALUE );
    int  new_word_len       = strlen ( TOKEN );
    int RETURN_VALUE        = 0;
    int current_line_number = 1;

                            file = fopen ( FILE_NAME , "r" );
                                // if ( file == NULL ) printf ("Failed to open the file!\n");

                            FILE * temp_file = fopen ( temp_filename , "w" );
                                if ( temp_file == NULL ) { /* printf ("Error with the file reading!\n"); */ fclose ( file ); }

    char line [ 99999 ];

        while ( fgets ( line , 99999 , file ) )
        {
             if ( current_line_number == WHAT_LINE )
             {
               char * pos = line;

        while ( ( pos = strstr ( pos , STRING_VALUE ) ) not_eq NULL )
        {
                if ( ( * ( pos + old_word_len ) == ' ' or * ( pos + old_word_len ) == '\n' or * ( pos + old_word_len ) == '\0' ) and ( pos == line or * ( pos - 1 ) == ' ' or * ( pos - 1 ) == '\n' or * ( pos - 1 ) == '\0' ) )
                {
                      fwrite ( line  , pos - line   , 1 , temp_file );
                      fwrite ( TOKEN , new_word_len , 1 , temp_file );
                      pos += old_word_len;

                      strcpy ( line , pos );
                      pos = line;
                      RETURN_VALUE++;
                }
                else pos += old_word_len;
        }

             fwrite ( line , strlen ( line ) , 1 , temp_file );
        }
        else fwrite ( line , strlen ( line ) , 1 , temp_file );

        current_line_number++;
    }

    fclose ( file ); fclose ( temp_file ); remove ( FILE_NAME ); rename ( temp_filename , FILE_NAME );

    return RETURN_VALUE;
}





// FUNCTION: REPLACES GLOBALLY ALL THE FLOAT OCORRENCES
// @param01: FILE_NAME { THE FILE THAT WILL BE USED }
// @param02: WHAT_LINE { THE LINE THAT WILL BE CHANGED }
// @param03: VALUE { THE FLOAT THAT WILL BE REPLACED }
// @param04: COMMAS { HOW MANY DECIMAL HOUSES WILL BE CONSIDERED }
// @param05: TOKEN { THE TOKEN THAT WILL BE IN THE PLACE }
int
FLEE_GLOBALSUBSfloatl ( const char * FILE_NAME , int WHAT_LINE , float VALUE, int COMMAS , const char * TOKEN )
{

    FILE * file;
    FILE * temp_file;

    char temp_filename   [ ] = "allen.txt";
    char line      [ 99999 ];
    char string_value [ 50 ];
    char * pos;
    int  old_word_len , new_word_len;
    int  return_value        = 0;
    int  current_line_number = 0;

                                            snprintf ( string_value , 50 , "%.*f" , COMMAS , VALUE );

    for ( pos = string_value; * pos not_eq '\0'; pos++ ) if ( * pos == ',' ) * pos = '.';
    old_word_len = strlen ( string_value );
    new_word_len = strlen ( TOKEN );

    file = fopen ( FILE_NAME , "r" );
    // if ( file == NULL ) printf ("Failed to open the file!\n");

    temp_file = fopen ( temp_filename , "w" );
    if ( temp_file == NULL ) { /* printf ("Failed to open temporary file!\n"); */ fclose ( file ); }

      while ( fgets ( line , 99999 , file ) )
      {
           if ( ++ current_line_number == WHAT_LINE )
           {

             char * comma = strchr ( line , ',' );

      while ( comma not_eq NULL ) { * comma = '.'; comma = strchr ( comma , ',' ); }

             pos = line;

      while ( ( pos = strstr ( pos , string_value ) ) not_eq NULL )
      {
             fwrite ( line  , pos - line   , 1 , temp_file );
             fwrite ( TOKEN , new_word_len , 1 , temp_file );
             pos += old_word_len;

                if ( * pos == '.' )
                {
                       pos++;

                    int i;
                    for ( i = 0; i < COMMAS and * pos not_eq '\0'; i++ , pos++ ) fwrite ( pos , 1 , 1 , temp_file );
                    old_word_len += i - COMMAS;
                }

                strcpy ( line , pos );
                pos = line;
                return_value++;
      }

                fwrite ( line , strlen ( line ) , 1 , temp_file );

          }

          else  fwrite(line, strlen(line), 1, temp_file);
    }

    fclose ( file );    fclose ( temp_file );

    remove ( FILE_NAME );
    rename ( temp_filename , FILE_NAME );
    // if ( remove ( FILE_NAME ) not_eq 0 or rename ( temp_filename , FILE_NAME ) not_eq 0) printf("Failed on the end of the function execution!\n");

    return return_value;
}





// FUNCTION: REPLACES LOCALLY ALL THE FLOAT OCORRENCES
// @param01: FILE_NAME { THE FILE THAT WILL BE USED }
// @param02: WHAT_LINE { THE LINE THAT WILL BE CHANGED }
// @param03: VALUE { THE FLOAT THAT WILL BE REPLACED }
// @param04: COMMAS { HOW MANY DECIMAL HOUSES WILL BE CONSIDERED }
// @param05: TOKEN { THE TOKEN THAT WILL BE IN THE PLACE }
int
FLEE_LOCALSUBSfloatl ( const char * FILE_NAME , int WHAT_LINE , float VALUE , int COMMAS , const char * TOKEN )
{

    FILE * file;
    FILE * temp_file;

         char   temp_filename [ ] = "allen.txt";
         char   line [ 99999 ];
         char   string_value [ 50 ];
         char * pos;
         int    old_word_len , new_word_len;
         int    return_value = 0;
         int    current_line = 0;

    snprintf ( string_value , 50 , "%.*f" , COMMAS , VALUE );

            for ( pos = string_value; * pos not_eq '\0'; pos++ ) if ( * pos == ',') * pos = '.';

    old_word_len = strlen ( string_value );
    new_word_len = strlen ( TOKEN );

                file = fopen ( FILE_NAME , "r" );
                // if ( file == NULL ) printf ("Failed to open the file!\n");

                temp_file = fopen ( temp_filename , "w" );
                if ( temp_file == NULL ) { /* printf ("Failed to open temporary file!\n"); */  fclose ( file ); }

    while ( fgets ( line , 99999 , file ) )
    {
        current_line++;

        if (current_line == WHAT_LINE) {
            char * comma = strchr ( line , ',' );

            while ( comma not_eq NULL ) { * comma = '.'; comma = strchr ( comma , ',' ); }
            pos = line;

            while ( ( pos = strstr ( pos , string_value ) ) not_eq NULL )
            {
                if ( ( pos == line or isspace ( * ( pos - 1 ) ) ) and isspace ( * ( pos + old_word_len ) ) )
                {
                    fwrite ( line  , pos - line   , 1 , temp_file );
                    fwrite ( TOKEN , new_word_len , 1 , temp_file );
                    pos += old_word_len;

                    if ( * pos == '.' )
                    {
                        pos++;
                        int i;

                        for ( i = 0; i < COMMAS and * pos not_eq '\0'; i++, pos++ ) fwrite ( pos , 1 , 1 , temp_file );
                        old_word_len += i - COMMAS;
                    }

                    strcpy ( line , pos );
                    pos = line;
                    return_value++;

                }

                else pos += old_word_len;

            }
        }

         fwrite ( line , strlen ( line ) , 1 , temp_file );
    }

    fclose ( file );    fclose ( temp_file );

    remove ( FILE_NAME );
    // if ( remove ( FILE_NAME ) not_eq 0 )                 printf ("Error with the end of the function!");
    rename ( temp_filename , FILE_NAME );
    // if ( rename ( temp_filename , FILE_NAME ) not_eq 0 ) printf ("Error with the end of the function!");

    return return_value;
}





// FUNCTION: REPLACES GLOBALLY ALL THE DOUBLE OCORRENCES
// @param01: FILE_NAME { THE FILE THAT WILL BE USED }
// @param02: WHAT_LINE { THE LINE THAT WILL BE CHANGED }
// @param03: VALUE { THE DOUBLE THAT WILL BE REPLACED }
// @param04: COMMAS { HOW MANY DECIMAL HOUSES WILL BE CONSIDERED }
// @param05: TOKEN { THE TOKEN THAT WILL BE IN THE PLACE }
int
FLEE_GLOBALSUBSdoublel ( const char * FILE_NAME , int WHAT_LINE , double VALUE, int COMMAS , const char * TOKEN )
{

    FILE * file;
    FILE * temp_file;

    char temp_filename   [ ] = "allen.txt";
    char line      [ 99999 ];
    char string_value [ 50 ];
    char * pos;
    int  old_word_len , new_word_len;
    int  return_value        = 0;
    int  current_line_number = 0;

                                            snprintf ( string_value , 50 , "%.*lf" , COMMAS , VALUE );

    for ( pos = string_value; * pos not_eq '\0'; pos++ ) if ( * pos == ',' ) * pos = '.';
    old_word_len = strlen ( string_value );
    new_word_len = strlen ( TOKEN );

    file = fopen ( FILE_NAME , "r" );
    // if ( file == NULL ) printf ("Failed to open the file!\n");

    temp_file = fopen ( temp_filename , "w" );
    if ( temp_file == NULL ) { printf ("Failed to open temporary file!\n"); fclose ( file ); }

      while ( fgets ( line , 99999 , file ) )
      {
           if ( ++ current_line_number == WHAT_LINE )
           {

             char * comma = strchr ( line , ',' );

      while ( comma not_eq NULL ) { * comma = '.'; comma = strchr ( comma , ',' ); }

             pos = line;

      while ( ( pos = strstr ( pos , string_value ) ) not_eq NULL )
      {
             fwrite ( line  , pos - line   , 1 , temp_file );
             fwrite ( TOKEN , new_word_len , 1 , temp_file );
             pos += old_word_len;

                if ( * pos == '.' )
                {
                       pos++;

                    int i;
                    for ( i = 0; i < COMMAS and * pos not_eq '\0'; i++ , pos++ ) fwrite ( pos , 1 , 1 , temp_file );
                    old_word_len += i - COMMAS;
                }

                strcpy ( line , pos );
                pos = line;
                return_value++;
      }

                fwrite ( line , strlen ( line ) , 1 , temp_file );

          }

          else  fwrite(line, strlen(line), 1, temp_file);
    }

    fclose ( file );    fclose ( temp_file );

    remove ( FILE_NAME );
    rename ( temp_filename , FILE_NAME );
    // if ( remove ( FILE_NAME ) not_eq 0 or rename ( temp_filename , FILE_NAME ) not_eq 0) printf("Failed on the end of the function execution!\n");


    return return_value;
}





// FUNCTION: REPLACES LOCALLY ALL THE DOUBLE OCORRENCES
// @param01: FILE_NAME { THE FILE THAT WILL BE USED }
// @param02: WHAT_LINE { THE LINE THAT WILL BE CHANGED }
// @param03: VALUE { THE DOUBLE THAT WILL BE REPLACED }
// @param04: COMMAS { HOW MANY DECIMAL HOUSES WILL BE CONSIDERED }
// @param05: TOKEN { THE TOKEN THAT WILL BE IN THE PLACE }
int
FLEE_LOCALSUBSdoublel ( const char * FILE_NAME , int WHAT_LINE , double VALUE , int COMMAS , const char * TOKEN )
{

    FILE * file;
    FILE * temp_file;

         char   temp_filename [ ] = "allen.txt";
         char   line [ 99999 ];
         char   string_value [ 50 ];
         char * pos;
         int    old_word_len , new_word_len;
         int    return_value = 0;
         int    current_line = 0;

    snprintf ( string_value , 50 , "%.*lf" , COMMAS , VALUE );

            for ( pos = string_value; * pos not_eq '\0'; pos++ ) if ( * pos == ',') * pos = '.';

    old_word_len = strlen ( string_value );
    new_word_len = strlen ( TOKEN );

                file = fopen ( FILE_NAME , "r" );
                // if ( file == NULL ) printf ("Failed to open the file!\n");

                temp_file = fopen ( temp_filename , "w" );
                if ( temp_file == NULL ) { /* printf ("Failed to open temporary file!\n"); */ fclose ( file ); }

    while ( fgets ( line , 99999 , file ) )
    {
        current_line++;

        if (current_line == WHAT_LINE) {
            char * comma = strchr ( line , ',' );

            while ( comma not_eq NULL ) { * comma = '.'; comma = strchr ( comma , ',' ); }
            pos = line;

            while ( ( pos = strstr ( pos , string_value ) ) not_eq NULL )
            {
                if ( ( pos == line or isspace ( * ( pos - 1 ) ) ) and isspace ( * ( pos + old_word_len ) ) )
                {
                    fwrite ( line  , pos - line   , 1 , temp_file );
                    fwrite ( TOKEN , new_word_len , 1 , temp_file );
                    pos += old_word_len;

                    if ( * pos == '.' )
                    {
                        pos++;
                        int i;

                        for ( i = 0; i < COMMAS and * pos not_eq '\0'; i++, pos++ ) fwrite ( pos , 1 , 1 , temp_file );
                        old_word_len += i - COMMAS;
                    }

                    strcpy ( line , pos );
                    pos = line;
                    return_value++;

                }

                else pos += old_word_len;

            }
        }

         fwrite ( line , strlen ( line ) , 1 , temp_file );
    }

    fclose ( file );    fclose ( temp_file );

    remove ( FILE_NAME );
    // if ( remove ( FILE_NAME ) not_eq 0 )                 printf ("Error with the end of the function!");
    rename ( temp_filename , FILE_NAME );
    // if ( rename ( temp_filename , FILE_NAME ) not_eq 0 ) printf ("Error with the end of the function!");

    return return_value;
}





// FUNCTION: REPLACES GLOBALLY ALL THE CHAR OCORRENCES
// @param01: FILE_NAME { THE FILE THAT WILL BE USED }
// @param02: WHAT_LINE { THE LINE THAT WILL BE CHANGED }
// @param03: VALUE { THE CHAR THAT WILL BE REPLACED }
// @param04: TOKEN { THE TOKEN THAT WILL BE IN THE PLACE }
int
FLEE_GLOBALSUBScharl ( const char * FILE_NAME , int WHAT_LINE , char VALUE , const char *TOKEN )
{

    FILE *file = fopen(FILE_NAME, "r");
    // if ( file == NULL ) printf("Failed to open the file!\n");


    int RETURN_VALUE = 0;
    char temp_filename[100];
    snprintf(temp_filename, sizeof(temp_filename), "%s.temp", FILE_NAME);

    FILE *temp_file = fopen(temp_filename, "w");
    if (temp_file == NULL) {
        /* printf("Error creating temporary file.\n"); */
        fclose(file);
        return 0;
    }

    char line[99999];
    int line_count = 0;

    while (fgets(line, sizeof(line), file)) {
        line_count++;

        int substitutions = 0;

        if (line_count == WHAT_LINE) {
            int i = 0;
            while (line[i]) {
                if (line[i] == VALUE) {
                    fputs(TOKEN, temp_file);
                    substitutions++;
                } else {
                    fputc(line[i], temp_file);
                }
                i++;
            }
        } else {
            fputs(line, temp_file);
        }

        RETURN_VALUE += substitutions;
    }

    fclose(file);
    fclose(temp_file);
    remove(FILE_NAME);
    rename(temp_filename, FILE_NAME);

    return RETURN_VALUE;
}





// FUNCTION: REPLACES LOCALLY ALL THE CHAR OCORRENCES
// @param01: FILE_NAME { THE FILE THAT WILL BE USED }
// @param02: WHAT_LINE { THE LINE THAT WILL BE CHANGED }
// @param03: VALUE { THE CHAR THAT WILL BE REPLACED }
// @param04: TOKEN { THE TOKEN THAT WILL BE IN THE PLACE }
int
FLEE_LOCALSUBScharl ( const char * FILE_NAME , int WHAT_LINE , char VALUE , const char * TOKEN )
{

    FILE * file;
    char STRING_VALUE [ 2 ];

                            sprintf ( STRING_VALUE , "%c" , VALUE );

    char temp_filename [] = "allen.txt";
    int  old_word_len     = strlen ( STRING_VALUE );
    int  new_word_len     = strlen ( TOKEN );
    int  RETURN_VALUE     = 0;
    int  current_line     = 1;

    file = fopen ( FILE_NAME , "r" );
    // if ( file == NULL ) printf ("Failed to open the file!");

    FILE * temp_file = fopen ( temp_filename , "w" );
    if ( temp_file == NULL ) { /* printf ("Error with the file reading!\n"); */ fclose ( file ); }

    char line [ 99999 ];

    while ( fgets ( line , 99999 , file ) )
    {

         if ( current_line not_eq WHAT_LINE ) fwrite ( line , strlen ( line ) , 1 , temp_file );

         else
         {

             char * pos = line;

    while ( ( pos = strstr ( pos , STRING_VALUE ) ) not_eq NULL )
    {
           if ( pos [ old_word_len ] not_eq ' ' and pos [ old_word_len ] not_eq '\n' ) { pos += old_word_len; continue; }

             fwrite ( line  , pos - line   , 1 , temp_file );
             fwrite ( TOKEN , new_word_len , 1 , temp_file );
             pos += old_word_len;

                 strcpy ( line , pos );
                 pos = line;
                 RETURN_VALUE++;
    }
             fwrite ( line , strlen ( line ) , 1 , temp_file );
         }

        current_line++;
    }

    fclose ( file ); fclose ( temp_file ); remove ( FILE_NAME ); rename ( temp_filename , FILE_NAME );

    return RETURN_VALUE;

}





// FUNCTION: REPLACES GLOBALLY ALL THE STRING OCORRENCES
// @param01: FILE_NAME { THE FILE THAT WILL BE USED }
// @param02: WHAT_LINE { THE LINE THAT WILL BE CHANGED }
// @param03: STRING { THE STRING THAT WILL BE REPLACED }
// @param04: TOKEN { THE TOKEN THAT WILL BE IN THE PLACE }
int
FLEE_GLOBALSUBSstringl ( const char * FILE_NAME , int WHAT_LINE , const char * STRING , const char * TOKEN )
{

    FILE * file;

    char temp_filename [ ] = "allen.txt";
    int  old_word_len      = strlen ( STRING );
    int  new_word_len      = strlen ( TOKEN );
    int  RETURN_VALUE      = 0;
    int  current_line      = 0;

    file = fopen ( FILE_NAME , "r" );
    // if (file == NULL) printf ("Failed to open the file!\n");

    FILE * temp_file = fopen ( temp_filename , "w" );
    if ( temp_file == NULL ) { /* printf ("Error with the file reading!\n"); */ fclose ( file ); }

    char line_buffer [ 1000 ];
    while ( fgets ( line_buffer , sizeof ( line_buffer ) , file ) not_eq NULL )
    {

         current_line++;

         if ( current_line == WHAT_LINE or WHAT_LINE == 0 )
         {

              char * pos = line_buffer;

    while ( ( pos = strstr ( pos , STRING ) ) not_eq NULL )
    {
         fwrite ( line_buffer , pos - line_buffer , 1 , temp_file );
         fwrite ( TOKEN , new_word_len , 1 , temp_file );

         pos += old_word_len;
         strcpy ( line_buffer , pos );
         pos = line_buffer;

         RETURN_VALUE++;

    }

         }

        fwrite ( line_buffer , strlen ( line_buffer ) , 1 , temp_file );
    }

    fclose ( file );        fclose ( temp_file );       remove ( FILE_NAME );      rename ( temp_filename , FILE_NAME );


    return RETURN_VALUE;

}





// FUNCTION: REPLACES LOCALLY ALL THE STRING OCORRENCES
// @param01: FILE_NAME { THE FILE THAT WILL BE USED }
// @param02: WHAT_LINE { THE LINE THAT WILL BE CHANGED }
// @param03: STRING { THE STRING THAT WILL BE REPLACED }
// @param04: TOKEN { THE TOKEN THAT WILL BE IN THE PLACE }
int
FLEE_LOCALSUBSstringl ( const char * FILE_NAME , int WHAT_LINE , const char * STRING , const char * TOKEN )
{

    FILE * file;

    char temp_filename [ ] = "allen.txt";
    int old_word_len       = strlen ( STRING );
    int new_word_len       = strlen ( TOKEN );
    int return_value       = 0;

    file = fopen ( FILE_NAME , "r" );
    // if ( file == NULL ) printf ("Failed to open the file!");

    FILE * temp_file = fopen ( temp_filename , "w" );
    if ( temp_file == NULL ) { /* printf ("Error with the file reading!\n"); */ fclose ( file ); }

    char line [ 99999 ];
    int current_line_num = 0;

        while ( fgets ( line , 99999 , file ) )
        {

        current_line_num++;

             if ( current_line_num == WHAT_LINE )
             {

               char * pos = line;

        while ( ( pos = strstr ( pos , STRING ) ) not_eq NULL )
        {
                if ( ( pos == line or isspace ( * ( pos - 1 ) ) ) and ( pos [ old_word_len ] == '\0' or isspace ( pos [ old_word_len ] ) ) )
                {
                  fwrite ( line  , pos - line   , 1 , temp_file );
                  fwrite ( TOKEN , new_word_len , 1 , temp_file );
                  pos += old_word_len;
                      strcpy(line, pos);
                      pos = line;
                      return_value++;
                }
                else pos += old_word_len;
        }
        }

        fwrite ( line , strlen ( line ) , 1 , temp_file );
    }

    fclose ( file ); fclose ( temp_file ); remove ( FILE_NAME ); rename ( temp_filename , FILE_NAME );

    return return_value;
}





// FUNCTION: ADDS A VALUE TO THE LAST CURSOR POSITION OF THE FILE
// @param01: FILE_NAME { THE FILE THAT WILL BE USED }
// @param02: VALUE { THE VALUE THAT WILL BE ADDED }
void
FLEE_WRITEint ( const char * FILE_NAME , int VALUE )
{


    FILE * fp = fopen ( FILE_NAME , "a" );

    // if ( fp == NULL ) printf("Error opening the file!");

    fprintf ( fp , "%d" , VALUE );

    fclose ( fp );

}





// FUNCTION: ADDS A VALUE TO THE END OF A ESPECIFIC LINE IN THE FILE
// @param01: FILE_NAME { THE FILE THAT WILL BE USED }
// @param02: VALUE { THE VALUE THAT WILL BE ADDED }
// @param03: WHAT_LINE { THE LINE THAT WILL BE USED }
void
FLEE_WRITEintl ( const char * FILE_NAME , int VALUE , int WHAT_LINE )
{

    FILE * fp , * fpTemp;

    char STRING [ 99999 ];

    sprintf ( STRING , "%d " , VALUE );

    char buffer [ 99999 ];
    int  linhaAtual = 1;
    int  linhaEncontrada = 0;

    fp = fopen ( FILE_NAME , "r" );
    // if ( fp == NULL ) printf ("Error opening the file!");

    fpTemp = fopen ("temp.txt", "w");
    if ( fpTemp == NULL ) { /* printf ("Error with the function execution on the file!"); */ fclose(fp); }

      while ( fgets ( buffer , 99999 , fp ) not_eq NULL )
      {
           if ( linhaAtual == WHAT_LINE )
           {

             int comprimentoLinha = strlen ( buffer );
             int posicaoInsercao  = comprimentoLinha - 1;

      while ( posicaoInsercao > 0 and ( buffer [ posicaoInsercao ] == '\r' or buffer [ posicaoInsercao ] == '\n' ) )
      posicaoInsercao--;

             if ( posicaoInsercao > 0 )
             {
                buffer [ posicaoInsercao + 1 ] = ' ';
                posicaoInsercao ++;
             }

             buffer [ posicaoInsercao ] = '\0';
             fprintf ( fpTemp , "%s%s\n" , buffer , STRING );
             linhaEncontrada = 1;

          }

          else fprintf ( fpTemp , "%s" , buffer );


          linhaAtual++;
      }

       if ( !linhaEncontrada and linhaAtual == WHAT_LINE ) fprintf ( fpTemp , "%s\n" , STRING );

       fclose ( fp ); fclose ( fpTemp ); remove ( FILE_NAME ); rename ( "temp.txt" , FILE_NAME );


}





// FUNCTION: ADDS A VALUE TO THE END OF A ESPECIFIC LINE AND START OF A COLUN IN THE FILE
// @param01: FILE_NAME { THE FILE THAT WILL BE USED }
// @param02: VALUE { THE VALUE THAT WILL BE ADDED }
// @param03: WHAT_LINE { THE LINE THAT WILL BE USED }
// @param04: WHAT_COLUMN { THE COLS THAT WILL BE USED }
void
FLEE_WRITESUPAint ( const char * FILE_NAME , int VALUE , int WHAT_LINE , int WHAT_COLUMN )
{


    char STRING [ 100 ];
    sprintf ( STRING , "%d" , VALUE );

    FILE * file = fopen ( FILE_NAME , "r" );
    // if ( file == NULL ) printf ("Failed to open the file !");

    char tmp_filename [ ] = "temp.txt";

    FILE * tmp_file = fopen ( tmp_filename , "w" );
    if ( tmp_file == NULL ) { /* printf ("Error creating temporary file."); */ fclose ( file ); }

    char line_buf [ 9999 ];
    int  current_line = 1;

        while ( fgets ( line_buf , sizeof ( line_buf ) , file ) )
        {
             if ( current_line == WHAT_LINE )
             {

               int line_len = strlen ( line_buf );

             if ( WHAT_COLUMN > line_len ) strcat ( line_buf , STRING );

             else
             {
                for ( int i = line_len; i >= WHAT_COLUMN; i-- ) line_buf [ i + strlen ( STRING ) ] = line_buf [ i ];

                for ( int i = 0; i < strlen ( STRING ); i++ ) line_buf [ WHAT_COLUMN + i ] = STRING [ i ];

             }
             }

         fputs ( line_buf , tmp_file );
         current_line ++;

        }

         fclose ( file ); fclose ( tmp_file );

    remove ( FILE_NAME );
    // if ( remove ( FILE_NAME ) not_eq 0 ) printf ("Error with the final of the function! (maybe the original file have been broken)");

    rename ( tmp_filename, FILE_NAME );
    // if ( rename ( tmp_filename, FILE_NAME) not_eq 0 ) printf ("Error with the final of the function!");
}





// FUNCTION: ADDS A VALUE TO THE LAST CURSOR POSITION OF THE FILE
// @param01: FILE_NAME { THE FILE THAT WILL BE USED }
// @param02: VALUE { THE VALUE THAT WILL BE ADDED }
// @param03: COMMAS { HOW MANY DECIMAL HOUSES THE VALUE WILL PRINT }
void
FLEE_WRITEfloat ( const char * FILE_NAME , float VALUE , int COMMAS )
{

    FILE * fp = fopen ( FILE_NAME , "a" );

    // if ( fp == NULL ) printf("Error opening the file!");

    fprintf ( fp , "%.*f" , COMMAS , VALUE );

    fclose ( fp );
}





// FUNCTION: ADDS A VALUE TO THE END OF A ESPECIFIC LINE IN THE FILE
// @param01: FILE_NAME { THE FILE THAT WILL BE USED }
// @param02: VALUE { THE VALUE THAT WILL BE ADDED }
// @param03: COMMAS { HOW MANY DECIMAL HOUSES THE VALUE WILL PRINT }
// @param04: WHAT_LINE { WHAT LINE WILL PRINT }
void
FLEE_WRITEfloatl ( const char * FILE_NAME , float VALUE , int COMMAS , int WHAT_LINE )
{

    FILE * fp , * fpTemp;

    char STRING [ 1024 ];

    sprintf ( STRING , "%.*f" , COMMAS , VALUE );

    char buffer [ 1024 ];
    int  linhaAtual = 1;
    int  linhaEncontrada = 0;

    fp = fopen ( FILE_NAME , "r" );
    // if ( fp == NULL ) printf ("Error opening the file!");

    fpTemp = fopen ("temp.txt", "w");
    if ( fpTemp == NULL ) { /* printf ("Error with the function execution on the file!"); */ fclose(fp); }

      while ( fgets ( buffer , 1024 , fp ) not_eq NULL )
      {
           if ( linhaAtual == WHAT_LINE )
           {

             int comprimentoLinha = strlen ( buffer );
             int posicaoInsercao  = comprimentoLinha - 1;

      while ( posicaoInsercao > 0 and ( buffer [ posicaoInsercao ] == '\r' or buffer [ posicaoInsercao ] == '\n' ) )
      posicaoInsercao--;

             if ( posicaoInsercao > 0 )
             {
                buffer [ posicaoInsercao + 1 ] = ' ';
                posicaoInsercao ++;
             }

             buffer [ posicaoInsercao ] = '\0';
             fprintf ( fpTemp , "%s%s\n" , buffer , STRING );
             linhaEncontrada = 1;

          }

          else fprintf ( fpTemp , "%s" , buffer );


          linhaAtual++;
      }

       if ( !linhaEncontrada and linhaAtual == WHAT_LINE ) fprintf ( fpTemp , "%s\n" , STRING );

       fclose ( fp ); fclose ( fpTemp ); remove ( FILE_NAME ); rename ( "temp.txt" , FILE_NAME );
}





// FUNCTION: ADDS A VALUE TO THE END OF A ESPECIFIC LINE AND START OF A COLUN IN THE FILE
// @param01: FILE_NAME { THE FILE THAT WILL BE USED }
// @param02: VALUE { THE VALUE THAT WILL BE ADDED }
// @param03: COMMAS { THOW MANY DECIMAL HOUSES WILL BE PRINTED }
// @param04: WHAT_LINE { THE LINE THAT WILL BE USED }
// @param05: WHAT_COLUMN { THE COLS THAT WILL BE USED }
void
FLEE_WRITESUPAfloat ( const char * FILE_NAME , float VALUE , int COMMA , int WHAT_LINE , int WHAT_COLUMN )
{

    char STRING [ 100 ];
    sprintf ( STRING , "%.*f" , COMMA , VALUE );

    FILE * file = fopen ( FILE_NAME , "r" );
    // if ( file == NULL ) printf ("Failed to open the file !");

    char tmp_filename [ ] = "temp.txt";

    FILE * tmp_file = fopen ( tmp_filename , "w" );
    if ( tmp_file == NULL ) { /* printf ("Error creating temporary file."); */ fclose ( file ); }

    char line_buf [ 9999 ];
    int  current_line = 1;

        while ( fgets ( line_buf , sizeof ( line_buf ) , file ) )
        {
             if ( current_line == WHAT_LINE )
             {

               int line_len = strlen ( line_buf );

             if ( WHAT_COLUMN > line_len ) strcat ( line_buf , STRING );

             else
             {
                for ( int i = line_len; i >= WHAT_COLUMN; i-- ) line_buf [ i + strlen ( STRING ) ] = line_buf [ i ];

                for ( int i = 0; i < strlen ( STRING ); i++ ) line_buf [ WHAT_COLUMN + i ] = STRING [ i ];

             }
             }

         fputs ( line_buf , tmp_file );
         current_line ++;

        }

         fclose ( file ); fclose ( tmp_file );

    remove ( FILE_NAME );
    // if ( remove ( FILE_NAME ) not_eq 0 ) printf ("Error with the final of the function! (maybe the original file have been broken)");

    rename ( tmp_filename, FILE_NAME );
    // if ( rename ( tmp_filename, FILE_NAME) not_eq 0 ) printf ("Error with the final of the function!");
}





// FUNCTION: ADDS A VALUE TO THE LAST CURSOR POSITION OF THE FILE
// @param01: FILE_NAME { THE FILE THAT WILL BE USED }
// @param02: VALUE { THE VALUE THAT WILL BE ADDED }
// @param03: COMMAS { HOW MANY DECIMAL HOUSES THE VALUE WILL PRINT }
void
FLEE_WRITEdouble ( const char * FILE_NAME , double VALUE , int COMMAS )
{
    FILE * fp = fopen ( FILE_NAME , "a" );

    // if ( fp == NULL ) printf("Error opening the file!");

    fprintf ( fp , "%.*lf" , COMMAS , VALUE );

    fclose ( fp );
}





// FUNCTION: ADDS A VALUE TO THE END OF A ESPECIFIC LINE IN THE FILE
// @param01: FILE_NAME { THE FILE THAT WILL BE USED }
// @param02: VALUE { THE VALUE THAT WILL BE ADDED }
// @param03: COMMAS { HOW MANY DECIMAL HOUSES THE VALUE WILL PRINT }
// @param04: WHAT_LINE { WHAT LINE WILL PRINT }
void
FLEE_WRITEdoublel ( const char * FILE_NAME , double VALUE , int COMMAS , int WHAT_LINE )
{

    FILE * fp , * fpTemp;

    char STRING [ 1024 ];

    sprintf ( STRING , "%.*lf" , COMMAS , VALUE );

    char buffer [ 1024 ];
    int  linhaAtual = 1;
    int  linhaEncontrada = 0;

    fp = fopen ( FILE_NAME , "r" );
    // if ( fp == NULL ) printf ("Error opening the file!");

    fpTemp = fopen ("temp.txt", "w");
    if ( fpTemp == NULL ) { /* printf ("Error with the function execution on the file!"); */ fclose(fp); }

      while ( fgets ( buffer , 1024 , fp ) not_eq NULL )
      {
           if ( linhaAtual == WHAT_LINE )
           {

             int comprimentoLinha = strlen ( buffer );
             int posicaoInsercao  = comprimentoLinha - 1;

      while ( posicaoInsercao > 0 and ( buffer [ posicaoInsercao ] == '\r' or buffer [ posicaoInsercao ] == '\n' ) )
      posicaoInsercao--;

             if ( posicaoInsercao > 0 )
             {
                buffer [ posicaoInsercao + 1 ] = ' ';
                posicaoInsercao ++;
             }

             buffer [ posicaoInsercao ] = '\0';
             fprintf ( fpTemp , "%s%s\n" , buffer , STRING );
             linhaEncontrada = 1;

          }

          else fprintf ( fpTemp , "%s" , buffer );


          linhaAtual++;
      }

       if ( !linhaEncontrada and linhaAtual == WHAT_LINE ) fprintf ( fpTemp , "%s\n" , STRING );

       fclose ( fp ); fclose ( fpTemp ); remove ( FILE_NAME ); rename ( "temp.txt" , FILE_NAME );
}





// FUNCTION: ADDS A VALUE TO THE END OF A ESPECIFIC LINE AND START OF A COLUN IN THE FILE
// @param01: FILE_NAME { THE FILE THAT WILL BE USED }
// @param02: VALUE { THE VALUE THAT WILL BE ADDED }
// @param03: COMMAS { THOW MANY DECIMAL HOUSES WILL BE PRINTED }
// @param04: WHAT_LINE { THE LINE THAT WILL BE USED }
// @param05: WHAT_COLUMN { THE COLS THAT WILL BE USED }
void
FLEE_WRITESUPAdouble ( const char * FILE_NAME , double VALUE , int COMMA , int WHAT_LINE , int WHAT_COLUMN )
{

    char STRING [ 100 ];
    sprintf ( STRING , "%.*lf" , COMMA , VALUE );

    FILE * file = fopen ( FILE_NAME , "r" );
    // if ( file == NULL ) printf ("Failed to open the file !");

    char tmp_filename [ ] = "temp.txt";

    FILE * tmp_file = fopen ( tmp_filename , "w" );
    if ( tmp_file == NULL ) { /* printf ("Error creating temporary file."); */ fclose ( file ); }

    char line_buf [ 9999 ];
    int  current_line = 1;

        while ( fgets ( line_buf , sizeof ( line_buf ) , file ) )
        {
             if ( current_line == WHAT_LINE )
             {

               int line_len = strlen ( line_buf );

             if ( WHAT_COLUMN > line_len ) strcat ( line_buf , STRING );

             else
             {
                for ( int i = line_len; i >= WHAT_COLUMN; i-- ) line_buf [ i + strlen ( STRING ) ] = line_buf [ i ];

                for ( int i = 0; i < strlen ( STRING ); i++ ) line_buf [ WHAT_COLUMN + i ] = STRING [ i ];

             }
             }

         fputs ( line_buf , tmp_file );
         current_line ++;

        }

         fclose ( file ); fclose ( tmp_file );

    remove ( FILE_NAME );
    // if ( remove ( FILE_NAME ) not_eq 0 ) printf ("Error with the final of the function! (maybe the original file have been broken)");

    rename ( tmp_filename, FILE_NAME );
    // if ( rename ( tmp_filename, FILE_NAME) not_eq 0 ) printf ("Error with the final of the function!");
}





// FUNCTION: ADDS A VALUE TO THE LAST CURSOR POSITION OF THE FILE
// @param01: FILE_NAME { THE FILE THAT WILL BE USED }
// @param02: VALUE { THE VALUE THAT WILL BE ADDED }
void
FLEE_WRITEchar ( const char * FILE_NAME , char VALUE )
{
    FILE * fp = fopen ( FILE_NAME , "a" );

    // if ( fp == NULL ) printf("Error opening the file!");

    fprintf ( fp , "%c" , VALUE );

    fclose ( fp );
}





// FUNCTION: ADDS A VALUE TO THE END OF A ESPECIFIC LINE IN THE FILE
// @param01: FILE_NAME { THE FILE THAT WILL BE USED }
// @param02: VALUE { THE VALUE THAT WILL BE ADDED }
// @param03: WHAT_LINE { WHAT LINE WILL PRINT }
void
FLEE_WRITEcharl ( const char * FILE_NAME , char VALUE , int WHAT_LINE )
{
    FILE * fp , * fpTemp;

    char STRING [ 2 ];

    sprintf ( STRING , "%c" , VALUE );

    char buffer [ 1024 ];
    int  linhaAtual = 1;
    int  linhaEncontrada = 0;

    fp = fopen ( FILE_NAME , "r" );
    // if ( fp == NULL ) printf ("Error opening the file!");

    fpTemp = fopen ("temp.txt", "w");
    if ( fpTemp == NULL ) { /* printf ("Error with the function execution on the file!"); */ fclose(fp); }

      while ( fgets ( buffer , 1024 , fp ) not_eq NULL )
      {
           if ( linhaAtual == WHAT_LINE )
           {

             int comprimentoLinha = strlen ( buffer );
             int posicaoInsercao  = comprimentoLinha - 1;

      while ( posicaoInsercao > 0 and ( buffer [ posicaoInsercao ] == '\r' or buffer [ posicaoInsercao ] == '\n' ) )
      posicaoInsercao--;

             if ( posicaoInsercao > 0 )
             {
                buffer [ posicaoInsercao + 1 ] = ' ';
                posicaoInsercao ++;
             }

             buffer [ posicaoInsercao ] = '\0';
             fprintf ( fpTemp , "%s%s\n" , buffer , STRING );
             linhaEncontrada = 1;

          }

          else fprintf ( fpTemp , "%s" , buffer );


          linhaAtual++;
      }

       if ( !linhaEncontrada and linhaAtual == WHAT_LINE ) fprintf ( fpTemp , "%s\n" , STRING );

       fclose ( fp ); fclose ( fpTemp ); remove ( FILE_NAME ); rename ( "temp.txt" , FILE_NAME );
}





// FUNCTION: ADDS A VALUE TO THE END OF A ESPECIFIC LINE AND START OF A COLUN IN THE FILE
// @param01: FILE_NAME { THE FILE THAT WILL BE USED }
// @param02: VALUE { THE VALUE THAT WILL BE ADDED }
// @param03: WHAT_LINE { THE LINE THAT WILL BE USED }
// @param04: WHAT_COLUMN { THE COLS THAT WILL BE USED }
void
FLEE_WRITESUPAchar ( const char * FILE_NAME , char VALUE , int WHAT_LINE , int WHAT_COLUMN )
{
    char STRING [ 2 ];
    sprintf ( STRING , "%c" , VALUE );

    FILE * file = fopen ( FILE_NAME , "r" );
    // if ( file == NULL ) printf ("Failed to open the file !");

    char tmp_filename [ ] = "temp.txt";

    FILE * tmp_file = fopen ( tmp_filename , "w" );
    if ( tmp_file == NULL ) { /* printf ("Error creating temporary file."); */ fclose ( file ); }

    char line_buf [ 9999 ];
    int  current_line = 1;

        while ( fgets ( line_buf , sizeof ( line_buf ) , file ) )
        {
             if ( current_line == WHAT_LINE )
             {

               int line_len = strlen ( line_buf );

             if ( WHAT_COLUMN > line_len ) strcat ( line_buf , STRING );

             else
             {
                for ( int i = line_len; i >= WHAT_COLUMN; i-- ) line_buf [ i + strlen ( STRING ) ] = line_buf [ i ];

                for ( int i = 0; i < strlen ( STRING ); i++ ) line_buf [ WHAT_COLUMN + i ] = STRING [ i ];

             }
             }

         fputs ( line_buf , tmp_file );
         current_line ++;

        }

         fclose ( file ); fclose ( tmp_file );

    remove ( FILE_NAME );
    // if ( remove ( FILE_NAME ) not_eq 0 ) printf ("Error with the final of the function! (maybe the original file have been broken)");

    rename ( tmp_filename, FILE_NAME );
    // if ( rename ( tmp_filename, FILE_NAME) not_eq 0 ) printf ("Error with the final of the function!");
}





// FUNCTION: ADDS A STRING TO THE LAST CURSOR POSITION OF THE FILE
// @param01: FILE_NAME { THE FILE THAT WILL BE USED }
// @param02: STRING { THE STRING THAT WILL BE ADDED }
void
FLEE_WRITEstring ( const char * FILE_NAME , const char * STRING )
{
    FILE * fp = fopen ( FILE_NAME , "a" );

    // if ( fp == NULL ) printf("Error opening the file!");

    fprintf ( fp , "%s" , STRING );

    fclose ( fp );
}





// FUNCTION: ADDS A STRING TO THE END OF A ESPECIFIC LINE IN THE FILE
// @param01: FILE_NAME { THE FILE THAT WILL BE USED }
// @param02: STRING { THE STRING THAT WILL BE ADDED }
// @param03: WHAT_LINE { WHAT LINE WILL PRINT }
void
FLEE_WRITEstringl ( const char * FILE_NAME , const char * STRING , int WHAT_LINE )
{
    FILE * fp , * fpTemp;

    char buffer [ 1024 ];
    int  linhaAtual = 1;
    int  linhaEncontrada = 0;

    fp = fopen ( FILE_NAME , "r" );
    // if ( fp == NULL ) printf ("Error opening the file!");

    fpTemp = fopen ("temp.txt", "w");
    if ( fpTemp == NULL ) { /* printf ("Error with the function execution on the file!"); */ fclose(fp); }

      while ( fgets ( buffer , 1024 , fp ) not_eq NULL )
      {
           if ( linhaAtual == WHAT_LINE )
           {

             int comprimentoLinha = strlen ( buffer );
             int posicaoInsercao  = comprimentoLinha - 1;

      while ( posicaoInsercao > 0 and ( buffer [ posicaoInsercao ] == '\r' or buffer [ posicaoInsercao ] == '\n' ) )
      posicaoInsercao--;

             if ( posicaoInsercao > 0 )
             {
                buffer [ posicaoInsercao + 1 ] = ' ';
                posicaoInsercao ++;
             }

             buffer [ posicaoInsercao ] = '\0';
             fprintf ( fpTemp , "%s%s\n" , buffer , STRING );
             linhaEncontrada = 1;

          }

          else fprintf ( fpTemp , "%s" , buffer );


          linhaAtual++;
      }

       if ( !linhaEncontrada and linhaAtual == WHAT_LINE ) fprintf ( fpTemp , "%s\n" , STRING );

       fclose ( fp ); fclose ( fpTemp ); remove ( FILE_NAME ); rename ( "temp.txt" , FILE_NAME );
}





// FUNCTION: ADDS A STRING TO THE END OF A ESPECIFIC LINE AND START OF A COLUN IN THE FILE
// @param01: FILE_NAME { THE FILE THAT WILL BE USED }
// @param02: STRING { THE STRING THAT WILL BE ADDED }
// @param03: WHAT_LINE { THE LINE THAT WILL BE USED }
// @param04: WHAT_COLUMN { THE COLS THAT WILL BE USED }
void
FLEE_WRITESUPAstring ( const char * FILE_NAME , const char * STRING , int WHAT_LINE , int WHAT_COLUMN )
{
    FILE * file = fopen ( FILE_NAME , "r" );
    // if ( file == NULL ) printf ("Failed to open the file !");

    char tmp_filename [ ] = "temp.txt";

    FILE * tmp_file = fopen ( tmp_filename , "w" );
    if ( tmp_file == NULL ) { /*printf ("Error creating temporary file."); */ fclose ( file ); }

    char line_buf [ 100000 ];
    int  current_line = 1;

        while ( fgets ( line_buf , sizeof ( line_buf ) , file ) )
        {

             if ( current_line == WHAT_LINE )
             {

               int line_len = strlen ( line_buf );

             if ( WHAT_COLUMN > line_len ) strcat ( line_buf , STRING );

             else
             {
                for ( int i = line_len; i >= WHAT_COLUMN; i-- ) line_buf [ i + strlen ( STRING ) ] = line_buf [ i ];

                for ( int i = 0; i < strlen ( STRING ); i++ ) line_buf [ WHAT_COLUMN + i ] = STRING [ i ];

             }
             }

         fputs ( line_buf , tmp_file );
         current_line ++;

        }

         fclose ( file ); fclose ( tmp_file );

    remove ( FILE_NAME );
    // if ( remove ( FILE_NAME ) not_eq 0 ) printf ("Error with the final of the function! (maybe the original file have been broken)");

    rename ( tmp_filename, FILE_NAME );
    // if ( rename ( tmp_filename, FILE_NAME) not_eq 0 ) printf ("Error with the final of the function!");
}





// FUNCTION: GETS A INT VALUE FROM A LINE IN A FILE
// @param01: FILE_NAME { THE FILE THAT WILL BE USED }
// @param02: WHAT_LINE { THE LINE THAT WE GONNA GET }
int
FLEE_GETSint ( const char * FILE_NAME , int WHAT_LINE )
{

    FILE * fp = fopen ( FILE_NAME , "r" );
    // if ( fp == NULL )   printf ("Error opening the file!\n");

    WHAT_LINE++;

    char linha_atual [ 99999 ];
    int  valor = 1;

    for ( int i = 1; i <= WHAT_LINE; i++ )
    if ( fgets ( linha_atual , sizeof ( linha_atual ) , fp ) == NULL ) { /* printf ("Error with the line\n"); */ fclose ( fp ); }

    char valor_str [ 100 ];
    int j = 0;

    for ( int i = 0; i < strlen ( linha_atual ); i++ )
       if ( isdigit ( linha_atual [ i ] ) ) { valor_str [ j ] = linha_atual [ i ]; j ++; }

    valor_str [ j ] = '\0';

    if ( sscanf ( valor_str , "%d" , &valor ) not_eq 1 ) { /* printf ("Error with the int value!\n"); */ fclose ( fp ); }

    fclose ( fp );

    return valor;
}





// FUNCTION: GETS A FLOAT VALUE FROM A LINE IN A FILE
// @param01: FILE_NAME { THE FILE THAT WILL BE USED }
// @param02: WHAT_LINE { THE LINE THAT WE GONNA GET }
float
FLEE_GETSfloat ( const char * FILE_NAME , int WHAT_LINE )
{

    FILE* fp = fopen ( FILE_NAME , "r" );
    // if ( fp == NULL ) printf ("Error opening the file.\n");

    WHAT_LINE++;

    char  linha_atual [ 99999 ];
    float valor = -1;

    for ( int i = 1; i <= WHAT_LINE; i++ )
       if ( fgets ( linha_atual , sizeof ( linha_atual ) , fp ) == NULL ) { /* printf ("Error reading the line.\n"); */  fclose ( fp ); }

    char valor_str [ 99999 ];
    int j = 0;

    for ( int i = 0; i < strlen ( linha_atual ); i++ )
       if ( isdigit ( linha_atual [ i ] ) or linha_atual [ i ] == '.' or linha_atual [ i ] == ',' ) { valor_str [ j ] = linha_atual [ i ]; j++; }

    valor_str [ j ] = '\0';

    for ( int i = 0; i < strlen ( valor_str ); i++)
       if ( valor_str [ i ] == ',' ) valor_str [ i ] = '.';

    if ( sscanf ( valor_str , "%f" , &valor ) not_eq 1 ) { /* printf ("Error reading the line.\n"); */ fclose ( fp ); }

    fclose ( fp );
    return valor;
}





// FUNCTION: GETS A DOUBLE VALUE FROM A LINE IN A FILE
// @param01: FILE_NAME { THE FILE THAT WILL BE USED }
// @param02: WHAT_LINE { THE LINE THAT WE GONNA GET }
double
FLEE_GETSdouble ( const char * FILE_NAME , int WHAT_LINE )
{

    FILE* fp = fopen ( FILE_NAME , "r" );
    if ( fp == NULL ) printf ("Error opening the file.\n");

    char  linha_atual [ 99999 ];
    double valor = -1;

    for ( int i = 1; i <= WHAT_LINE; i++ )
       if ( fgets ( linha_atual , sizeof ( linha_atual ) , fp ) == NULL ) { printf ("Error reading the line.\n");  fclose ( fp ); }

    char valor_str [ 99999 ];
    int j = 0;

    for ( int i = 0; i < strlen ( linha_atual ); i++ )
       if ( isdigit ( linha_atual [ i ] ) or linha_atual [ i ] == '.' or linha_atual [ i ] == ',' ) { valor_str [ j ] = linha_atual [ i ]; j++; }

    valor_str [ j ] = '\0';

    for ( int i = 0; i < strlen ( valor_str ); i++)
       if ( valor_str [ i ] == ',' ) valor_str [ i ] = '.';

    if ( sscanf ( valor_str , "%lf" , &valor ) not_eq 1 ) { printf ("Error reading the line.\n"); fclose ( fp ); }

    fclose ( fp );
    return valor;
}





// FUNCTION: GETS A STRING VALUE FROM A LINE IN A FILE
// @param01: FILE_NAME { THE FILE THAT WILL BE USED }
// @param02: STRING { THE PLACE TO SAVE THE STRING }
// @param03: WHAT_LINE { THE LINE THAT WE GONNA GET }
void
FLEE_GETSstring ( const char * FILE_NAME , char * STRING, int WHAT_LINE )
{
    FILE * file = fopen ( FILE_NAME , "r" );
    // if ( file == NULL ) printf("Error opening the file!");

    int  line_number = 0;
    char line[ 99999 ];

    memset ( line , 0 , sizeof ( line ) );

    while ( fgets ( line , sizeof ( line ) , file ) not_eq NULL )
    {
        line_number++;

        if (line_number == WHAT_LINE) { strcpy ( STRING , line ); break; }

        memset ( line , 0 , sizeof ( line ) );
    }

    fclose ( file );
}





// FUNCTION: GETS A INT WITHIN A AREA
// @param01: FILE_NAME { THE FILE THAT WILL BE USED }
// @param02: WHAT_LINE { THE LINE THAT WE GONNA GET }
// @param03: START_COL { THE STARTING COL }
// @param04: END_COL   { THE ENDING COL }
int
FLEE_GETCHint ( const char * FILE_NAME, int WHAT_LINE, int START_COL, int END_COL )
{
    FILE * fp = fopen ( FILE_NAME , "r" );
    // if ( fp == NULL ) printf ("Error opening the file!\n");

    char linha_atual[ 99999 ];
    int valor = -1;

    for ( int i = 1; i <= WHAT_LINE; i++ )
       if ( fgets ( linha_atual , sizeof ( linha_atual ) , fp ) == NULL ) { /* printf ("Error with the line\n"); */ fclose ( fp ); }

    char valor_str [ 100 ];
    int j = 0;

    for ( int i = START_COL - 1; i < END_COL and i < strlen ( linha_atual ); i++ )
       if ( isdigit ( linha_atual [ i ] ) ) { valor_str [ j ] = linha_atual [ i ];  j++; }

    valor_str [ j ] = '\0';

    if ( sscanf ( valor_str , "%d" , &valor ) not_eq 1 ) { /* printf ("Error with the int value!\n"); */ fclose ( fp ); }

    fclose ( fp );
    return valor;
}





// FUNCTION: GETS A FLOAT WITHIN A AREA
// @param01: FILE_NAME { THE FILE THAT WILL BE USED }
// @param02: WHAT_LINE { THE LINE THAT WE GONNA GET }
// @param03: START_COL { THE STARTING COL }
// @param04: END_COL   { THE ENDING COL }
float
FLEE_GETCHfloat ( const char * FILE_NAME , int WHAT_LINE , int START_COL , int END_COL )
{

    FILE * fp = fopen ( FILE_NAME , "r" );
    // if ( fp == NULL ) printf ("Error opening the file!\n");

    char linha_atual[ 99999 ];
    float valor = -1.0;

    for ( int i = 1; i <= WHAT_LINE; i++ )
       if ( fgets ( linha_atual , sizeof ( linha_atual ) , fp ) == NULL ) { /* printf ("Error reading the file!\n"); */ fclose ( fp ); }

    char valor_str[100];
    int j = 0;

    for ( int i = START_COL - 1; i < END_COL and i < strlen ( linha_atual ); i++ )
       if ( isdigit ( linha_atual [ i ] ) or linha_atual [ i ] == '.' or linha_atual [ i ] == ',') { valor_str [ j ] = ( linha_atual [ i ] == ',' ) ? '.' : linha_atual [ i ]; j++; }

    valor_str [ j ] = '\0';

    if ( sscanf ( valor_str , "%f" , &valor ) not_eq 1 ) { /* printf("Error with the float value!\n"); */ fclose ( fp ); }

    fclose ( fp );
    return valor;
}




// FUNCTION: GETS A DOUBLE WITHIN A AREA
// @param01: FILE_NAME { THE FILE THAT WILL BE USED }
// @param02: WHAT_LINE { THE LINE THAT WE GONNA GET }
// @param03: START_COL { THE STARTING COL }
// @param04: END_COL   { THE ENDING COL }
double
FLEE_GETCHdouble ( const char * FILE_NAME , int WHAT_LINE , int START_COL , int END_COL )
{

    FILE * fp = fopen ( FILE_NAME , "r" );
    // if ( fp == NULL ) printf ("Error opening the file!\n");

    char linha_atual[ 99999 ];
    double valor = -1.0;

    for ( int i = 1; i <= WHAT_LINE; i++ )
       if ( fgets ( linha_atual , sizeof ( linha_atual ) , fp ) == NULL ) { /* printf ("Error reading the file!\n"); */ fclose ( fp ); }

    char valor_str[100];
    int j = 0;

    for ( int i = START_COL - 1; i < END_COL and i < strlen ( linha_atual ); i++ )
       if ( isdigit ( linha_atual [ i ] ) or linha_atual [ i ] == '.' or linha_atual [ i ] == ',') { valor_str [ j ] = ( linha_atual [ i ] == ',' ) ? '.' : linha_atual [ i ]; j++; }

    valor_str [ j ] = '\0';

    if ( sscanf ( valor_str , "%lf" , &valor ) not_eq 1 ) { /* printf("Error with the float value!\n"); */ fclose ( fp ); }

    fclose ( fp );
    return valor;
}





// FUNCTION: GETS A CHAR WITHIN A AREA
// @param01: FILE_NAME { THE FILE THAT WILL BE USED }
// @param02: WHAT_LINE { THE LINE THAT WE GONNA GET }
// @param03: START_COL { THE STARTING COL }
// @param04: END_COL   { THE ENDING COL }
char
FLEE_GETCHchar ( const char * FILE_NAME , int WHAT_LINE , int START_COL , int END_COL )
{
    FILE * fp = fopen ( FILE_NAME , "r" );
    // if ( fp == NULL ) printf ("Error opening the file!\n");

    START_COL++;

    char linha_atual [ 99999 ];
    char valor = '\0';

    for ( int i = 1; i <= WHAT_LINE; i++ )
        if ( fgets ( linha_atual , sizeof ( linha_atual ) , fp ) == NULL ) { /* printf ("Error with the line\n"); */ fclose ( fp ); }

    for ( int i = START_COL - 1; i < END_COL and i < strlen ( linha_atual ); i++ )
       if ( !isspace ( linha_atual [ i ] ) ) { valor = linha_atual [ i ]; break; }

    fclose ( fp );
    return valor;
}





// FUNCTION: GETS A STRING WITHIN A AREA
// @param01: FILE_NAME { THE FILE THAT WILL BE USED }
// @param02: WHAT_LINE { THE LINE THAT WE GONNA GET }
// @param03: START_COL { THE STARTING COL }
// @param04: END_COL   { THE ENDING COL }
// @param05: STRING   { THE SAVING STRING}
void
FLEE_GETCHstring ( const char * FILE_NAME , int WHAT_LINE , int START_COL , int END_COL , char * STRING )
{

    FILE * fp = fopen ( FILE_NAME , "r" );
    // if ( fp == NULL ) printf ("Error opening the file!\n");

    START_COL++;

    char linha_atual [ 99999 ];

    for ( int i = 1; i <= WHAT_LINE; i++ )
       if ( fgets ( linha_atual , sizeof ( linha_atual ) , fp ) == NULL ) { /* printf ("Error with the line\n"); */ fclose ( fp ); }

    int j = 0;

    for ( int i = START_COL - 1; i < END_COL and i < strlen ( linha_atual ); i++ )
    {
        if ( linha_atual [ i ] == '\n' ) break;

        STRING [ j ] = linha_atual [ i ]; j++;
    }

    STRING [ j ] = '\0';
    fclose ( fp );
}





// FUNCTION: GETS A INT WITHIN A STARTING COL
// @param01: FILE_NAME { THE FILE THAT WILL BE USED }
// @param02: WHAT_LINE { THE LINE THAT WE GONNA GET }
// @param03: COL { THE STARTING COL }
int
FLEE_GETSLint ( const char * FILE_NAME , int WHAT_LINE , int COL )
{
    FILE * fp = fopen ( FILE_NAME , "r" );
    // if ( fp == NULL ) printf ("Error opening the file!\n");

    char linha_atual [ 99999 ];

    for ( int i = 1; i <= WHAT_LINE; i++ )
       if ( fgets ( linha_atual , sizeof ( linha_atual ) , fp ) == NULL ) { /* printf ("Error with the line\n"); */ fclose ( fp ); }

    int valor = -1;
    char valor_str [ 100 ];
    int j = 0;

    for ( int i = COL - 1; i < strlen ( linha_atual ); i++ )
       if ( isdigit ( linha_atual [ i ] ) ) { valor_str [ j ] = linha_atual [ i ]; j++; }

    valor_str [ j ] = '\0';

    if ( sscanf ( valor_str , "%d" , &valor ) not_eq 1 ) { /* printf("Error with the int value!\n"); */ fclose ( fp ); }

    fclose ( fp );
    return valor;
}





// FUNCTION: GETS A FLOAT WITHIN A STARTING COL
// @param01: FILE_NAME { THE FILE THAT WILL BE USED }
// @param02: WHAT_LINE { THE LINE THAT WE GONNA GET }
// @param03: COL { THE STARTING COL }
float
FLEE_GETSLfloat ( const char * FILE_NAME , int WHAT_LINE , int COL )
{

    FILE * fp = fopen ( FILE_NAME , "r" );
    // if ( fp == NULL ) printf ("Error opening the file!\n");

    char linha_atual [ 99999 ];

    for ( int i = 1; i <= WHAT_LINE; i++)
       if ( fgets ( linha_atual , sizeof ( linha_atual ) , fp ) == NULL) { /* printf ("Error with the line\n"); */ fclose ( fp ); }

    float valor = -1.0;
    char valor_str [ 100 ];
    int j = 0;

    for ( int i = COL - 1; i < strlen ( linha_atual ); i++ )
       if ( isdigit ( linha_atual [ i ] ) or linha_atual [ i ] == '.' or linha_atual [ i ] == ',') { valor_str [ j ] = linha_atual [ i ]; j++; }

    valor_str [ j ] = '\0';

    for ( int i = 0; i < strlen ( valor_str ); i++ )
       if ( valor_str [ i ] == ',' ) valor_str [ i ] = '.';

    if ( sscanf ( valor_str , "%f" , &valor ) not_eq 1 )
    {
        // printf ("Error with the float value!\n");
        fclose ( fp );
    }

    fclose ( fp );
    return valor;
}





// FUNCTION: GETS A DOUBLE WITHIN A STARTING COL
// @param01: FILE_NAME { THE FILE THAT WILL BE USED }
// @param02: WHAT_LINE { THE LINE THAT WE GONNA GET }
// @param03: COL { THE STARTING COL }
double
FLEE_GETSLdouble ( const char * FILE_NAME , int WHAT_LINE , int COL )
{

    FILE * fp = fopen ( FILE_NAME , "r" );
    // if ( fp == NULL ) printf ("Error opening the file!\n");

    char linha_atual [ 99999 ];

    for ( int i = 1; i <= WHAT_LINE; i++)
       if ( fgets ( linha_atual , sizeof ( linha_atual ) , fp ) == NULL) { /* printf ("Error with the line\n"); */ fclose ( fp ); }

    double valor = -1.0;
    char valor_str [ 100 ];
    int j = 0;

    for ( int i = COL - 1; i < strlen ( linha_atual ); i++ )
       if ( isdigit ( linha_atual [ i ] ) or linha_atual [ i ] == '.' or linha_atual [ i ] == ',') { valor_str [ j ] = linha_atual [ i ]; j++; }

    valor_str [ j ] = '\0';

    for ( int i = 0; i < strlen ( valor_str ); i++ )
       if ( valor_str [ i ] == ',' ) valor_str [ i ] = '.';

    if ( sscanf ( valor_str , "%lf" , &valor ) not_eq 1 )
    {
        // printf ("Error with the float value!\n");
        fclose ( fp );
    }

    fclose ( fp );
    return valor;
}





// FUNCTION: GETS A CHAR WITHIN A STARTING COL
// @param01: FILE_NAME { THE FILE THAT WILL BE USED }
// @param02: WHAT_LINE { THE LINE THAT WE GONNA GET }
// @param03: COL { THE STARTING COL }
char
FLEE_GETSLchar ( const char * FILE_NAME , int WHAT_LINE , int COL )
{
    FILE * fp = fopen ( FILE_NAME , "r" );
    // if ( fp == NULL ) printf ("Error opening the file!\n");

    char linha_atual [ 99999 ];
    char valor = '\0';

    for (int i = 1; i <= WHAT_LINE; i++)
       if ( fgets ( linha_atual , sizeof ( linha_atual ) , fp ) == NULL ) { /* printf ("Error with the line\n"); */ fclose ( fp ); }

    for ( int i = COL; i < strlen ( linha_atual ); i++)
       if ( !isspace ( linha_atual [ i ] ) ) { valor = linha_atual [ i ]; break; }

    fclose ( fp );
    return valor;
}





// FUNCTION: GETS A STRING WITHIN A STARTING COL
// @param01: FILE_NAME { THE FILE THAT WILL BE USED }
// @param02: WHAT_LINE { THE LINE THAT WE GONNA GET }
// @param03: COL { THE STARTING COL }
// @param04: STRING { THE STRING TO SAVE }
void
FLEE_GETSLstring ( const char * FILE_NAME , int WHAT_LINE , int COL , char * STRING )
{
    FILE * fp = fopen ( FILE_NAME , "r" );
    // if ( fp == NULL ) printf ("Error opening the file!\n");

    char linha_atual [ 99999 ];

    for ( int i = 0; i < WHAT_LINE; i++ )
       if ( fgets ( linha_atual , sizeof ( linha_atual ) , fp ) == NULL) { /* printf ("Error with the line\n"); */ fclose ( fp ); }

    int len = strlen ( linha_atual );

    if ( linha_atual [ len - 1 ] == '\n' ) linha_atual [ len - 1 ] = '\0';

    int str_idx = 0;

    for ( int i = COL; i < len and linha_atual [ i ] not_eq '\0'; i++ ) { STRING [ str_idx ] = linha_atual [ i ]; str_idx++; }

    STRING [ str_idx ] = '\0';

    fclose( fp );
}





// FUNCTION: PRINT ALL THE CONTENT OF THE FILE
// @param01: FILE_NAME { THE FILE THAT WILL BE USED }
void
FLEE_PRINT ( const char * FILE_NAME )
{
    FILE * file = fopen ( FILE_NAME , "r" );

    // if ( file == NULL ) printf ("Error opening the file!\n");

    int c;

    while ( ( c = fgetc ( file ) ) not_eq EOF ) putchar ( c );

    fclose ( file );
}





// FUNCTION: PRINT A ESPECIFIC LINE OF A FILE
// @param01: FILE_NAME { THE FILE THAT WILL BE USED }
// @param02: WHAT_LINE { THE LINE THAT WILL BE PRINTED }
void
FLEE_PRINTLINE ( const char * FILE_NAME , int WHAT_LINE )
{
    FILE * file = fopen ( FILE_NAME , "r" );

    // if ( file == NULL ) printf ("Erro ao abrir o arquivo!\n");

    int current_line = 1;
    int c;

    while ( ( c = fgetc ( file ) ) not_eq EOF )
    {
         if ( current_line == WHAT_LINE ) putchar ( c );

         if ( c == '\n' ) current_line++;
    }

    fclose ( file );
}





// FUNCTION: PRINT A ESPECIFIC LINE OF A FILE STARTING FROM A COL
// @param01: FILE_NAME { THE FILE THAT WILL BE USED }
// @param02: WHAT_LINE { THE LINE THAT WILL BE PRINTED }
// @param02: WHAT_COL { THE STARTING COL }
void
FLEE_PRINTCOL ( const char * FILE_NAME , int WHAT_LINE , int WHAT_COL )
{
    FILE * file = fopen ( FILE_NAME , "r" );

    // if ( file == NULL ) printf ("Error opening the file!\n");

    int current_line = 1;
    int current_col = 0;
    int c;

    while ( ( c = fgetc ( file ) ) not_eq EOF )
    {
        if ( current_line == WHAT_LINE and current_col >= WHAT_COL ) putchar ( c );

        if (c == '\n') { current_line++; current_col = 0; }

        else current_col++;

    }

    fclose ( file );
}





// FUNCTION: PRINT A ESPECIFIC AREA TEXT FROM A FILE
// @param01: FILE_NAME { THE FILE THAT WILL BE USED }
// @param02: WHAT_LINE { THE LINE THAT WILL BE PRINTED }
// @param02: START_COL { THE STARTING COL }
// @param02: END_COL { THE ENDING COL }
void
FLEE_PRINTAREA ( const char* FILE_NAME , int WHAT_LINE , int START_COL , int END_COL )
{
    FILE * file = fopen ( FILE_NAME , "r" );

    // if ( file == NULL ) printf ("Error opening the file!\n");

    int current_line = 1;
    int current_col = 0;
    int c;

    while ( ( c = fgetc ( file ) ) not_eq EOF )
    {
         if ( current_line == WHAT_LINE and current_col >= START_COL and current_col <= END_COL ) putchar ( c );

         if ( c == '\n' ) { current_line++; current_col = 0; }

         else current_col++;
    }

    fclose ( file );
}


// END
