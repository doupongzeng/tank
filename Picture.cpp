#include "Picture.h"
#include "functions.h"

Picture::Picture()
{

	//boom
	//----------------------------
	getimage(explode_1, "resource\\image\\boom\\1.png");
	getimage(explode_2, "resource\\image\\boom\\2.png");
	getimage(explode_3, "resource\\image\\boom\\3.png");
	getimage(explode_4, "resource\\image\\boom\\4.png");
	getimage(explode_5, "resource\\image\\boom\\5.png");
	getimage(explode_6, "resource\\image\\boom\\6.png");
	getimage(explode_7, "resource\\image\\boom\\7.png");
	getimage(explode_8, "resource\\image\\boom\\8.png");

	//props
	//-----------------------------
	getimage(bomb, "resource\\image\\props\\bomb.jpg");
	getimage(life, "resource\\image\\props\\life.jpg");
	getimage(shield, "resource\\image\\props\\shield.jpg");
	getimage(star, "resource\\image\\props\\star.jpg");
	getimage(timer, "resource\\image\\props\\timer.jpg");

	//map
	//-----------------------------
	////20X20
	getimage(wall_steel_2, "resource\\image\\map\\20X20\\wall_steel_2.png");
	getimage(wall_stone_2, "resource\\image\\map\\20X20\\wall_stone_2.png");
	getimage(grass_2, "resource\\image\\map\\20X20\\grass_2.png");
	getimage(water_2, "resource\\image\\map\\20X20\\water_2.png");

	////40X40
	getimage(wall_steel_4, "resource\\image\\map\\40X40\\wall_steel_4.png");
	getimage(wall_stone_4, "resource\\image\\map\\40X40\\wall_stone_4.png");
	getimage(destory, "resource\\image\\map\\40X40\\destory.png");
	getimage(grass_4, "resource\\image\\map\\40X40\\grass_4.png");
	getimage(water_4, "resource\\image\\map\\40X40\\water_4.png");
	getimage(home, "resource\\image\\map\\40X40\\home.png");
	getimage(enemyborn, "resource\\image\\map\\40X40\\enemyborn.png");
	getimage(player1born, "resource\\image\\map\\40X40\\player1born.png");
	getimage(player2born, "resource\\image\\map\\40X40\\player2born.png");
	getimage(d_delete, "resource\\image\\map\\40X40\\delete.png");
	getimage(d_save, "resource\\image\\map\\40X40\\save.png");
	getimage(d_return, "resource\\image\\map\\40X40\\return.png");
	getimage(d_clean, "resource\\image\\map\\40X40\\clean.png");

	////map_view
	//////PVE
	getimage(map_PVE_1, "resource\\image\\map\\map_view\\PVE\\1.jpg");
	getimage(map_PVE_2, "resource\\image\\map\\map_view\\PVE\\2.jpg");
	getimage(map_PVE_3, "resource\\image\\map\\map_view\\PVE\\3.jpg");
	getimage(map_PVE_4, "resource\\image\\map\\map_view\\PVE\\4.jpg");
	getimage(map_PVE_5, "resource\\image\\map\\map_view\\PVE\\5.jpg");
	getimage(map_PVE_6, "resource\\image\\map\\map_view\\PVE\\6.jpg");
	getimage(map_PVE_7, "resource\\image\\map\\map_view\\PVE\\7.jpg");
	getimage(map_PVE_8, "resource\\image\\map\\map_view\\PVE\\8.jpg");
	getimage(map_PVE_9, "resource\\image\\map\\map_view\\PVE\\9.jpg");
	getimage(map_PVE_10, "resource\\image\\map\\map_view\\PVE\\10.jpg");
	getimage(map_PVE_11, "resource\\image\\map\\map_view\\PVE\\11.jpg");
	getimage(map_PVE_12, "resource\\image\\map\\map_view\\PVE\\12.jpg");
	getimage(map_PVE_13, "resource\\image\\map\\map_view\\PVE\\13.jpg");
	getimage(map_PVE_14, "resource\\image\\map\\map_view\\PVE\\14.jpg");
	getimage(map_PVE_15, "resource\\image\\map\\map_view\\PVE\\15.jpg");
	getimage(map_PVE_16, "resource\\image\\map\\map_view\\PVE\\16.jpg");
	getimage(map_PVE_17, "resource\\image\\map\\map_view\\PVE\\17.jpg");
	getimage(map_PVE_18, "resource\\image\\map\\map_view\\PVE\\18.jpg");
	getimage(map_PVE_19, "resource\\image\\map\\map_view\\PVE\\19.jpg");
	getimage(map_PVE_20, "resource\\image\\map\\map_view\\PVE\\20.jpg");

	//////PVP
	getimage(map_PVP_1, "resource\\image\\map\\map_view\\PVP\\1.jpg");
	getimage(map_PVP_2, "resource\\image\\map\\map_view\\PVP\\2.jpg");
	getimage(map_PVP_3, "resource\\image\\map\\map_view\\PVP\\3.jpg");
	getimage(map_PVP_4, "resource\\image\\map\\map_view\\PVP\\4.jpg");
	getimage(map_PVP_5, "resource\\image\\map\\map_view\\PVP\\5.jpg");

	getimage(map_lock, "resource\\image\\map\\map_view\\lock.jpg");

	//screen
	//-----------------------------
	getimage(over, "resource\\image\\screen\\over.png");

	getimage(selects, "resource\\image\\screen\\selects.png");
	getimage(solo_selects, "resource\\image\\screen\\solo_selects.png");
	getimage(design_selects, "resource\\image\\screen\\design_selects.png");
	getimage(duet_main_selects, "resource\\image\\screen\\duet_main_selects.png");

	getimage(title, "resource\\image\\screen\\title.png");
	getimage(end, "resource\\image\\screen\\end.png");
	getimage(BattleCity, "resource\\image\\screen\\BattleCity.png");
	getimage(selecttank, "resource\\image\\screen\\selecttank.png");
	getimage(copyright, "resource\\image\\screen\\copyright.png");

	getimage(instruction_solo, "resource\\image\\screen\\instruction_solo.png");
	getimage(instruction_duet, "resource\\image\\screen\\instruction_duet.png");
	//tank
	//-----------------------------
	////born
	getimage(born_1, "resource\\image\\tank\\born\\1.png");
	getimage(born_2, "resource\\image\\tank\\born\\2.png");
	getimage(born_3, "resource\\image\\tank\\born\\3.png");
	getimage(born_4, "resource\\image\\tank\\born\\4.png");

	////enemy
	////---------------------------
	////normaltank
	////---------------------------
	//////1
	getimage(ordinary_1_A, "resource\\image\\tank\\enemy\\normaltank\\1\\A.png");
	getimage(ordinary_1_D, "resource\\image\\tank\\enemy\\normaltank\\1\\D.png");
	getimage(ordinary_1_S, "resource\\image\\tank\\enemy\\normaltank\\1\\S.png");
	getimage(ordinary_1_W, "resource\\image\\tank\\enemy\\normaltank\\1\\W.png");
	//////2
	getimage(ordinary_2_A, "resource\\image\\tank\\enemy\\normaltank\\2\\A.png");
	getimage(ordinary_2_D, "resource\\image\\tank\\enemy\\normaltank\\2\\D.png");
	getimage(ordinary_2_S, "resource\\image\\tank\\enemy\\normaltank\\2\\S.png");
	getimage(ordinary_2_W, "resource\\image\\tank\\enemy\\normaltank\\2\\W.png");
	//////3
	getimage(ordinary_3_A, "resource\\image\\tank\\enemy\\normaltank\\3\\A.png");
	getimage(ordinary_3_D, "resource\\image\\tank\\enemy\\normaltank\\3\\D.png");
	getimage(ordinary_3_S, "resource\\image\\tank\\enemy\\normaltank\\3\\S.png");
	getimage(ordinary_3_W, "resource\\image\\tank\\enemy\\normaltank\\3\\W.png");
	////bigtank
	////---------------------------
	//////1
	getimage(heavy_1_A, "resource\\image\\tank\\enemy\\bigtank\\1\\A.png");
	getimage(heavy_1_D, "resource\\image\\tank\\enemy\\bigtank\\1\\D.png");
	getimage(heavy_1_S, "resource\\image\\tank\\enemy\\bigtank\\1\\S.png");
	getimage(heavy_1_W, "resource\\image\\tank\\enemy\\bigtank\\1\\W.png");
	//////2
	getimage(heavy_2_A, "resource\\image\\tank\\enemy\\bigtank\\2\\A.png");
	getimage(heavy_2_D, "resource\\image\\tank\\enemy\\bigtank\\2\\D.png");
	getimage(heavy_2_S, "resource\\image\\tank\\enemy\\bigtank\\2\\S.png");
	getimage(heavy_2_W, "resource\\image\\tank\\enemy\\bigtank\\2\\W.png");
	//////3
	getimage(heavy_3_A, "resource\\image\\tank\\enemy\\bigtank\\3\\A.png");
	getimage(heavy_3_D, "resource\\image\\tank\\enemy\\bigtank\\3\\D.png");
	getimage(heavy_3_S, "resource\\image\\tank\\enemy\\bigtank\\3\\S.png");
	getimage(heavy_3_W, "resource\\image\\tank\\enemy\\bigtank\\3\\W.png");

	////player
	////-----------------------------
	//////player1
	getimage(player_1_A, "resource\\image\\tank\\player\\player1\\A.png");
	getimage(player_1_D, "resource\\image\\tank\\player\\player1\\D.png");
	getimage(player_1_S, "resource\\image\\tank\\player\\player1\\S.png");
	getimage(player_1_W, "resource\\image\\tank\\player\\player1\\W.png");
	//////player2
	getimage(player_2_A, "resource\\image\\tank\\player\\player2\\A.png");
	getimage(player_2_D, "resource\\image\\tank\\player\\player2\\D.png");
	getimage(player_2_S, "resource\\image\\tank\\player\\player2\\S.png");
	getimage(player_2_W, "resource\\image\\tank\\player\\player2\\W.png");

	////bullet
	////----------------------------
	//////enemy
	getimage(E_missile, "resource\\image\\tank\\bullet\\enemy\\missile.png");
	//////player
	getimage(P_missile, "resource\\image\\tank\\bullet\\player\\missile.png");
}

