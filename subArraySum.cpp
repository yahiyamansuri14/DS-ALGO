// Online Java Compiler
// Use this editor to write, compile and run your Java code online

class HelloWorld {
    public static int subArraySum(int arr[]) {
        int length = arr.length;
        //brut force approach
        //generate all the subarray and then check each one's sum
      /*  int bestSum = 0;
        for( int i = 0; i < length; i++ ) {
            for(int j = i; j < length; j++ ) {
                int sum = 0;
                for(int k = i; k <= j; k++) {
                    sum += arr[k];
                }
                if( sum > bestSum ) {
                    bestSum = sum;
                }
            }
        }
        return bestSum;
        */
    }
    public static void main(String[] args) {
        int arr[] = {-2,1,-3,4,-1,2,1,-5,4};
        System.out.println(subArraySum(arr));
    }
}
