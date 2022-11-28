class Calculations {
    int max(int a, int b) {
        int max;
        max =a > b ? a : b;
        System.out.printf("Number 1: %d \tNumber 2: %d\t Maximum: %d\n", a, b,max);
        return max;
    }

    int min(int a, int b) {
        int min;
        min =a < b ? a : b;
        System.out.printf("Number 1: %d \tNumber 2: %d\t Minimum: %d\n", a, b,min);
        return min;

    }

    float avg(int a, int b) {
        int avg;
        avg =(a + b) / 2;
        System.out.printf("Number 1: %d \tNumber 2: %d\t Average: %d\n", a, b,avg);
        return avg;

    }
}
