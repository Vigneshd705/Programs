class Department {
    private String name;

    public Department(String name) {
        this.name = name;
    }

    public String getName() {
        return name;
    }
}

class University {
    private String name;
    private Department[] departments; // Aggregation - University has Departments

    public University(String name, int numDepartments) {
        this.name = name;
        this.departments = new Department[numDepartments];
    }

    public void addDepartment(int index, Department department) {
        if (index >= 0 && index < departments.length) {
            departments[index] = department;
        } else {
            System.out.println("Invalid department index");
        }
    }

    public void displayDepartments() {
        System.out.println("University: " + name);
        System.out.println("Departments:");
        for (Department department : departments) {
            if (department != null) {
                System.out.println(department.getName());
            }
        }
    }
}

public class aggregation {
    public static void main(String[] args) {
        University myUniversity = new University("My University", 3);
        Department csDepartment = new Department("Computer Science");
        Department mathDepartment = new Department("Mathematics");
        Department bioDepartment = new Department("Biology");
        myUniversity.addDepartment(0, csDepartment);
        myUniversity.addDepartment(1, mathDepartment);
        myUniversity.addDepartment(2, bioDepartment);
        myUniversity = null; // Delete the university object
        // The Department objects still exist and can be accessed
        System.out.println(csDepartment.getName()); // "Computer Science"
        System.out.println(mathDepartment.getName()); // "Mathematics"
        System.out.println(bioDepartment.getName());
        // myUniversity.displayDepartments();
    }
}
