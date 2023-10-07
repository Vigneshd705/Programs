import java.util.Scanner;

class vehicle {
    Scanner scanner = new Scanner(System.in);
    String make;
    int year;
    String model, fueltype;
}

class motorcycle extends vehicle {
    int distanceB, litresB;

    void distanceTravelled() {
        System.out.println("Enter the travelled distance for motorcycle: ");
        distanceB=scanner.nextInt();

    }

    void fuelEfficiency() {
        float Efficiency;
        System.out.println("Enter the consumed litres amount for motorcycle: ");
        litresB = scanner.nextInt();
        Efficiency = (distanceB / litresB);
        System.out.println("fuel efficiecy for motorcycle is"+Efficiency);

    }
}

class truck extends vehicle {
    int distanceT, litresT;

    void distanceTravelled() {
        System.out.println("Enter the travelled distance for truck: ");
        distanceT=scanner.nextInt();

    }

    void fuelEfficiency() {
        float Efficiency;
        System.out.println("Enter the consumed litres amount for truck: ");
        litresT = scanner.nextInt();
        Efficiency = (distanceT / litresT);
        System.out.println("fuel efficiecy for truck is"+Efficiency);

    }
}

public class ass6 {
    public static void main(String[] args) {
        motorcycle obj = new motorcycle();
        obj.distanceTravelled();
        obj.fuelEfficiency();
        truck obj1 = new truck();
        obj1.distanceTravelled();
        obj1.fuelEfficiency();

    }
}