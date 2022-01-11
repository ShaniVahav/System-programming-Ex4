

#ifndef DESKTOP_MINHEAP_H
#define DESKTOP_MINHEAP_H



typedef struct GRAPH_NODE_ *pnode;;

typedef struct edge_ {
    int dest;
    double weight;
    struct edge_ *next;
} edge, *pedge;


typedef struct GRAPH_NODE_ {
    int node_num;
    double  distance ;
    pedge edges;
    struct GRAPH_NODE_ *next;
} node;

typedef struct minHeap {
    int size ;
    node *elem ;
} minHeap ;


static int minTotalsum = 100000;  /////////when we put "t" , got to remember to update it
static int  largestDex = 0 ;
static  int numberOfVertex = 0 ;
static  int time = 1 ;




void swap(node *n1, node *n2);
void insertNode(minHeap *hp, node* n);
void deleteNode(minHeap *hp);
void heapify(minHeap *hp, int i);
void deleteMinHeap(minHeap *hp) ;



#endif //DESKTOP_MINHEAP_H
