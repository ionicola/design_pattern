import java.util.ArrayList;
public class Car {
    private int position;
    private ArrayList<Observer> observerList = new ArrayList<Observer>();
    public int getPosition() {
        return position;
    }
    public void setPosition(int position) {
        this.position = position;
        notifyObserver();
    }
    public void attach(Observer observer) {
        observerList.add(observer);
    }
    public void detach(Observer observer) {
        observerList.remove(observer);
    }
    private void notifyObserver() {
        for (Observer observer : observerList) {
            observer.update();
        }
    }
}