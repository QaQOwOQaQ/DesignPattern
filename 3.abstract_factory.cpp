/*
抽象工厂模式是对 <工厂> 的再次抽象
以手机为例，手机型号可能有苹果、华为...
但在此之上手机也分为高端机、低端机，中端机
例如：

                   手机
        低端机               高端机     
 华为nova    iphone    华为mate iphoneProMax

其中，低端机和高端机各作为一个工厂，此时手机为 <抽象工厂>
*/


#include <iostream>
#include <vector>

using namespace std;

/*
                家具                                  -> 工厂系统
        椅子                沙发                      -> 抽象工厂
现代椅子   古典椅子   现代沙发    古典沙发              -> 具体产品
*/

// 抽象椅子
class Chair {
public:
    virtual void showInfo() = 0;
};

// 具体椅子
class ModernChair : public Chair {
public:
    void showInfo() override {
        cout << "modern chair" << endl;
    }
};

class ClassicalChair : public Chair {
public:
    void showInfo() override {
        cout << "classical chair" << endl;
    }
};


// 抽象沙发
class Sofa {
public:
    virtual void showInfo() = 0;
};

// 具体沙发
class ModernSofa : public Sofa {
public:
    void showInfo() override {
        cout << "modern sofa" << endl;
    }
};

class ClassicalSofa : public Sofa {
public:
    void showInfo() override {
        cout << "classical sofa" << endl;
    }
};
    
// 抽象家具工厂接口
class FurnitureFactory {
public:
    virtual Chair* createChair() = 0;
    virtual Sofa* createSofa() = 0;
};

// 具体家具工厂接口
class ModernFurnitureFactory : public FurnitureFactory {
public:
    Chair* createChair() {
        return new ModernChair();
    }
    Sofa* createSofa() {
        return new ModernSofa();
    }
};

class ClassicalFurnitureFactory : public FurnitureFactory {
public:
    Chair* createChair() {
        return new ClassicalChair();
    }
    Sofa* createSofa() {
        return new ClassicalSofa();
    }
};

// 客户端代码
int main()
{
    int orderCount;
    cin >> orderCount;
    for(int i = 0; i < orderCount; i ++ ) {
        string furnitureType;
        cin >> furnitureType;
        FurnitureFactory *factory = nullptr;
        if(furnitureType == "modern") {
            factory = new ModernFurnitureFactory();
        }
        else if(furnitureType == "classical") {
            factory = new ClassicalFurnitureFactory();
        }

        Chair *chair = factory->createChair();
        Sofa *sofa = factory->createSofa();

        chair->showInfo();
        sofa->showInfo();

        delete chair;
        delete sofa;
        delete factory;
    }

    return 0;
}