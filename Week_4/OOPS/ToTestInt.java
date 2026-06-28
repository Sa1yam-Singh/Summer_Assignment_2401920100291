interface Test{
        int square(int n);
}
class Arihtmetic implements Test{
        public int square(int n){
            return n*n;
        }
}
class ToTestInt extends Arithmetic{
    public static void main(String args[]){
        Arithmetic a=new Arithmetic();
        System.out.println("Square of 10 id:"+a.square(10));
    }
}
