// sum_to_n(n) sums from 0 to n
// requires: n ≥ 0
int sum_to_n(int n) {
    if (n == 0) {
        return 0;
    } else {
        return (n + sum_to_n(n - 1));
    }
}


