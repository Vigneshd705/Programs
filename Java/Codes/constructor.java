class Box {
    int width, breadth, height;

    Box(int w, int b, int h) {
        width = w;
        height = h;
        breadth = b;
        System.out.println("Constructor is called");
    }

    void volume() {
        System.out.println(width * breadth * height);
    }
}

public class constructor {

    public static void main(String[] args) {
        Box obj = new Box(1, 2, 3);
        Box obj1 = new Box(10, 2, 3);
        obj.volume();
        obj1.volume();
       
    }
}
