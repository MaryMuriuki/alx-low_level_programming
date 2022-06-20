#include "main.h"
/**
 * set_string - set value of pointer to char
 * @s: pointer to pointer that needs to be set to
 * @to: string to be set
 */
void set_string(char **s, char *to)
{
	*s = to;
}