Picture::~Picture()
{
	//画布
	delimage(canvas);

	//boom
	//----------------------------
	delimage(explode_1);
	delimage(explode_2);
	delimage(explode_3);
	delimage(explode_4);
	delimage(explode_5);
	delimage(explode_6);
	delimage(explode_7);
	delimage(explode_8);

	//props
	//-----------------------------
	delimage(bomb);
	delimage(life);
	delimage(shield);
	delimage(star);
	delimage(timer);

	//map
	//-----------------------------
	////20X20
	delimage(wall_steel_2);
	delimage(wall_stone_2);
	delimage(grass_2);
	delimage(water_2);

	////40X40
	delimage(wall_steel_4);
	delimage(wall_stone_4);
	delimage(destory);
	delimage(grass_4);
	delimage(water_4);
	delimage(home);
	delimage(enemyborn);
	delimage(player1born);
	delimage(player2born);
	delimage(d_clean);
	delimage(d_delete);
	delimage(d_return);
	delimage(d_save);

	////map_view
	//////PVE
	delimage(map_PVE_1);
	delimage(map_PVE_2);
	delimage(map_PVE_3);
	delimage(map_PVE_4);
	delimage(map_PVE_5);
	delimage(map_PVE_6);
	delimage(map_PVE_7);
	delimage(map_PVE_8);
	delimage(map_PVE_9);
	delimage(map_PVE_10);
	delimage(map_PVE_11);
	delimage(map_PVE_12);
	delimage(map_PVE_13);
	delimage(map_PVE_14);
	delimage(map_PVE_15);
	delimage(map_PVE_16);
	delimage(map_PVE_17);
	delimage(map_PVE_18);
	delimage(map_PVE_19);
	delimage(map_PVE_20);

	//////PVP
	delimage(map_PVP_1);
	delimage(map_PVP_2);
	delimage(map_PVP_3);
	delimage(map_PVP_4);
	delimage(map_PVP_5);

	delimage(map_lock);

	//screen
	//-----------------------------
	delimage(over);

	delimage(selects);
	delimage(solo_selects);
	delimage(design_selects);
	delimage(duet_main_selects);

	delimage(title);
	delimage(end);
	delimage(BattleCity);
	delimage(selecttank);
	delimage(copyright);

	delimage(instruction_solo);
	delimage(instruction_duet);

	//tank
	//-----------------------------
	////born
	delimage(born_1);
	delimage(born_2);
	delimage(born_3);
	delimage(born_4);

	////enemy
	////---------------------------
	////normaltank
	////---------------------------
	//////1
	delimage(ordinary_1_A);
	delimage(ordinary_1_D);
	delimage(ordinary_1_S);
	delimage(ordinary_1_W);
	//////2
	delimage(ordinary_2_A);
	delimage(ordinary_2_D);
	delimage(ordinary_2_S);
	delimage(ordinary_2_W);
	//////3
	delimage(ordinary_3_A);
	delimage(ordinary_3_D);
	delimage(ordinary_3_S);
	delimage(ordinary_3_W);
	////bigtank
	////---------------------------
	//////1
	delimage(heavy_1_A);
	delimage(heavy_1_D);
	delimage(heavy_1_S);
	delimage(heavy_1_W);
	//////2
	delimage(heavy_2_A);
	delimage(heavy_2_D);
	delimage(heavy_2_S);
	delimage(heavy_2_W);
	//////3
	delimage(heavy_3_A);
	delimage(heavy_3_D);
	delimage(heavy_3_S);
	delimage(heavy_3_W);

	////player
	////-----------------------------
	//////player1
	delimage(player_1_A);
	delimage(player_1_D);
	delimage(player_1_S);
	delimage(player_1_W);
	//////player2
	delimage(player_2_A);
	delimage(player_2_D);
	delimage(player_2_S);
	delimage(player_2_W);

	////bullet
	////----------------------------
	//////enemy
	delimage(E_missile);
	//////player
	delimage(P_missile);
}

void Picture::clear()
{
	cleardevice();
	cleardevice(canvas);
	settarget(canvas);
}

void Picture::rend()
{
	settarget(NULL);
	putimage(0, 0, canvas);
}
