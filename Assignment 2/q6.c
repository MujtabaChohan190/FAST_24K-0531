#include<stdio.h>
int move(int N){
    if(N % 5 == 0){ //If number of matchstick is multiple of 5, its impossible for A to win because B can always return the matchstick count to mutiple of 5
        return -1;
    }else{
        return N % 5; // If number of matchstick is not a multiple of 5, A can always input values modulus (means remainder) by 5 , leave a multiple of 5 for B, ensuring a guaranteed win by forcing B into losing positions throughout the game. 
    }
}
int main(){
    int N;
    printf("Input the number of matchstick: ");
    scanf("%d", N);
    int result = move(N); //Variable to store -1 if A is bound to lose or first move of A if A is bound to win due to N being not a multiple of 5
    if(result == -1){
        printf("It is impossible for A to win the game");
    }else{
        printf("A should pick %d matchsticks on his first turn to win the game", result);
    }
    return 0;
}