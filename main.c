#include <stdio.h>

int main()
{
  int p = 7;
  int q = 3;
  int n = p * q;
  int thetaN = (p - 1) * (q - 1);
  int e = 5;
  int d = (2 * thetaN + 1) / e;

  int msg = 120;
  int encryption = msg ^ e % n;
  int decryption = encryption ^ d % n;

  printf("Message: %d\n", msg);
  printf("Encryption: %d\n", encryption);
  printf("Decryption: %d\n", decryption);

  return 0;
}