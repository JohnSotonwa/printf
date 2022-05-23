#include <unistd.h>
#include "main"
#include "main.h"

int _putchar(char c)
{
  return(write(1, &c, 1));
}
