inttype_t i = I;
if(N > c * (f - 1)) {
    for(; i < N - c * (f - 1); ) {
        foo(); i += c; // f times
    }
}
for(i < N) {
    foo(); i += c;
}

