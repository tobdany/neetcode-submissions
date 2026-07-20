#include <unordered_map>

class Solution {
public:
    unordered_map<int, int> valoresGuardados;

    int stairCaseWayse(int n) {
        if (n <= 1) {
            return 1;
        }
        
        if (valoresGuardados.count(n)) {
            return valoresGuardados[n];
        } else {
            return valoresGuardados[n] =
                       stairCaseWayse(n - 1) + stairCaseWayse(n - 2);
        }
    }

    int climbStairs(int n) {
        return stairCaseWayse(n); 
    }
};
