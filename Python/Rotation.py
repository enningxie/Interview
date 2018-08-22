class Rotation:
    def chkRotation(self, A, lena, B, lenb):
        # write code here
        if lena != lenb:
            return False
        else:
            C = A + A
            if B in C:
                return True
            else:
                return False