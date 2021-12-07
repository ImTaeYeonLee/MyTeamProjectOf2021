#pragma once

#include "json.hpp"

class VrmJson {

public:
	nlohmann::json jsonData;

	bool init(const uint8* pData, size_t size);
};

