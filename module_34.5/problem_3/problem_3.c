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

    int count, n;
    fscanf(inputFile, "%d", &count);
    for (int i = 0; i < count; i++)
    {
        fscanf(inputFile, "%d", &n);
        if (n < 0){
            for (int j = n; j <= -n; j++)
                fprintf(outputFile, "%d ", j);
                fprintf(outputFile, "\n");
        }
        else if (n > 0)
            {
            for (int j = n; j >= -n; j--)
                fprintf(outputFile, "%d ", j);
                fprintf(outputFile, "\n");
            }
    }

    fclose(inputFile);
    fclose(outputFile);
    return 0;
}
