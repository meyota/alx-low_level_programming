#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the standard output
 *
 * @filename: name of the file to be read
 * @letters: number of letters to read and print
 *
 * Return: the number of letters printed, or 0 if it failed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t file, fread, fwrite;
char *buffer;

buffer = malloc(sizeof(char) * letters);
if (filename == NULL || buffer == NULL)
{
free(buffer);
return (0);
}

file = open(filename, O_RDONLY);
if (file == -1)
	return (0);
fread = read(file, buffer, letters);
if (fread == -1)
	return (0);
fwrite = write(STDOUT_FILENO, buffer, fread);
if (fwrite == -1)
	return (0);
close(file);
free(buffer);
return(fwrite);
}
