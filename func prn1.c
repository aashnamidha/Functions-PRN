#include<stdio.h>
long long int prn;
void getprn()
{printf("Enter PRN: ");
scanf("%lld",&prn);
}
void display()
{printf("\n The PRN is %lld",prn);
}

int main()
{getprn();
display();
return 0;
}
