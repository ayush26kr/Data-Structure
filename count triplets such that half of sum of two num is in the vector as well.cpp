int specialBinaryTree(vector<int>arr){
    int n=arr.size();
   int count = 0;
   for (int i = 0; i < n-2; i++){
      for (int j = i+1; j < n-1; j++){
         for (int k = j+1; k < n; k++){
            if((arr[i]+arr[j])/2==arr[k] || (arr[j]+arr[k])/2==arr[i] || (arr[k]+arr[i])/2==arr[j]){
                count++;
             }
         }
      }
   }
   return count;
}
