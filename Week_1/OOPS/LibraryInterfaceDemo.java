public class LibraryInterfaceDemo {
    public static void main(String args[]){
        System.out.println("Library Interface Demo");
        KidUser k=new KidUser();
        System.out.println("KidUser: RegisterAccount");
        k.age=10;
        k.registerAccount();
        k.age=18;
        k.registerAccount();
         System.out.println("KidUser: RequestBook");
        k.bookType="Kids";
        k.requestBook();
        k.bookType="Fiction";
        k.requestBook();
        AdultUser a=new AdultUser();
        System.out.println("AdultUser: RegisterAccount");
        a.age=5;
        a.registerAccount();
        a.age=23;
        a.registerAccount();
        System.out.println("AdultUser: RequestBook");
        a.bookType="Kids";
        a.requestBook();
        a.bookType="Fiction";
        a.requestBook();
    }
}