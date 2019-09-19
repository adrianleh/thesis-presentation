inttype_t i = I;
if(!overflows(N - c * (f - 1))) {
    for(; i cmp (N - c * (f - 1));) {
        foo(); i += c; // f times
    }
}
switch (N - i + (c -/+ 1)) {
    case (c * f) .. (c * (f + 1)):
        foo(); i += c;
    case (c * (f - 1)) .. (c * f):
        foo(); i += c;
    // ...
    case (c * 1) .. (c * 2):
            foo(); i += c;
}

