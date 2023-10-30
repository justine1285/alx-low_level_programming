#include "main.h"
/**
 * create_file - creates and writes into a file and
 * copy content in it
 * @filename: the filename to be created
 * @text_content: the content to be copied
 * Return: 1 if successful or -1 if unsuccessful
 */
int create_file(const char *filename, char *text_content)
{
	int k;
	int z;
	int y;

	if (!filename)
		return (-1);

	k = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (k == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	for (z = 0; text_content[z]; z++)
		;
	y = write(k, text_content, z);

	if (y == -1)
		return (-1);
	close(k);

	return (1);
}
