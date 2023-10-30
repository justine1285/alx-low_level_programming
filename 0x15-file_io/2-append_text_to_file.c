#include "main.h"
/**
 * append_text_to_file - add text to an existing file
 * @filename: the name of the file to append
 * @text_content: the content to be appended to the file
 * Return: 1 if successful and -1 if unsuccessful
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int k;
	int z;
	int y;

	if (!filename)
		return (-1);

	k = open(filename, O_WRONLY | O_APPEND);

		if (k == -1)
			return (-1);

	if (text_content)
	{
		for (z = 0; text_content[z]; z++)
			;
		y = write(k, text_content, z);

		if (y == -1)
			return (-1);
	}
	close(k);

	return (1);
}
