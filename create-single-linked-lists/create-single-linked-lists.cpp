#include <stdio.h>
#include <iostream>

struct Node {
  int num;
  struct Node *link;
};

int main() {
  struct Node *head = (struct Node *)malloc(sizeof(Node *));
  head->num = 100;
  head->link = NULL;
  struct Node *current = (struct Node *)malloc(sizeof(Node *));
  current->num = 200;
  current->link = NULL;
  head->link = current;
  current = (struct Node *)malloc(sizeof(Node *));
  current->num = 350;
  current->link = NULL;
  head->link->link = current;
  printf("Accessing Third Node From First Node: %d", head->link->link->num);
  printf("\n Accessing Second Node From First Node: %d", head->link->num);
  printf("\n Accessing Third Node : %d", current->num);
  return 0;
}