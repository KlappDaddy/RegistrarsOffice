#include <iostream>
#include <string>
#include "GenQueue.h"

using namespace std;

int main()
{
	GenQueue<int> s;
	s.enqueue(10);
	s.enqueue(4);
	s.printQ();
}