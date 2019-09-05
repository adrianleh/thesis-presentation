int length = fairDiceRoll(); int *items; int i = 0;
for(; i < length - (4 - 1);) {
    doSth(items[i]); i++;
    doSth(items[i]); i++;
    doSth(items[i]); i++;
    doSth(items[i]); i++;
}
switch (length - i) {
   case 3:
       doSth(items[i]); i++;
   case 2:
       doSth(items[i]); i++;
   case 1:
       doSth(items[i]); i++;
}
