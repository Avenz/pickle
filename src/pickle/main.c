#include "pickle.h"
#include <stdio.h>
#include "rfm95.h"



#define PUMP_FREQUENCY 868300000




void app_main() {
	ESP_LOGI(TAG, "%s", SUBG_RFSPY_VERSION);
	rfm95_init();
	uint8_t v = read_version();
	ESP_LOGD(TAG, "kill all humans %d.%d", version_major(v), version_minor(v));
	set_frequency(PUMP_FREQUENCY);
	ESP_LOGD(TAG, "fuck you %d Hz", read_frequency());
	pickle_init();
}