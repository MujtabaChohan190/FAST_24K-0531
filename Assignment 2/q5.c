#include<stdio.h>
//Function to print horizontal histogram
void horizontal_histogram(int values[] , int count){
    printf("Horizontal Histogram\n");
    for(int i = 0; i<count; i++){
        printf("Value %d: ", i+1);
        for(int j=0; j<values[i]; j++){
            printf("*");
        }
        printf("\n");
    }
}

//Function to print vertical histogram
void vertical_histogram(int values[], int count){
    //Find the max value in the array to determine the number of rows
    int max_value = values[0];
    printf("Vertical Histogram\n");
    for(int i = 0; i<count;i++){
        if(values[i]>max_value){
            max_value = values[i];
        }
    }
    for(int i = max_value; i>0; i--){ //Serves as row 
        for(int j = 0; j<count; j++){
            if(values[j]>= i){ //Serves as printing asterik on a certain row if condition matches
                printf("*");
            }else{
                printf(" ");
            }
        } 
        printf("\n");
    } 
    //Print the bottom numbers
    for(int i = 0; i<count;i++){
        printf("%d", values[i]);
    }  
}
int main() {
    int integers_count = 0;

    //Get the count of integers
    printf("Enter the count of integers to be taken as input: ");
    scanf("%d", &integers_count);

    //Declaring Array

    int integers[integers_count];

    //Enter the integer to be used in values array
    for(int i=0 ; i<integers_count; i++){
        printf("Enter the integers values in an array: ");
        scanf("%d", &integers[i]);
    }

    // Call the functions to print the histograms
    horizontal_histogram(integers, integers_count);
    vertical_histogram(integers, integers_count);

    return 0;
}
