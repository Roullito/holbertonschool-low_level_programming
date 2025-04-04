#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int open_file(const char *filename, int flags, int perm, int exit_code);
void copy_content(int fd_from, int fd_to,
		  const char *file_from, const char *file_to);
void close_file(int fd);

#endif
