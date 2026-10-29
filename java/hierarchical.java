class Vehiclee {
    void start() {
        System.out.println("Vehicle starts...");
    }
}

class truck extends Vehiclee {
    void drive() {
        System.out.println("truck is driving...");
    }
}

class Bike extends Vehiclee {
    void ride() {
        System.out.println("Bike is riding...");
    }
}

public class hierarchical {
    public static void main(String[] args) {
        truck c = new truck();
        c.start();  // Inherited from Vehicle
        c.drive();  // Defined in truck

        Bike b = new Bike();
        b.start();  // Inherited from Vehicle
        b.ride();   // Defined in Bike
    }
}   