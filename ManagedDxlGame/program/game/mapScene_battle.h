#pragma once

//定数-------------------------------------------------
// 
//エフェクトサイズ
const int EFFECT_SIZE = 120;	

//スピード判定定数
const int SPEED_DIFFERENCE = 5;

//画像ハンドル-----------------------------------------

//戦闘中の画面
extern int g_battleGround ;

//戦闘中のパラ表示
extern int g_battle_hp[1][35];
extern int g_battle_attack[1][42];
extern int g_battle_hit[1][25];

//戦闘中の攻撃エフェクト
extern int g_battle_effect_sword[1][10];
extern int g_battle_effect_snip[1][10];
extern int g_battle_effect_magic[1][10];
extern int g_battle_effect_leader[1][10];

//フラグ-----------------------------

//戦闘アニメーションの生存フラグ
extern bool g_flagBattleAnime ;

//HP減算フラグ
extern bool g_flagBattleHp ;

//関数-------------------------------------------------

//攻撃可能かどうか判定
bool checkCanAllyBattle(int attack, int defence);

//戦闘下画面のグラフィック描画
void battleGraph();

//戦闘中の情報描画(攻撃/防御)
void battleInfo(int attack, int defence);

//開始時のHP描画
void battleHpDraw(int attack, int defence);

//戦闘画面のキャラアニメ
void battleCharaGraph(float delta_time, int attack, int defence);

//戦闘エフェクトアニメ
void battleEffectGraph(float delta_time, int chara);

//三すくみの関係
int ThreeRelation(int attack, int defence);

//命中計算処理
int battleHit(int attack, int defence);

//バトル全般まとめ(命中率変動による攻撃の変化)
void battleHitRandom(float delta_time, int attack, int defence);

//戦闘計算処理
int battleDamage(int attack, int defence);

//戦闘によるダメージ変化の流れ
void battleHpMove(float delta_time, int attack, int defence);

//ゲームオーバーフラグ処理
bool battleLost();

//スコア変動処理
void scoreMove(int attack, int defence);

//戦闘処理終了
void allyBattleExit(int chara);

//戦闘終了処理（総まとめ）
void battleExit(int attack, int defence);

//バトル関数
void battle(float delta_time, int attack, int defence);

//味方戦闘中ボタン描画
void leafBottonDrawAllyBattle(float delta_time);

//バトル中のSE
void seBattle(int chara);

//バトルinのse再生
void playSeBattle();