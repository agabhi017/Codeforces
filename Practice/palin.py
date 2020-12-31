import numpy as np

def expand(str, low, high, s, indices):
 
    # run till str[low.high] is a palindrome
    while low >= 0 and high < len(str) and str[low] == str[high]:
 
        # push all palindromes into the set
        s.add(str[low: high + 1])
        if high - low > 1:
            indices.append([low, high])
 
        # expand in both directions
        low = low - 1
        high = high + 1
 
 
# Function to find all unique palindromic substrings of given String
def allPalindromicSubStrings(str):
 
    # create an empty set to store all unique palindromic substrings
    s = set()
    indices = []
    for i in range(len(str)):
 
        # find all odd length palindrome with str[i] as mid point
        expand(str, i, i, s, indices)
 
        # find all even length palindrome with str[i] and str[i+1]
        # as its mid points
        expand(str, i, i + 1, s, indices)
 
    # print all unique palindromic substrings
    #print(s, end='')
    return indices

def overlap_v1(points, n) :
    points = np.array(points)
    overlap = []
    if n > 0:
        points = points[np.lexsort((points[:,1], points[:,0]))]
        current_index = 0
        overlap_point = 0
       
        while current_index < n :
            common_left = points[current_index][0]
            common_right = points[current_index][1]
            
            while current_index < n - 1 and points[current_index + 1][0] <= common_right:
                common_left = max(common_left, points[current_index + 1][0])
                common_right = min(common_right, points[current_index + 1][1])
                current_index += 1
    
            overlap.append(common_left)
            current_index += 1
    return overlap
 
 
if __name__ == '__main__':
    n = int(input())
    overlap_final = []
    for i in range(n):
        strr = input()
        indices = allPalindromicSubStrings(strr)
        print(indices)
        overlap_arr = overlap_v1(indices, len(indices))
        overlap_final.append(overlap_arr)
    print(len(overlap_final))
    print(overlap_final)
    print(*overlap_final, sep = ' ')
        