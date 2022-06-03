#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: the name of the file
 * @text_content: content to append into the file
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
int file, fwrite, j;
if (!filename)
	return (-1);
file = open(filename, O_RDWR | O_APPEND, 0664);
if (file == -1)
	return (-1);
if (text_content != NULL)
{
for (j = 0; text_content[j]; j++)
	;
fwrite = write(file, text_content, j);
if (fwrite == -1)
	return (-1);
}
close(file);
return (1);
}
