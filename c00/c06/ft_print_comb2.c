#include <unistd.h>
#include <stdio.h>

int nombre1;
int nombre2;
int nombre3;
int nombre4;

void ft_print_comb2(void)
{
    for (nombre1 = 0; nombre1 <= 9; nombre1++)
    {
        for (nombre2 = 0; nombre2 <= 9; nombre2++)
        {
            for (nombre3 = 0; nombre3 <= 9; nombre3++)
            {
                for (nombre4 = 0; nombre4 <= 9; nombre4++)
                {
                    if (nombre1 <= 9 && nombre2 <= 9 && nombre3 <= 9 && nombre4 <= 9)
                    {
                       char char1 = '0' + nombre1;
                       char char2 = '0' + nombre2;
                       char char3 = '0' + nombre3;
                       char char4 = '0' + nombre4;

                      write(1, &char1, 1);
                      write(1, &char2, 1);
                        write(1, " ", 1);
                        write(1, &char3, 1);
                        write(1, &char4, 1);
                        write(1, ";", 1);

                    }
                }
            }
        }
   
    }

}