#pragma once

#include "tree.h"

class Oak : public Tree
{
private:
	static unsigned int _oak_counter;
public:
    Oak(std::string name_create);
    Oak(const Oak& oak_to_copy);
    void wind() override;

    static unsigned int getOakCount();
};

