#include <unistd.h>

void ft_is_negative(int n)
{
   char signe = (n < 0)? 'N' : 'P';

    write(1, &signe, 1);

}