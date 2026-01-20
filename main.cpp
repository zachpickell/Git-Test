#include <iostream>

int sumNumber(int n)
{

  int sum = 0;
  
  for (int i = 1; i <= n; i++)
  {
    sum += i;
  }

  return sum;
  
};

int productNum(int n)
{
  int product = 1;
  for (int i = 1; i <=n; i++)
  {
    product *= i;
  }

  return product;
};

int main()
{
    int n;

    std::cout << "Enter a number: ";
    std::cin >> n;
    std::cout << std::endl;

    std::cout << "The sum: " << sumNumber(n) << std::endl;
    std::cout << "The product: " << productNum(n) << std::endl;
    
    return 0;
};


