#ifndef __GAME_H_
#define __GAME_H_

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus
#include "pd_api.h"
#ifdef __cplusplus
} // extern "C"
#endif // __cplusplus

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

void *SetupGame(PlaydateAPI *playdate);
int Update(void *userdata);

#ifdef __cplusplus
} // extern "C"
#endif // __cplusplus

#endif
