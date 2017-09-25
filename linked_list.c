#include<stdio.h>

struct node {
  int data;
  struct node *next;
}

struct node *head = NULL;
struct node *current = NULL;

void insertFirst(int data) {
  struct node *link = (struct node*) malloc(sizeof(struct node));
}
