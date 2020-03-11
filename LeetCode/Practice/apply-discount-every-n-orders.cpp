#include <vector>
#include <unordered_map>
#include <iostream>
using namespace std;

class Cashier {
    unordered_map <int, int> priceMap;
    int discount;
    int number_of_customer;
    int customer_count;
public:
    Cashier(int n, int discount, vector<int>& products, vector<int>& prices): discount{discount}, number_of_customer {n}, customer_count {0} {
        for (int i {0}; i<products.size(); i++)
        {
            priceMap.insert(make_pair(products[i], prices[i]));
        }
    }
    
    double getBill(vector<int> product, vector<int> amount) {
        customer_count = (customer_count + 1) % number_of_customer;
        bool discountApplicable {customer_count== 0};
        double billAmount {0};
        for (int i {0}; i<product.size(); i++)
        {
            billAmount += (priceMap[product[i]] * amount[i]);
        }
        if (discountApplicable)
        {
            // x - (discount * x) / 100
            billAmount -= ((discount * billAmount) / 100);
        }
        return billAmount;
    }
};

static auto speedup = [](){
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();