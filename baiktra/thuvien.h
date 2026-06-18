void reverseArray(int ary[], int n) {
    int temp;
    for (int i = 0; i < n / 2; i++) {
        temp = ary[i];
        ary[i] = ary[n - 1 - i];
        ary[n - 1 - i] = temp;
    }
}
