class Animals {
    void speak() {
        System.out.println("Animal makes a sound");
    }
}

class Dogs extends Animals {
    @Override
    void speak() {
        System.out.println("Dog barks: Woof!");
    }
}

public class overriding {
    public static void main(String[] args) {
        Animals myDog = new Dogs();
        myDog.speak(); // Output: Dog barks: Woof!
    }
}   