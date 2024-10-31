#include<stdio.h>
#include<string.h>
//Making print grid and valid move function as it would be used number of time in function
//Function to display the 5*5 grid
void display_grid(char grid[5][5]){
    for(int i = 0; i<5; i++){
        for(int j=0; j<5;j++){
            printf(" %c", grid[i][j]);
        }
        printf("\n");
    }
}
int isValidMove(int row, int col, char grid[5][5]){
    if(row<0 || row >=5 || col < 0 || col >= 5){
        return 0; //Move is out of the bounds of grid
    }
    if(grid[row][col] == 'X'){
        return 0; 
    }
    return 1; //Move is valid
}
int main(){
    char grid[5][5] = {
        {' ', 'I', 'X', ' ', ' '},
        {' ', 'X', ' ', ' ', ' '},
        {' ', ' ', ' ', 'X', ' '},
        {'I', ' ', ' ', 'X', ' '},
        {' ', ' ', ' ', ' ', 'P'}
    };
    //Initializing starting positions
    int player_row = 4;
    int player_col = 4; 
    char move;

    while(1){
        display_grid(grid);
        //Asking for player input
        printf("Enter the move(W: up , S: down, A: left, D: right, Q: quit): ");
        scanf(" %c", &move);

        //Handling movement
        int new_row = player_row;
        int new_col = player_col;

        if(move == 'W' || move == 'w') {
            new_row = player_row - 1;
        } else if (move == 'S' || move == 's') {
            new_row = player_row + 1;
        } else if (move == 'A' || move == 'a') {
            new_col = player_col - 1;
        } else if (move == 'D' || move == 'd') {
            new_col = player_col + 1;
        } else if (move == 'Q' || move == 'q') {
            printf("Game over! You quit the game.\n");
            break;
        } else {
            printf("Invalid move! Please enter W, A, S, D, or Q.\n");
            continue;
        }

        //Check if the move was within the bounds using function
        if(isValidMove(new_row,new_col,grid)){
            //collect item
            if(grid[new_row][new_col] == 'I'){
                printf("You collected an item.\n");
            }
            //Move the player
            grid[player_row][player_col] = ' '; //Clearing the old position
            grid[new_row][new_col] = 'P'; //Set the new position of player. it also serves the function of removing item if player reaches on item
            
            player_row = new_row;
            player_col = new_col;
        }else{
            printf("You cannot move , its an obstacle or outside grid.\n");
        }
    }
    return 0;
}