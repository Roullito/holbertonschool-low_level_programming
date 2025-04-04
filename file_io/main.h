#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int cp_files(const char *file_from, const char *file_to);
int open_file_from(const char *file_from);
int open_file_to(const char *file_to, int fd_from);
void copy_content(int fd_from, int fd_to, const char *file_to);
void close_files(int fd_from, int fd_to);

#endif
