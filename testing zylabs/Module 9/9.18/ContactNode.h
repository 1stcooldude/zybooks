#include <string>
using namespace std;

class ContactNode{
   private:
      string contactName;
      string contactPhoneNum;
      ContactNode* nextNodePtr;


   public:
      ContactNode(string contactName, string contactPhoneNum);
      void InsertAfter(ContactNode* contactNode);
      string GetName() const { return contactName; }
      string GetPhoneNumber() const { return contactPhoneNum; }
      ContactNode* GetNext() const { return nextNodePtr; }
      void PrintContactNode() const;
};