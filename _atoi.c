#include "shell.h"


/**
 * interactive - returns true if shellis interactive mode
 * interactive - returns true if shell is interactive mode
 * @info: struct address
 *
 * Return: 1 if interactive mode, 0 otherwise
 */
int interactive(info_t *info)
{
	return (isatty(STDIN_FILENO) && info->readfd <= 2);
	return (isatty(STDIN_FILENO) && info->readfd <= 2);
}
