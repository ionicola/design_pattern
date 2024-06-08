import java.util.Scanner;
public class main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        Car car = new Car();
        RightObserver rightObserver = new RightObserver(car);
        LeftObserver leftObserver = new LeftObserver(car);
        MiddleObserver middleObserver = new MiddleObserver(car);
        
        System.out.println("Hit left button to drive a car in your city! and press Esc to close");
        char pressedButton;
        boolean breakLoop = false;
        while (!breakLoop) {
            pressedButton = scanner.nextLine().charAt(0);
            switch (pressedButton) {
                case 'a':
                    leftObserver.getCar().setPosition(-1);
                    break;
                case 'd':
                    rightObserver.getCar().setPosition(1);
                    break;
                case 's':
                    middleObserver.getCar().setPosition(0);;
                    break;
                case 'q':
                    breakLoop = true;
                    break;
                default:
                    System.out.println("drive carefully!");
                    break;
            }
        }
        System.out.println("Bye!");
    }
}
