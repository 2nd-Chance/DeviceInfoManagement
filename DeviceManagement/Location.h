#ifndef Location_h__
#define Location_h__


#include <cinttypes>
#include <memory>

#include "json.hpp"

namespace csk
{
	class Location
	{
		friend class LocationBuilder;

	public:
		using JsonType = nlohmann::json;

		Location(void);
		Location(int x, int y);
		Location(int level, int x, int y);

		static Location parse(JsonType &json);

		int getLevel(void);
		void setLevel(int level);
		int getX(void);
		void setX(int x);
		int getY(void);
		void setY(int y);
		JsonType toJson(void);

	private:
		int level = 1;
		int x = 0;
		int y = 0;
	};
}


#endif // Location_h__
