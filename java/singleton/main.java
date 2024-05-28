public class main {
    public static void main(String[] args) {
        GameSetting setting = GameSetting.getInstance();
        setting.display();
        setting.setBrightness(100);
        setting.setWidth(900);
        setting.setHeight(600);
        setting.setFps(60);
        setting.display();
        GameSetting otherSetting = GameSetting.getInstance();
        otherSetting.display();
    }
}