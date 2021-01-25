# head-first-design-patterns-cpp

## **Head First Design Pattern but in C++**

This repository consist examples from the book **Head First  Design Patterns** but written in modern **C++**.
For most of the examples build system is cmake so they can be simple build by below set of command:

```bash
mkdir build
cd build
cmake ..
make
```

Examples without cmake system build can be build from command line or just by type `make` if they consist of Makefile.

## **Design Patterns by Categories**

* **Creational Patterns** involve object instantion and all provide a way to decouple a client from the objects it needs to instantiate.
* **Structural Patterns** let you compose classes or objects into larger structures.
* **Behavioral Patterns** define how classes and objects interact and distribute resposibility.

| **Creational**                                | **Structural**                      | **Behavioral**                 |
| ----------------------------------------------|:-----------------------------------:| ------------------------------:|
| [Factory Method](factory-method/README.md)    | [Decorator](decorator/README.md)    | [Strategy](strategy/README.md) |
| [Abstract Factory](abstract-factory/README.md)| [Adapter](adapter/README.md)        | [Observer](observer/README.md) |
| [Singleton](singleton/README.md)              | [Facade](facade/README.md)          | [Command](command/README.md)   |
| Buidler                                       | [Composite](composite/README.md)    | [Template Method](template-method/README.md) |
| Prototype                                     | Proxy                               | [Iterator](iterator/README.md) |
|                                               | Bridge                              | [State](state/README.md)       |
|                                               | Flyweight                           | Mediator                       |
|                                               |                                     | Memento                        |
|                                               |                                     | Visitor                        |
|                                               |                                     | Interpreter                    |
|                                               |                                     | Chain Of Responsibility        |

## **Design Patterns by Book's chapters**

### **Chapter 1**

[Strategy](strategy/README.md)

### **Chapter 2**

[Observer](observer/README.md)

### **Chapter 3**

[Decorator](decorator/README.md)

### **Chapter 4**

[Factory Method](factory-method/README.md)

[Abstract Factory](abstract-factory/README.md)

### **Chapter 5**

[Singleton](singleton/README.md)

### **Chapter 6**

[Command](command/README.md)

### **Chapter 7**

[Adapter](adapter/README.md)

[Facade](facade/README.md)

### **Chapter 8**

[Template Method](template-method/README.md)

### **Chapter 9**

[Iterator](iterator/README.md)

[Composite](composite/README.md)

### **Chapter 10**

[State](state/README.md)

### **Chapter 11**

Proxy

### **Chapter 12**

[Compoud Patterns (6 Patterns together in one example)](compound-patterns/README.md)

MVC

### **Chapter 14** Other GoF Patterns

Patterns below was mentioned by just short description without code examples.

* Bridge
* Builder
* Chain of Responsibility
* Flyweight
* Interpreter
* Mediator
* Memento
* Prototype
* Visitor

## Contribution

If you see any error or stuff like that please report Issue :)
