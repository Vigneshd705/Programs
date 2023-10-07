import java.util.Scanner;

class rectangle {
    double length, breadth;

    rectangle(double length, double breadth) {
        Scanner obj = new Scanner(System.in);
        this.length=length;
        this.breadth=breadth;
    }

    void area() {
        System.out.println(this.length * this.breadth);
    }

    void perimeter() {
        System.out.println(2 * (this.length + this.breadth));
    }
}

class square extends rectangle {
    double side;
    square(double side)
    {
            super(side, side);
    }
}

public class ass8 {
    public static void main(String[] args) {
            square obj2 = new square(4.25);
            obj2.area();
            obj2.perimeter();
    }
}
