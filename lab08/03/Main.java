public class Main {
    public static void main(String[] args) {
        int[][] a = {
            {1, 2, 3},
            {4, 0, 6},
            {7, 8, 0}
        };
        int row = -1, col = -1;
        outer:
        for (int i = 0; i < a.length; i++) {
            for (int j = 0; j < a[i].length; j++) {
                if (a[i][j] == 0) {
                    row = i;
                    col = j;
                    break outer;
                }
            }
        }
        System.out.println(row + " " + col);
    }
}
