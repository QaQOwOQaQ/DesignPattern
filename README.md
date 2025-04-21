## Reference

[大丙设计模式](https://subingwen.cn/categories/%E8%AE%BE%E8%AE%A1%E6%A8%A1%E5%BC%8F/)

[卡码网设计模式精讲](https://github.com/youngyangyang04/kama-DesignPattern?tab=readme-ov-file)

[UML类图和时序图](https://design-patterns.readthedocs.io/zh-cn/latest/read_uml.html)

[类之间的关系](https://github.com/JackChan1999/DesignPattern/blob/master/design-pattern/%E8%B0%88%E4%B8%80%E8%B0%88%E8%87%AA%E5%B7%B1%E5%AF%B9%E4%BE%9D%E8%B5%96%E3%80%81%E5%85%B3%E8%81%94%E3%80%81%E8%81%9A%E5%90%88%E5%92%8C%E7%BB%84%E5%90%88%E4%B9%8B%E9%97%B4%E5%8C%BA%E5%88%AB%E7%9A%84%E7%90%86%E8%A7%A3.md)

[深入设计模式](https://refactoringguru.cn/design-patterns/command)

[设计模式六大原则](https://www.cnblogs.com/huansky/p/13700861.html)

[设计模式六大原则](https://www.dimcnblogs.com/johnnyzen/p/7605749.html#_label6)

[double dispatch](about:blank)

## English

* context: 背景，环境；上下文，语境
* facade: （建筑物的）正面，立面；假象，伪装
* toogle: （计算机）切换，转换

## Book

* 《大话设计模式》
* 《敏捷软件开发：原则、模式与实践》
* 《重构-改善既有代码的设计》
* 《设计模式》
* 《设计模式解析》
* 《重构与模式》


## Overview

### 一、创建型模式

1. 单例模式 (Singleton)
2. 工厂方法模式 (Factory Method)
3. 抽象工厂模式 (Abstract Factory)
4. 建造者模式/生成器模式 (Builder)
5. 原型模式 (Prototype)

### 二、结构型模式

6. 适配器模式 (Adapter)
7. 桥接模式 (Bridge)
8. 组合模式 (Composite)
9. 装饰器模式/封装器 (Decorator)
10. 外观模式 (Facade)
11. 享元模式/cache (Flyweight)
12. 代理模式 (Proxy)

### 三、行为模式

13. 责任链模式 (Chain of Responsibility)
14. 命令模式/Transaction/Action (Command)
15. 解释器模式 (Interpreter)
16. 迭代器模式 (Iterator)
17. 中介者模式 (Mediator)
18. 备忘录模式 (Memento)
19. 观察者模式 (Observer)
20. 状态模式 (State)
21. 策略模式 (Strategy)
22. 模板方法模式 (Template Method)
23. 访问者模式 (Visitor)

### 四、设计模式六大原则

1. 开闭原则
2. 单一职责原则
3. 里氏替换原则
4. 接口隔离原则
5. 依赖倒置原则
6. 迪米特法则

### 五、类之间的关系

* 泛化：继承非抽象类
* 实现：继承抽象类
* 依赖：局部变量、方法的参数，对静态方法的调用
* 聚合：成员变量，部分可以独立存在
* 组合：成员变量，部分不能独立存在
* 关联：成员变量、方法的参数

### 六、设计模式目标

* 可维护性、可复用性、可拓展性
* 高内聚、低耦合


## QA

### 1.为什么需要设计模式，换言之，设计模式有什么用？

设计模式的核心目的就是可以在不修改**客户端代码**的情况下，实现功能上的改变(即维护代码,一般是拓展)

例如我们平常编写的代码，**自己编写的类**是**服务代码**，而**main**中的代码就是**客户端代码**。

### 2.单一职责原则和接口隔离原则的区别

单一职责原则注重的是职责，而接口隔离原则注重的是对接口依赖的隔离。
单一职责原则主要是约束类，它针对的是程序中的实现和细节；接口隔离原则主要约束接口，主要针对抽象和程序整体框架的构建。

### 3.接口和平台

抽象部分 （也被称为接口） 是一些实体的高阶控制层。 该层自身不完成任何具体的工作， 它需要将工作委派给实现部分层 （也被称为平台）。

注意， 这里提到的内容与编程语言中的接口或抽象类无关。 它们并不是一回事。在实际的程序中， 抽象部分是图形用户界面 （GUI）， 而实现部分则是底层操作系统代码 （API）， GUI 层调用 API 层来对用户的各种操作做出响应。

一般来说， 你可以在两个独立方向上扩展这种应用：

* 开发多个不同的 GUI （例如面向普通用户和管理员进行分别配置）
* 支持多个不同的 API （例如，能够在 Windows、 Linux 和 macOS 上运行该程序）。

### `*`4. 装饰器、适配器、代理的区别

...


## 一、Creational Patterns

### 1. 工厂方法模式

工厂方法模式是一种创建型设计模式， 其在父类中提供一个创建对象的方法， 允许子类决定实例化对象的类型。

工厂方法模式建议使用特殊的**工厂**方法代替对于对象构造函数的直接调用 （即使用 `new`运算符）。 不用担心， 对象仍将通过 `new`运算符创建， 只是该运算符改在工厂方法中调用罢了。 工厂方法返回的对象通常被称作 “产品”。

### 2. 抽象工厂模式 

在工厂方法的基础之上，引入“产品类别”这一层次。如果工厂方法的类层次是“工厂-产品”，那么抽象工厂的类层次就是“抽象工厂-具体工厂(产品类别)-产品”。

如果将工厂方法的产品理解为一维的，那么抽象工厂中的产品就是二维的。

### 3.生成器模式

**生成器模式**是一种创建型设计模式， 使你能够分步骤创建复杂对象（需要几十个参数）。 该模式允许你使用相同的创建代码生成不同类型和形式的对象。

C++ 中经常重载多个构造函数，但他们最后都会调用主构造函数，传递一些默认值来代替忽略掉的参数，这就是一种生成器模式。其中每一个特殊化的重载构造函数都是一个生成器，我们还可以创建一个主管类 Director 来同一管理这些生成器。

另外，如果你需要创建的各种形式的产品， 它们的制造过程相似且仅有细节上的差异， 此时可使用生成器模式。基本生成器接口中定义了所有可能的制造步骤， 具体生成器将实现这些步骤来制造特定形式的产品。 同时， 主管类将负责管理制造步骤的顺序。

### 4.原型模式

**原型模式**是一种创建型设计模式， 使你能够复制已有对象， 而又无需使代码依赖它们所属的类。

> 如果我们希望通过复制被复制对象所有成员变量的方式创建一个复制对象：
>
> * 首先我们需要知道被复制对象所属的类，这样我们才能 new 一个对象，但如果该对象是通过方法的参数获得的，而这个参数是一个基类对象
> * 其次我们还要祈祷被复制对象没有私有成员变量

解决方法也很简单，让有复制需求的类提供一个 `clone()` 方法即可，这样的类我们成为**原型**。

### 5.单例模式

**单例模式**是一种创建型设计模式， 让你能够保证一个类只有一个实例， 并提供一个访问该实例的全局节点。

所有单例的实现都包含以下两个相同的步骤：

- 将默认构造函数设为私有， 防止其他对象使用单例类的 `new`运算符。
- 新建一个静态构建方法作为构造函数。 该函数会 “偷偷” 调用私有构造函数来创建对象， 并将其保存在一个静态成员变量中。 此后所有对于该函数的调用都将返回这一缓存对象。

## 二、Structural Patterns

### 6. 适配器模式

**适配器模式**是一种结构型设计模式， 它能使接口不兼容的对象能够相互合作。适配器模式通过封装对象将复杂的转换过程隐藏于幕后。 被封装的对象甚至察觉不到适配器的存在。 例如， 你可以使用一个将所有数据转换为英制单位 （如英尺和英里） 的适配器封装运行于米和千米单位制中的对象。

可以通过继承或者组合的方式实现一个适配器。

### 7. 桥接模式

**桥接模式**是一种结构型设计模式， 可将一个大类或一系列紧密相关的类拆分为抽象和实现两个独立的层次结构， 从而能在开发时分别使用。

### 8. 组合模式

**组合模式**是一种结构型设计模式， 你可以使用它将对象组合成**树状结构**， 并且能像使用独立对象一样使用它们。

如果应用的核心模型能用树状结构表示， 在应用中使用组合模式才有价值。

树状结构天然和递归相联系。

### 9.装饰模式/封装器 

装饰器模式主要对现有的类对象进行包裹和封装，以期望在不改变类对象及其类定义的情况下，为对象添加额外功能。

穿衣服是使用装饰的一个例子。 觉得冷时， 你可以穿一件毛衣。 如果穿毛衣还觉得冷， 你可以再套上一件夹克。 如果遇到下雨， 你还可以再穿一件雨衣。 所有这些衣物都 “扩展” 了你的基本行为， 但它们并不是你的一部分， 如果你不再需要某件衣物， 可以方便地随时脱掉。

另外，计算机网络中数据报的封装就是典型的装饰器模式。

### 10. 外观模式

外观类为包含许多活动部件的复杂子系统提供一个简单的接口。 与直接调用子系统相比， 外观提供的功能可能比较有限， 但它却包含了客户端真正关心的功能。

如果你的程序需要与包含几十种功能的复杂库整合， 但只需使用其中非常少的功能， 那么使用外观模式会非常方便。

例如，你的程序中需要用到两个框架，而每个框架可能包含十多个功能接口，但是我们指挥用到每个框架的一两个接口，如果我们直接包含这两个框架，客户端在使用时就会包含大量用不到的功能。此时，我们可以创建一个外观类，这个外观类包含了这两个框架，并且只开放了我们需要用到的功能接口，从而实现隐藏我们无需用到的接口的效果。

### 11. 享元模式

> **享元模式、缓存、Cache、Flyweight**
>
> **1. 名称拆解：Flyweight**
>
> - **Fly（飞/蝇） + Weight（重量）**
>   - **Flyweight** 在英文中是拳击比赛中的“蝇量级”（最轻量级），暗示该模式的目标是让对象尽可能“轻量化”。
>   - **轻量化方式**：剥离对象的**可变状态**（外部状态），仅保留**不可变状态**（内部状态），使对象可被共享，避免重复创建。
> - **中文翻译“享元”**
>   - **享**：表示**共享**，强调多个对象共享同一份元数据。
>   - **元**：指**元对象**（Flyweight），即被共享的基础、不可变的最小单元（如字符的字体、颜色等）。
>
> **2. 为什么这样命名？**
>
> 1. **核心目标**：通过共享大量重复对象的**不可变部分**，减少内存占用。
>    - 例如：游戏中渲染 1000 棵树时，每棵树的纹理、颜色（内部状态）可共享，位置、大小（外部状态）单独管理。
> 2. **模式特点**：
>    - **轻量化**：对象仅保留核心元数据，外部状态由客户端处理。
>    - **共享性**：多个场景复用同一个享元对象，避免重复创建。



享元模式旨在通过共享**元对象**，实现资源的轻量化复用。每个享元对象仅保留最小的内部状态，其他状态由外部传入。

对象的常量数据通常被称为**内在状态**， 其位于对象中， 其他对象只能读取但不能修改其数值。 而对象的其他状态常常能被其他对象 “从外部” 改变， 因此被称为**外在状态**。我们将这样一个**仅存储内在状态的对象**称为**<font color=blue>享元</font>**。

享元模式建议不在对象中存储外在状态， 而是将其传递给依赖于它的一个**特殊方法**。 程序只在对象中保存内在状态， 以方便在不同情景下**复用**。 这些对象的区别仅在于其内在状态 （与外在状态相比， 内在状态的变体要少很多）， 因此你所需的对象数量会大大削减。

例如：游戏中渲染 1000 棵树时，每棵树的纹理、颜色（内部状态）可共享，位置、大小（外部状态）单独管理。

由于享元对象可在不同的情景中使用， 你必须确保其状态不能被修改。 享元类的状态只能由构造函数的参数进行一次性初始化， 它不能对其他对象公开其设置器或公有成员变量。

享元模式结构：

* **享元** （Flyweight） 类包含原始对象中部分能在多个对象中共享的状态。 同一享元对象可在许多不同情景中使用。 享元中存储的状态被称为 “内在状态”。 传递给享元方法的状态被称为 “外在状态”。
* **情景** （Context） 类包含原始对象中各不相同的**外在状态**。 情景与享元对象**组合在一起**就能表示原始对象的全部状态。
* **客户端** （Client） 负责计算或存储享元的外在状态。 在客户端看来， 享元是一种可在运行时进行配置的**模板对象**， 具体的配置方式为向其方法中传入一些**情景数据参数**。
* **享元工厂** （Flyweight Factory） 会对已有享元的缓存池进行管理。 有了工厂后， 客户端就无需直接创建享元， 它们只需调用工厂并向其传递目标享元的一些内在状态即可。 工厂会根据参数在之前已创建的享元中进行查找， 如果找到满足条件的享元就将其返回； 如果没有找到就根据参数新建享元。

``` C++
#include <iostream>
#include <vector>
#include <string>
#include <memory>
#include <unordered_map>

using namespace std;

// 享元类
class TreeType {
public:
    string name;
    string color;
    string texture;

    TreeType(const string& name, const string& color, const string& texture)
        : name(name), color(color), texture(texture) {}

    void draw(int x, int y) const {
        cout << "Drawing tree of type " << name << " at (" << x << ", " << y << ") with color " << color << " and texture " << texture << "\n";
    }
};

// 享元工厂
class TreeFactory {
private:
    static unordered_map<string, shared_ptr<TreeType>> treeTypes;
public:
    static shared_ptr<TreeType> getTreeType(const string& name, const string& color, const string& texture) {
        string key = name + "_" + color + "_" + texture;
        if (treeTypes.find(key) == treeTypes.end()) {
            treeTypes[key] = make_shared<TreeType>(name, color, texture);
        }
        return treeTypes[key];
    }
};

unordered_map<string, shared_ptr<TreeType>> TreeFactory::treeTypes;

// 情景对象
class Tree {
private:
    int x, y;
    shared_ptr<TreeType> type; // 享元对象
public:
    Tree(int x, int y, shared_ptr<TreeType> type) : x(x), y(y), type(type) {}
    void draw() const {
        type->draw(x, y);
    }
};

// 客户端代码
class Forest {
private:
    vector<Tree> trees;
public:
    void plantTree(int x, int y, const string& name, const string& color, const string& texture) {
        shared_ptr<TreeType> type = TreeFactory::getTreeType(name, color, texture);
        trees.emplace_back(x, y, type);
    }
    
    void draw() const {
        for (const auto& tree : trees) {
            tree.draw();
        }
    }
};

int main() {
    Forest forest;
    forest.plantTree(1, 2, "Oak", "Green", "Rough");
    forest.plantTree(3, 4, "Pine", "Dark Green", "Smooth");
    forest.plantTree(5, 6, "Oak", "Green", "Rough"); // 复用享元
    forest.draw();
    return 0;
}
```

### 12. 代理模式

**代理模式**是一种结构型设计模式， 让你能够提供对象的**替代品**或其**占位符**。 代理***控制着对于原对象的访问***， 并允许在将请求提交给对象前后进行一些处理。

**应用场景：**

1.  **延迟初始化（虚拟代理）**：如果我们想在所有客户端实现延迟初始化，一种理想的方案是在服务端添加实现延迟初始化功能的方法，但我们未必有权限修改服务端；而如果我们直接在客户端实现延迟初始化的话，则每个客户端都需要添加相同的代码，代码复用非常差；而创建一个虚拟代理服务端，让客户端与虚拟代理进行交互，然后在我们自己创建的虚拟代理服务器添加延迟初始化的代码，便可以解决该问题。
2.  **访问控制（保护代理）：**如果你只希望特定客户端使用服务对象， 这里的对象可以是操作系统中非常重要的部分， 而客户端则是各种已启动的程序 （包括恶意程序）， 此时可使用代理模式。 代理可仅在客户端凭据满足要求时将请求传递给服务对象。
3.  **本地执行远程服务（远程代理）：**适用于服务对象位于远程服务器上的情形。 在这种情形中， 代理通过网络传递客户端请求， 负责处理所有与网络相关的复杂细节。
4.  **记录日志请求（日志记录代理）：** **适用于当你需要保存对于服务对象的请求历史记录时。代理可以在向服务传递请求前进行记录。
5.  **缓存请求结果（缓存代理）：**适用于需要缓存客户请求结果并对缓存生命周期进行管理时， 特别是当返回结果的体积非常大时。 代理可对重复请求所需的相同结果进行缓存， 还可使用请求参数作为索引缓存的键值。
6.  **智能引用：**可在没有客户端使用某个重量级对象时立即销毁该对象。代理会将所有获取了指向服务对象或其结果的客户端记录在案。 代理会时不时地遍历各个客户端， 检查它们是否仍在运行。 如果相应的客户端列表为空， 代理就会销毁该服务对象， 释放底层系统资源。代理还可以记录客户端是否修改了服务对象。 其他客户端还可以复用未修改的对象。

## 三、Behavioral Patterns

### 13. 命令模式

**命令模式**是一种行为设计模式， 它可将**请求**转换为一个**包含与请求相关的所有信息的<font color=blue>独立对象</font>**。 该转换让你能根据不同的请求将方法参数化、 延迟请求执行或将其放入队列中， 且能实现可撤销操作。

> 其实就是在客户端与服务端添加了一个中介层“命令对象”，客户端（发送者）只是触发命令，而不是直接向接收者（服务端）发送请求，命令对象做的实际上就是将客户端触发的命令分派给接收者，在这个过程可以实现命令的复用。

### 14. 责任链模式

**责任链模式**是一种行为设计模式， 允许你将请求沿着处理者链进行发送。 收到请求后， 每个处理者均可对请求进行处理， 或将其传递给链上的下个处理者。

> 按链传递意味着“顺序”执行，不过“有序”并非是必须的。

模式建议你将这些处理者连成一条链。 链上的每个处理者都有一个成员变量来保存对于下一处理者的**引用**。 除了处理请求外， 处理者还负责沿着链传递请求。 请求会在链上移动， 直至所有处理者都有机会对其进行处理。

最重要的是： 处理者可以决定不再沿着链传递请求（处理提前完成/请求不不合法）， 这可高效地取消所有后续处理步骤。

### 15. 解释器模式

解释器模式提供了评估语言的语法或表达式的方式，它属于行为型模式。

解释器模式给定一个语言，定义它的文法的一种表示，并定义一个解释器，这个解释器使用该表示来解释语言中的句子。

这种模式被用在 SQL 解析、符号处理引擎等。

### 16. 迭代器模式

**迭代器模式**是一种行为设计模式， 让你能在不暴露集合底层表现形式 （列表、 栈和树等） 的情况下遍历集合中所有的元素。

迭代器模式的主要思想是将集合的遍历行为抽取为单独的**迭代器**对象。

我们倾向于使用各种迭代器对象而不是在容器类中添加新的遍历算法来遍历容器，因为不断向集合中添加遍历算法会模糊其 “高效存储数据” 的主要职责。 此外， 有些算法可能是根据特定应用订制的， 将其加入泛型集合类中会显得非常奇怪。另一方面， 使用多种集合的客户端代码可能并不关心存储数据的方式。 不过由于集合提供不同的元素访问方式， 你的代码将不得不与特定集合类进行耦合。

所有迭代器必须实现相同的接口。 这样一来， 只要有合适的迭代器， 客户端代码就能兼容任何类型的集合或遍历算法。 如果你需要采用特殊方式来遍历集合， 只需创建一个新的迭代器类即可， 无需对集合或客户端进行修改。

### 17. 中介者模式

**中介者模式**是一种行为设计模式， 能让你减少对象之间混乱无序的依赖关系。 该模式会限制对象之间的直接交互， 迫使它们通过一个中介者对象进行合作。

中介者模式建议你停止组件之间的直接交流并使其相互独立。 这些组件必须调用特殊的中介者对象， 通过中介者对象重定向调用行为， 以间接的方式进行合作。 最终， 组件仅依赖于一个中介者类， 无需与多个其他组件相耦合。

中介者可以将多个组件间的交流抽取到同一位置， 使其更易于理解和维护。单一段时间后， 中介者可能会演化成为[上帝对象](https://refactoringguru.cn/antipatterns/god-object)。

### 18. 备忘录模式

**备忘录模式**是一种行为设计模式， 允许在**不暴露对象实现细节**的情况下保存和恢复对象之前的状态。

试想我们正在开发一款文字编辑器应用程序，需要实现一个“撤回功能”，我们想通过快照的方式实现，即每次操作后保存所有的对象状态。但这样有一个问题，那就是我们需要遍历对象的所有成员变量，但通常情况下，对象的成员变量都是私有的。

备忘录模式将创建状态**快照** （Snapshot） 的工作委派给实际状态的拥有者**原发器** （Originator） 对象。 这样其他对象就不再需要从 “外部” 复制编辑器状态了， 编辑器类拥有其状态的完全访问权， 因此可以自行生成快照。

该模式的经典实现方式依赖于许多流行编程语言 （例如 C++、 C# 和 Java） 所支持的嵌套类。备忘录作为一个嵌套类处于原发器中。

### 19. 观察者模式

> **亦称：** 事件订阅者、监听者、Event-Subscriber、Listener、Observer

**观察者模式**是一种行为设计模式， 允许你定义一种**订阅机制**， 可在对象事件发生时通知多个 “观察” 该对象的其他对象。

### 20. 状态模式

**状态模式**是一种行为设计模式， 让你能在一个对象的内部状态变化时改变其行为， 使其看上去就像改变了自身所属的类一样。

状态模式与**有限状态机** 的概念紧密相关。状态机通常由众多条件运算符 （ `if`或 `switch` ） 实现， 可根据对象的当前状态选择相应的行为。  “状态” 通常只是对象中的一组成员变量值。但是在这种实现方式下，当状态机相当复杂时，程序会包含复杂的条件语句， 修改其转换逻辑可能会涉及到修改所有方法中的状态条件语句， 导致代码的维护工作非常艰难。

状态模式建议为对象的所有可能状态新建一个类， 然后将所有状态的对应行为抽取到这些类中。

简而言之，就是将每个状态封装为一个类，与这个状态有关的转移作为类的方法，所有状态实现自一个抽象状态。

### 21. 策略模式

**策略模式**是一种行为设计模式， 它能让你定义一系列算法， 并将每种算法分别放入独立的类中， 以使算法的对象能够相互替换。

> 状态模式在结构上与策略模式非常相似。
>
> 状态模式是在一个抽象状态的基础上，实现多个具体状态，这几个具体状态之间互相转换。
>
> 策略模式是在一个抽象策略的基础上，实现多个具体策略，上下文可以通过抽象策略实现在不同具体策略上的转换。

[状态](https://refactoringguru.cn/design-patterns/state)可被视为[策略](https://refactoringguru.cn/design-patterns/strategy)的扩展。 两者都基于组合机制： 它们都通过将部分工作委派给 “帮手” 对象来改变其在不同情景下的行为。 *策略*使得这些对象相互之间完全独立， 它们不知道其他对象的存在。 但*状态*模式没有限制具体状态之间的依赖， 且允许它们自行改变在不同情景下的状态。

### 22. 模板方法模式 

**模板方法模式**是一种行为设计模式， 它在超类中定义了一个算法的***框架***， 允许子类在不修改结构的情况下重写算法的特定步骤。

> 模板方法将算法分解为步骤， 并允许子类重写这些步骤， 而非重写实际的模板方法。因此，我们将所有步骤声明为 `抽象`类型， 强制要求子类自行实现这些方法。
>
> - *抽象步骤*必须由各个子类来实现
> - *可选步骤*已有一些默认实现， 但仍可在需要时进行重写

当多个类的算法除一些细微不同之外几乎完全一样时，你可使用该模式。但其后果就是，只要算法发生变化，你就可能需要修改所有的类。另外就是部分客户端可能会受到算法框架的限制。其次，通过子类抑制默认步骤实现可能会导致违反*里氏替换原则*。

### 23. 访问者模式 

**访问者模式**是一种行为设计模式， 它能将算法与其所作用的对象隔离开来。

访问者模式建议将新行为放入一个名为***访问者***的独立类中， 而不是试图将其整合到已有类中。 现在， 需要执行操作的原始对象将作为参数被传递给访问者中的方法， 让方法能访问对象所包含的一切必要数据。

> 有时候，我们不希望修改已有类，因为那可能会导致额外的问题，其次有些功能加到已有类中可能也并不合适。
>
> 不过，访问者模式下，我们可能也需要稍微修改一下已有类，但这个改动很小，不会招致额外的问题。

## 四、Design Principles



## 五、Classes Relationships 

### 1. Generalization

继承非抽象类

### 2. Realization

继承抽象类

### 3. Dependency

依赖关系表示一个类依赖于另一个类的定义。例如，一个人(Person)可以买车(car)和房子(House)，Person类依赖于Car类和House类的定义，因为Person类引用了Car和House。与关联不同的是，Person类里并没有Car和House类型的属性，Car和House的实例是以参量的方式传入到buy()方法中去的。一般而言，依赖关系在Java语言中体现为局域变量、方法的形参，或者对静态方法的调用。

``` java
class Teacher {
    void teach(Student student) {
        System.out.println("Teaching student: " + student.getName());
    }
}
```

### 4. Composition

组合是一种“整体-部分”的关系，强调“强拥有”，即部分对象不能独立存在。一旦整体对象销毁，部分对象也会被销毁。

例如：人和心脏，人的心脏不能独立存在，人死后心脏也会消失。

``` java
class Heart {
public:
    Heart() { cout << "Heart created" << endl; }
    ~Heart() { cout << "Heart destroyed" << endl; }
};

class Human {
private:
    Heart heart;  // 组合关系，Human销毁时，Heart也销毁
};

```

### 5. Aggregation

聚合是一种“整体-部分”的关系，但部分（成员对象）可以独立于整体存在。表示“弱拥有关系”，即整体对象可以销毁，但部分对象仍然可以存在。

例如：一支球队由多个球员组成，但球员可以离开一支球队，加入另一支球队。

``` java
class Player {
public:
    string name;
    Player(string n) : name(n) {}
};

class Team {
public:
    vector<Player*> players;  // 指针表示聚合关系
    void addPlayer(Player* p) { players.push_back(p); }
};
```

### 6. Association

关联是最一般的对象关系，表示对象之间可以相互通信，但没有强制的生命周期关系。

例如：一个老师可以教多名学生，学生也可以被多名老师教。
关系是类与类之间的联接，它使一个类知道另一个类的属性和方法。关联可以是双向的，也可以是单向的。在Java语言中，关联关系一般使用成员变量来实现。

``` java
class Teacher {
    void teach(Student student) {
        System.out.println("Teaching student: " + student.getName());
    }
}

```



## 六、Design Goal



## 七、Double Dispatch

**双分派**是一个允许在重载时使用动态绑定的技巧。在 C++ 中，如果我们想实现动态分派（动态绑定），需要使用虚函数，但对于多个重载函数而言，它们不是虚函数，此时如何实现动态分派呢？

例如，我们有下面几何图形类的层次结构 （注意伪代码）：

``` C++
class Graph {
public:
    virtual void draw() {}
};

class Shape : public Graph {
public:
    virtual void draw() override {
        cout << "draw a Shape" << endl;
    }
};

class Dot : public Shape {
public:
        virtual void draw() override {
        cout << "draw a Dot" << endl;
    }
};

class Circle : public Dot {
public:
        virtual void draw() override {
        cout << "draw a Circle" << endl;
    }
};

class Rectangle : public Shape {
public:
        virtual void draw() override {
        cout << "draw a Rectangle" << endl;
    }
};
```

现在我们希望实现一个导出功能，但如果将导出功能放在原始的类中会很奇怪。因此，我们决定不在原类中添加导出功能，而是在该层此外创建一个包含所有导出逻辑的新类，该类包含将每个对象导出为 XML 字符串的方法：

``` C++
class Exporter {
public:
    void exportXML(Shape *s) {
        cout << "export Shape" << endl;
    }
    void exportXML(Dot *d) {
        cout << "export Dot" << endl;
    }
    void exportXML(Circle *c) {
        cout << "export Circle" << endl;
    }
    void exportXML(Rectangle *r) {
        cout << "export Rectangle" << endl;
    }
};
```

这些代码看上去不错，如果我们添加了新的 shape，只需要在 Exporter 中添加新的 method 即可。现在，我们尝试以下面的方法调用 Exporter：

``` C++
class Application {
public:
    void exportXML(Shape *s) {
        unique_ptr<Exporter> exporter = make_unique<Exporter>();
        exporter->exportXML(s);
    }
};

int main()
{
    Application app;
    app.exportXML(new Rectangle()); // export Shape
    app.exportXML(new Circle());    // export Shape
    return 0;
}
```

我们期望的输出是：

``` C++
export Rectangle
export Circle
```

问题的关键在于 C++ 是单分配，即只考虑调用者（this）的动态类型，无法区分参数的动态类型。

> 所谓调用者的动态类型，就是虚函数机制。
>
> 所谓参数的动态类型，就是重载。
>
> C++ 可以在虚机制下进行动态绑定，但是无法对重载进行动态绑定。

改进之后的代码：

``` C++
#include <iostream>
#include <memory>

using namespace std;

// 预声明 Exporter 供 accept 方法使用
class Exporter;

class Graph {
public:
    virtual void draw() {}
    virtual ~Graph() = default;
};

// Shape 继承 Graph，并添加 accept 方法
class Shape : public Graph {
public:
    virtual void draw() override {
        cout << "draw a Shape" << endl;
    }
    // 需要对原始类做出一定修改
    virtual void accept(Exporter *exporter); // 声明 accept
};

// 具体形状
class Dot : public Shape {
public:
    virtual void draw() override {
        cout << "draw a Dot" << endl;
    }
    virtual void accept(Exporter *exporter) override;
};

class Circle : public Dot {
public:
    virtual void draw() override {
        cout << "draw a Circle" << endl;
    }
    virtual void accept(Exporter *exporter) override;
};

class Rectangle : public Shape {
public:
    virtual void draw() override {
        cout << "draw a Rectangle" << endl;
    }
    virtual void accept(Exporter *exporter) override;
};

// 访问者类（Exporter）
class Exporter {
public:
    void exportXML(Shape *s) {
        cout << "export Shape" << endl;
    }
    void exportXML(Dot *d) {
        cout << "export Dot" << endl;
    }
    void exportXML(Circle *c) {
        cout << "export Circle" << endl;
    }
    void exportXML(Rectangle *r) {
        cout << "export Rectangle" << endl;
    }
};

// 实现 accept 方法，调用 Exporter 的正确方法
void Shape::accept(Exporter *exporter) {
    exporter->exportXML(this);
}

void Dot::accept(Exporter *exporter) {
    exporter->exportXML(this);
}

void Circle::accept(Exporter *exporter) {
    exporter->exportXML(this);
}

void Rectangle::accept(Exporter *exporter) {
    exporter->exportXML(this); // 第二次动态分配
}

// 应用程序
class Application {
public:
    void exportXML(Shape *s) {
        unique_ptr<Exporter> exporter = make_unique<Exporter>();
        s->accept(exporter.get());  // 触发双分派
    }
};

// 主函数
int main()
{
    Application app;
    app.exportXML(new Rectangle()); // export Rectangle
    app.exportXML(new Circle());    // export Circle
    return 0;
}
```

### **🔹 解释双分派**

1. **第一步（静态分派）**
    `app.exportXML(new Rectangle());` 会调用 `Application::exportXML(Shape *s)`，即 `s` 的静态类型是 `Shape*`，但其动态类型是 `Rectangle*`。
2. **第二步（动态分派）**
   - `s->accept(exporter.get());`
   - 由于 `accept` 是 `virtual`，所以会调用 `Rectangle::accept(Exporter*)`。
3. **第三步（再次动态分派）**
   - 在 `Rectangle::accept(Exporter*)` 里调用 `exporter->exportXML(this);`。
   - 这时 `this` 的实际类型是 `Rectangle*`，所以 `exporter->exportXML(Rectangle*)` 被正确调用。

这两步动态分派就是双分派的核心，即在一次方法调用过程中，涉及到**两个对象的动态类型**（调用对象和参数对象），并且都影响到最终调用的方法选择。

### **🔹 总结**

✔ **单分派（Single Dispatch）**

- 方法调用时，只考虑**调用者（`this`）的动态类型**。

✔ **双分派（Double Dispatch）**

- 方法调用时，既考虑**调用者（`this`）的动态类型**，又考虑**参数的动态类型**。

💡 **访问者模式（Visitor Pattern）**是双分派的典型应用，通过 `accept()` 触发两次分派，让访问者根据参数的动态类型正确选择方法。

这样，我们就利用双分派实现了更灵活的多态处理！ 🚀









































































































