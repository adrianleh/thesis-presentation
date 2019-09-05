int length = fairDiceRoll(); int *items; int i = 0;
for(; i < length - (4 - 1);) {
    doSth(items[i]); i++;
    doSth(items[i]); i++;
    doSth(items[i]); i++;
    doSth(items[i]); i++;
}
for(;i < length;) {
    doSth(items[i]); i++;
}
