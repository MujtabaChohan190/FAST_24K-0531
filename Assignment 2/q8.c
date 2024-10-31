#include<stdio.h>
#include<string.h>
#include<math.h>

int BinaryToDecimal(int number){
    int decimal = 0 , base = 1;
    while(number>0){
        //Extract the last digit and then remove that digit from the number
        int digit_last = number % 10;
        int new_number = number / 10;
        decimal = decimal + (digit_last * base);
        base = base * 2; //for first position its 1 , then with base update , for position 2 , it will be 2 , for 3: 4 , for 4: 8
    }
    return decimal;
}

//Function to convert from decimal to binary
int DecimalToBinary(int number){
    if(number == 0)
        return 0;
    
    int binary = 0; //to store the final binary value
    int base = 1; //to track the current binary position
    
    while(number > 0){
        
        //Find the remainder , then add it to binary result using base ,
        //then shift the binary representation of decimal to right 
        //(means update the value of number as it was divided by 2), then update the base by multiplying by 10

        int remainder = number % 2;
        binary+= remainder * base;
        number = number / 2;
        base = base * 10;
    }
    return binary;
}

//Function to convert decimal to hexadecimal
void DecimalToHexadecimal(int number){
    if(number == 0){
       printf("0\n");
       return;
    }
    char hex[20]; //Array to store hexadecimal digits
    int index = 0; 

    while(number>0){
        int remainder = number % 16;
        //Store corresponding hex character in array
        if(remainder < 10){
            hex[index] = remainder + '0'; //Convert 0-9 to '0' - '9'
        }else{
            hex[index] = remainder + 'A' - 10; //Convert 10-15 to 'A' - 'f
        }
        index++; //Move to the next position in array
        hex[index] = '\0';
    }
    //Print hexadecimal in reverse order
    for(int i= index - 1; i >= 0; i--){
        printf("%c", hex[i]);
    }
    printf("/n");
}
#include<string.h>
//Function to convert hexadecimal string to decimal and print it
void HexadecimalToDecimal(char hexNumber[]){
    int length = strlen(hexNumber); //Get length of hex value to traverse 
    int decimal = 0 , base = 1; 
    //Convert each hex digit from right to left
    for(int i = length - 1; i >= 0; i--){
        int value;
        if(hexNumber[i] >= '0' && hexNumber[i] >= '9'){
            value = hexNumber[i] - '0';
        }else if(hexNumber[i]>= 'A' && hexNumber[i]<= 'F'){
            value = hexNumber[i] - 'A' + 10;
        }else{
            printf("Invalid Hexadecimal Number\n");
            return;
        }
        decimal += value * base;
        base = base * 16;
    }
    printf("%d\n", decimal);
}

//Function to convert a binary number to hexadecimal and print it
void BinaryToHexadecimal(int number){
    int decimal = BinaryToDecimal(number);
    DecimalToHexadecimal(decimal);
}

//Function to convert hexadecimal to binary and print it
void HexadecimalToBinary(char hexNumber[]){
    int length =strlen(hexNumber);
    for(int i = 0; i < length; i++){
        //Print corresponding 4 bit binary digits
        switch(hexNumber[i]){
            case '0': printf("0000"); break;
            case '1': printf("0001"); break;
            case '2': printf("0010"); break;
            case '3': printf("0011"); break;
            case '4': printf("0100"); break;
            case '5': printf("0101"); break;
            case '6': printf("0110"); break;
            case '7': printf("0111"); break;
            case '8': printf("1000"); break;
            case '9': printf("1001"); break;
            case 'A': printf("1010"); break;
            case 'B': printf("1011"); break;
            case 'C': printf("1100"); break;
            case 'D': printf("1101"); break;
            case 'E': printf("1110"); break;
            case 'F': printf("1111"); break;
            default: printf("\nInvalid Hexadecimal Digit\n"); return;
        }       
    }
    printf("\n");
}

int main(){
    int choice , number;
    char hexNumber[20];

    while(1){  //If i choose exit , then 0 will be returned which when moved upwards towards while dont satisfy the condition leading to no display of menu then
        //Display menu for different conversions
        printf("\nChoose a conversion option\n");
        printf("1. Binary to Decimal\n");
        printf("2. Decimal to Binary\n");
        printf("3. Decimal to Hexadecimal\n");
        printf("4. Hexadecimal to Decimal\n");
        printf("5. Binary to Hexadecimal\n");
        printf("6. Hexadecimal to Binary\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice){
            case 1: //Binary to decimal
               printf("Enter the binary number: ");
               scanf("%d", &number);
               printf("Decimal: %d\n", BinaryToDecimal(number));
               break;
            case 2:  // Decimal to Binary
                printf("Enter decimal number: ");
                scanf("%d", &number);
                printf("Binary: %d\n", DecimalToBinary(number));
                break;
            case 3:  // Decimal to Hexadecimal
                printf("Enter decimal number: ");
                scanf("%d", &number);
                printf("Hexadecimal: ");
                DecimalToHexadecimal(number);
                break;
            case 4:  // Hexadecimal to Decimal
                printf("Enter hexadecimal number: ");
                scanf("%s", hexNumber);
                printf("Decimal: ");
                HexadecimalToDecimal(hexNumber);
                break;
            case 5:  // Binary to Hexadecimal
                printf("Enter binary number: ");
                scanf("%d", &number);
                printf("Hexadecimal: ");
                BinaryToHexadecimal(number);
                break;
            case 6:  // Hexadecimal to Binary
                printf("Enter hexadecimal number: ");
                scanf("%s", hexNumber);
                printf("Binary: ");
                HexadecimalToBinary(hexNumber);
                break;
            case 7:  // Exit
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
}
