#include <stdio.h>
int main() {
long long int n, num;
int i, ld;
int freq[10];
printf("Enter a number: ");
scanf("%lld", &num);
for (i = 0; i < 10; i++) {
freq[i] = 0;
}
n = num;
while (n != 0) {
ld = n % 10;  
freq[ld]++;   
n /= 10;      
}
printf("Frequency of each digit in %lld is:\n", num);
for (i = 0; i < 10; i++) {
printf("Frequency of %d = %d\n", i, freq[i]);
}
return 0;
}