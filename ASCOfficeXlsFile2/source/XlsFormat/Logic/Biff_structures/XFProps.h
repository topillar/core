#pragma once

#include "BiffStructure.h"
#include <Logic/Biff_structures/XFProp.h>

namespace XLS
{

class CFRecord;

class XFProps : public BiffStructure
{
	BASE_STRUCTURE_DEFINE_CLASS_NAME(XFProps)
public:
	BiffStructurePtr clone();

	virtual void load(CFRecord& record);
	virtual void store(CFRecord& record);

	static const ElementType	type = typeXFProps;

	unsigned short		cprops;

	int serialize(std::wostream & stream);
	
	std::vector<XFProp> arXFPropFont;
	std::vector<XFProp> arXFPropNumFmt;
	std::vector<XFProp> arXFPropFill;
	std::vector<XFProp> arXFPropAlignment;
	std::vector<XFProp> arXFPropBorder;
	std::vector<XFProp> arXFPropProtection;
	std::vector<XFProp> arXFPropGradient;

//-----------------------------------------------------
	bool			fNewBorder;
};

} // namespace XLS
