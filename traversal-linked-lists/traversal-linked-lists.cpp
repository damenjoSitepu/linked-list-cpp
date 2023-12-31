#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

struct Node {
  int num;
  struct Node *link;
};

string printNode(struct Node *head) {
  if (head == NULL) {
    return "";
  }

  struct Node *ptr = head;
  string nodes = "";
  while (ptr != NULL) {
    nodes += to_string(ptr->num) + " ";
    ptr = ptr->link;
  }
  return nodes;
}

int nodeLen(struct Node *head) {
  if (head == NULL) {
    return 0;
  }

  struct Node *ptr = head;

  int counter = 0;
  while (ptr != NULL) {
    counter++;
    ptr = ptr->link;
  }

  return counter;
}

int main() {
  struct Node *head = (struct Node *)malloc(sizeof(Node *));
  head->num = 100;
  head->link = NULL;
  struct Node *current = (struct Node *)malloc(sizeof(Node *));
  current->num = 200;
  current->link = NULL;
  head->link = current;
  current = (struct Node *)malloc(sizeof(Node *));
  current->num = 300;
  current->link = NULL;
  head->link->link = current;

  printf("Total Node Length: %d", nodeLen(head));
  printf("\n");
  cout << printNode(head);
  return 0;
}