unsigned int length = fairDiceRoll();
int *items; unsigned int i = 0;
if(!overflows(length - (4 - 1))) {
    for(;i < length - (4 - 1);) {
        doSth(items[i]); i++;
        doSth(items[i]); i++;
        doSth(items[i]); i++;
        doSth(items[i]); i++;
    }
}
for(;i < length;) {
    doSth(items[i]); i++;
}
