#pragma once

#define key_D (key_A + 3)
#define key_S (key_A + 18)
#define key_W (key_Z - 3)
#define key_J (key_A + 6)
#define key_P (key_A + 15)

enum mode
{
	PVE,
	PVP
};

enum texture
{
	land,
	water,
	stone,
	steel,
	home,
	home_h,
	destory,
	destory_h,
	grass,
	enemyborn_h,
	enemyborn,
	player1born,
	player2born

};

enum direction
{
	Up,
	Down,
	Right,
	Left,
	Stay
};

enum gameState
{
	gaming,
	pause,
	lose,
	lose1,
	lose2,
	pass
};

enum property
{
	tank,
	bomb,
	star,
	timer,
	sheld
};

struct point
{
	int x;
	int y;
};

struct prop
{
	property pro;
	int x;
	int y;
	int time;
};

//窗口尺寸
const int Win_W = 26 * 20 + 4 + 280;
const int Win_H = 26 * 20 + 4 + 80;

const int map_W = 26;
const int map_H = 26;

//地图基座标
const int map_x = 30;
const int map_y = (Win_H - 20 * 26) / 2;