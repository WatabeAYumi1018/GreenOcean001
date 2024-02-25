2D DXlib

「Green Ocean」

～概要～

・言語:C++

・制作期間:2か月

・制作人数:1人（本人）

・ジャンル:シミュレーションゲーム

～今回の作品制作の意図～

考えたものを形にしてみる

知っている事だけでなく、知らないことにも挑戦してみる

～ゲームの説明～

三人のキャラクターを操作して、敵キャラを倒していく戦略性の高いゲームです。

それぞれ進めるマス数には限度があり、キャラクターによって動けるマスの種類なども様々です。

敵キャラを倒しながらポイントを稼ぎ、ボスに勝利してください。

武器による相性が攻略のカギですが、敢えて苦手な武器で挑むことで点数を多く稼げます。

得点によってエンディングにも変化が生まれるので、高得点を目指して攻略してみましょう。

～力を入れているポイント～

ただの三すくみでは戦略性が薄れるため、スコアを導入してゲームの幅、かけひきの楽しさを見出しました

～実装上の苦労したところ～

①時間ではなくフレームという概念でイラストを動かしていくのは、今までにないはじめての経験でした。

　毎フレームの処理を防ぐための多数のフラグが混雑し、想定しない挙動を引き起こすことも多く、

 ゲーム作りがいかに時間がかかるものであるかを実感しました。

②キャラクターの移動範囲に変化をつけるため、幅優先探索と再帰処理に取り組みました。

　内容が難しく、エラーが起きていてもその原因が分からないといったことも多かったですが、

　例えば幅優先探索について知るためにネットや書籍、先輩から情報を得るなど向き合うことで、

 なぜエラーが起きてしまうのか、その原因をひとつずつ探ることが出来ました。

 そういったゲーム作りの難しさと楽しさを実装過程で一番感じました。

～制作全体において苦労したところ～

　情報収集と、知らない知識を落とし込んでいく工程が難しく、同時に楽しさもありました。

　今回、既存の知識だけでは完成が難しいと判断し、幅優先探索や再帰処理、ベクターによる管理などを先輩から教わっています。

　こういった、情報の収集方法、自分の知識として落とし込むための環境づくりをすることの重要性も実感しました。

～今作を制作した後に直面した課題点～

元々構造体を知っていたため、クラスを扱う機会が得られなかったことは大きな課題点です。

今後はクラスを用いたオブジェクト指向での制作が基盤となるため、まずはクラスの扱い方に慣れるところからはじめたいと思います。

～今後の展望～

クラスやポインタ、そしてオブジェクト指向など、Ｃ＋＋の根幹と言える技法を用いて、

より効率的に作ることを目標としています。

今回はシミュレーション作品ということであまり操作感には触れられなかったので、次作ではアクションゲームに挑戦したいです。

～コードについて～

今回の主旨として、まずは完成させることが第一だったため、コードは組み込み型となっています。

また、クラスについて習う前に制作をはじめたため、データは基本的に構造体で管理しています。

次作ではクラスとオブジェクト指向、そしてポインタ操作をしっかりと用いて、より本格的な制作に取り組みたいです。
