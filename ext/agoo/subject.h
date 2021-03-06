// Copyright (c) 2018, Peter Ohler, All rights reserved.

#ifndef __AGOO_SUBJECT_H__
#define __AGOO_SUBJECT_H__

#include <stdbool.h>

typedef struct _Subject {
    struct _Subject	*next;
    char		pattern[8];
} *Subject;

extern Subject	subject_create(const char *pattern, int plen);
extern void	subject_destroy(Subject subject);
extern bool	subject_check(Subject subj, const char *subject);

#endif // __AGOO_SUBJECT_H__
