class Solution{
  public:
    int middle(int A, int B, int C){
        if (A<B) {
            if (B<C) {
                return B;
            }
            else {
                if (A<C) {
                    return C;
                }
                else {
                    return A;
                }
            }
        }
        
        else { // B<A
            if (A<C) {
                return A;
            }
            else {
                if (B<C) {
                    return C;
                }
                else {
                    return B;
                }
            }
        }
    }
};