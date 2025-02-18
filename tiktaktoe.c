#include <stdio.h>
#define RED     "\x1b[31m"
#define GREEN   "\x1b[32m"
#define YELLOW  "\x1b[33m"
#define BLUE    "\x1b[34m"
#define MAGENTA "\x1b[35m"
#define CYAN    "\x1b[36m"
#define RESET   "\x1b[0m"

int check_win(char arr[3][3], char player){
    
    for(int i = 0; i < 3; i++){
        if(arr[i][0] == arr[i][1] && arr[i][0] == arr[i][2] && arr[i][0] == player){
            return 1;
        }
    }
    
    for(int i = 0; i < 3; i++){
        if(arr[0][i] == arr[1][i] && arr[0][i] == arr[2][i] && arr[0][i] == player){
            return 1;
        }
    }
    
    if(arr[0][0] == arr[1][1] && arr[0][0] == arr[2][2] && arr[0][0] == player){
        return 1;
    }
    if(arr[0][2] == arr[1][1] && arr[0][2] == arr[2][0] && arr[0][2] == player){
        return 1;
    }
    return 0;
}

int main(){ 
    char arr[3][3];
    char matrix = '1';
    int player = 0;
    char choise = 'x';
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            arr[i][j] = matrix++;
        }
    }
    do{    
       if(player % 2 == 0){
           printf(GREEN"Player 1\n");
       }else{
           printf(BLUE"Player 2\n");
       }
        printf(RED"__________________\n");
        printf(RED"|__"GREEN"%c"RED"_|_"GREEN"%c"RED"__|_"GREEN"%c"RED"__|\n", arr[0][0], arr[0][1], arr[0][2]);
        printf(RED"|__"GREEN"%c"RED"_|_"GREEN"%c"RED"__|_"GREEN"%c"RED"__|\n", arr[1][0], arr[1][1], arr[1][2]);
        printf(RED"|__"GREEN"%c"RED"_|_"GREEN"%c"RED"__|_"GREEN"%c"RED"__|\n", arr[2][0], arr[2][1], arr[2][2]);
       printf(RED"Enter the choise: ");
       scanf("%c", &choise);
       getchar();
       for(int i = 0; i < 3; i++){
           for(int j = 0; j < 3; j++){
               if(arr[i][j] == choise){
                if(player % 2 == 0){
                    arr[i][j] = 'X';
                }else{
                   arr[i][j] = 'O';
                }
            }
        }
    }
    if(check_win(arr, 'X') == 1){
        printf(YELLOW"Player 1 wins\n");
        return 0;
    }
    else if(check_win(arr, 'O') == 1){
        printf(YELLOW"Player 2 wins\n");
        return 0;
    }

     player++;
    }while(player < 9); 
 printf("Draw\n");    
 return 0;  
}       
        
