public class RightObserver extends Observer {
    public RightObserver(Car car){
        super(car);
    }
    public void update(){
        int pos = getCar().getPosition();
        if(pos > 0){
            System.out.println("right side");
        }
    }
}
