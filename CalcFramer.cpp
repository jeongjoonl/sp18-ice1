#include <assert.h>
#include "CalcFramer.hpp"

using namespace std;

void CalcFramer::append(string chars)
{
	// PUT YOUR CODE HERE
    mFrame.append(chars);
}

bool CalcFramer::hasMessage() const
{
	// PUT YOUR CODE HERE
	return mFrame.find(mDelim) != string::npos;
}

string CalcFramer::topMessage() const
{
	// PUT YOUR CODE HERE
	return mFrame.substr(0, mFrame.find(mDelim));
}

void CalcFramer::popMessage()
{
	// PUT YOUR CODE HERE
    int pos = mFrame.find(mDelim);
    int len = mDelim.size();

    mFrame = mFrame.substr(pos + len);
}

void CalcFramer::printToStream(ostream& stream) const
{
	// (OPTIONAL) PUT YOUR CODE HERE--useful for debugging
}
