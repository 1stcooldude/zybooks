#ifndef CALCULATORH
#define CALCULATORH

class Calculator {
	public:	
	   Calculator() { value = 0; }
      void Add(double val);
      void Subtract(double val);
      void Multiply(double val);
      void Divide(double val);
      void Clear();
      double GetValue() const { return value; }
	
	private:
	   double value;
};

#endif