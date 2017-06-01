//Implementing Bubble Sort
 
#include <iostream>
#include <string>
using namespace std;
void bubbleSort(int array[], int len);
void charBubbleSort(string array[], int len);
int main()
{
  std::cout << "Interger Bubble Sort" << std::endl;
  
  //initalize the int array
  int array[] = {8, 20, 1, 6, 0};
  int len = sizeof(array)/sizeof(array[0]);
  
  //calls integer array
  bubbleSort(array, len);
  
  std::cout << std::endl;
  std::cout << "String Bubble Sort" << std::endl;
  
  //initalize string array
  string arrayTwo[] = {"Jasmine", "Tim", "Patrice", "Manny", "Ashley"};
  int lenTwo = sizeof(arrayTwo)/sizeof(arrayTwo[0]);
   
   //calls string array
  charBubbleSort(arrayTwo, lenTwo);
   
  return 0;
}

void bubbleSort(int array[], int len)
{
  int temp;
  for (int j=0; j < len-1; j++) //initlizaiton  
  {
  for (int i=0; i < len-j-1; i++)   //maintenance
  {
      if (array[i] > array[i+1])
      {
         temp = array[i];
         array[i] = array[i+1];
         array[i+1]=temp;
      }
  }
  
}
//prints array
for (int k =0; k < len; k++)
  {
      std::cout << array[k] << ", ";
  }
}

void charBubbleSort(string array[], int len)
{
    string temp;
    for (int j=0; j < len-1; j++)
    {
        for (int i=0; i < len-j-1; i++)
        {
            if (array[i] > array[i+1])
            {
                temp = array[i];
                array[i] = array[i+1];
                array[i+1]=temp;
            }
        }
    
    }
    //prints array
      for (int k =0; k < len; k++)
  {
      std::cout << array[k] << ", ";
  }
}

