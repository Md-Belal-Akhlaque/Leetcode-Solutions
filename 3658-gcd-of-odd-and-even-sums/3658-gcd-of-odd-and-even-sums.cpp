// class Solution {
// public:
//     int gcdOfOddEvenSums(int n) {
//         return n;
//     }
// };

class Solution {
public:
    int gcd(int a, int b) {
        if (b == 0) return a;
        return gcd(b, a % b);
    }

    int gcdOfOddEvenSums(int n) {
        int sumOdd = n * n;
        int sumEven = n * (n + 1);
        return gcd(sumOdd, sumEven);
    }
};

// gcd(n2 ,n(n+1))=n×gcd(n,n+1)

// Ye GCD ki property hai:

// gcd(ax,ay)=a×gcd(x,y)
// gcd(n,n+1)=1
// so return n