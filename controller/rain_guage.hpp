#include "cstdint"

struct rain_guage
{
	/** @brief Main application machine. */
	void main(void);

	/** @brief Callback for a tipping event. */
	void bucket_tip(void);

	/* State Variables. */
	bool _is_in_maintainance_mode = false;

	rain_events _events;
	
};