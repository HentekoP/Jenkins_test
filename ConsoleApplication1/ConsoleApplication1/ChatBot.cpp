#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main() {
	const char* classes[] = {
		"こんにちは","おはようございます","こんばんは","お早う",
		"おやすみ","お疲れ様です","ごきげんよう","いらっしゃいませ",
		"お久しぶりです","初めまして","ようこそ","お元気ですか",
		"ご無沙汰しています","ご機嫌いかがですか",
		"お誕生日おめでとうございます","おめでとうございます",
		"失礼します","お邪魔します","お先に失礼します",
		"またお会いしましょう","お礼を申し上げます",
		"どうもありがとうございます","すみません","ごめんなさい",
		"お大事に","お幸せをお祈りしています",
		"お楽しみください","おやすみなさい","また明日",
		"そうだね","本当に？","それは驚いた","どういう意味？",
		"なるほどね","うん、分かる","すごいね","まさか！",
		"そうかもね","それはいい考えだと思う",
		"その通りだと思う","そういうことか",
		"それはちょっと違うと思うけど","それはちょっとどうかな",
		"確かにそうかもしれないね","私もそう思う",
		"それはちょっと違うと思うな","でも、それってどうなの？",
		"そうだよね","ちょっと待って、何を言っているの？",
		"そう言われるとなるほどね","そういう意味で言ったの？",
		"それはちょっと興味深いね","私も同じ考えだよ",
		"こんにちは！元気にしていますよ。最近は何か面白いことでもありましたか？","今日の天気はどうかな？","美味しそう","行きたいな","でも、時間がないな","ちょっと待ってて","絶対に無理だよ","そんなこと言わずに","あっ、忘れ物した","大丈夫？","すごく疲れた","何かおかしいな","楽しみにしてたんだ","やったー！","もう少し頑張ろう","いつか行ってみたい場所があるんだ","本当にありがとう","そろそろ行こうか","何を話そうかな","今日は何するつもり？","そう言われてもなぁ","うん、わかった","あ、雨降ってきた","それって本当に必要？","今度は私が払うよ","気にしないで大丈夫","また会おうね","お疲れさまでした"
		,"ありがとうね","そうかもしれないね","それは大変だったね","もう少し詳しく教えてくれる？","どこに行くの？","何が好きなの？","大好きだよ","嫌いじゃないけど、好きでもないかな","楽しみにしてるよ","明日は忙しいんだ","どうしたんだろう？","そんなこと言わなくてもいいのに","本当にそれでいいの？","今度こそは成功させたいんだ","早く帰りたいな","何か手伝おうか？","一緒に行こうよ","もうちょっと考えてみようか","それってどういう意味？","ありがとう、助かったよ","おやすみなさい","また後で話そうね","いいね、それ","それはちょっと違うかな",
		"今日は何の予定があるの？","どうしてそう思うの？","とても美味しそうだね","そうだね、同感だよ","それは驚きだね","あなたの意見を聞かせてくれてありがとう","何か手伝おうか？","これで問題は解決したね","少し待ってくれる？","それは素晴らしいニュースだね","うーん、ちょっと考えてみようかな","あなたのことを考えると心配になるよ","今日の天気はどうかな？","本当に？信じられないよ","気をつけてね","明日はどこに行くの？","ちょっと待って、聞き取れなかったよ","どうしてそう思うのか、説明してくれる？","それが問題だよね","今度は私がおごるよ","いつか一緒に旅行に行きたいな","もう少し詳しく教えてくれる？","何か聞きたいことがあるの？","それはとても興味深い話だね","また話そうね",

	};
	int n = sizeof(classes) / sizeof(classes[0]);

	// ランダムシードを設定する
	srand((unsigned int)time(NULL));

	char input[256];
	printf("ChatBotですよろしくお願いします！ネットワーク楽しいぜ!!\n");
	while (1) {
		
		printf("'|' を入力するとプログラムを終了します: ");
		fgets(input, sizeof(input), stdin);// ユーザーからの入力を待ち受ける
		int random_index = rand() % n;
		printf("%s\n", classes[random_index]);

		
		

		// 入力が '|' だった場合はループを抜ける
		if (strcmp(input, "|\n") == 0) {
			
			break;
		}
	}

	return 0;
}