class Solution {
    public String longestCommonPrefix(String[] strs) {
        Arrays.sort(strs);//words which are different will come at end and start
        String small = strs[0];
        String longg = strs[strs.length-1];
        int check = 0;
        while(check < small.length() && check < longg.length()){
            if(small.charAt(check) == longg.charAt(check)){
                check++;
            }else{
                break;
            }
        }

        return strs[0].substring(0,check);
    }
}
