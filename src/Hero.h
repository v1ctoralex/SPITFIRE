#include <string>
#include "funcs.h"
#include "amf3.h"

namespace spitfire {
namespace server {

using namespace std;


class Hero
{
public:
	Hero();
	~Hero();
	amf3object ToObject();

	double m_experience;
	uint64_t m_id;
	int32_t m_itemamount; //?
	int32_t m_itemid; //?
	int16_t m_level;
	string m_logourl;
	int8_t m_loyalty;
	int16_t m_basemanagement;
	int16_t m_basepower;
	int16_t m_basestratagem;
	int16_t m_management;
	int16_t m_managementadded;
	int16_t m_managementbuffadded;
	string m_name;
	int16_t m_power;
	int16_t m_poweradded;
	int16_t m_powerbuffadded;
	int16_t m_remainpoint;
	int8_t m_status;
	int16_t m_stratagem;
	int16_t m_stratagemadded;
	int16_t m_stratagembuffadded;
	double m_upgradeexp;
	stArmyMovement * movement;

	inline int16_t GetManagement()
	{
		return m_management + m_managementadded + m_managementbuffadded;
	}
	inline int16_t GetPower()
	{
		return m_power + m_poweradded + m_powerbuffadded;
	}
	inline int16_t GetStratagem()
	{
		return m_stratagem + m_stratagemadded + m_stratagembuffadded;
	}
	//array of buffs
}; // 75 bytes

}
}