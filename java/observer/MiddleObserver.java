public class MiddleObserver extends Observer {
    public MiddleObserver(Car car){
        super(car);
    }
    public void update(){
        int pos = getCar().getPosition();
        if (pos == 0)
        {
            System.out.println("run straight");
        }
    }
}
