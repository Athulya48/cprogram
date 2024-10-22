#include <stdio.h>
#include <stdlib.h>

struct Node {
int data; 
struct Node* link; 
};
struct Node* start = NULL;
struct Node* getnode() {
int item;
printf("Enter the value to enqueue:\n");
scanf("%d", &item);
struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
if (new_node == NULL) {
printf("Memory allocation failed!\n");
exit(1); 
}
new_node->data = item; 
new_node->link = NULL; 
return new_node;
}
void enqueue() {
struct Node* new_node = getnode(); 
if (start == NULL) {
start = new_node;
} else {
struct Node* ptr = start; 
while (ptr->link != NULL) {
ptr = ptr->link;
}
ptr->link = new_node;
}
}
void dequeue() {
if (start == NULL) {
printf("Queue is empty, nothing to delete.\n");
} else {
struct Node* ptr = start; 
start = start->link; 
free(ptr); 
printf("Dequeued successfully.\n");
}
}
void traverse() {
if (start == NULL) {
printf("List is empty.\n");
} else {
struct Node* ptr = start; 
while (ptr != NULL) {
printf("-> %d", ptr->data); 
ptr = ptr->link; 
}
}
}
int main() {
int choice;
while (1) {
printf("\n--- Menu ---\n");
printf("1.Enqueue\n");
printf("2.Dequeue\n");
printf("3. Traverse\n");
printf("4. Exit\n");
printf("Enter your choice: ");
scanf("%d", &choice);
switch (choice) {
case 1:
enqueue();
break;
case 2:
dequeue(); 
break;
case 3:
printf("Queue elements are\n");
traverse();
break;
case 4:
exit(0); 
break;
default:
printf("Invalid choice! Please choose a valid option.\n");
}
}
return 0;
}
