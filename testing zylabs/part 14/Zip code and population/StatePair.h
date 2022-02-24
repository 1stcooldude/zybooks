#ifndef STATEPAIR
#define STATEPAIR

using namespace std;

template<typename T1, typename T2>
class StatePair {
   private:
      T1 key;
      T2 value;

   public:
      StatePair(T1 key, T2 value){
         this->key = key;
         this->value = value;
      }

      StatePair(){}

      void SetKey(T1 key){
         this->key = key;
      }

      void SetValue(T2 value){
         this->value = value;
      }

      T1 GetKey() const {
         return key;
      }

      T2 GetValue() const {
         return value;
      }

      void PrintInfo() const {
         cout << key << ": " << value << endl;
      }
// TODO: Define a constructor, mutators, and accessors 
//       for StatePair
	
// TODO: Define PrintInfo() method
};

#endif