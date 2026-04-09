#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>
#include <sys/mman.h>
#include <sys/stat.h>
#include <semaphore.h>
#include "rsm.h"

#define TRUE 1
#define FALSE 0

typedef struct {
    int N; // number of processes
    int M; // number of resource types

    int ExistingV[MAX_RT]; // number of existing resources of each type
    int AvailV[MAX_RT]; // number of available resources of each type
    int AllocationM[MAX_PR][MAX_RT]; // number of resources of each type allocated to each process
    int RequestM[MAX_PR][MAX_RT]; // number of resources of each type requested by each process, only for detection

    //  avoidance
    int avoidance; // 1 for avoidance, 0 for detection
    int MaxM[MAX_PR][MAX_RT]; // number of max resources of each type claimed by each process, only for avoidance
    int NeedM[MAX_PR][MAX_RT]; // number of resources of each type needed by each process, only for avoidance
    int claimCount; // number of processes that have made their claims, only for avoidance

    int blocked[MAX_PR]; // 1 if the process is currently blocked, 0 otherwise
    int active[MAX_PR]; // 1 if the process is currently active, 0 otherwise

    sem_t mutex; // for mutual exclusion when accessing shared data structures
    sem_t procWait[MAX_PR]; // for processes to wait when their requests cannot be granted immediately
} shared_data_t;

static shared_data_t *shared_data = NULL;
static int my_apid = -1; // the apid of the current process, set in rsm_process_started


static int is_safe_state() {

}



//..... definitions/variables .....
//.....
//.....
int rsm_init(int p_count, int r_count, int exist[],  int avoid)
{
    int ret = 0;
    
    return  (ret);
}

int rsm_destroy()
{
    int ret = 0;
    
    return (ret);
}

int rsm_process_started(int pid)
{
    int ret = 0;
    return (ret);
}


int rsm_process_ended()
{
    int ret = 0;
    return (ret);
}


int rsm_claim (int claim[])
{
    int ret = 0;
    return(ret);
}

int rsm_request (int request[])
{
    int ret = 0;
    
    return(ret);
}


int rsm_release (int release[])
{
    int ret = 0;

    return (ret);
}


int rsm_detection()
{
    int ret = 0;
    
    return (ret);
}


void rsm_print_state (char hmsg[])
{
    return;
}
