#ifndef __EMPTY_H__
#define __EMPTY_H__

void* init(void);

int put(char *file_id, void *context);
int get(char *file_id, void *context);
int delete(char *file_id, void *context);

#endif  // __EMPTY_H__
