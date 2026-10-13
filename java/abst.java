abstract class Animal {
    // Abstract method (no body)
    abstract void makeSound();

    // Concrete method (with body)
    void sleep() {
        System.out.println("Sleeping...");
    }
}

class Dog extends Animal {
    @Override
    void makeSound() {
        System.out.println("Bark");
    }
}

public class abst {
    public static void main(String[] args) {
        Animal a = new Dog();
        a.makeSound();  // Output: Bark
        a.sleep();      // Output: Sleeping...
    }
}   