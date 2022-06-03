#include "main.h"

/**
 * create_file - creates a file and fills it with text
 *
 * @filename: name of the file to create
 * @text_content: text to write in the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
int file, fwrite, k;
	if (!filename)
		return (-1);
file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
if (file == -1)
	return (-1);
if (text_content != NULL)
{
for (i = 0; text_content[k]; k++)
	;
fwrite = write(file, text_content, k);
if (fwrite == -1)
	return (-1);
}
close(file);
return (1);
}
