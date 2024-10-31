#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

#define ROWS 6
#define COLS 5

//Function to fill 2d array with random characters
void fillArray(char arr[ROWS][COLS]){
    for(int i = 0; i < ROWS - 1 ; i++){ //ROWS were originally had to be filled from 0 to 5 , but with ROWS - 1  it will be filled till 4 leaving 5th row for ID 
        for(int j = 0; j< COLS; j++){
            arr[i][j] = 'A' + (rand() % 26); //Random char from A to z            
        }
    }
    //Fill the last row with last 4 digits of ID
    arr[ROWS - 1][0] = '0';
    arr[ROWS - 1][1] = '5';
    arr[ROWS - 1][2] = '3';
    arr[ROWS - 1][4] = '1';
}
//Function to print 2d array
void printArray(char arr[ROWS][COLS]){
    for(int i = 0; i<ROWS; i++){
        for(int j = 0; j<COLS; j++){
            printf(" %c", arr[i][j]);
        }
        printf("\n");
    }
}
//Function to search for string in the array row wise or column wise
int searchString(char arr[ROWS][COLS] , char *str){
    int strLen = strlen(str);
    int found = 0;

    //Search row-wise
    for(int i = 0; i<ROWS; i++){
        for(int j = 0; j<= COLS - strLen; j++ ){ //Specifies the starting positions and make sure we dont go out of array bounds while searching
            int match = 1;
            for(int k = 0; k< strLen ;k++){
                if(arr[i][j+k] != str[k]){
                    match = 0;
                    break;
                }
            }
            if(match == 1){
                found = 1;
                break;
            }
        }
    }
    //Search column wise
    for(int j = 0; j<COLS; j++){
        for(int i = 0; i<ROWS - strLen; i++){
            int match = 1;
            for(int k = 0; k< strLen; k++){
                if(arr[i+k][j] != str[k]){
                    match = 0;
                    break;
                }
            }
            if(match){
                found = 1;
                break;
            }
        }
    }
    return found;
}
int main(){
    srand(time(0));
    // used srand in main because on each calling there would be different time leading to different sequence . if i placed it in fill array , then every time i call , the seed would start from same position leading to same sequence.
    char arr[ROWS][COLS];
    char str[10];
    int score = 0;

    fillArray(arr);
    printArray(arr);

    while(1){
        printf("Enter the string to search or 'END' to stop: \n");
        scanf("%s", str);

        if(strcmp(str, "END") == 0){
            break; 
        }
        if(searchString(arr,str)){
        printf("%s is present.", str);
        score++;
        }else {
            printf("%s is not present.", str);
            score --;
        }
        printf("Score %d\n", score);

        fillArray(arr);
        printArray(arr);        
    }
    return 0;
    
}