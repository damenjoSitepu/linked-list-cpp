#include <stdio.h>
#include <iostream>

using namespace std;

struct Node {
  int num;
  struct Node *link;
};

void add() {
  
}

int main()
{
  struct Node *head = (struct Node *)malloc(sizeof(Node *));
  head->num = 100;
  head->link = NULL;
  struct Node *current = (struct Node *)malloc(sizeof(Node *));
  current->num = 200;
  current->link = NULL;
  head->link = current;

  printf("Accessing Last Node: %d", head->link->num);
  return 0;
}