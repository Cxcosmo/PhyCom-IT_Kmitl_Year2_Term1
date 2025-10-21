#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct DataNode {
    char* data;
    struct DataNode* next;
} DataNode;

typedef struct SinglyLinkedList {
    unsigned int count;
    DataNode* head;
} SinglyLinkedList;

// Function prototypes
DataNode *createDataNode(char *data);
SinglyLinkedList *createSinglyLinkedList();
void traverse(SinglyLinkedList *list);
void insert_last(SinglyLinkedList *list, char *data);
void insert_front(SinglyLinkedList* list, char* data);
void delete(SinglyLinkedList* list, char* data);

// Create a new DataNode
DataNode* createDataNode(char* data) {
    DataNode* newNode = (DataNode*)malloc(sizeof(DataNode));

    newNode->data = (char*)malloc(strlen(data) + 1);
    strcpy(newNode->data, data);
    newNode->next = NULL;

    return newNode;
}

// Create a new SinglyLinkedList
SinglyLinkedList* createSinglyLinkedList() {
    SinglyLinkedList* newLinkedList = (SinglyLinkedList*)malloc(sizeof(SinglyLinkedList));
    
    newLinkedList->count = 0;
    newLinkedList->head = NULL;

    return newLinkedList;
}

// Traverse the list and print data
void traverse(SinglyLinkedList* list) {
    if (list->count == 0) {
        printf("This is an empty list.\n");
        return;
    }
    DataNode* pointer = list->head;
    while (pointer->next != NULL) {
        printf("%s -> ", pointer->data);
        pointer = pointer->next;
    }
    printf("%s\n", pointer->data);
}

// Insert a new node at the end of the list
void insert_last(SinglyLinkedList* list, char* data) {
    DataNode* pNew = createDataNode(data);
    if (list->count == 0) {
        list->head = pNew;
    } else {
        DataNode* current = list->head;
        while (current->next != NULL){
            current = current->next;
        }
        current->next = pNew;
    }
    list->count++;
}

// Insert a new node at the front of the list
void insert_front(SinglyLinkedList* list, char* data) {
    DataNode* pNew = createDataNode(data);
    if (list->count) {
        pNew->next = list->head;
    }
    list->head = pNew;
    list->count++;
}

// Delete a node
void delete(struct SinglyLinkedList* list, char* data) {
    if (list->count == 0){
        printf("Cannot delete, %s does not exist.\n", data);
        return;
    }
    DataNode* current = list->head;
    DataNode* previous = NULL;
    int check = 1;

    if (previous == NULL && !strcmp(current->data, data)){
        list->head = current->next;
        check--;
    } else {
        while (current->next != NULL){
            if (!strcmp(current->data, data)){
                previous->next = current->next;
                check--;
                break ;
            }
            previous = current;
            current = current->next;
        }
        if (check && !strcmp(current->data, data)){
            previous->next = NULL;
            check--;
        }
    }

    if (check){
        printf("Cannot delete, %s does not exist.\n", data);
        return;
    }

    free(current->data);
    free(current);

    list->count--;
}

int main() {
    SinglyLinkedList* mylist = createSinglyLinkedList();
    int n;
    char condition;
    char data[101];
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf(" %c: %[^\n]s", &condition, data);

        if (condition == 'F') {
            insert_front(mylist, data);
        } else if (condition == 'L') {
            insert_last(mylist, data);
        } else if (condition == 'D') {
            delete(mylist, data);
        } else {
            printf("Invalid Condition!\n");
        }
    }

    traverse(mylist);

    // Remember to free allocated memory for each node's data
    DataNode *current = mylist->head;
    while (current != NULL) {
        free(current->data);
        DataNode* temp = current;
        current = current->next;
        free(temp);
    }

    free(mylist);
    return 0;
}
