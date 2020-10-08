#pragma once

#include <cassert>
#include "Array.h"

template <class T> 
class OrderedArray: public Array<T> 
{
public:
	// Constructor
	OrderedArray(int size, bool noDuplicate = false) : Array<T>(size)
	{
		this->m_noDuplicate = noDuplicate;
	}
	// Destructor
	~OrderedArray(){
	}
	//Insertion - Big-O = O(N)
	int push(T val)
	{
		assert(this->m_array != NULL);

		int i, k;
		// Check if number is a duplicate
		if (this->m_numElements >= this->m_maxSize)
		{
			for (i = 0; i < this->m_numElements; i++)
			{
				if (m_noDuplicate)
				{
					if (this->m_array[i] == val)
						return 0;
				}
			}
			this->Expand();
		}

		// Step 1: Find index to insert val
		for (i = 0; i < this->m_numElements; i++)
		{
			if (m_noDuplicate) {
				if (this->m_array[i] == val)
					return 0;
			}
			if (this->m_array[i] > val) {
				break;
			}
		}

		// Step 2: Shift everything to the right by 1
		for (k = this->m_numElements; k > i; k--) // Move backwards through array starting from m_numElements
		{
			this->m_array[k] = this->m_array[k - 1];
		}

		// Step 3: Insert val into index
		this->m_array[i] = val;

		this->m_numElements++;

		return i;
	}

private:
	// Variables
	bool m_noDuplicate; // Create boolean value to check for duplicate
};