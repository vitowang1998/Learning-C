// isPrime(n) determines if n is prime
bool isPrime(int n) {
    if (n < 2) {
        return false;
    }
    if (n == 2 || n == 3 || n == 5 || n == 7 || n == 11 || n == 13) {
        return true;
    }
    if (n % 2 == 0) {
        return false;
    }
    if (n % 3 == 0) {
        return false;
    }
    if (n % 5 == 0) {
        return false;
    }
    if (n % 7 == 0) {
        return false;
    }
    if (n % 11== 0) {
        return false;
    }
    if (n % 13 == 0) {
        return false;
    }
    for (int i = 2; i < n / 3 + 1; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}
