public class LeftObserver extends Observer{
    public LeftObserver(Car car) {
        super(car);
    }
    public void update() {
        int pos = getCar().getPosition();
        if (pos < 0)
        {
            System.out.println("left side");
        }
    }
}
