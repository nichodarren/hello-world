#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct data{
  int num;
  char nama[101];
  struct data *prev, *next;
};

struct data *databaru(char *nama, int num){
  struct data *node = (struct data *)malloc(sizeof(struct data));
  strcpy(node->nama, nama);
  node->num = num;
  node->prev = node->next = NULL;
  return node;
}

int main(){

  return 0;
}
