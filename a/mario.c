#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height, row, column, spacing;

    do
    {
        height = get_int("Enter height: ");
    }
    while (height < 1 || height > 8);

    for (row = 0; row < height; row++)
    {
        for (spacing = 0; spacing < height - row - 1; spacing++)
            printf(" ");

        for (column = 0; column <= row; column++)
        {
            printf("#");
        }
        printf("\n");
    }
}
