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
  int count = 0, left = 0, right = len - 1;
  while (left < right - 1) {
    int mid1 = (left + right) / 2;
    if (arr[mid1] <= value)
      left = mid1;
    else
      right = mid1;
  }
  len = right - 1;
  for (int i = 0; i <len; i++) {
    left = i+1, right = len-1;
    int count_ = 0;
    while (left < right) {
      int mid2 = (left + right) / 2;
      if (arr[mid2] < (value-arr[i]))
        left = mid2 + 1;
      else
        right = mid2;
    }
    while (arr[left] == (value - arr[i])) {
      count_++;
      left++;
    }
    count += count_;
}
  return count;
}
