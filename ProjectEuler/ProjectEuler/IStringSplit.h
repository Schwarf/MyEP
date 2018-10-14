#ifndef PROJECTEULER_ISTRINGSPLIT_H_
#define PROJECTEULER_ISTRINGSPLIT_H_


class IStringSplit
{
public:
	IStringSplit() {}
	virtual ~IStringSplit() {}
	virtual void split() = 0;
};
#endif
