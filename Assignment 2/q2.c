/*A popular beverage company is looking to optimize their marketing campaigns by understanding
the frequency of characters used in their promotional slogans. They believe that analyzing these
patterns can help them tailor their messaging to specific demographics and improve brand recall.
You've been tasked with creating a C code function to analyze the character frequency in a list of
slogans provided by the marketing team. This analysis will help identify the most common letters
used in their slogans, which can inform future marketing strategies.
Input:
slogans = ["buy now", "save big", "limited offer"]
Expected Output:
 For "buy now": {'b': 1, 'u': 1, 'y': 1, ' ': 1, 'n': 1, 'o': 1, 'w': 1}
 For "save big": {'s': 1, 'a': 1, 'v': 1, 'e': 1, ' ': 1, 'b': 1, 'i': 1, 'g': 1}
 For "limited offer": {'l': 1, 'i': 1, 'm': 1, 't': 1, 'e': 2, 'd': 1, ' ': 1, 'o': 1, 'f': 1, 'r': 1}*/
 
#include <stdio.h>
#include <string.h>
int main()
{
    int i, j, num_slogans;

    char slogans[3][20] = {"buy now", "save big", "limited offer"};
    num_slogans = 3;
    int char_count[3][256] = {0}; // 2D array to store the count of each character of 3 strings

    // Traverse through each string and count characters
    for (i = 0; i < num_slogans; i++)
    {
        for (j = 0; slogans[i][j] != '\0'; j++)
        { // Get the current character of the string
            char ch = slogans[i][j];
            int ascii_value = (int)ch; // Getting the ascii value of the character
            char_count[i][ascii_value]++;
        }
    }
    // Print character counts for each character
    for (i = 0; i < num_slogans; i++)
    {
        printf("\nFor \"%s\": {", slogans[i]);
        int first = 1; // Using this to ouput nicely
        for (j = 0; j < 256; j++)
        {
            if (char_count[i][j] > 0)
            { // Done to ensure that only the characters in string appear
                if (!first)
                {
                    printf(", ");
                }
                printf("'%c': %d", j, char_count[i][j]);
                first = 0; // if first = 1 , this means the current character is the first one being printed so theres no need of comma
                          //  if first = 0 , this means that at least one character has been printed , so comma is place
            }
        }
        printf("}\n");
    }
    return 0;
}
