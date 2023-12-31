#include <iostream>
#include <stdio.h>

using namespace std;

struct Node {
  int num;
  struct Node *link;
};

int main()
{
  struct Node *head = (struct Node *)malloc(sizeof(struct Node));
  head->num = 100;
  head->link = NULL;
  printf("First Node: %d", head->num);
  return 0;
}