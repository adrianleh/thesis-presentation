inttype_t i = I;
for(; i < N - c * (f - 1); ) {
    foo(); i += c; // f times
}
for(i < N) {
    foo(); i += c;
}

