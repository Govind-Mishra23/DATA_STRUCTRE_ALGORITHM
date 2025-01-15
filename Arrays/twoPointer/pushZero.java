package DATA_STRUCTRE_ALGORITHM.Arrays.twoPointer;
class pushZero {
    
    public static void pushzero(int[] arr) {
        int left = 0 ; 
        for(int i = 0 ; i<arr.length; i++){
            if(arr[i] != 0){
                int temp = arr[i] ; 
                arr[i] = arr[left] ;
                arr[left] = temp ;
                left++ ;
            }
        }
        for(int i : arr){
            System.out.print(i + " ");
        }

    }
    public static void main(String[] args) {
        int[] arr = { 0, 1, 0, 3, 12 };// 1 0 0 3 12
        pushzero(arr);
        // for (int i : arr) {
        //     System.out.print(i + " ");
        // }
    }
}