/*
 * lro.h
 *
 *  Created on: Nov 3, 2013
 *      Author: arash
 */

#ifndef LRO_H_
#define LRO_H_

#define LRO_RATHA	1
#define LRO_GRAD	2

typedef struct {
	int width, height;
	int segment_size;
	int* dir;
	int* rate;
} ridge_orientation;

int save_orientation_image(char* file_name, ridge_orientation* lro);

int lro_gradient(mat* img, int seg_size, int dir_count, ridge_orientation** lro);
int lro_stdev(mat* img, int seg_size, int dir_count, ridge_orientation** lro);
int lro_stdev2(mat* img, int seg_size, int dir_count, ridge_orientation** lro);


#endif /* LRO_H_ */
