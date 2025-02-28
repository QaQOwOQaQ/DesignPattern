## Reference

[卡码网设计模式精讲](https://github.com/youngyangyang04/kama-DesignPattern?tab=readme-ov-file)

[深入设计模式](https://refactoringguru.cn/design-patterns/command)

[]()

## book
《大话设计模式》
《敏捷软件开发：原则、模式与实践》
《重构-改善既有代码的设计》
《设计模式》
《设计模式解析》
《重构与模式》

## English


## overview
### 创建型模式(Creational Patterns)
1.单例模式 (Singleton)
2.工厂方法模式 (Factory Method)
3.抽象工厂模式 (Abstract Factory)
4.建造者模式/生成器模式 (Builder)
5.原型模式 (Prototype)

### 结构型模式(Structural Patterns)
6.适配器模式 (Adapter)
7.桥接模式 (Bridge)
8.组合模式 (Composite)
9.装饰器模式/封装器 (Decorator)
11.外观模式 (Facade)
12.享元模式/cache (Flyweight)
13.代理模式 (Proxy)

### 行为模式(Behavioral Patterns)
责任链模式 (Chain of Responsibility)
命令模式/Transaction/Action (Command)
解释器模式 (Interpreter)
迭代器模式 (Iterator)
中介者模式 (Mediator)
备忘录模式 (Memento)
观察者模式 (Observer)
状态模式 (State)
策略模式 (Strategy)
模板方法模式 (Template Method)
访问者模式 (Visitor)



## QA
为什么需要设计模式，换言之，设计模式有什么用？
-- 设计模式的核心目的就是可以在不修改<客户端代码>的情况下，实现功能上的改变(即维护代码)
-- 我们自己<编写的类>是<服务代码>，而<main>中的代码就是<客户端代码>


抽象部分 （也被称为接口） 是一些实体的高阶控制层。 该层自身不完成任何具体的工作， 它需要将工作委派给实现部分层 （也被称为平台）。
注意， 这里提到的内容与编程语言中的接口或抽象类无关。 它们并不是一回事。
在实际的程序中， 抽象部分是图形用户界面 （GUI）， 而实现部分则是底层操作系统代码 （API）， GUI 层调用 API 层来对用户的各种操作做出响应。
一般来说， 你可以在两个独立方向上扩展这种应用：
开发多个不同的 GUI （例如面向普通用户和管理员进行分别配置）
支持多个不同的 API （例如， 能够在 Windows、 Linux 和 macOS 上运行该程序）。