#include <unistd.h>
#include <stdio.h>

int nombre1;
int nombre2;
int nombre3;

void ft_print_comb(void)
{
    for (nombre1 = 0; nombre1 <= 9; nombre1++)
    {
        for (nombre2 = 0; nombre2 <= 9; nombre2++)
        {
            for (nombre3 = 0; nombre3 <= 9; nombre3++)
            {
                if (nombre1 != nombre2 && nombre2 != nombre3 && nombre3 != nombre1)
                {
                    char char1 = '0' + nombre1;
                    char char2 = '0' + nombre2;
                    char char3 = '0' + nombre3;

                    write(1, &char1, 1);
                    write(1, &char2, 1);
                    write(1, &char3, 1);
                    write(1, " ", 1);
                }
            }
        }
   
    }

}