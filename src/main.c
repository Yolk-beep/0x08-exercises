#include <stdlib.h>
#include <stdio.h>

void init(int *buf, int buf_size);

void init(int *buf, int count)
{
  for (int i = 0; i < count; i++)
  {
    buf[i] = 0;
  }
}

int main(int argc, char *argv[])
{
  int x;
  int size = 5;
  int buffer[size];
  // init buffer with a for loop and [] operator
  init(buffer, size);
  // declare three pointers: start, current, end
  int *start = buffer;
  int *current = buffer;
  int *end = buffer + size;
  char *message = "Please enter an integer: \n";
  char *newline = "\n";
  while (1)
  {
    printf("%s", message);
    scanf("%d", &x);
    *current = x;
    current++;
    if (current == end)
      current = start;
    for (int i = 0; i <size; i++)
    {
      printf(" [%d]", buffer[i]);
    }
    printf("%s", newline);
  }
  return 0;
}
  // while true
  // take input from user
  // update the value that current points to input
  // if current is not at the end
  // current = current + 1
  // else
  // current = start
  // print buffer