#include "cstdint"
#include "vector"
#include "ctime"

using TipVector = std::vector<rain_events>;

struct rain_events
{
	struct rain_tip
	{
		friend struct rain_events;
		uint32_t tipTimeStamp = 0;
	};

	/** @brief get a vector of all the tip events from the past minute. */
	std::shared_pointer<TipVector> getTips(void)
	{
		std::shared_pointer<TipVector> ret = new std::vector<rain_tip>(_tipsEvents);
	}

	void resetTips(void)
	{
		_tipsEvents.clear();
	}

	void addTip(rain_tip tip)
	{
		_tipsEvents.push_back(tip);
	}

	std::vector<rain_tip> _tipsEvents;
};