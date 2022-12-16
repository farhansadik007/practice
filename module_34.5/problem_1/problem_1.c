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
    int n;
    while (1)
    {
    int a = fscanf(inputFile, "%d", &n);
    if(a==EOF) break;
    fprintf(outputFile, "%d ", n);
    }
    fclose(inputFile);
    fclose(outputFile);
    return 0;
}
