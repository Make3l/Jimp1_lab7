#include "stack.h"
//spk kodzik napisałeś 
int main() {
    Stack st_1 = {NULL, NULL, 0};

    for (int i = 1; i < 5; i++) {
        addTop(&st_1, i);
    }
    printStack(&st_1);

    for (int i = 0; i < 3; i++) {
        popTop(&st_1);
    }
    printStack(&st_1);

    return 0;
}
