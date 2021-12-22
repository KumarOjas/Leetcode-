
class Solution {

  public:
  
  
  
  bool isOneBitCharacters(vector<int>& bits) {
    
    auto  parity =0;
  
    
    for (int i = static_cast<int>(bits.size()) - 2;
    
         
         
         i >= 0 && bits[i]; --i)
    {
      
  
      parity ^= bits[i];
    
    }
      
    return parity == 0;
    
  }


};
    
    
    
    
    
    
  
  
  
  
  
  
  
  
  
  
  
  
