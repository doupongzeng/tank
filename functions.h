#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <Windows.h>
#include <queue>
#include <ege.h>
#include <graphics.h>
#include "config.h"

#include "Picture.h"
using namespace std;


void mainloop();
void movieTitle();
void movieEnd();
void movieShine(int time);
void movieBorn(int time, int x, int y, Picture &picture);
void movieBomb(int time);
void movieBomb(int time, int x, int y, Picture &picture);
void movie_Loding();
int myrand_int(int min,int max);