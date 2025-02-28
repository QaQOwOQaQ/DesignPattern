#include <iostream>
#include <vector>

using namespace std;

// 抽象产品
class Block {
public:
    virtual void produce() = 0;
};

// 具体产品
class CircleBlock : public Block {
public:
    void produce() override {
        cout << "Circle Block" << endl;
    }
};

class SquareBlock : public Block {
public:
    void produce() override {
        cout << "Square Block" << endl;
    }
};

// 抽象工厂
class BlockFactory {
public:
    virtual Block* createBlock() = 0;
};


// 具体工厂
class CircleBlockFactory : public BlockFactory {
public:
    Block* createBlock() override {
        return new CircleBlock();
    }
};

class SquareBlockFactory : public BlockFactory {
public:
    Block* createBlock() override {
        return new SquareBlock();
    }
};

// 工厂系统
class BlockFactorySystem {
public:
    void produceBlocks(BlockFactory* factory, int quantity) {
        for(int i = 0; i < quantity; i ++ ) {
            Block* block = factory->createBlock();
            blocks.push_back(block);
            block->produce();
        }
    }

    const vector<Block*>& getBlocks() const {
        return blocks;
    }

    ~BlockFactorySystem() {
        for(Block* block : blocks) {
            delete block;
        }
    }

private:
    vector<Block*> blocks;
};

int main() 
{
    BlockFactorySystem factorySystem;
    int productionCount;

    cin >> productionCount;
    for(int i = 0; i < productionCount; i ++ ) {
        string blockType;
        int quantity;
        cin >> blockType >> quantity;
        if(blockType == "Circle") {
            factorySystem.produceBlocks(new CircleBlockFactory(), quantity);
        }
        else if(blockType == "Square") {
            factorySystem.produceBlocks(new SquareBlockFactory(), quantity);
        }
    }

    return 0;
}