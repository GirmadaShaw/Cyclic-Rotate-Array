#include <iostream>

int arr[] = {1, 2,3,4,5,6} , arrr[6] ;
int size = sizeof(arr) / sizeof(arr[0]);
int k = 3;

void cyclic_rotate();
void display();

int main() {
  // display();
  std ::cout << "\n";
  cyclic_rotate();
}

void cyclic_rotate() {
  int temp;
  for (int i = 0; i < size; i++) {
    arrr[ (i+k) % size ] = arr[i] ;
  }
  display();
}

void display() {
  for (int i = 0; i < size; i++) {
    std ::cout << arrr[i] << " ";
  }
}