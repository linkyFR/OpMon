
#ifndef REGIMYSOBJECT_HPP
#define REGIMYSOBJECT_HPP

class RegimysObject {
public:
	RegimysObject();
	virtual ~RegimysObject();
	virtual Class* getClass() const {return classe;};

private:
	static const Class<RegimysObject> classe;

};

#endif /* REGIMYSOBJECT_HPP */
