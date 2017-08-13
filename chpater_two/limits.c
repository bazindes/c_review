// Program 2.11 Finding the limits
#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(int argc, char const *argv[]) {
  printf("char store range from %d to %d\n",CHAR_MIN,CHAR_MAX );
  printf("unsigned char store range from 0 to %d\n",CHAR_MAX );
  printf("short store range from %d to %d\n",SHRT_MIN,SHRT_MAX );
  printf("unsigned short store range from 0 to %d\n",USHRT_MAX );
  printf("int store range from %d to %d\n",INT_MIN,INT_MAX );
  printf("unsigned int store range from 0 to %d\n",UINT_MAX );
  printf("long store range from %ld to %ld\n",LONG_MIN,LONG_MAX );
  printf("unsigned long store range from 0 to %lu\n",ULONG_MAX );
  printf("long long store range from %lld to %lld\n",LLONG_MIN,LLONG_MAX );
  printf("unsigned long long store range from 0 to %llu\n",ULLONG_MAX );
  printf("\n");
  printf("The size of the smallest positive non-zero value of float is %.3e\n" , FLT_MIN);
  printf("The size of the largest value of float is %.3e\n" , FLT_MAX);
  printf("The size of the smallest positive non-zero value of double is %.3e\n" , DBL_MIN);
  printf("The size of the largest value of double is %.3e\n" , DBL_MAX);
  printf("The size of the smallest positive non-zero value of long double is %.3Le\n" , LDBL_MIN);
  printf("The size of the largest value of long double is %.3Le\n" , LDBL_MAX);
  printf("\n");
  printf("float provide %u decimal digits precision. \n" , FLT_DIG );
  printf("double provide %u decimal digits precision. \n" , DBL_DIG );
  printf("long double provide %u decimal digits precision. \n" , LDBL_DIG );
  return 0;
}
