//* In Java, you use the abstract keyword to define an abstract class, and you can declare abstract methods by using the abstract keyword as well. Here's an example:

abstract class Animal {
    // Abstract method (no implementation)
    public abstract void speak();

    // Regular method with implementation
    public void eat() {
        System.out.println("Animal is eating");
    }

    // Regular method with implementation
    public void drink() {
        System.out.println("Animal is drinking water");
    }
}

// Concrete class derived from Animal
class Dog extends Animal {
    // Implementation of abstract method
    public void speak() {
        System.out.println("Dog says Woof!");
    }
}

public class Main {
    public static void main(String[] args) {
        // Error: Cannot instantiate the abstract class Animal
        // Animal animal = new Animal();

        // Create an object of the derived class (Dog)
        Dog dog = new Dog();
        dog.speak();
        dog.eat();
        dog.drink();

        /*
        Dog says Woof!
        Animal is eating
        Animal is drinking water
        */
    }
}
