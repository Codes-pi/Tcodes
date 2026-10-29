class Vehicle {
    void start() {
        System.out.println("Vehicle starts...");
    }
}

class Cars extends Vehicle {
    void drive() {
        System.out.println("Car is driving...");
    }
}

class SportsCar extends Cars {
    void turbo() {
        System.out.println("Turbo mode ON!");
    }
}

public class multilevel {
    public static void main(String[] args) {
        SportsCar sc = new SportsCar();
        sc.start();  // Inherited from Vehicle
        sc.drive();  // Inherited from Car
        sc.turbo();  // Defined in SportsCar
    }
}   