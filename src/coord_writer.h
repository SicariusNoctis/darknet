#pragma once
#ifndef COORD_WRITER_H
#define COORD_WRITER_H

#ifdef __cplusplus
extern "C" {
#endif
#include "image.h"
#include "box.h"

	void send_coords(detection *dets, int num, float thresh, char **names, int port, int timeout, int quality);

#ifdef __cplusplus
}
#endif

#endif // COORD_WRITER_H
