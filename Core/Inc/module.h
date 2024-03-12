#ifndef INC_MODULE_H_
#define INC_MODULE_H_

#include "main.h"

#define MD_7KHZ_3KHZ 2
#define CELL_CH_ALL 0
#define DCP_DISABLED 0

void readVolt(uint16_t *read_volt);
void getActualTemps(uint8_t dev_idx, uint8_t tempindex, uint16_t *actual_temp,
		uint16_t data);
void readTemp(uint8_t tempindex, uint16_t *read_temp, uint16_t *read_auxreg);

#endif /* INC_MODULE_H_ */
