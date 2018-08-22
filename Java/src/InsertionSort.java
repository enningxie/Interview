// 插入排序
public class InsertionSort {
    public static void insertionSort(int[] arr){
        if(arr == null || arr.length < 2){
            return;
        }
        int index = 0;
        int tmp;
        for(int i = 1; i < arr.length; i++){
            index = i;
            while(index > 0){
                if(arr[index-1] > arr[index]){
                    tmp = arr[index];
                    arr[index] = arr[index-1];
                    arr[index-1] = tmp;
                    index--;
                }else{
                    break;
                }
            }
        }
    }
}
