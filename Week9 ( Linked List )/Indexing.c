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
void insert_last(SinglyLinkedList *list, char *data);
void indexing(SinglyLinkedList *list, int index);

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

void indexing(SinglyLinkedList *list, int index){
    if (index < 0){
        index += list->count;
    }

    if (!list->count || index + 1 > list->count || index < 0){
        printf("Error");
        return;
    }

    DataNode* current = list->head;
    int current_index = 0;

    while (current->next != NULL){
        if (current_index == index){
            printf("%s", current->data);
            return;
        }
        current = current->next;
        current_index++;
    }
    if (current_index == index){
        printf("%s", current->data);
    }
}

int main(){
    SinglyLinkedList* mylist = createSinglyLinkedList();
    char *word = (char*)malloc(21 * sizeof(char));
    int index_find;

    while (1){
        scanf(" %[^\n]", word);
        if (!strcmp(word, "Last")){
            break;
        }
        insert_last(mylist, word);
    }
    scanf(" %d", &index_find);
    indexing(mylist, index_find);

    DataNode *current = mylist->head;
    while (current != NULL) {
        free(current->data);
        DataNode* temp = current;
        current = current->next;
        free(temp);
    }

    free(mylist);
    free(word);

    return 0;
}
