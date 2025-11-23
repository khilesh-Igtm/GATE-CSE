#include <stdio.h>

int main() {
    int i;
    i = printf("Try programiz.pro");
    printf("%d value is",i);

    return 0;
}


//output: Try programiz.pro18 value is
// Explanation:
// The printf function returns the number of characters printed. In this case, "Try programiz.pro" has 18 characters, so the value of 'i' will be 18. Also counts the space between words.

#include <stdio.h>
void main(){
  int i;
  i = printf("Gate %d Wallah", printf("Jai ho"));
  printf("%d", i);
}

// the output will be: Gate 7 Wallah14
// Explanation: Initially the inner printf("Jai ho") is executed, which prints "Jai ho" and returns 7 (the number of characters printed). Then, the outer printf becomes printf("Gate %d Wallah", 7), which prints "Gate 7 Wallah" and returns 14 (the number of characters printed). Finally, the value of 'i' is printed, which is 14.