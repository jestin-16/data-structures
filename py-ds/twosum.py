def twosum(nums, target):
    """
    Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

    Args:
    nums (List[int]): List of integers.
    target (int): The target sum.

    Returns:
    List[int]: Indices of the two numbers that add up to target.
    """
    num_to_index = {}
    
    for index, num in enumerate(nums):
        complement = target - num
        if complement in num_to_index:
            return [num_to_index[complement], index]
        num_to_index[num] = index
    
    return []  # Return an empty list if no solution is found.

