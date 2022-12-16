#include <stdio.h>
int main()
{
    FILE *inputFile;
    FILE *outputFile;
    inputFile = fopen("input.txt", "r");
    outputFile = fopen("output.txt", "a");
    if (inputFile == NULL)
    {
        fprintf(outputFile, "Not Found\n");
        return 0;
    }

    int year;
    fscanf(inputFile, "%d", &year);
    
    if (year % 400 == 0)
        fprintf(outputFile, "%d-->YES\n", year);
    else if (year % 100 == 0)
        fprintf(outputFile, "%d-->YES\n", year);
    else if (year % 4 == 0)
        fprintf(outputFile, "%d-->YES\n", year);
    else
        fprintf(outputFile, "%d-->NO\n", year);


    fclose(inputFile);
    fclose(outputFile);
    return 0;
}
