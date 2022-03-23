// Copyright 2021 NNTU-CS
int countPairs1(int *arr, int len, int value) {
  int count = 0;
  for (int i = 0; i < len; i++) {
    for (int j = i + 1; j < len; j++) {
      if (arr[i] + arr[j] == value) 
        count += 1;
    }
  }
  return count;
}
int countPairs2(int *arr, int len, int value) {
  int count = 0;
  int temp;
  for (int i = len - 1; i >= 0; i--) {
    if (arr[i] > value) {
        continue;
    } else {
        temp = i;
        break;
    }
  }
  for (int i = 0; i < temp - 1; i++) {
    for (int j = temp; j >= i + 1; j--) {
      if (arr[i] + arr[j] == value)
        count++;
    }
  }
    return count;
}


int countPairs3(int *arr, int len, int value) {
  return 0;
}
