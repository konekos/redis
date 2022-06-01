#include "sds.h"
#include "stdio.h"

typedef struct zskiplistnode {

    sds ele;
    double score;
    struct zskiplistnode *backward;
    struct zskiplistlevel {
        struct zskiplistnode *forward;
        unsigned long span;
    } level[];
} zskiplistnode;

typedef struct zskiplist {
    
    struct zskiplistnode *head,*tail;

    unsigned long length;
    int level;

} zskiplist;

int main(){
    printf("%d\n",2<<6);
}