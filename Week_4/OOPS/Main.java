class Outer{
    void display(){
        System.out.println("Inside outer class");
    }
    class Inner{
        void display(){
            System.out.println("Inside inner class");
        }
    }
}
public class Main{
    public static void main(String args[]){
        Outer o=new Outer();
        o.display();
        Outer.Inner i=o.new Inner();
        i.display();
    }
}
