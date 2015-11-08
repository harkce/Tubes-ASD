int faktorial(int n) {
    if(n == 0) {
        return 1;
    }
    else {
        return n * faktorial(n - 1);
    }
}
