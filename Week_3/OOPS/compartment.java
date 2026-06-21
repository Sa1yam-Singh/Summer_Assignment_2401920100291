abstract class Compartment{
    public abstract String notice();
}
class FirstClass extends Compartment{
    public String notice(){
        return "First Class Compartment: Welcome to First Class!";
    }
}
class Ladies extends Compartment{
    public String notice(){
        return "Ladies Compartment: Reserved for ladies only.";
    }
}
class General extends Compartment{
    public String notice(){
        return "General Compartment: Open for all passengers.";
    }
}
class Luggage extends Compartment{
    public String notice(){
        return "Luggage Compartment: For luggage only.";
    }
}
public class TestCompartment{
    public static void main(String args[]){
        Compartment[] c=new Compartment[10];
        for(int i=0;i<10;i++){
            int r=(int)(Math.random()*4)+1;
            switch(r){
                case 1:
                    c[i]=new FirstClass();
                    break;
                case 2:
                    c[i]=new Ladies();
                    break;
                case 3:
                    c[i]=new General();
                    break;
                case 4:
                    c[i]=new Luggage();
                    break;
            }
        }
        System.out.println("About the compartments:");
        for(int i=0;i<10;i++){
            System.out.println(c[i].notice());
        }
    }
}
