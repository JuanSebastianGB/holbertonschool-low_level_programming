#ifndef _MAIN_H_
#define _MAIN_H_

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
char *_buffer(char *file, int bytes_selected);
void _close(ssize_t origin, ssize_t destiny);

#endif /* _MAIN_H_ */
