#include <iostream>
#include <string>

using namespace std;

// 自行车产品
class Bike {
public:
    string frame;
    string tires;

    void setFrame(const string& frame) {
        this->frame = frame;
    }

    void setTires(const string& tires) {
        this->tires = tires;
    }

    friend std::ostream& operator<<(std::ostream& os, const Bike& bike) {
        return os << bike.frame << ' ' << bike.tires;
    }
};

// 自行车建造者接口
class BikeBuilder {
public:
    virtual void buildFrame() = 0;
    virtual void buildTires() = 0;
    virtual Bike getResult() = 0;
};

// 山地自行车建造者
class MountainBikeBuilder : public BikeBuilder {
private:
    Bike bike;
    
public:
    void buildFrame() override {
        bike.setFrame("Aluminum Frame");
    }
    
    void buildTires() override {
        bike.setTires("Knobby Tires");
    }
    
    Bike getResult() override {
        return bike;
    }
};
    
// 公路自行车建造者
class RoadBikeBuilder : public BikeBuilder {
private:
    Bike bike;
    
public:
    void buildFrame() override {
        bike.setFrame("Carbon Frame");
    }
    
    void buildTires() override {
        bike.setTires("Slim Tires");
    }
    
    Bike getResult() override {
        return bike;
    }
};

// 自行车Director，负责构建自行车
class BikeDirector {
public:
    Bike construct(BikeBuilder& builder) {
        builder.buildFrame();
        builder.buildTires();
        return builder.getResult();
    }
};

int main()
{
    int N;  
    cin >> N;
    BikeDirector director;
    for(int i = 0; i < N; i ++ ) {
        string bikeType;
        cin >> bikeType;

        BikeBuilder *builder = nullptr;

        if(bikeType == "mountain") {
            builder = new MountainBikeBuilder();     
        }
        else if(bikeType == "road") {
            builder = new RoadBikeBuilder();
        }

        Bike bike = director.construct(*builder);
        cout << bike << endl;

        delete builder;
    }

    return 0;
}