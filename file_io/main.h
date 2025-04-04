#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int copiefile(const char *file_from, char *file_to);
void handle_copy(int fd_from, int fd_to, char *buffer,
	const char *file_from, const char *file_to);
void check_args(const char *file_from, char *file_to);
void close_file(int fd);

#endif
