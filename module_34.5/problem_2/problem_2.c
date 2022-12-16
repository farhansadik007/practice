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
    fscanf(inputFile, "%d", &n);

    for (int i = 1; i <= n; i++)
    fprintf(outputFile, "%d ", i);

    fclose(inputFile);
    fclose(outputFile);
    return 0;
}
