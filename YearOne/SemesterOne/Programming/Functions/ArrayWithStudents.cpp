#include <iostream>
#include <algorithm>

const int MAX_ARRAY_SIZE = 100;

void Add(int* array, int& size, int element)
{
    if (size == MAX_ARRAY_SIZE)
    {
        std::cerr << "Error: Array is full!" << std::endl;
        return;
    }

    array[size++] = element;
}

int FindStudent(int* array, int size, int value)
{
    int* it = std::find(array, array + size, value);

    if (it != array + size)
    {
        return it - array;
    }

    return -1;
}

void DeleteStudent(int* array, int& size, int index)
{
    if (index < 0 || index >= size) 
    {
        std::cerr << "Error: Index out of range!" << std::endl;
        return;
    }

    for (int i = index; i < size - 1; i++)
    {
        array[i] = array[i + 1];
    }

    size--;
}

void ChangeNumber(int* array, int size, int index, int newValue)
{
    if (index < 0 || index >= size) 
    {
        std::cerr << "Error: Index out of range!" << std::endl;
        return;
    }

    array[index] = newValue;
}

void PrintArray(int* array, int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << array[i] << " ";
    }

    std::cout << std::endl;
}

int main()
{
    int array[MAX_ARRAY_SIZE] = { 108349, 118450, 128551, 138652, 148753 };
    int size = 5;

    Add(array, size, 158854);

    std::cout << "My number index is: " << FindStudent(array, size, 108349) << " (should be 0)" << std::endl;

    DeleteStudent(array, size, 1);

    ChangeNumber(array, size, 1, 303030);

    PrintArray(array, size);

    return 0;
}
