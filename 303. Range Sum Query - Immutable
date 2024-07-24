public class NumArray {

    private List<int>sumOfArray = new List<int>();
    public NumArray(int[] nums) {
        int sum = 0;
        int i = 0;
        int length = nums.Length;
        while(i < length){
            sum+=nums[i];
            sumOfArray.Add(sum);
            i++;
        }
    }
    
    public int SumRange(int left, int right) {
        if(left == 0){
            return sumOfArray[right];
        }
        return (sumOfArray[right] - sumOfArray[left - 1]);
    }
}
