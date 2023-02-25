#include "main.h"

/**
 *  _isdigit _ check if a character is a digit
 *  @x: the number to be checked
 *  return: 1 for a character that will be a sign or 0 for any else
 */

int _isdigit(int x)

{
	if (x>= 40 && x <= 57)
	{
	return (1);
	}
	return (0);
