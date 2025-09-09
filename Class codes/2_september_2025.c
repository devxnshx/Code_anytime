// #include <stdio.h>

// int main() {
//     int a,b;
//     scanf(" %d%d",&a,&b);

//     a>b?printf("ok"):a==b?printf("OK BUT 0"):printf("OK BUT 1");
//      return 0;
// }



#include <stdio.h>

int main() {
    int a,b,c;
    scanf(" %d%d%d",&a,&b,&c);

    a>b?((a>c)?printf("a is largest"):printf("c is largest")):((b>c)?printf("b is largest"):printf("c is lagest"));
        
     return 0;
}