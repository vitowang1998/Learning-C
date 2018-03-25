// Running Time
// Denoted by O()

// Big O notation
// The running time is the most "dominant" term, without any coefficients
// O(1000000) = O(1)
// O(1924124192 * n^2) = O(n^2)


// Addition
// O(1) + O(1) = O(1)
// O(1) + O(n) = O(n)
// O(n) + O(n*logn) = O(n*logn)


// Multiplication
// O(1) * O(n) = O(n)
// O(n) * O(logn) = O(n*logn)



// O(1) < O(logn) < O(n) < O(n*logn) < O(n^2) < O(n^3) < O(n^n) < O(2^n)



// Summation (Time efficiency of iterations)
// ∑(i = 1 ~ logn) O(1) = O(logn)
// ∑(i = 1 ~ n) O(1) = O(n)
// ∑(i = 1 ~ n) O(n) = O(n^2)


// Arithmetic Sequences
// ∑(i = 1 ~ n) O(i) = O((n^2 + n)/2) = O(n^2)
// ∑(i = 1 ~ n) O(i^2) = O((2n^3 + 3n^2 + n) / 6) = O(n^3)




// Time complexity of recursive functions: k1 >= 1, k2 > 1
// Time(n) = O(1) + Time(n - k1) = O(n)
// Time(n) = O(n) + Time(n - k1) = O(n^2)
// Time(n) = O(n^2) + Time(n - k1) = O(n^3)
// Time(n) = O(1) + Time(n / k2) = O(log n)
// Time(n) = O(1) + k2 * Time(n / k2) = O(n)
// Time(n) = O(n) + k2 * Time(n / k2) = O(n * logn)
// Time(n) = O(1) + T(n - k1) + T(n - k1) = O(2^n)









