public class GameSetting {
    private static GameSetting instance = null;

    private GameSetting() {
    }

    private int brightness = -1;
    private int width = -1;
    private int height = -1;
    private int fps = -1;

    public static GameSetting getInstance() {
        if (instance == null) {
            instance = new GameSetting();
        }
        return instance;
    }

    public int getBrightness() {
        return brightness;
    }

    public void setBrightness(int brightness) {
        this.brightness = brightness;
    }

    public int getWidth() {
        return width;
    }

    public void setWidth(int width) {
        this.width = width;
    }

    public int getHeight() {
        return height;
    }

    public void setHeight(int height) {
        this.height = height;
    }

    public int getFps() {
        return fps;
    }

    public void setFps(int fps) {
        this.fps = fps;
    }

    public void display() {
        System.out.println("Brightness: " + brightness);
        System.out.println("Width: " + width);
        System.out.println("Height: " + height);
        System.out.println("Fps: " + fps);
        System.out.println();
    }
}
