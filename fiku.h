#include "fiku.c"

struct node_i;
struct node_lli;

struct node_i* createList_i();

struct node_i* addToList_i(struct node_i* head, int data);
void addToList_ptr_i(struct node_i** head, int data);

int takeFromList_ptr_i(struct node_i** head);

void printList_i(struct node_i* head);
void printList_lli(struct node_i* head);

struct node_i* getFactors_i(int);
struct node_lli* getFactors_lli(long long int);

int reverse_i(int);

bool isPrime_lli(long long int);


