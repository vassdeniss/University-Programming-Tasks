#include <iostream>

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

void AddElementAtPosition(int* array, int& size, int element, int index)
{
    if (size == MAX_ARRAY_SIZE)
    {
        std::cerr << "Error: Array is full!" << std::endl;
        return;
    }

    if (index < 0 || index > size)
    {
        std::cerr << "Error: Index out of range!" << std::endl;
        return;
    }

    for (int i = size; i > index; i--)
    {
        array[i] = array[i - 1];
    }

    array[index++] = element;
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

void ChangeValue(int* array, int size, int index, int newValue)
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
    int array[MAX_ARRAY_SIZE] = { 1, 2, 3, 4, 5 };
    int size = 5;

    Add(array, size, 6);

    AddElementAtPosition(array, size, 7, 2);

    DeleteStudent(array, size, 0);

    ChangeValue(array, size, 1, 1);

    PrintArray(array, size);

    return 0;
}
