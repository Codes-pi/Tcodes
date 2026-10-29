interface Fly {
    void fly();
}
//we cannot create object of an interface
interface Swim {
    void swim();
}

class Robot implements Fly, Swim {
    public void fly() {
        System.out.println("Robot is flying...");
    }

    public void swim() {
        System.out.println("Robot is swimming...");
    }
}

public class multipleinheri {
    public static void main(String[] args) {
        Robot r = new Robot();
        r.fly();
        r.swim();
    }
}   