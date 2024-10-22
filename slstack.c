#include <stdio.h>
#include <stdlib.h>
struct Node {
int data; 
struct Node* link; 
};
struct Node* start = NULL;
struct Node* getnode() {
int item;
printf("Enter the value for Push operation:\n");
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
void push() {
struct Node* new_node = getnode(); 
if (start == NULL) {
start = new_node;
} else {
new_node->link = start;
start = new_node;
}
}
void pop() {
if (start == NULL) {
printf("Stack is empty, nothing to delete.\n");
} else {
struct Node* ptr = start; 
start = start->link; 
free(ptr); 
printf("Deleted successfully.\n");
}
}
void traverse() {
if (start == NULL) {
printf("Stack is empty.\n");
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
printf("1.Push\n");
printf("2.pop\n");
printf("3.Traverse\n");
printf("4.Exit\n");
printf("Enter your choice: ");
scanf("%d", &choice);
switch (choice) {
case 1:
push(); 
break;
case 2:
pop(); 
break;
case 3:
printf("Current List: ");
traverse(); 
break;
case 4:
printf("Exiting program.\n");
exit(0); 
default:
printf("Invalid choice! Please choose a valid option.\n");
}
}
return 0;
}
