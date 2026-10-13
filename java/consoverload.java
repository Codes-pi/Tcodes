class Box {
    int length, width, height;

    Box() {
        length = width = height = 0;
    }

    Box(int length, int width) {
        this.length = length;
        this.width = width;
        this.height = 0;
    }

    Box(int length, int width, int height) {
        this.length = length;
        this.width = width;
        this.height = height;
    }

    int volume() {
        return length * width * height;
    }

    public static void consoverload(String[] args) {
        Box b1 = new Box();              // 0, 0, 0
        Box b2 = new Box(5, 3);          // 5, 3, 0
        Box b3 = new Box(5, 3, 2);       // 5, 3, 2

        System.out.println(b1.volume()); // 0
        System.out.println(b2.volume()); // 0
        System.out.println(b3.volume()); // 30
    }
}   