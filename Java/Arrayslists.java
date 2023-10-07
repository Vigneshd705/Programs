import java.util.ArrayList;

public class Arrayslists {
    public static void main(String[] args) {
        ArrayList<ArrayList<String>> foodList=new ArrayList();
        ArrayList<String> bakeryList =new ArrayList();
        bakeryList.add("pasta");
        bakeryList.add("garlic bread");
        bakeryList.add("donuts");
        
        ArrayList<String> produceList = new ArrayList(bakeryList);
        produceList.add("pepper");
        produceList.add("tomatoes");
        produceList.add("zucchini");

        ArrayList<String> drinksList= new ArrayList();
        drinksList.add("coke");
        drinksList.add("soda");
        drinksList.add("coffee");

        foodList.add(bakeryList);
        foodList.add(produceList);
        foodList.add(drinksList);
        System.out.println(foodList);

    }
}
