= 文字列処理ツール

== less と cat

=== cat -- 1つ以上のファイルを標準出力にダンプします。

//emlist{
[root@localhost ~]# cat /etc/resolv.conf 
# Generated by NetworkManager
nameserver 192.168.1.1
//}


=== less -- ファイルや標準入力をページ単位で表示します。

  ページを表示させたあとのコマンド
    
     *  /text ... 「text」を検索
     *  n または N ...次 または 前のマッチにジャンプ
     *  v ... テクストエディタでファイルを開く    
 

===[column] 標準入力と標準出力について

== head と tail

=== head --- ファイル先頭の10行を表示

  * オプション   -n : 表示する行数を変更します。

=== tail --- ファイルの最後の10行を表示します

  * オプション   -n : 表示する行数を変更します。
  * オプション   -f ファイルに追加される内容を「追跡」する

== grep 
