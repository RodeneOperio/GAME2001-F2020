#pragma once
#include <cassert>

template <class T>
class Array 
{
public:
	// Constructor
	Array(int size) :
		m_array(NULL), m_maxSize(0), m_growSize(0), m_numElements(0)
	{
		if (size)
		{
			m_maxSize = size;
			m_array = new T[m_maxSize]; // Dynamically allocated new array
			memset(m_array, 0, sizeof(T) * m_maxSize);

			m_growSize = 2;
		}
	}

	// Destructor
	~Array()
	{
		if (m_array != NULL)
		{
			delete[] m_array;
			m_array = NULL; // Good programming practice, set unused pointers to NULL
		}
	}

	// Insertion (2 methods)
		// > Fast insertion (Unordered) Big-O = O(1)
		// > Insertion (Ordered) Big-O = O(N)

	// Deletion (2 methods)
	// i) Remove last item in array 
	void pop()
	{
		if (m_numElements > 0)
		{
			m_numElements--;
		}
	}
	// ii) Remove item given an index: (Almost) Brute-Force - Big-O = O(N) 
	void remove(int index)
	{
		assert(m_array != NULL);

		if (index >= m_numElements)
		{
			return;
		}

		for (int i = index; i < m_numElements; i++)
		{
			if (i + 1 < m_numElements)
			{
				m_array[i] = m_array[i + 1];
			}
		}

		m_numElements--;
	}

	// Searching (2 methods)
	// > Linear (Unordered) = Big-O = O(N)
	int search(T val)
	{
		assert(m_array != NULL);

		//Brute-force Search
		for (int i = 0; i < m_numElements; i++)
		{
			if (m_array[i] == val)
			{
				return i;
			}
		}
		return -1;
	}

	// Overloaded [] operator
	T& operator[](int index)
	{
		assert(m_array != NULL && index < m_numElements);
		return m_array[index];
	}
	// Clear: Big-O = O(1)
	void clear()
	{
		m_numElements = 0;
	}
	// Get & Set
	int GetSize()
	{
		return m_numElements;
	}
	int GetMaxSize()
	{
		return m_maxSize;
	}
	int GetGrowSize()
	{
		return m_growSize;
	}
	void SetGrowSize(int val)
	{
		assert(val >= 0);
		m_growSize = val;
	}

protected:
	// Expand
	bool Expand()
	{
		if (m_growSize <= 0)
		{
			return false;
		}

		T* temp = new T[m_maxSize + m_growSize];
		assert(temp != NULL);

		memcpy(temp, m_array, sizeof(T) * m_maxSize);

		delete[] m_array;
		m_array = temp;
		temp = NULL;

		m_maxSize += m_growSize;

		m_growSize *= 2;

		return true;
	}

protected:
	// Variables
	T* m_array;			// Beginning pointer to array

	int m_maxSize;		// Maximum number that array can hold
	int m_growSize;		// How large array will grow by
	int m_numElements;	// Number of elements in array

};