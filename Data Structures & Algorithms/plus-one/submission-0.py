class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        n = len(digits)
        carry = 1
        for i in range(n - 1, -1, -1):
            if not carry:
                break
            sum_ = digits[i] +  carry
            if sum_ >= 10:
                carry = sum_ // 10
                digits[i] = sum_ % 10
            else:
                digits[i] = sum_
                carry = 0
        if carry:
            digits.insert(0, carry)
            
        return digits