abstract class Observer {
    public Car car = new Car();
    public Observer(Car car) {
        this.car = car;
        this.car.attach(this);
    }
    public abstract void update();
    protected Car getCar() {
        return this.car;
    }
}
