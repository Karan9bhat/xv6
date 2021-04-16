#include "param.h"

struct pstat {
    int inuse[NPROC];
    int pid[NPROC];
    int ticks[NPROC][4];
    int priority[NPROC];
};