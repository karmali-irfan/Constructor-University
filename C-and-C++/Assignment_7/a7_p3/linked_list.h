/* 
CH 230-A
a7_p1.c
Irfan Karmali
i.karmali@jacobs-university.de
*/

//header file containing function prototypes

//struct list function
struct list {
    int info; 
    struct list *next;
};

struct list* remove_element(struct list* my_list);
struct list* push_back(struct list *my_list, int n);
struct list* push_front(struct list *my_list, int n);
void print_list(struct list* my_list);
void free_memory(struct list *my_list); 
