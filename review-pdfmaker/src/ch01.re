= Linux コマンドサンプル 

== 本文について


//list[list][Linuxコマンドサンプル]{
 $date -F
 $ ls foo
//}


２行以上以上空いていても１行空いているのと同様に処理します。

=== 見出し

「=」「==」「===」の後に一文字空白をあけると見出しになります。


====[column] コラムについて

見出しの先頭に「[column]」と書くと、そこはコラムになります。

== 箇条書き

番号のない箇条書きは「*」を使います。前後に空白を入れて下さい。

 * 1つ目
 * 2つ目
 * 3つ目

番号つきの箇条書きには、「1.」「2.」などと書きます。
数字の値は実際には無視され、連番が振られます。

 1. 1つ目
 2. 2つ目
 3. 3つ目

== ソースコードなどのリスト

リストには「//list」ブロックや「//emlist」ブロックを使います。

//list[list][リストのサンプル]{
int main(int argc, char **argv) {
  puts("OK");
  return 0;
}
//}

文中にリストを書くには「//emlist」になります。

//emlist{
def main
  puts "ok"
end
//}

== 画像

画像は「//image」ブロックを使います。

//image[imgsample][画像サンプル]{
//}


より詳しくは、
@<href>{https://github.com/kmuto/review/blob/master/doc/format.rdoc}
を御覧ください。
