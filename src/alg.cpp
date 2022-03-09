// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  int count = 0;
  int num = 0;
  for (int i = 0; i < size; i++) {
      for (int j = (i + 1); j < size; j++) {
          if (arr[i] > arr[j]) {
              num = arr[i];
              arr[i] = arr[j];
              arr[j] = num;
          }
      }
  }
  if (arr[size / 2] > value) {
      for (int i = 0; i < ((size / 2)); i++) {
          if (arr[i] == value) {
              count++;
          }
      }
  } else {
      for (int i = (size / 2); i < size; i++) {
          if (arr[i] == value) {
              count++;
          }
      }
  }
  return count;
}
