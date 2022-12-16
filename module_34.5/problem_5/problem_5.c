#include <stdio.h>
int main()
{
    FILE *inputFile;
    FILE *outputFile;
    inputFile = fopen("input.txt", "r");
    outputFile = fopen("output.txt", "w");
    if (inputFile == NULL)
    {
        fprintf(outputFile, "Not Found\n");
        return 0;
    }

    int count;
    fscanf(inputFile, "%d", &count);
    for (int i = 0; i < count; i++)
    {
        for (int k = 0; k < count - i - 1; k++)
            fprintf(outputFile, " ");

        for (int j = 0; j < count; j++)
            fprintf(outputFile, "#");
        fprintf(outputFile, "\n");
    }
    fclose(inputFile);
    fclose(outputFile);
    return 0;
}
