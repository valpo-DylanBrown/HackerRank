#include <stdio.h>

int main(){
  int length;
  scanf("%d", &length);
  long int arr[length], sum = 0;

  for(int i =0; i<=length; i++){
    scanf("%ld", &arr[i]);
    sum += arr[i];
  }
  printf("%ld", sum);
  return 0;
}
