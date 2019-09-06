inttype_t i = I;
if(N > c * (f - 1)) {
    for(; i cmp N - c * (f - 1); ) {
        foo(); i += c; // f times
    }
}
for(i cmp N) {
    foo(); i += c;
}

