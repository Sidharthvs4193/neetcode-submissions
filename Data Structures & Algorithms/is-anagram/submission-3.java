class Solution {
    public boolean isAnagram(String s, String t) {
        String temp1=s.toLowerCase();
        String temp2=t.toLowerCase();
        char[] string1=temp1.toCharArray();
        char[] string2=temp2.toCharArray();
        Arrays.sort(string1);
        Arrays.sort(string2);
        return Arrays.equals(string1,string2);
    }
}
