// #include <bits/stdc++.h>
// using namespace std;

// int main () {
//     unsigned long long t, n, num, sum, set_sum;
//     unordered_set<unsigned long long> s;
//     cin >> t;
//     while (t--) {
//         cin >> n;
//         sum=0;
//         while (n--) {
//             cin >> num;
//             sum += num;
//             s.insert(num);
//         }
//         set_sum = accumulate(s.begin(), s.end(), (unsigned long long)0);
//         cout << 2*set_sum - sum;
//         s.clear();
//     }
// }


#include <cstdio>

int main () {
    unsigned long long t, n, num, unique;
    scanf("%llu", &t);
    while (t--) {
        unique = 0;
        scanf("%llu", &n);
        while (n--) {
            scanf("%llu", &num);
            unique = unique ^ num;
        }
        printf("%llu\n", unique);
    }
}




