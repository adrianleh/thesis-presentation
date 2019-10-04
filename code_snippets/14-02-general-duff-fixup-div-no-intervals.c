inttype_t i = I;
if(!overflows(N - c * (f - 1))) {
    for(;i cmp (N - c * (f - 1));) {
        foo(); i += c;
        //... f times
    }
}
switch ((N - i + (c - 1)) / c) {
    case (f - 1):
        foo(); i += c;
    // ...
    case 1:
        foo(); i += c;
}

