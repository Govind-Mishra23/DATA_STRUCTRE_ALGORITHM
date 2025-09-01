package DATA_STRUCTRE_ALGORITHM.Tree.BST;

import java.util.Arrays;

public class bst2d {
    // matrix is row and col wise sorted 
    public static void main(String[] args) {
        int [][] arr = {
            {1, 4, 7, 11},
            {2, 5, 8, 12},
            {3, 6, 9, 16},
            {10, 13, 14, 17}
        } ;
        System.out.println(Arrays.toString(matrix(arr, 9)));
        
    }
    private static int [] matrix(int [][] matrix , int target){
        int r = 0 ; 
        int col = matrix[0].length -1 ;
        while (r < matrix.length && col >=0){
            if(matrix[r][col] == target){
                return new int [] {r,col} ; 
            }
            if(matrix[r][col] < target) {
                r++ ; 
            }else {
                col-- ; 
            }
        } 
        return new int [] {-1, -1} ; 
    }
}
