from collections import defaultdict

if __name__ == '__main__':
    d_dict = defaultdict()
    nums1 = [1, 2, 2, 1]
    nums2 = [2, 2]
    for i, value in enumerate(nums1):
        d_dict[i] = value
    d_dict.pop()
