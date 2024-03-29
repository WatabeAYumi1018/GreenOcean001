#pragma once

//概念定義-----------------------------------------------

//キャラクターのデータ二次元配列（マップチップとキャラチップを分けて考える）
extern int charaData[MAP_HEIGHT][MAP_WIDTH];

//味方敵概念
enum {
	TEAM_ALLY,
	TEAM_ENEMY,
	TEAM_MAX
};

//職業の種類
enum {
	JOB_SWORDMASTER, //剣士
	JOB_SNIPER, //弓
	JOB_MAGICIAN, //魔道
	JOB_BOSS, //長
	JOB_MAX
};

//ジョブの詳細データ
extern JOB jobData[];

//ジョブの名前、移動数定義
struct JOB {
	std::string job_name;
	int moveCells[CELL_MAX]; //移動に使うマス数(CELLの種類によって移動量が変わる)
};

//各キャラクターの情報
extern Character character[];

//キャラクターの各名前、パラメータ
struct Character {
	std::string name;
	int job;
	int hp;
	int maxHp;
	int attack;
	int defence;
	int speed;
	int hit;
	int move;
	int team;
	int x; //初期位置
	int y;
	bool done; //行動済み概念
};

//定数-----------------------------------------------

//キャラ総数
const int CHARACTER_MAX = 16;
const int CHARACTER_ALLAY_MAX = 3;

//変数-----------------------------------------------

//選択されたキャラクター
extern int g_selectedChara ;

//待機中敵キャラクター
extern int g_standbyChara ;

//画像ハンドル--------------------------------------

//アイコン画像ハンドル
extern int icon_sword;
extern int icon_magic;
extern int icon_snip ;
extern int icon_boss ;

//関数-----------------------------------------------

//charaData[][]定義
int getCharacter(int x, int y);

//キャラ座標を毎フレーム取得
void getCharaPosition();

//下画面情報描画
void characterMapInfo(int chara);

//下画面描画時の制御
void display();

//隣接しているキャラ全員の情報を格納していく
std::vector<int> getAdjacentCharacters(int ally);