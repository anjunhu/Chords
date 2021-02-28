/*
 * lab3part1utils.h
 *
 *  Created on: Feb. 28, 2021
 *      Author: ah
 */

#ifndef INC_LAB3PART1UTILS_H_
#define INC_LAB3PART1UTILS_H_

void polled_waves_8bit (uint16_t* trip, uint16_t* sawp, uint16_t* sinp, uint16_t t, uint16_t T){
	*sawp = 17*t;

	if (t<=8){
		*trip = 31*t;
	}
	else {
		*trip = 31*(T-t+1);
	}

	*sinp = (uint16_t) (128*(arm_sin_f32(6.283*t/T)+1));
	t += 1;
}

void polled_waves_12bit (uint16_t* trip, uint16_t* sawp, uint16_t* sinp, uint16_t t, uint16_t T){
	*sawp = 273*t;

	if (t<=8){
		*trip = 545*t;
	}
	else {
		*trip = 545*(T-t+1);
	}

	*sinp = (uint16_t) (2048*(arm_sin_f32(6.283*t/T)+1));
	t += 1;
}


#endif /* INC_LAB3PART1UTILS_H_ */
