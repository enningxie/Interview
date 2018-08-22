public class SelectSort {
    public static void selectSort(int[] arr){
        if(arr == null || arr.length < 2){
            return;
        }
        int mini = 0;
        int tmp = 0;
        for(int i = 0; i < arr.length - 1; i++){
            mini = i;
            for(int j = i + 1; j < arr.length; j++){
                mini = arr[mini] > arr[j] ? j : mini;
            }
            // swap
            tmp = arr[i];
            arr[i] = arr[mini];
            arr[mini] = tmp;
        }
    }
}
