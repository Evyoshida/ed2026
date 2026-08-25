#include <stdio.h>
#include <unistd.h>
#include <termios.h>

int main(void) {

    char cadstr[10];
    int i;

    struct termios old, new;
    char c;
    
    tcgetattr(STDIN_FILENO, &old);
    new = old;
    new.c_lflag &= ~(ICANON | ECHO);
    tcsetattr(STDIN_FILENO, TCSANOW, &new);

    for (i=0; i<9; i++) {
        c = getchar();
        if (c == '\n') { // caso enter seja pressionado
            break;
        }
        else if (c == 8 || c == 127) { // caso backspace ou delete seja pressionado
            printf("\b");
            i -= 2;
        }
        else { // qualquer outra tecla pressionada
            cadstr[i] = c;
            printf("%c", c);
        }
    }
    cadstr[i] = '\0';

    tcsetattr(STDIN_FILENO, TCSANOW, &old);

    printf("\nVocê teclou: %s\n", cadstr);
    return 0;
}