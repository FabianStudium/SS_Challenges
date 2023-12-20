#include <stdio.h>
#include <string.h>
// gcc -g -o chal chal.c

int main() {
    puts("Welcome to our user email sweepstake!");
    puts("Only the first user gets the flag.");

    unsigned char count = 5;  // hehe, start count at 5 so we don't have to pay out the flag ( •̀ᴗ•́ )
    char email[32];

    while (1) {
        puts("Enter email: ");
        fgets(email, 31, stdin);
        email[strcspn(email, "\n")] = 0;

        if (count == 0) {
            printf("Congrats %s, you are the first user (count=%d).\n", email, count);
            puts("flag{win}");
            return 0;
        } else {
            printf("Sorry %s, you are not the first user (count=%d). No flag for you.\n", email, count);
        }

        count++;
    }
}
