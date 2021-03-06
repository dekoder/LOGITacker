#ifndef LOGITACKER_PROCESSOR_PAIR_DEVICE_H
#define LOGITACKER_PROCESSOR_PAIR_DEVICE_H

#include "logitacker_processor.h"
#include "app_timer.h"
#include "logitacker_pairing_parser.h"

logitacker_processor_t * new_processor_pair_device(uint8_t const *target_rf_address, logitacker_pairing_info_t const * pairing_info, app_timer_id_t timer_next_action);

// export methods for key calculation
bool logitacker_pairing_derive_key_material(logitacker_pairing_info_t * pi);
bool logitacker_pairing_derive_key(logitacker_pairing_info_t * pi);

#endif //LOGITACKER_PROCESSOR_PAIR_DEVICE_H
