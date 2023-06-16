#pragma once

//ゲームシーン
extern int g_gameScene_id;

//サウンド　タイトル
extern int g_bgmTitle_hdl;
//サウンド　マップ
extern int g_bgmMap_hdl;

extern int sound_se_hdl;

//ゲームシーン分け
enum {
	GAME_START,
	GAME_STORY,
	GAME_TUTORIAL,
	GAME_MAP,
	GAME_OVER,
	GAME_CLEAR
};

//文字の色
const int TEXT_COLOR_WHITE = -1;

//敵味方のターン分け
enum {
	TURN_ALLAY,
	TURN_ENEMY,
	TURN_MAX
};

//現在の状況が分かるようにフェーズ分け
enum {
	PHASE_SELECT_CHARACTER,
	PHASE_SET_MOVE_POSITION,
	PHASE_SELECT_ATTACK,
	PHASE_MAX
};

//敵のフェーズ
enum {
	PHASE_AI_SEARCH_CHARACTER,
	PHASE_AI_MOVE_CHARACTER,
	PHASE_AI_SELECT_ATTACK,
	PHASE_AI_NEXT_ENEMY
};

//フェーズ変数を作成
extern int g_allyPhase ;

//味方フェーズ変数
extern int g_phaseAlly;

//敵フェーズ変数
extern int g_phaseEnemy;

//カーソルフラグ
extern bool g_flagCursor ;

//エンター押しフラグ
extern bool g_flagEnter ;

//スペース押しフラグ
extern bool g_flagEnemy;

//バトル進行中か否かの判定フラグ
extern int g_CanAttackMove;

//現在敵何人目か（初期値はインデックスの３）
extern int currentEnemyNumber;

//ターン変数
extern int g_turnMove ;

//ターン切り替えフラグ
extern bool g_flagTurnAlly;

//現在の敵番号
extern int currentEnemyNumber;

//ゲームスタート
extern bool g_flagGameStart;

//ゲームオーバー画面
extern int g_gameOver ;

//ゲームクリア画面
extern int g_gameClear;

//スコア変数
extern int g_score;

//タイトル文字
extern int g_title;

//エンターボタン
extern int g_bottonEnter;
//カーソルボタン
extern int g_bottonCursor;
//タブボタン
extern int g_bottonTab;
//スペースボタン
extern int g_bottonSpace;
//シフトボタン
extern int g_bottonShift;

//----------------------------

//----------------------------
void phaseAllyMove(float delta_time);

void phaseEnemyMove(float delta_time, int enemyNumber);

void enemyAttack(float delta_time, int ally, int enemy);

void gameStart();
void gameMain( float delta_time );
void gameEnd();
