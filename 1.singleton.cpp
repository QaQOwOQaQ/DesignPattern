// 使用静态对象作为实例的单例模式
// 静态对象可以有效避免多线程环境下多个线程同时执行 getInstance 导致的同步的问题
// 这比使用锁更加高效和方便


#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>

using namespace std;

class ShoppingCartManager {
public:
    static ShoppingCartManager& getInstance() {
        static ShoppingCartManager instance;
        return instance;
    }

    void addToCart(const string& itemName, int quantity) {
        if(!cart.count(itemName)) {
            goods.push_back(itemName);
        }
        cart[itemName] += quantity;
    }

    void viewCart() const {
        for(const auto& item : goods) {
            cout << item << ' '<< cart.at(item) << endl;
            // 由于 viewCart 是一个 const 成员，而 cart[item] 可能产生修改 cart 的行为
            // 因此下面的写法是错误的
            // cout << item << ' ' << cart[item] << endl;
        }
    }

private:
    ShoppingCartManager() {}
    unordered_map<string, int> cart;
    vector<string> goods;
};

int main()
{
    string itemName;
    int quantity;

    ShoppingCartManager& cart = ShoppingCartManager::getInstance();
    while(cin >> itemName >> quantity) {
        cart.addToCart(itemName, quantity);
    }

    cart.viewCart();


    return 0;
}