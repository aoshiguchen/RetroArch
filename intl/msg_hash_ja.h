#if defined(_MSC_VER) && !defined(_XBOX) && (_MSC_VER >= 1500 && _MSC_VER < 1900)
#if (_MSC_VER >= 1700)
/* https://support.microsoft.com/en-us/kb/980263 */
#pragma execution_character_set("utf-8")
#endif
#pragma warning(disable:4566)
#endif

/* Top-Level Menu */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MAIN_MENU,
   "メインメニュー"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SETTINGS_TAB,
   "設定"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_FAVORITES_TAB,
   "お気に入り"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_HISTORY_TAB,
   "履歴"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_IMAGES_TAB,
   "画像"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MUSIC_TAB,
   "音楽"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_TAB,
   "動画"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_TAB,
   "ネットプレイ"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_EXPLORE_TAB,
   "エクスプローラー"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONTENTLESS_CORES_TAB,
   "コンテンツレスコア"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ADD_TAB,
   "コンテンツをインポート"
   )

/* Main Menu */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONTENT_SETTINGS,
   "クイックメニュー"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CONTENT_SETTINGS,
   "関連するすべてのゲーム内設定にすばやくアクセスします。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_LIST,
   "コアをロード"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CORE_LIST,
   "使用するコアを選択します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_CORE_LIST,
   "libretro コア実装を参照します。ブラウザがどこから開始するかは、コアディレクトリのパスに依存します。空白の場合、ルートから開始します。\nコアディレクトリがディレクトリの場合、メニューはそのディレクトリをトップフォルダとして使用します。 コアディレクトリがフルパスの場合、ファイルがあるフォルダから開始します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LOAD_CONTENT_LIST,
   "コンテンツをロード"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_LOAD_CONTENT_LIST,
   "起動するコンテンツを選択します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_LOAD_CONTENT_LIST,
   "コンテンツを参照します。コンテンツを読み込むには、使用する「コア」とコンテンツファイルが必要です。\nメニューがコンテンツを参照し始める場所を制御するには、「ファイルブラウザディレクトリ」を設定します。\nブラウザは「コアのロード」で最後に設定したコアの拡張子をフィルタリングし、コンテンツが読み込まれたときにそのコアを使用します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LOAD_DISC,
   "ディスクをロード"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_LOAD_DISC,
   "物理メディアディスクを読み込みます. まず, ディスクで使用するコア('コアをロード')を選択します."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DUMP_DISC,
   "ディスクをダンプ"
   )
MSG_HASH( /* FIXME Is a specific image format used? Is it determined automatically? User choice? */
   MENU_ENUM_SUBLABEL_DUMP_DISC,
   "物理メディア(ディスク)を内部ストレージにダンプします. イメージファイルとして保存されます."
   )
#ifdef HAVE_LAKKA
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_EJECT_DISC,
   "ディスクの取り出し"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_EJECT_DISC,
   "物理 CD/DVD ドライブからディスクを取り出します。"
   )
#endif
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLISTS_TAB,
   "プレイリスト"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_PLAYLISTS_TAB,
   "データベースに一致するスキャンされたコンテンツがここに表示されます。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ADD_CONTENT_LIST,
   "コンテンツをインポート"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_ADD_CONTENT_LIST,
   "コンテンツをスキャンしてプレイリストを作成、更新します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SHOW_WIMP,
   "デスクトップメニューを表示"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SHOW_WIMP,
   "従来のデスクトップメニューを開きます。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_DISABLE_KIOSK_MODE,
   "キオスクモードを無効にする (再起動が必要)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_DISABLE_KIOSK_MODE,
   "構成に関係するすべての設定を表示します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ONLINE_UPDATER,
   "オンラインアップデータ"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_ONLINE_UPDATER,
   "RetroArch用のアドオン, コンポーネント, コンテンツをダウンロードします."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY,
   "ネットプレイ"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NETPLAY,
   "ネットプレイセッションに参加またはホストします。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SETTINGS,
   "設定"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SETTINGS,
   "プログラムを構成します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INFORMATION_LIST,
   "情報"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INFORMATION_LIST_LIST,
   "システム情報を表示します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONFIGURATIONS_LIST,
   "構成ファイル"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CONFIGURATIONS_LIST,
   "構成ファイルの管理と作成を行います。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_HELP_LIST,
   "ヘルプ"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_HELP_LIST,
   "RetroArch の基本的な使い方についてのヘルプを表示します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RESTART_RETROARCH,
   "再起動"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_RESTART_RETROARCH,
   "RetroArch を再起動します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QUIT_RETROARCH,
   "終了"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_QUIT_RETROARCH,
   "RetroArch を終了します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_QUIT_RETROARCH,
   "RetroArch を終了します。任意のハードな方法でプログラムを殺す(SIGKILLなど)。 設定を保存せずに RetroArch を終了させます。Unix ライクでは SIGINT/SIGTERM はクリーンな初期化を可能にします。"
   )

/* Main Menu > Load Core */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DOWNLOAD_CORE,
   "コアをダウンロード..."
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_DOWNLOAD_CORE,
   "オンラインアップデータからコアをダウンロードしてインストールします。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SIDELOAD_CORE_LIST,
   "コアのインストールまたは復元"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SIDELOAD_CORE_LIST,
   "「ダウンロード」ディレクトリからコアをインストールまたは復元します。"
   )
MSG_HASH( /* FIXME Maybe add a description? */
   MENU_ENUM_LABEL_VALUE_START_VIDEO_PROCESSOR,
   "ビデオプロセッサをスタート"
   )
MSG_HASH( /* FIXME Maybe add a description? */
   MENU_ENUM_LABEL_VALUE_START_NET_RETROPAD,
   "リモートレトロパッドをスタート"
   )

/* Main Menu > Load Content */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_FAVORITES,
   "開始ディレクトリ"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DOWNLOADED_FILE_DETECT_CORE_LIST,
   "ダウンロード"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OPEN_ARCHIVE,
   "アーカイブを閲覧"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LOAD_ARCHIVE,
   "アーカイブをロード"
   )

/* Main Menu > Load Content > Playlists */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_GOTO_FAVORITES,
   "お気に入り"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_GOTO_FAVORITES,
   "[お気に入り] に追加されたコンテンツはここに表示されます。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_GOTO_MUSIC,
   "音楽"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_GOTO_MUSIC,
   "以前に再生された音楽がここに表示されます。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_GOTO_IMAGES,
   "画像"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_GOTO_IMAGES,
   "以前に表示された画像がここに表示されます。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_GOTO_VIDEO,
   "動画"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_GOTO_VIDEO,
   "以前に再生された動画がここに表示されます。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_GOTO_EXPLORE,
   "エクスプローラー"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_GOTO_EXPLORE,
   "カテゴリ検索インターフェイスを介してデータベースに一致するすべてのコンテンツを参照します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_GOTO_CONTENTLESS_CORES,
   "コンテンツレスコア"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_GOTO_CONTENTLESS_CORES,
   "コンテンツをロードすることなく動作するインストール済みのコアがここに表示されます。"
   )

/* Main Menu > Online Updater */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_UPDATER_LIST,
   "コアダウンローダー"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_UPDATE_INSTALLED_CORES,
   "インストール済みのコアを更新"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_UPDATE_INSTALLED_CORES,
   "インストール済みのすべてのコアを利用可能な最新バージョンに更新します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SWITCH_INSTALLED_CORES_PFD,
   "コアを Google Play ストアバージョンに切り替え"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SWITCH_INSTALLED_CORES_PFD,
   "すべてのレガシーおよび手動でインストールされたコアを、Google Play ストアで利用可能な最新バージョンに置き換えます。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_THUMBNAILS_UPDATER_LIST,
   "サムネイルアップデータ"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_THUMBNAILS_UPDATER_LIST,
   "選択したシステムの完全なサムネイルパッケージをダウンロードします。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PL_THUMBNAILS_UPDATER_LIST,
   "プレイリストサムネイルアップデータ"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_PL_THUMBNAILS_UPDATER_LIST,
   "選択したプレイリストのエントリに対応するサムネイルをダウンロードします。 "
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DOWNLOAD_CORE_CONTENT,
   "コンテンツダウンローダー"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_DOWNLOAD_CORE_CONTENT,
   "選択したコアの無料コンテンツをダウンロードします。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DOWNLOAD_CORE_SYSTEM_FILES,
   "コアシステムファイルダウンローダー"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_DOWNLOAD_CORE_SYSTEM_FILES,
   "コアの正しい/最適な動作に必要な補助システムファイルをダウンロードします。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_UPDATE_CORE_INFO_FILES,
   "コアの情報ファイルを更新"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_UPDATE_ASSETS,
   "アセットを更新"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_UPDATE_AUTOCONFIG_PROFILES,
   "コントローラープロファイルを更新"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_UPDATE_CHEATS,
   "チートを更新"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_UPDATE_DATABASES,
   "データベースを更新"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_UPDATE_OVERLAYS,
   "オーバーレイを更新"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_UPDATE_GLSL_SHADERS,
   "GLSL シェーダーを更新"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_UPDATE_CG_SHADERS,
   "Cg シェーダーを更新"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_UPDATE_SLANG_SHADERS,
   "Slang シェーダーを更新"
   )

/* Main Menu > Information */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_INFORMATION,
   "コア情報"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CORE_INFORMATION,
   "アプリケーション/コアに関する情報を表示します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DISC_INFORMATION,
   "ディスク情報"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_DISC_INFORMATION,
   "挿入されたディスクに関する情報を表示します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETWORK_INFORMATION,
   "ネットワーク情報"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NETWORK_INFORMATION,
   "ネットワークインターフェースと関連する IP アドレスを表示します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFORMATION,
   "システム情報"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SYSTEM_INFORMATION,
   "デバイス固有の情報を表示します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DATABASE_MANAGER,
   "データベースマネージャー"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_DATABASE_MANAGER,
   "データベースを表示します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CURSOR_MANAGER,
   "カーソルマネージャー"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CURSOR_MANAGER,
   "以前の検索を表示します."
   )

/* Main Menu > Information > Core Information */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_INFO_CORE_NAME,
   "コアの名前"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_INFO_CORE_LABEL,
   "コアのラベル"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_INFO_CORE_VERSION,
   "コアのバージョン"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_INFO_SYSTEM_NAME,
   "システムの名前"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_INFO_SYSTEM_MANUFACTURER,
   "システムの製造元"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_INFO_CATEGORIES,
   "カテゴリー"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_INFO_AUTHORS,
   "作者"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_INFO_PERMISSIONS,
   "許可"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_INFO_LICENSES,
   "ライセンス"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_INFO_SUPPORTED_EXTENSIONS,
   "対応する拡張子"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_INFO_REQUIRED_HW_API,
   "必要なグラフィック API"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_INFO_SAVESTATE_SUPPORT_LEVEL,
   "ステートセーブサポート"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_INFO_SAVESTATE_DISABLED,
   "なし"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_INFO_SAVESTATE_BASIC,
   "基本 (セーブ/ロード)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_INFO_SAVESTATE_SERIALIZED,
   "シリアル化 (セーブ/ロード、巻き戻し)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_INFO_SAVESTATE_DETERMINISTIC,
   "確定的 (セーブ/ロード、巻き戻し、実行前進、Netplay)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_INFO_FIRMWARE,
   "ファームウェア"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MISSING_REQUIRED,
   "見つかりません, 必須:"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MISSING_OPTIONAL,
   "見つかりません, オプション:"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PRESENT_REQUIRED,
   "使用可能, 必須:"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PRESENT_OPTIONAL,
   "使用可能, オプション:"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_LOCK,
   "インストール済みコアをロック"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CORE_LOCK,
   "現在インストールされているコアの更新を防止します. コンテンツが特定のコアバージョン(例：Arcade ROM セット)を必要とする場合, 望ましくない更新を避けるために使用されることがあります. "
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_SET_STANDALONE_EXEMPT,
   "[コンテンツレスコア] メニューから除外"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CORE_SET_STANDALONE_EXEMPT,
   "このコアが「コンテンツレスコア」タブ/メニューに表示されないようにします。表示モードが「カスタム」に設定されている場合にのみ適用されます。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_DELETE,
   "コアを削除"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CORE_DELETE,
   "コアをハードディスクから削除します."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_CREATE_BACKUP,
   "コアをバックアップ"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CORE_CREATE_BACKUP,
   "現在インストールされているコアのアーカイブバックアップを作成します. "
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_RESTORE_BACKUP_LIST,
   "バックアップから復元"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CORE_RESTORE_BACKUP_LIST,
   "アーカイブされたバックアップのリストから以前のバージョンのコアをインストールします. "
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_DELETE_BACKUP_LIST,
   "バックアップを削除"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CORE_DELETE_BACKUP_LIST,
   "アーカイブされたバックアップのリストからファイルを削除します. "
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_BACKUP_MODE_AUTO,
   "[自動]"
   )

/* Main Menu > Information > System Information */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_BUILD_DATE,
   "ビルド日付"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_RETROARCH_VERSION,
   "RetroArch バージョン"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_GIT_VERSION,
   "Git バージョン"
   )
MSG_HASH( /* FIXME Should be MENU_LABEL_VALUE */
   MSG_COMPILER,
   "コンパイラ"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_CPU_MODEL,
   "CPU モデル"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_CPU_FEATURES,
   "CPU 機能"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CPU_ARCHITECTURE,
   "CPU アーキテクチャ"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CPU_CORES,
   "CPU コア数"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_FRONTEND_IDENTIFIER,
   "フロントエンド識別名"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_FRONTEND_OS,
   "フロントエンド OS"
   )
MSG_HASH( /* FIXME Maybe add a description? */
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_RETRORATING_LEVEL,
   "RetroRating レベル"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_POWER_SOURCE,
   "パワーソース"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_VIDEO_CONTEXT_DRIVER,
   "ビデオのコンテクストドライバ"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_DISPLAY_METRIC_MM_WIDTH,
   "ディスプレイの横幅 (mm)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_DISPLAY_METRIC_MM_HEIGHT,
   "ディスプレイの縦幅 (mm)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_DISPLAY_METRIC_DPI,
   "ディスプレイ DPI"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_LIBRETRODB_SUPPORT,
   "LibretroDB 対応"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_OVERLAY_SUPPORT,
   "オーバーレイ対応"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_COMMAND_IFACE_SUPPORT,
   "コマンドインターフェース対応"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_NETWORK_COMMAND_IFACE_SUPPORT,
   "ネットワークコマンドインターフェース対応"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_NETWORK_REMOTE_SUPPORT,
   "ネットワークコントローラー対応"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_COCOA_SUPPORT,
   "Cocoa 対応"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_RPNG_SUPPORT,
   "PNG 対応 (RPNG)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_RJPEG_SUPPORT,
   "JPEG 対応 (RJPEG)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_RBMP_SUPPORT,
   "BMP対応 (RBMP)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_RTGA_SUPPORT,
   "TGA 対応 (RTGA)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_SDL_SUPPORT,
   "SDL1.2 対応"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_SDL2_SUPPORT,
   "SDL2 対応"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_VULKAN_SUPPORT,
   "Vulkan 対応"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_METAL_SUPPORT,
   "Metal 対応"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_OPENGL_SUPPORT,
   "OpenGL 対応"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_OPENGLES_SUPPORT,
   "OpenGL ES 対応"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_THREADING_SUPPORT,
   "スレッド対応"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_KMS_SUPPORT,
   "KMS/EGL 対応"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_UDEV_SUPPORT,
   "udev 対応"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_OPENVG_SUPPORT,
   "OpenVG 対応"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_EGL_SUPPORT,
   "EGL 対応"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_X11_SUPPORT,
   "X11 対応"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_WAYLAND_SUPPORT,
   "Wayland 対応"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_XVIDEO_SUPPORT,
   "XVideo 対応"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_ALSA_SUPPORT,
   "ALSA 対応"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_OSS_SUPPORT,
   "OSS 対応"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_OPENAL_SUPPORT,
   "OpenAL 対応"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_OPENSL_SUPPORT,
   "OpenSL 対応"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_RSOUND_SUPPORT,
   "RSound 対応"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_ROARAUDIO_SUPPORT,
   "RoarAudio 対応"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_JACK_SUPPORT,
   "JACK 対応"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_PULSEAUDIO_SUPPORT,
   "PulseAudio 対応"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_COREAUDIO_SUPPORT,
   "CoreAudio 対応"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_COREAUDIO3_SUPPORT,
   "CoreAudio V3 対応"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_DSOUND_SUPPORT,
   "DirectSound 対応"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_WASAPI_SUPPORT,
   "WASAPI 対応"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_XAUDIO2_SUPPORT,
   "XAudio2 対応"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_ZLIB_SUPPORT,
   "zlib 対応"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_7ZIP_SUPPORT,
   "7zip 対応"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_DYLIB_SUPPORT,
   "ダイナミックライブラリ対応"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_DYNAMIC_SUPPORT,
   "libretro ライブラリの実行時動的ロード"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_CG_SUPPORT,
   "Cg 対応"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_GLSL_SUPPORT,
   "GLSL 対応"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_HLSL_SUPPORT,
   "HLSL 対応"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_SDL_IMAGE_SUPPORT,
   "SDLイメージ対応"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_FFMPEG_SUPPORT,
   "FFmpeg 対応"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_MPV_SUPPORT,
   "mpv 対応"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_CORETEXT_SUPPORT,
   "CoreText 対応"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_FREETYPE_SUPPORT,
   "FreeType 対応"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_STB_TRUETYPE_SUPPORT,
   "STB TrueType 対応"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_NETPLAY_SUPPORT,
   "ネットプレイ (ピアツーピア) 対応"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_V4L2_SUPPORT,
   "Video4Linux2 対応"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_LIBUSB_SUPPORT,
   "ｌibusb 対応"
   )

/* Main Menu > Information > Database Manager */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DATABASE_SELECTION,
   "データベース選択"
   )

/* Main Menu > Information > Database Manager > Information */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RDB_ENTRY_NAME,
   "名前"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RDB_ENTRY_DESCRIPTION,
   "説明"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RDB_ENTRY_GENRE,
   "ジャンル"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RDB_ENTRY_ACHIEVEMENTS,
   "実績"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RDB_ENTRY_CATEGORY,
   "カテゴリー"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RDB_ENTRY_LANGUAGE,
   "言語"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RDB_ENTRY_REGION,
   "地域"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RDB_ENTRY_CONSOLE_EXCLUSIVE,
   "コンソール専用"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RDB_ENTRY_PLATFORM_EXCLUSIVE,
   "プラットフォーム専用"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RDB_ENTRY_SCORE,
   "スコア"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RDB_ENTRY_MEDIA,
   "メディア"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RDB_ENTRY_CONTROLS,
   "コントロール"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RDB_ENTRY_ARTSTYLE,
   "アートスタイル"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RDB_ENTRY_GAMEPLAY,
   "ゲームプレイ"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RDB_ENTRY_NARRATIVE,
   "ナラティブ"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RDB_ENTRY_PACING,
   "ペース"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RDB_ENTRY_PERSPECTIVE,
   "視点"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RDB_ENTRY_SETTING,
   "設定"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RDB_ENTRY_VISUAL,
   "ビジュアル"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RDB_ENTRY_VEHICULAR,
   "乗り物"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RDB_ENTRY_PUBLISHER,
   "パブリッシャー"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RDB_ENTRY_DEVELOPER,
   "開発元"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RDB_ENTRY_ORIGIN,
   "国"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RDB_ENTRY_FRANCHISE,
   "フランチャイズ"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RDB_ENTRY_TGDB_RATING,
   "TGDB 評価"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RDB_ENTRY_FAMITSU_MAGAZINE_RATING,
   "ファミ通の評価"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RDB_ENTRY_EDGE_MAGAZINE_REVIEW,
   "Edge Magazine レビュー"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RDB_ENTRY_EDGE_MAGAZINE_RATING,
   "Edge Magazine 評価"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RDB_ENTRY_EDGE_MAGAZINE_ISSUE,
   "Edge Magazine 発行"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RDB_ENTRY_RELEASE_MONTH,
   "発売月"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RDB_ENTRY_RELEASE_YEAR,
   "発売年"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RDB_ENTRY_BBFC_RATING,
   "BBFC 評価"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RDB_ENTRY_ESRB_RATING,
   "ESRB 評価"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RDB_ENTRY_ELSPA_RATING,
   "ELSPA 評価"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RDB_ENTRY_PEGI_RATING,
   "PEGI 評価"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RDB_ENTRY_ENHANCEMENT_HW,
   "拡張ハードウェア"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RDB_ENTRY_CERO_RATING,
   "CERO 評価"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RDB_ENTRY_SERIAL,
   "シリアル"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RDB_ENTRY_ANALOG,
   "アナログ対応"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RDB_ENTRY_RUMBLE,
   "振動対応"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RDB_ENTRY_COOP,
   "協力プレイ対応"
   )

/* Main Menu > Configuration File */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONFIGURATIONS,
   "構成をロード"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CONFIGURATIONS,
   "既存の構成をロードし、現在の値を置き換えます。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SAVE_CURRENT_CONFIG,
   "現在の構成を保存"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SAVE_CURRENT_CONFIG,
   "現在の構成ファイルを上書きします。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SAVE_NEW_CONFIG,
   "新しい構成を保存"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SAVE_NEW_CONFIG,
   "現在の構成を別のファイルに保存します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RESET_TO_DEFAULT_CONFIG,
   "デフォルトに戻す"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_RESET_TO_DEFAULT_CONFIG,
   "現在の構成をデフォルトの値に戻します。"
   )

/* Main Menu > Help */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_HELP_CONTROLS,
   "基本メニューコントロール"
   )

/* Main Menu > Help > Basic Menu Controls */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_BASIC_MENU_CONTROLS_SCROLL_UP,
   "上にスクロール"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_BASIC_MENU_CONTROLS_SCROLL_DOWN,
   "下にスクロール"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_BASIC_MENU_CONTROLS_CONFIRM,
   "確認"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_BASIC_MENU_CONTROLS_INFO,
   "情報"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_BASIC_MENU_CONTROLS_START,
   "スタート"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_BASIC_MENU_CONTROLS_TOGGLE_MENU,
   "メニューに切り替え"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_BASIC_MENU_CONTROLS_QUIT,
   "終了"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_BASIC_MENU_CONTROLS_TOGGLE_KEYBOARD,
   "キーボードに切り替え"
   )

/* Settings */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DRIVER_SETTINGS,
   "ドライバ"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_DRIVER_SETTINGS,
   "システムのドライバを変更します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_SETTINGS,
   "ビデオ"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_SETTINGS,
   "ビデオ出力の設定を変更します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AUDIO_SETTINGS,
   "オーディオ"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_AUDIO_SETTINGS,
   "オーディオ入力/出力の設定を変更します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_SETTINGS,
   "入力"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_SETTINGS,
   "コントローラー、キーボード、マウスの設定を変更します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LATENCY_SETTINGS,
   "遅延"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_LATENCY_SETTINGS,
   "ビデオ、オーディオ、入力の遅延に関連する設定を変更します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_SETTINGS,
   "コア"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CORE_SETTINGS,
   "コアの設定を変更します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONFIGURATION_SETTINGS,
   "構成"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CONFIGURATION_SETTINGS,
   "構成ファイルのデフォルト設定を変更します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SAVING_SETTINGS,
   "保存"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SAVING_SETTINGS,
   "保存の設定を変更します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CLOUD_SYNC_SETTINGS,
   "クラウド同期"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CLOUD_SYNC_SETTINGS,
   "クラウド同期の設定を変更します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CLOUD_SYNC_ENABLE,
   "クラウド同期を有効にする"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CLOUD_SYNC_ENABLE,
   "クラウドストレージプロバイダに設定や SRAM、ステートセーブ/ロードの同期を試みます。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CLOUD_SYNC_DESTRUCTIVE,
   "破壊的なクラウド同期"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CLOUD_SYNC_DESTRUCTIVE,
   "無効にすると、ファイルは上書きまたは削除される前にバックアップフォルダに移動されます。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CLOUD_SYNC_DRIVER,
   "クラウド同期のバックエンド"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CLOUD_SYNC_DRIVER,
   "使用するクラウドストレージネットワークプロトコルです。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CLOUD_SYNC_URL,
   "クラウドストレージ URL"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CLOUD_SYNC_URL,
   "クラウドストレージサービスへの API エントリーポイントの URL です。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CLOUD_SYNC_USERNAME,
   "ユーザー名"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CLOUD_SYNC_USERNAME,
   "クラウドストレージアカウントのユーザー名です。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CLOUD_SYNC_PASSWORD,
   "パスワード"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CLOUD_SYNC_PASSWORD,
   "クラウドストレージアカウントのパスワードです。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LOGGING_SETTINGS,
   "ログ"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_LOGGING_SETTINGS,
   "ログに関連する設定を変更します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_FILE_BROWSER_SETTINGS,
   "ファイルブラウザ"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_FILE_BROWSER_SETTINGS,
   "ファイルブラウザの設定を変更します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_FILE_BROWSER_CONFIG,
   "構成ファイルです。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_FILE_BROWSER_COMPRESSED_ARCHIVE,
   "圧縮されたアーカイブファイルです。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_FILE_BROWSER_RECORD_CONFIG,
   "録画に関連する構成ファイルです。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_FILE_BROWSER_CURSOR,
   "データベースのカーソル表."
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_FILE_CONFIG,
   "構成ファイルです。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_FILE_BROWSER_SHADER_PRESET,
   "シェーダープリセットファイルです。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_FILE_BROWSER_SHADER,
   "シェーダーファイルです。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_FILE_BROWSER_REMAP,
   "リマップコントロールファイルです。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_FILE_BROWSER_CHEAT,
   "チートファイルです。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_FILE_BROWSER_OVERLAY,
   "オーバーレイファイルです。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_FILE_BROWSER_RDB,
   "データベースファイルです。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_FILE_BROWSER_FONT,
   "TrueType フォント ファイルです。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_FILE_BROWSER_PLAIN_FILE,
   "絹（普通）"
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_FILE_BROWSER_MOVIE_OPEN,
   "ビデオ. ビデオプレーヤーでこのファイルを開くには、それを選択します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_FILE_BROWSER_MUSIC_OPEN,
   "ビデオ. ビデオプレーヤーでこのファイルを開くには、それを選択します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_FILE_BROWSER_IMAGE,
   "画像ファイルです。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_FILE_BROWSER_IMAGE_OPEN_WITH_VIEWER,
   "画像です。画像ビューアでこのファイルを開くには、これを選択します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_FILE_BROWSER_CORE_SELECT_FROM_COLLECTION,
   "Libretro コアです。これを選択すると、このコアがゲームに関連付けられます。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_FILE_BROWSER_CORE,
   "Libretro コアです。このコアを RetroArch にロードさせるにはこのファイルを選択してください。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_FILE_BROWSER_DIRECTORY,
   "ディレクトリ。選択してこのディレクトリを開きます。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_FRAME_THROTTLE_SETTINGS,
   "フレーム制御"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_FRAME_THROTTLE_SETTINGS,
   "巻き戻し、早送り、スローモーションの設定を変更します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RECORDING_SETTINGS,
   "録画"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_RECORDING_SETTINGS,
   "録画の設定を変更します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ONSCREEN_DISPLAY_SETTINGS,
   "OSD ディスプレイ"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_ONSCREEN_DISPLAY_SETTINGS,
   "ディスプレイオーバーレイ、キーボードオーバーレイ、OSD 通知の設定を変更します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_USER_INTERFACE_SETTINGS,
   "ユーザーインタフェース"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_USER_INTERFACE_SETTINGS,
   "ユーザーインタフェースの設定を変更します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AI_SERVICE_SETTINGS,
   "AI サービス"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_AI_SERVICE_SETTINGS,
   "AI サービス (翻訳/テキスト読み上げ/その他) の設定を変更します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ACCESSIBILITY_SETTINGS,
   "アクセシビリティ"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_ACCESSIBILITY_SETTINGS,
   "アクセシビリティナレーターの設定を変更します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_POWER_MANAGEMENT_SETTINGS,
   "電源管理"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_POWER_MANAGEMENT_SETTINGS,
   "電源管理の設定を変更します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RETRO_ACHIEVEMENTS_SETTINGS,
   "実績"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_RETRO_ACHIEVEMENTS_SETTINGS,
   "実績の設定を変更します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETWORK_SETTINGS,
   "ネットワーク"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NETWORK_SETTINGS,
   "サーバーとネットワークの設定を変更します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_SETTINGS,
   "プレイリスト"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_PLAYLIST_SETTINGS,
   "プレイリストの設定を変更します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_USER_SETTINGS,
   "ユーザー"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_USER_SETTINGS,
   "アカウント、ユーザー名、言語の設定を変更します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DIRECTORY_SETTINGS,
   "ディレクトリ"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_DIRECTORY_SETTINGS,
   "システムの動作に関係するファイルが格納されるデフォルトディレクトリを変更します。"
   )

/* Core option category placeholders for icons */
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_HACKS_SETTINGS,
   "ハック"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MAPPING_SETTINGS,
   "マッピング"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MEDIA_SETTINGS,
   "メディア"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PERFORMANCE_SETTINGS,
   "パフォーマンス"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SOUND_SETTINGS,
   "サウンド"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SPECS_SETTINGS,
   "仕様"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_STORAGE_SETTINGS,
   "ストレージ"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_SETTINGS,
   "システム"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TIMING_SETTINGS,
   "タイミング"
   )

#ifdef HAVE_MIST
MSG_HASH(
   MENU_ENUM_SUBLABEL_STEAM_SETTINGS,
   "Steam に関連する設定を変更します。"
   )
#endif

/* Settings > Drivers */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_DRIVER,
   "入力"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_DRIVER,
   "使用する入力ドライバです. 一部のビデオドライバは強制的に異なる入力ドライバを使用します. "
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_INPUT_DRIVER_LINUXRAW,
   "Linuxraw入力ドライバにはアクティブなTTYが必要です。 キーボードイベントは TTY から直接読み取られ、簡単になりますが、udevほど柔軟ではありません。 マウスなどは全くサポートされていません。このドライバーは古いジョイスティックAPI(/dev/input/js*) を使用しています。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_INPUT_DRIVER_NO_DETAILS,
   "使用する入力ドライバです. 一部のビデオドライバは強制的に異なる入力ドライバを使用します."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_JOYPAD_DRIVER,
   "コントローラー"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_JOYPAD_DRIVER,
   "使用するコントローラーのドライバです。 "
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_JOYPAD_DRIVER_DINPUT,
   "DirectInput コントローラードライバです。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_JOYPAD_DRIVER_SDL,
   "SDL ライブラリを基にしたコントローラーのドライバです。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_JOYPAD_DRIVER_XINPUT,
   "XInput コントローラードライバです。主に XBox コントローラー 用です。"
   )

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_DRIVER,
   "ビデオ"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_DRIVER,
   "使用するビデオドライバです。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_VIDEO_DRIVER_GL1,
   "OpenGL 1.x ドライバです。最小要求バージョン: OpenGL 1.1.1。シェーダーに対応していません。可能であれば、後の OpenGL ドライバを使用してください。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_VIDEO_DRIVER_GL,
   "OpenGL 2.x ドライバです。ソフトウェアレンダリングされたコアに加えて、libretro GL コアを使用することができます。 最小要求バージョン: OpenGL 2.0 または OpenGLES 2.0。 GLSL シェーダー形式に対応します。 可能であれば、代わりに glcore ドライバを使用してください。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_VIDEO_DRIVER_GL_CORE,
   "OpenGL 3.x ドライバです。ソフトウェアレンダリングされたコアに加えて、libretro GL コアを使用することができます。 最小要求バージョン: OpenGL 3.2 または OpenGLES 3.0+。 Slang シェーダー形式をサポートします。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_VIDEO_DRIVER_VULKAN,
   "Vulkan ドライバです。ソフトウェアレンダリングされたコアに加えて、libretro Vulkan コアを使用することができます。 最小要求バージョン: Vulkan 1.0。HDR および Slang シェーダーに対応します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_VIDEO_DRIVER_SDL1,
   "SDL 1.2 ソフトウェアレンダリングドライバです。パフォーマンスは最適ではありません。最後の手段としてのみ使用することを検討してください。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_VIDEO_DRIVER_SDL2,
   "SDL 2 ソフトウェアレンダリングドライバです。ソフトウェアレンダリングされた libretro コア実装のパフォーマンスは、使用しているプラットフォームの SDL の実装に依存します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_VIDEO_DRIVER_METAL,
   "Apple プラットフォーム用の Metal ドライバです。Slang シェーダー形式に対応します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_VIDEO_DRIVER_D3D8,
   "シェーダーに対応しない Direct 3D 8 ドライバです。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_VIDEO_DRIVER_D3D9_CG,
   "古い Cg シェーダー形式に対応する Direct3D 9 ドライバです。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_VIDEO_DRIVER_D3D9_HLSL,
   "HLSL シェーダー形式に対応する Direct3D 9 ドライバです。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_VIDEO_DRIVER_D3D10,
   "Slang シェーダー形式に対応する Direct3D 10 ドライバです。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_VIDEO_DRIVER_D3D11,
   "HDR および Slang シェーダー形式に対応する Direct3D 11 ドライバです。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_VIDEO_DRIVER_D3D12,
   "HDR および Slang シェーダー形式に対応する Direct3D 12 ドライバです。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_VIDEO_DRIVER_DISPMANX,
   "DispmanX ドライバです。Raspberry Pi 0..3 の Videocoer IV GPU で DispmanX API を使用します。オーバーレイやシェーダーに対応していません。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_VIDEO_DRIVER_CACA,
   "LibCACA ドライバです。グラフィックの代わりにキャラクター出力を生成します。実用的な使用には推奨されません。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_VIDEO_DRIVER_EXYNOS,
   "ブリット操作にSamsung Exynos SoC の G2D ブロックを使用する低レベルの Exynos ビデオドライバー。レンダリングされたコアのパフォーマンスは最適でなければなりません。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_VIDEO_DRIVER_DRM,
   "Plain DRM ビデオドライバ。GPUオーバーレイを使用したハードウェアスケーリングにlibdrmを使用した低レベルビデオドライバです。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_VIDEO_DRIVER_SUNXI,
   "Allwinner SoCsのG2Dブロックを使用する、低レベルのSunxiビデオドライバ。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_VIDEO_DRIVER_WIIU,
   "Wii U ドライバです。Slang シェーダーに対応します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_VIDEO_DRIVER_SWITCH,
   "Switch ドライバです。GLSL シェーダー形式に対応します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_VIDEO_DRIVER_VG,
   "OpenVG ドライバです。OpenVG ハードウェアアクセラレーション 2D ベクトルグラフィックス API を使用します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_VIDEO_DRIVER_GDI,
   "GDI ドライバです。旧式の Windows インターフェースを使用します。推奨されません。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_VIDEO_DRIVER_NO_DETAILS,
   "現在のビデオのドライバです。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AUDIO_DRIVER,
   "オーディオ"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_AUDIO_DRIVER,
   "使用するオーディオのドライバです。 "
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_AUDIO_DRIVER_ALSA,
   "デフォルトの ALSA ドライバです。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_AUDIO_DRIVER_AL,
   "OpenAL のドライバです。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_AUDIO_DRIVER_SL,
   "OpenSL のドライバです。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_AUDIO_DRIVER_DSOUND,
   "DirectSound のドライバーです。DirectSound は主に Windows 95 から Windows XP で使用されます。"
   )
#ifdef HAVE_MICROPHONE
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MICROPHONE_DRIVER,
   "マイク"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MICROPHONE_DRIVER,
   "使用するマイクのドライバです。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MICROPHONE_RESAMPLER_DRIVER,
   "マイクリサンプラー"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MICROPHONE_RESAMPLER_DRIVER,
   "使用するマイクリサンプラーのドライバです。"
   )
#endif
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AUDIO_RESAMPLER_DRIVER,
   "オーディオリサンプラー"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_AUDIO_RESAMPLER_DRIVER,
   "使用するオーディオリサンプラーのドライバです。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CAMERA_DRIVER,
   "カメラ"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CAMERA_DRIVER,
   "使用するカメラのドライバです。"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_BLUETOOTH_DRIVER,
   "使用する Bluetooth ドライバです。 "
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_WIFI_DRIVER,
   "Wi-Fiのドライバ"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_WIFI_DRIVER,
   "使用する Wi-Fi のドライバです。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LOCATION_DRIVER,
   "位置情報"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_LOCATION_DRIVER,
   "使用する位置情報のドライバです。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_DRIVER,
   "メニュー"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_DRIVER,
   "使用するメニューのドライバです。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_MENU_DRIVER_XMB,
   "XMB は、第 7 世代のコンソールメニューに似た RetroArch GUI です。Ozone と同じ機能に対応します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_MENU_DRIVER_OZONE,
   "Ozone は、ほとんとのプラットフォームで RetroArch のデフォルトの GUI です。ゲームコントローラーでのナビゲーションに最適化されています。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_MENU_DRIVER_RGUI,
   "RGUI は RetroArch のシンプルなビルトイン GUI です。メニュードライバの中で最も要求パフォーマンスが低く、低解像度の画面で使用することができます。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_MENU_DRIVER_MATERIALUI,
   "モバイルデバイスでは、RetroArch はモバイル UI、Material UI をデフォルトで使用します。このインターフェースは、マウス/トラックボールのようなポインタデバイスやタッチスクリーンを中心に設計されています。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RECORD_DRIVER,
   "録画"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_RECORD_DRIVER,
   "使用する録画のドライバです。"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MIDI_DRIVER,
   "使用する MIDI のドライバです。"
   )

/* Settings > Video */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CRT_SWITCHRES_SETTINGS,
   "CRT 解像度切り替え"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CRT_SWITCHRES_SETTINGS,
   "CRT ディスプレイで利用するためのネイティブな低解像度信号を出力します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_OUTPUT_SETTINGS,
   "出力"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_OUTPUT_SETTINGS,
   "ビデオ出力の設定を変更します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_FULLSCREEN_MODE_SETTINGS,
   "フルスクリーンモード"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_FULLSCREEN_MODE_SETTINGS,
   "フルスクリーンモードの設定を変更します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_WINDOWED_MODE_SETTINGS,
   "ウィンドウモード"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_WINDOWED_MODE_SETTINGS,
   "ウィンドウモードの設定を変更します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_SCALING_SETTINGS,
   "スケーリング"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_SCALING_SETTINGS,
   "ビデオスケーリングの設定を変更します。"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_HDR_SETTINGS,
   "HDR の設定を変更します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_SYNCHRONIZATION_SETTINGS,
   "同期"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_SYNCHRONIZATION_SETTINGS,
   "ビデオの同期設定を変更します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SUSPEND_SCREENSAVER_ENABLE,
   "スクリーンセーバーを一時停止"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SUSPEND_SCREENSAVER_ENABLE,
   "システムのスクリーンセーバーの起動を抑制します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_THREADED,
   "ビデオをスレッド化"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_THREADED,
   "遅延やビデオのつっかえを犠牲にして, パフォーマンスを改良します. フルスピードを得られない場合のみ使用してください."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_BLACK_FRAME_INSERTION,
   "黒フレーム挿入"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_BLACK_FRAME_INSERTION,
   "フレーム間に黒いフレームを挿入します. 高リフレッシュレート画面を使用している場合, ゴーストの防止に役立ちます."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_GPU_SCREENSHOT,
   "GPU スクリーンショット"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_GPU_SCREENSHOT,
   "利用可能な場合, GPUシェード出力のスクリーンショットを使用します."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_SMOOTH,
   "バイリニアフィルタ"
   )
#if defined(DINGUX)
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_DINGUX_IPU_FILTER_TYPE,
   "画像の補間"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_DINGUX_IPU_FILTER_TYPE,
   "内部IPUでコンテンツをスケーリングするときの画像補間方法を指定します. CPU駆動のビデオフィルタを使用する場合は, 'Bicubic'または'Bilinear'を推奨します. このオプションはパフォーマンスに影響を与えません."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_DINGUX_IPU_FILTER_BILINEAR,
   "バイリニア"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_DINGUX_IPU_FILTER_NEAREST,
   "ニアレストネイバー"
   )
#if defined(RS90) || defined(MIYOO)
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_DINGUX_RS90_SOFTFILTER_TYPE,
   "画像の補間"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_DINGUX_RS90_SOFTFILTER_TYPE,
   "整数スケールが無効になっている場合の補完方法を指定します。ニアレストネイバーはパフォーマンスへの影響が少なくなります。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_DINGUX_RS90_SOFTFILTER_POINT,
   "ニアレストネイバー"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_DINGUX_RS90_SOFTFILTER_BRESENHAM_HORZ,
   "セミリニア"
   )
#endif
#endif
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_SHADER_DELAY,
   "シェーダーの自動ロード遅延 (ms)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_SHADER_DELAY,
   "シェーダの自動読み込みを遅延させます(ミリ秒単位). 画面取り込みソフトウェアを使用するときに画像の不具合を回避できます."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_FILTER,
   "ビデオフィルター"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_FILTER,
   "CPUベースのビデオフィルタを適用します. パフォーマンスに大きく影響します. 一部のビデオフィルタは16ビットまたは32ビットカラーを使用するコアでのみ動作します."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_FILTER_REMOVE,
   "ビデオフィルターを削除"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_FILTER_REMOVE,
   "使用中のCPU駆動ビデオフィルタを終了します."
   )

/* Settings > Video > CRT SwitchRes */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CRT_SWITCH_RESOLUTION,
   "CRT 解像度切り替え"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CRT_SWITCH_RESOLUTION,
   "CRTディスプレイ専用です. コア/ゲームの正確な解像度とリフレッシュレートを使用するよう試みます."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CRT_SWITCH_RESOLUTION_SUPER,
   "CRT 超解像度"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CRT_SWITCH_RESOLUTION_SUPER,
   "ネイティブと超ワイドの解像度を切り替えます."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CRT_SWITCH_X_AXIS_CENTERING,
   "X軸方向のセンタリング"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CRT_SWITCH_X_AXIS_CENTERING,
   "画像がディスプレイの中央に正しく配置されていない場合は, このオプションを使用してください."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CRT_SWITCH_PORCH_ADJUST,
   "ポーチの調整"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CRT_SWITCH_PORCH_ADJUST,
   "これらのオプションを循環させて, ポーチの設定を調整し, 画像サイズを変更します."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CRT_SWITCH_HIRES_MENU,
   "高解像度メニューを使用"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CRT_SWITCH_HIRES_MENU,
   "コンテンツが読み込まれていない場合は、高解像度メニューで使用するための高解像度モデルに切り替えます。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CRT_SWITCH_RESOLUTION_USE_CUSTOM_REFRESH_RATE,
   "カスタムリフレッシュレート"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CRT_SWITCH_RESOLUTION_USE_CUSTOM_REFRESH_RATE,
   "設定ファイルで定義されたカスタムリフレッシュレートを使用します."
   )

/* Settings > Video > Output */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_MONITOR_INDEX,
   "モニタの識別番号"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_MONITOR_INDEX,
   "使用する表示画面を選択します."
   )
#if defined (WIIU)
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_WIIU_PREFER_DRC,
   "Wii Uゲームパッドに最適化 (再起動が必要)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_WIIU_PREFER_DRC,
   "ビューポートとしてGamePadの正確な2倍のスケールを使用します。無効にするとテレビのネイティブ解像度で表示されます。"
   )
#endif
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_ROTATION,
   "ビデオの回転"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_ROTATION,
   "指定した角度で画面を強制的に回転させます. この回転はコアが指定する回転に追加されます."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SCREEN_ORIENTATION,
   "スクリーンの回転"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SCREEN_ORIENTATION,
   "オペレーティングシステムから画面の向きを指定した角度で回転させます."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_GPU_INDEX,
   "GPU インデックス"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_GPU_INDEX,
   "使用するグラフィックカードを選択します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_WINDOW_OFFSET_X,
   "画面水平オフセット"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_WINDOW_OFFSET_Y,
   "画面垂直方向オフセット"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_REFRESH_RATE,
   "リフレッシュレート"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_REFRESH_RATE,
   "スクリーンの垂直リフレッシュレートです. 適切なオーディオ入力レートを計算するために使用します. \n'ビデオをスレッド化'を有効にすると, この値は無視されます."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_REFRESH_RATE_AUTO,
   "推定リフレッシュレート"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_REFRESH_RATE_AUTO,
   "画面の正確な推定リフレッシュレート(Hz)です."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_REFRESH_RATE_POLLED,
   "モニタ検出のリフレッシュレートを使用"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_REFRESH_RATE_POLLED,
   "ディスプレイドライバによって提供されたリフレッシュレートです."
   )
#if defined(DINGUX) && defined(DINGUX_BETA)
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_DINGUX_REFRESH_RATE,
   "垂直リフレッシュレート"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_DINGUX_REFRESH_RATE,
   "ディスプレイの垂直リフレッシュレートを設定します. PALコンテンツを実行する場合, '50Hz'に設定すると動画がスムーズになります."
   )
#endif
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_FORCE_SRGB_DISABLE,
   "sRGB FBOを強制無効"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_FORCE_SRGB_DISABLE,
   "SRGB FBO対応を強制的に無効にします. 一部の Windows用Intel OpenGLドライバで発生する問題を回避します."
   )

/* Settings > Video > Fullscreen Mode */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_FULLSCREEN,
   "フルスクリーンモード"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_FULLSCREEN,
   "フルスクリーンで起動します. 実行中に変更できます. コマンドラインスイッチで上書きできます."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_WINDOWED_FULLSCREEN,
   "ウィンドウフルスクリーンモード"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_WINDOWED_FULLSCREEN,
   "全画面表示にフルスクリーンウィンドウを使用し, ディスプレイモードの切り替えが起こらないようにします."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_FULLSCREEN_X,
   "フルスクリーンの幅"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_FULLSCREEN_X,
   "フルスクリーンモードの幅を設定します. 設定しないとデスクトップの解像度を使用します."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_FULLSCREEN_Y,
   "フルスクリーンの高さ"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_FULLSCREEN_Y,
   "フルスクリーンモードの高さを設定します. 設定しないとデスクトップの解像度を使用します."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_FORCE_RESOLUTION,
   "UWP での強制解像度"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_FORCE_RESOLUTION,
   "解像度をフルスクリーンサイズに強制します。0に設定すると、3840 x 2160が使用されます。"
   )

/* Settings > Video > Windowed Mode */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_SCALE,
   "ウィンドウの拡大率"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_WINDOW_OPACITY,
   "ウィンドウの透明度"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_WINDOW_OPACITY,
   "ウィンドウの透明度を設定します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_WINDOW_SHOW_DECORATIONS,
   "ウィンドウ枠を表示"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_WINDOW_SHOW_DECORATIONS,
   "ウィンドウのタイトルバーと枠を表示します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_UI_MENUBAR_ENABLE,
   "メニューバーを表示"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_UI_MENUBAR_ENABLE,
   "ウィンドウのメニューバーを表示します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_WINDOW_SAVE_POSITION,
   "ウィンドウの位置とサイズを記憶"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_WINDOW_CUSTOM_SIZE_ENABLE,
   "カスタムウインドウサイズを使用"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_WINDOW_WIDTH,
   "ウィンドウの幅"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_WINDOW_WIDTH,
   "ウィンドウの幅を指定します."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_WINDOW_HEIGHT,
   "ウィンドウの高さ"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_WINDOW_HEIGHT,
   "ウィンドウの高さを指定します."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_WINDOW_AUTO_WIDTH_MAX,
   "最大ウインドウ幅"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_WINDOW_AUTO_HEIGHT_MAX,
   "最大ウインドウ高さ"
   )

/* Settings > Video > Scaling */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_SCALE_INTEGER,
   "整数スケール"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_SCALE_INTEGER,
   "ビデオの拡大率を整数倍に限定します. 基礎サイズはシステムが提供するジオメトリとアスペクト比に依存します. 'アスペクト比を強制'が指定されていない場合, 幅と高さはそれぞれ独立して整数倍で拡大します."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_SCALE_INTEGER_OVERSCALE,
   "整数スケールの拡張"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_SCALE_INTEGER_OVERSCALE,
   "整数スケールの拡大率を次の整数に引き上げます。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_ASPECT_RATIO_INDEX,
   "アスペクト比"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_ASPECT_RATIO_INDEX,
   "ディスプレイのアスペクト比を設定します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_ASPECT_RATIO,
   "Config アスペクト比"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_ASPECT_RATIO_CORE_PROVIDED,
   "コアの提供"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_ASPECT_RATIO_CUSTOM,
   "カスタム"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_ASPECT_RATIO_FULL,
   "フル"
   )
#if defined(DINGUX)
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_DINGUX_IPU_KEEP_ASPECT,
   "アスペクト比を維持する"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_DINGUX_IPU_KEEP_ASPECT,
   "内部IPU経由でコンテンツをスケーリングする際に, 1:1ピクセルのアスペクト比を維持します. 無効にすると, 画像はディスプレイ全体に拡大されます."
   )
#endif
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_VIEWPORT_CUSTOM_X,
   "カスタムアスペクト比 (X 位置)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_VIEWPORT_CUSTOM_X,
   "カスタム表示領域のX方向オフセット値です.\n'整数スケール'が有効の場合は無視されます."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_VIEWPORT_CUSTOM_Y,
   "カスタムアスペクト比 (Y 位置)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_VIEWPORT_CUSTOM_Y,
   "カスタム表示領域のY方向オフセット値です.\n'整数スケール'が有効の場合は無視されます."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_VIEWPORT_CUSTOM_WIDTH,
   "カスタムアスペクト比 (幅)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_VIEWPORT_CUSTOM_WIDTH,
   "カスタム表示領域の幅です. 'アスペクト比'に'Custom'を設定しているときに使用されます."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_VIEWPORT_CUSTOM_HEIGHT,
   "カスタムアスペクト比 (高さ)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_VIEWPORT_CUSTOM_HEIGHT,
   "カスタム表示領域の高さです. 'アスペクト比'に'Custom'を設定しているときに使用されます."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_CROP_OVERSCAN,
   "オーバースキャンをトリミング(再起動が必要)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_CROP_OVERSCAN,
   "画面端の数ピクセルを切り取ります. この部分はゴミが含まれていることもあり, 開発者が慣例的に空白にしています."
   )

/* Settings > Video > HDR */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_HDR_ENABLE,
   "HDR を有効にする"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_HDR_ENABLE,
   "ディスプレイが対応している場合, HDRを有効にします."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_HDR_MAX_NITS,
   "最大輝度"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_HDR_MAX_NITS,
   "ディスプレイの最大輝度(cd/m2) を設定します. ディスプレイの最大輝度についてはRTingsを参照してください."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_HDR_CONTRAST,
   "コントラスト"
   )

/* Settings > Video > Synchronization */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_VSYNC,
   "垂直同期 (VSync)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_VSYNC,
   "グラフィックカードから出力されるビデオと画面のリフレッシュレートを同期します(推奨)."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_SWAP_INTERVAL,
   "垂直同期のスワップ間隔"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_SWAP_INTERVAL_AUTO,
   "自動"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_ADAPTIVE_VSYNC,
   "適応型垂直同期"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_ADAPTIVE_VSYNC,
   "パフォーマンスが目標のリフレッシュレートを下回るまでは垂直同期が有効になります. パフォーマンスがリアルタイムを下回ったときのちらつきを最小限にでき, 効率もよくなります."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_FRAME_DELAY_AUTOMATIC,
   "自動"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_HARD_SYNC,
   "強制GPU同期"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_HARD_SYNC,
   "CPUとGPUを強制に同期します. 遅延が減る代わりに性能が低下します."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_HARD_SYNC_FRAMES,
   "強制GPU同期のフレーム数"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_HARD_SYNC_FRAMES,
   "'強制GPU同期'を有効にしているとき, CPUがGPUより先に実行できるフレーム数を設定します."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VRR_RUNLOOP_ENABLE,
   "正確なフレームレートと同期(G-Sync/FreeSync)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VRR_RUNLOOP_ENABLE,
   "コアの要求するタイミングから逸脱しません. 可変リフレッシュレート画面 (G-Sync, FreeSync, HDMI 3.1 VRR) に使用します."
   )

/* Settings > Audio */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AUDIO_OUTPUT_SETTINGS,
   "出力"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_AUDIO_OUTPUT_SETTINGS,
   "オーディオ出力の設定を変更します。"
   )
#ifdef HAVE_MICROPHONE
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MICROPHONE_SETTINGS,
   "マイク"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MICROPHONE_SETTINGS,
   "オーディオ入力の設定を変更します。"
   )
#endif
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AUDIO_RESAMPLER_SETTINGS,
   "リサンプラー"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_AUDIO_RESAMPLER_SETTINGS,
   "オーディオリサンプラーの設定を変更します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AUDIO_SYNCHRONIZATION_SETTINGS,
   "同期"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_AUDIO_SYNCHRONIZATION_SETTINGS,
   "オーディオの同期設定を変更します。"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MIDI_SETTINGS,
   "MIDI の設定を変更します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AUDIO_MIXER_SETTINGS,
   "ミキサー設定"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_AUDIO_MIXER_SETTINGS,
   "オーディオミキサーの設定を変更します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_SOUNDS,
   "メニュー音"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_SOUNDS,
   "メニューのサウンド設定を変更します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AUDIO_MUTE,
   "消音"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_AUDIO_MUTE,
   "オーディオを消音します."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AUDIO_MIXER_MUTE,
   "ミキサーを消音"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_AUDIO_MIXER_MUTE,
   "ミキサーオーディオを消音します."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AUDIO_FASTFORWARD_MUTE,
   "早送り時に消音"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_AUDIO_FASTFORWARD_MUTE,
   "早送りを使用するときに自動的にオーディオを消音します."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AUDIO_VOLUME,
   "音量 (dB)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_AUDIO_VOLUME,
   "オーディオの音量 (dB) です。0dB は通常の音量で、増幅されません。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_AUDIO_VOLUME,
   "オーディオ音量は dB で表されます。0 dB は通常の音量で、ゲインは適用されません。ゲインは、入力音量増加/減少でコンテンツ実行中にコントロールできます。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AUDIO_MIXER_VOLUME,
   "ミキサー音量 (dB)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_AUDIO_MIXER_VOLUME,
   "グローバルのミキサー音量(dB)です. 0dBは通常の音量で, 増幅されません."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AUDIO_DSP_PLUGIN,
   "DSP プラグイン"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_AUDIO_DSP_PLUGIN,
   "ドライバへの送信前に処理されるオーディオDSPプラグインです."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AUDIO_DSP_PLUGIN_REMOVE,
   "DSP プラグインを削除"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_AUDIO_DSP_PLUGIN_REMOVE,
   "使用中のDSP プラグインを終了します."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AUDIO_WASAPI_EXCLUSIVE_MODE,
   "WASAPI 排他モード"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_AUDIO_WASAPI_EXCLUSIVE_MODE,
   "WASAPI ドライバがオーディオデバイスの排他制御を行うことを許可します. 無効にすると, 代わりに共有モードが使用されます. "
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AUDIO_WASAPI_FLOAT_FORMAT,
   "WASAPI 浮動小数点方式"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_AUDIO_WASAPI_FLOAT_FORMAT,
   "オーディオデバイスでサポートされている場合は, WASAPI ドライバに浮動小数点形式を使用します. "
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AUDIO_WASAPI_SH_BUFFER_LENGTH,
   "WASAPI 共有バッファサイズ"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_AUDIO_WASAPI_SH_BUFFER_LENGTH,
   "共有モードでWASAPIドライバを使用するときの中間バッファ長 (フレーム単位). "
   )

/* Settings > Audio > Output */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AUDIO_ENABLE,
   "オーディオ"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_AUDIO_ENABLE,
   "オーディオ出力を有効にします。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AUDIO_DEVICE,
   "デバイス"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_AUDIO_DEVICE,
   "オーディオドライバが使用する標準オーディオデバイスを上書きします. この設定はドライバに依存します."
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_AUDIO_DEVICE,
   "オーディオドライバが使用する標準オーディオデバイスを上書きします. この設定はドライバに依存します."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AUDIO_LATENCY,
   "オーディオ遅延 (ms)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_AUDIO_LATENCY,
   "オーディオの遅延時間(ms)です. ドライバ対応に依存します."
   )

#ifdef HAVE_MICROPHONE
/* Settings > Audio > Input */
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MICROPHONE_ENABLE,
   "マイク"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MICROPHONE_DEVICE,
   "デバイス"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MICROPHONE_RESAMPLER_QUALITY,
   "リサンプラーの音質"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MICROPHONE_RESAMPLER_QUALITY,
   "オーディオ品質よりもパフォーマンス/遅延を優先する場合は値を小さく, パフォーマンス/遅延よりもオーディオ品質を優先する場合は値を大きくします."
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MICROPHONE_INPUT_RATE,
   "オーディオ入力のサンプリングレートは、コアが特定の値を要求しない場合に使用されます。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MICROPHONE_LATENCY,
   "オーディオ入力遅延 (ms)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MICROPHONE_WASAPI_EXCLUSIVE_MODE,
   "WASAPI 排他モード"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MICROPHONE_WASAPI_FLOAT_FORMAT,
   "WASAPI 浮動小数点方式"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MICROPHONE_WASAPI_SH_BUFFER_LENGTH,
   "WASAPI 共有バッファサイズ"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MICROPHONE_WASAPI_SH_BUFFER_LENGTH,
   "共有モードでWASAPIドライバを使用するときの中間バッファ長 (フレーム単位). "
   )
#endif

/* Settings > Audio > Resampler */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AUDIO_RESAMPLER_QUALITY,
   "リサンプラーの音質"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_AUDIO_RESAMPLER_QUALITY,
   "オーディオ品質よりもパフォーマンス/遅延を優先する場合は値を小さく, パフォーマンス/遅延よりもオーディオ品質を優先する場合は値を大きくします."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AUDIO_OUTPUT_RATE,
   "出力レート(Hz)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_AUDIO_OUTPUT_RATE,
   "オーディオ出力のサンプリングレートです。"
   )

/* Settings > Audio > Synchronization */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AUDIO_SYNC,
   "同期"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_AUDIO_SYNC,
   "オーディオを同期します(推奨)."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AUDIO_MAX_TIMING_SKEW,
   "タイミングスキューの最大値"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_AUDIO_MAX_TIMING_SKEW,
   "音声入力レートの最大変化量です. オーディオピッチの正確さを犠牲にしてタイミングを非常に大きく変更できるようにするには, これを増やすことをお勧めします. (例: NTSCディスプレイでPALコアを実行する場合)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AUDIO_RATE_CONTROL_DELTA,
   "動的レート制御"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_AUDIO_RATE_CONTROL_DELTA,
   "オーディオとビデオを同時に同期するときに, タイミングの不完全さを解消するのに役立ちます. 無効にすると, 適切な同期をとることがほぼ不可能になります."
   )

/* Settings > Audio > MIDI */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MIDI_INPUT,
   "入力"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MIDI_INPUT,
   "入力デバイスを選択します."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MIDI_OUTPUT,
   "出力"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MIDI_OUTPUT,
   "出力デバイスを選択します."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MIDI_VOLUME,
   "音量"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MIDI_VOLUME,
   "出力音量(%)を設定します."
   )

/* Settings > Audio > Mixer Settings > Mixer Stream */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MIXER_ACTION_PLAY,
   "再生"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MIXER_ACTION_PLAY,
   "オーディオストリームの再生を開始します. 再生が終わると, 現在のオーディオストリームはメモリから取り除かれます."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MIXER_ACTION_PLAY_LOOPED,
   "再生(ループ)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MIXER_ACTION_PLAY_LOOPED,
   "オーディオストリームの再生を開始します. 再生が終わると, トラックは最初から繰り返して再生されます."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MIXER_ACTION_PLAY_SEQUENTIAL,
   "再生(順番に)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MIXER_ACTION_PLAY_SEQUENTIAL,
   "オーディオストリームの再生を開始します. 再生が終わると, 順番に次のオーディオストリームに移り, それを繰り返します. アルバム再生モードとして便利です."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MIXER_ACTION_STOP,
   "一時停止"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MIXER_ACTION_STOP,
   "オーディオストリームの再生を停止しますが, メモリからは取り除かれません. '再生'を選択することで再生を開始できます."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MIXER_ACTION_REMOVE,
   "削除"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MIXER_ACTION_REMOVE,
   "オーディオストリームの再生を停止してメモリから完全に取り除きます."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MIXER_ACTION_VOLUME,
   "音量"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MIXER_ACTION_VOLUME,
   "オーディオストリームの音量を調整します。"
   )

/* Settings > Audio > Menu Sounds */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AUDIO_ENABLE_MENU,
   "メニューのオーディオを有効"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_AUDIO_ENABLE_MENU,
   "メニューのオーディオ出力を有効にします."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_SOUND_OK,
   "[OK] 音を有効にする"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_SOUND_CANCEL,
   "[キャンセル] 音を有効にする"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_SOUND_NOTICE,
   "[通知] 音を有効にする"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_SOUND_BGM,
   "[BGM] を有効にする"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_SOUND_SCROLL,
   "[スクロール] 音を有効にする"
   )

/* Settings > Input */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_MAX_USERS,
   "最大ユーザ数"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_MAX_USERS,
   "RetroArchで対応するユーザの最大数です."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_REMAP_BINDS_ENABLE,
   "このコアでコントロールをリマップ"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_REMAP_BINDS_ENABLE,
   "現在のコアに指定したリマップバインドで, 入力バインドを上書きします."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_AUTODETECT_ENABLE,
   "自動構成"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_AUTODETECT_ENABLE,
   "プラグアンドプレイ対応のプロファイルを持つコントローラを自動的に設定します."
   )
#if defined(HAVE_DINPUT) || defined(HAVE_WINRAWINPUT)
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_NOWINKEY_ENABLE,
   "Windows ホットキーを無効にする (再起動が必要)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_NOWINKEY_ENABLE,
   "Win-keyの組み合わせをアプリケーション内に保持します."
   )
#endif
#ifdef ANDROID
#endif
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_SENSORS_ENABLE,
   "外部センサ入力"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_SENSORS_ENABLE,
   "現在のハードウェアでサポートされている場合は, 加速度センサ, ジャイロスコープ, 照明センサからの入力を有効にします. いくつかのプラットフォームでは, パフォーマンス低下や消費電力増加の可能性があります."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_AUTO_MOUSE_GRAB,
   "ウィンドウ内にマウスカーソルを維持する"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_AUTO_MOUSE_GRAB,
   "アプリのフォーカス時にマウスをウィンドウから出ないようにします."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_AUTO_GAME_FOCUS,
   "'ゲームフォーカス'モードを自動で有効にする"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_AUTO_GAME_FOCUS,
   "コンテンツの起動/再開時に常に'ゲームフォーカス'モードを有効にします. 'Detect' に設定すると, 現在のコアがフロントエンドキーボードのコールバック機能を実装している場合にオプションが有効になります."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_AUTO_GAME_FOCUS_OFF,
   "オフ"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_AUTO_GAME_FOCUS_ON,
   "オン"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PAUSE_ON_DISCONNECT,
   "コントローラーの切断時にコンテンツを一時停止する"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_BUTTON_AXIS_THRESHOLD,
   "入力ボタン軸のしきい値"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_ANALOG_DEADZONE,
   "アナログ入力の遊び"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_ANALOG_SENSITIVITY,
   "アナログ入力の感度"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_BIND_TIMEOUT,
   "バインド設定時のタイムアウト"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_BIND_TIMEOUT,
   "バインド設定時に, 次のバインドに移るまでの待機秒数です."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_BIND_HOLD,
   "バインド設定時のホールド期間"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_BIND_HOLD,
   "バインド設定時に, バインドを確定するために要するホールド秒数です."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_TURBO_PERIOD,
   "ターボの期間"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_TURBO_PERIOD,
   "ターボボタンのオン/オフが切り替わる期間です (フレーム単位)."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_DUTY_CYCLE,
   "ターボデューティサイクル"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_DUTY_CYCLE,
   "ターボ期間中にボタンを押したままにしておくフレーム数です. この値がターボ期間と同じかそれ以上であれば, ボタンは離されず押したままになります."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_TURBO_MODE,
   "ターボモード"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_TURBO_MODE,
   "ターボモードの一般的な動作を選択します."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TURBO_MODE_CLASSIC,
   "クラシック"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_TURBO_DEFAULT_BUTTON,
   "ターボデフォルトボタン"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_TURBO_DEFAULT_BUTTON,
   "ターボモード「シングルボタン」のデフォルトアクティブボタン"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_TURBO_FIRE_SETTINGS,
   "ターボ動作"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_TURBO_FIRE_SETTINGS,
   "連射の設定を変更します。\n注意: 連射機能は、対応する「ポート X コントロール」メニューの入力デバイスに連射ボタンを割り当てる必要があります。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_HAPTIC_FEEDBACK_SETTINGS,
   "振動フィードバック"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_HAPTIC_FEEDBACK_SETTINGS,
   "振動フィードバックの設定を変更します."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_MENU_SETTINGS,
   "メニューコントロール"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_MENU_SETTINGS,
   "メニューコントロールの設定を変更します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_HOTKEY_BINDS,
   "ホットキー"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_HOTKEY_BINDS,
   "ゲームプレイ中にメニューを切り替えるなど、ホットキーの設定や割り当てを変更します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_USER_BINDS,
   "ポート %u コントロール"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_USER_REMAPS,
   "コア固有の入力割当を変更します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ANDROID_INPUT_DISCONNECT_WORKAROUND,
   "コントローラー切断対策 (Android)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QUIT_PRESS_TWICE,
   "終了時に確認"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_QUIT_PRESS_TWICE,
   "RetroArchを終了するのに, 終了ホットキーを2回押す必要があります."
   )

/* Settings > Input > Haptic Feedback/Vibration */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIBRATE_ON_KEYPRESS,
   "キー入力で振動"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ENABLE_DEVICE_VIBRATION,
   "デバイスの振動を有効にする (対応コア用)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_RUMBLE_GAIN,
   "振動の強さ"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_RUMBLE_GAIN,
   "振動の大きさを指定します."
   )

/* Settings > Input > Menu Controls */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_UNIFIED_MENU_CONTROLS,
   "メニューコントロールを統一"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_UNIFIED_MENU_CONTROLS,
   "メニューとゲームの両方に同じコントロールを使用します. キーボードに適用されます."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_DISABLE_INFO_BUTTON,
   "情報ボタンを無効にする"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_DISABLE_SEARCH_BUTTON,
   "検索ボタンを無効にする"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_INPUT_SWAP_OK_CANCEL,
   "OK/キャンセルボタン入れ替え"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_INPUT_SWAP_OK_CANCEL,
   "OK/キャンセルボタンの扱いを入れ替えます. 'オフ'はマルボタンをOKとする日本式配置, 'オン'はバツボタンをOKとする西洋式配置です."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_ALL_USERS_CONTROL_MENU,
   "全ユーザがメニュー操作可能"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_ALL_USERS_CONTROL_MENU,
   "任意のユーザがメニューを操作することを許可します. 無効にすると, ユーザ1のみが操作できます."
   )

/* Settings > Input > Hotkeys */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_ENABLE_HOTKEY,
   "ホットキー有効化"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_HOTKEY_BLOCK_DELAY,
   "ホットキー有効の遅延(フレーム数)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_MENU_ENUM_TOGGLE_GAMEPAD_COMBO,
   "メニュー切り替え用のコントローラーボタンの組み合わせです."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_MENU_TOGGLE,
   "メニューに切り替え"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_META_MENU_TOGGLE,
   "現在の表示をメニューと実行中コンテンツとで切り替えます."
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_QUIT_GAMEPAD_COMBO,
   "RetroArch を終了するためのコントローラーボタンの組み合わせです。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_QUIT_KEY,
   "終了"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_META_QUIT_KEY,
   "RetroArchを終了し, すべての保存データと設定ファイルをディスクに書き込みます."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_CLOSE_CONTENT_KEY,
   "閉じる"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_RESET,
   "コンテンツをリセット"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_META_RESET,
   "現在のコンテンツを最初から再起動します."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_FAST_FORWARD_KEY,
   "早送り (切り替え)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_META_FAST_FORWARD_KEY,
   "速度を早送りと通常で切り替えます."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_FAST_FORWARD_HOLD_KEY,
   "早送り (保持)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_META_FAST_FORWARD_HOLD_KEY,
   "押している間, 早送りを有効にします. キーを放すと, 通常の速度で実行されます."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_SLOWMOTION_KEY,
   "スローモーション (切り替え)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_META_SLOWMOTION_KEY,
   "速度をスローモーションと通常で切り替えます."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_SLOWMOTION_HOLD_KEY,
   "スローモーション (保持)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_META_SLOWMOTION_HOLD_KEY,
   "押している間, スローモーションを有効にします. キーを放すと, 通常の速度で実行されます."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_REWIND,
   "巻き戻し"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_PAUSE_TOGGLE,
   "一時停止"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_META_PAUSE_TOGGLE,
   "実行中コンテンツの一時停止/実行を切り替えます."
   )

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_MUTE,
   "音声をミュート"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_META_MUTE,
   "オーディオ出力のオン/オフを切り替えます."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_VOLUME_UP,
   "音量アップ"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_META_VOLUME_UP,
   "オーディオ出力の音量を上げます."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_VOLUME_DOWN,
   "音量ダウン"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_META_VOLUME_DOWN,
   "オーディオ出力の音量を下げます。"
   )

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_LOAD_STATE_KEY,
   "ステートロード"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_SAVE_STATE_KEY,
   "ステートセーブ"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_STATE_SLOT_PLUS,
   "次のステートセーブスロット"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_META_STATE_SLOT_PLUS,
   "現在選択中のステートスロットのインデックスをひとつ増やします."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_STATE_SLOT_MINUS,
   "前のステートセーブスロット"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_META_STATE_SLOT_MINUS,
   "現在選択中のステートスロットのインデックスをひとつ減らします."
   )

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_DISK_EJECT_TOGGLE,
   "ディスクの取り出し (切り替え)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_META_DISK_EJECT_TOGGLE,
   "仮想ディスクトレイが閉じられている場合, それを開き, ロードされたディスクを取り除きます. それ以外の場合は, 現在選択されているディスクを挿入してトレイを閉じます. "
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_DISK_NEXT,
   "次のディスク"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_DISK_PREV,
   "前のディスク"
   )

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_SHADER_NEXT,
   "次のシェーダ"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_META_SHADER_NEXT,
   "'ビデオシェーダ'ディレクトリのルートにある次のシェーダプリセットファイルをロードして適用します."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_SHADER_PREV,
   "前のシェーダ"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_META_SHADER_PREV,
   "'ビデオシェーダ'ディレクトリのルートにあるひとつ前のシェーダプリセットファイルをロードして適用します."
   )

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_CHEAT_TOGGLE,
   "チート (切り替え)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_META_CHEAT_TOGGLE,
   "現在選択中のチートのオン/オフを切り替えます."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_CHEAT_INDEX_PLUS,
   "次のチートインデックス"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_META_CHEAT_INDEX_PLUS,
   "現在選択中のチートのインデックスをひとつ増やします."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_CHEAT_INDEX_MINUS,
   "前のチートインデックス"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_META_CHEAT_INDEX_MINUS,
   "現在選択中のチートのインデックスをひとつ減らします."
   )

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_SCREENSHOT,
   "スクリーンショット"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_META_SCREENSHOT,
   "現在のコンテンツの画面をキャプチャします."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_RECORDING_TOGGLE,
   "録画 (切り替え)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_META_RECORDING_TOGGLE,
   "ローカルビデオファイルへの録画を開始/停止します."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_STREAMING_TOGGLE,
   "配信 (切り替え)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_META_STREAMING_TOGGLE,
   "オンライン動画プラットフォームへの配信を開始/停止します."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_GRAB_MOUSE_TOGGLE,
   "マウスを占有 (切り替え)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_META_GRAB_MOUSE_TOGGLE,
   "マウスを占有または開放します. 占有した場合, システムカーソルは非表示となり, RetroArchのディスプレイウィンドウ内に限定されます. それにより, 相対的なマウス入力が向上します."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_GAME_FOCUS_TOGGLE,
   "ゲームフォーカス (切り替え)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_FULLSCREEN_TOGGLE_KEY,
   "フルスクリーン (切り替え)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_META_FULLSCREEN_TOGGLE_KEY,
   "全画面表示モードとウィンドウ表示モードを切り替えます."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_UI_COMPANION_TOGGLE,
   "デスクトップメニュー (切り替え)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_META_UI_COMPANION_TOGGLE,
   "コンパニオンのWIMP(Windows, Icons, Menus, Pointer)デスクトップユーザインタフェースを開きます."
   )

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_RUNAHEAD_TOGGLE,
   "先行実行 (切り替え)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_META_RUNAHEAD_TOGGLE,
   "先行実行のオン/オフを切り替えます."
   )

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_FPS_TOGGLE,
   "FPS表示 (切り替え)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_META_FPS_TOGGLE,
   "'フレーム/秒'状態表示のオン/オフを切り替えます."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_OVERLAY_NEXT,
   "次のオーバーレイ"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_AI_SERVICE,
   "AIサービス"
   )

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_NETPLAY_HOST_TOGGLE,
   "ネットプレイのホスティング (切り替え)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_META_NETPLAY_HOST_TOGGLE,
   "ネットプレイホスティングのオン/オフを切り替えます."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_NETPLAY_GAME_WATCH,
   "ネットプレイの参加/視聴モード (切り替え)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_META_NETPLAY_GAME_WATCH,
   "現在のネットプレイのモードを'参加'と'視聴'で切り替えます."
   )

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_SEND_DEBUG_INFO,
   "デバッグ情報の送信"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_META_SEND_DEBUG_INFO,
   "解析のため, お使いのデバイスに関する診断情報とRetroArch設定をサーバに送信します."
   )

/* Settings > Input > Port # Controls */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_DEVICE_TYPE,
   "デバイスタイプ"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_ADC_TYPE,
   "アナログのデジタル化のタイプ"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_DEVICE_INDEX,
   "デバイスインデックス"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_BIND_ALL,
   "すべてのコントロールを設定"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_BIND_DEFAULT_ALL,
   "初期設定に戻す"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_SAVE_AUTOCONFIG,
   "コントローラープロファイルを保存"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_MOUSE_INDEX,
   "マウスのインデックス"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_JOYPAD_B,
   "B ボタン (下)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_JOYPAD_Y,
   "Y ボタン (左)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_JOYPAD_SELECT,
   "セレクトボタン"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_JOYPAD_START,
   "スタートボタン"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_JOYPAD_UP,
   "十字キー 上"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_JOYPAD_DOWN,
   "十字キー 下"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_JOYPAD_LEFT,
   "十字キー 左"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_JOYPAD_RIGHT,
   "十字キー 右"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_JOYPAD_A,
   "A ボタン (右)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_JOYPAD_X,
   "X ボタン (上)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_JOYPAD_L,
   "L ボタン (ショルダー)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_JOYPAD_R,
   "R ボタン (ショルダー)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_JOYPAD_L2,
   "L2 ボタン (トリガー)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_JOYPAD_R2,
   "R2 ボタン (トリガー)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_JOYPAD_L3,
   "L3 ボタン (親指)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_JOYPAD_R3,
   "R3 ボタン (親指)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_ANALOG_LEFT_X_PLUS,
   "右 (左アナログ)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_ANALOG_LEFT_X_MINUS,
   "左 (左アナログ)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_ANALOG_LEFT_Y_PLUS,
   "下 (左アナログ)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_ANALOG_LEFT_Y_MINUS,
   "上 (左アナログ)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_ANALOG_RIGHT_X_PLUS,
   "右 (右アナログ)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_ANALOG_RIGHT_X_MINUS,
   "左 (右アナログ)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_ANALOG_RIGHT_Y_PLUS,
   "下 (右アナログ)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_ANALOG_RIGHT_Y_MINUS,
   "上 (右アナログ)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_LIGHTGUN_TRIGGER,
   "ライトガン トリガー"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_LIGHTGUN_RELOAD,
   "ライトガン リロード"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_LIGHTGUN_AUX_A,
   "ライトガン Aux A"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_LIGHTGUN_AUX_B,
   "ライトガン Aux B"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_LIGHTGUN_AUX_C,
   "ライトガン Aux C"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_LIGHTGUN_START,
   "ライトガン スタート"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_LIGHTGUN_SELECT,
   "ライトガン セレクト"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_LIGHTGUN_DPAD_UP,
   "ライトガン 十字キー 上"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_LIGHTGUN_DPAD_DOWN,
   "ライトガン 十字キー 下"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_LIGHTGUN_DPAD_LEFT,
   "ライトガン 十字キー 左"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_LIGHTGUN_DPAD_RIGHT,
   "ライトガン 十字キー 右"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_TURBO_ENABLE,
   "ターボ有効"
   )

/* Settings > Latency */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RUN_AHEAD_ENABLED,
   "先行実行して遅延を減らす"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_RUN_AHEAD_ENABLED,
   "入力遅延を減らすため, コアロジックを1フレーム以上先に実行してからステートをロードします."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RUN_AHEAD_FRAMES,
   "先行実行するフレーム数"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RUN_AHEAD_SECONDARY_INSTANCE,
   "先行実行に2番目のインスタンスを使用"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_RUN_AHEAD_SECONDARY_INSTANCE,
   "RetroArchコアの2番目のインスタンスを使用して先行実行します. ステートロードによるオーディオの問題を防止します."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RUN_AHEAD_HIDE_WARNINGS,
   "先行実行の警告を隠す"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_RUN_AHEAD_HIDE_WARNINGS,
   "先行実行を使用していてコアがステートセーブに対応していない場合に表示される警告メッセージを非表示にします."
   )

/* Settings > Core */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_SHARED_CONTEXT,
   "ハードウェア共有コンテキスト"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_SHARED_CONTEXT,
   "ハードウェアレンダリングコアに独自のプライベートコンテキストを与えます. フレーム間でハードウェアの状態が変化することを想定しなくて済みます."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DRIVER_SWITCH_ENABLE,
   "コアにビデオドライバの切り替えを許可"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_DRIVER_SWITCH_ENABLE,
   "コアに現在ロードされているものとは異なるビデオドライバに切り替えることを許可します. "
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DUMMY_ON_CORE_SHUTDOWN,
   "コア終了時にダミーをロード"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_DUMMY_ON_CORE_SHUTDOWN,
   "一部のコアには終了機能があり, ダミーコアをロードするとRetroArchが終了するのを防止できます. "
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_SET_SUPPORTS_NO_CONTENT_ENABLE,
   "自動的にコアをスタート"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHECK_FOR_MISSING_FIRMWARE,
   "ロード前に不足しているファームウェアを確認"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHECK_FOR_MISSING_FIRMWARE,
   "コンテンツをロードする前に, 必要なファームウェアがすべて存在するかどうかを確認します."
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_CHECK_FOR_MISSING_FIRMWARE,
   "コアによってはファームウェアや BIOS ファイルが必要なものがあります。このオプションを有効にすると、RetroArch は必須のファームウェアアイテムが不足している場合、コアの起動を許可しません。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_OPTION_CATEGORY_ENABLE,
   "コアオプションカテゴリー"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CORE_OPTION_CATEGORY_ENABLE,
   "コアがカテゴリーベースのサブメニューでオプションを提示できるようにします。注意: 変更を適用するにはコアの再ロードが必要です。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_INFO_CACHE_ENABLE,
   "コア情報ファイルをキャッシュ"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CORE_INFO_CACHE_ENABLE,
   "インストールされているコア情報の永続的なローカルキャッシュを維持します. ディスクへのアクセスが遅いプラットフォームでの読み込み時間を大幅に短縮します."
   )
#ifndef HAVE_DYNAMIC
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ALWAYS_RELOAD_CORE_ON_RUN_CONTENT,
   "コンテンツ実行時に常にコアを再読み込み"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_ALWAYS_RELOAD_CORE_ON_RUN_CONTENT,
   "要求されたコアがすでに読み込まれている場合でも, コンテンツを起動するときにRetroArchを再起動します. これはロード時間の増加を犠牲にしてシステムの安定性を向上させる可能性があります."
   )
#endif
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_ALLOW_ROTATE,
   "回転を許可"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_ALLOW_ROTATE,
   "コアの回転設定を許可します. 無効にすると回転リクエストは無視されます. 画面を手動で回転させる場合に有用です. "
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_MANAGER_LIST,
   "コアの管理"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CORE_MANAGER_LIST,
   "インストールされているコアのオフラインでの管理(バックアップ, 復元, 削除など)を行い, コア情報を表示します. "
   )
#ifdef HAVE_MIST
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_MANAGER_STEAM_LIST,
   "コアの管理"
   )


MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_STEAM_INSTALL,
   "コアをインストール"
)

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_STEAM_UNINSTALL,
   "コアをアンインストール"
)

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_SHOW_CORE_MANAGER_STEAM,
   "「コアの管理」を表示"
)
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_SHOW_CORE_MANAGER_STEAM,
   "メインメニューに「コアの管理」オプションを表示します。"
)

MSG_HASH(
   MSG_CORE_STEAM_INSTALLING,
   "コアをインストール中: "
)

MSG_HASH(
   MSG_CORE_STEAM_UNINSTALLED,
   "コアは RetroArch の終了時にアンインストールされます。"
)

#endif
/* Settings > Configuration */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONFIG_SAVE_ON_EXIT,
   "終了時に設定を保存"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CONFIG_SAVE_ON_EXIT,
   "終了時に変更を設定ファイルに保存します."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_GAME_SPECIFIC_OPTIONS,
   "コンテンツごとのコア設定を自動的にロード"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_GAME_SPECIFIC_OPTIONS,
   "カスタマイズされたコアの設定を起動時にデフォルトで有効にします."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AUTO_OVERRIDES_ENABLE,
   "優先設定ファイルを自動的にロード"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_AUTO_OVERRIDES_ENABLE,
   "カスタマイズされた設定を起動時にデフォルトで有効にします."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AUTO_REMAPS_ENABLE,
   "リマップファイルを自動的にロード"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_AUTO_REMAPS_ENABLE,
   "カスタマイズされたコントロールを起動時にデフォルトで有効にします."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AUTO_SHADERS_ENABLE,
   "シェーダのプリセットを自動的にロード"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_GLOBAL_CORE_OPTIONS,
   "グローバルコアオプションファイルを使用"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_GLOBAL_CORE_OPTIONS,
   "すべてのコアオプションを共通の設定ファイル(retroarch-core-options.cfg)に保存します. 無効にすると, 各コアのオプションはRetroArchの'設定'ディレクトリにあるコア毎のフォルダ/ファイルに保存されます."
   )

/* Settings > Saving */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SORT_SAVEFILES_ENABLE,
   "セーブをコア名ごとにフォルダに振り分ける"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SORT_SAVEFILES_ENABLE,
   "使用したコアの名前に基づいた名前のフォルダにセーブファイルを振り分けます。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SORT_SAVESTATES_ENABLE,
   "ステートセーブをコア名ごとにフォルダに振り分ける"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SORT_SAVESTATES_ENABLE,
   "使用したコアに基づいた名前のフォルダにステートセーブを振り分けます。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SORT_SAVEFILES_BY_CONTENT_ENABLE,
   "セーブをコンテンツディレクトリごとにフォルダに振り分ける"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SORT_SAVEFILES_BY_CONTENT_ENABLE,
   "コンテンツがあるディレクトリに基づいた名前のフォルダにセーブファイルを振り分けます。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SORT_SAVESTATES_BY_CONTENT_ENABLE,
   "ステートセーブをコンテンツディレクトリごとにフォルダに振り分ける"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SORT_SAVESTATES_BY_CONTENT_ENABLE,
   "コンテンツがあるディレクトリに基づいた名前のフォルダにステートセーブを振り分けます。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_BLOCK_SRAM_OVERWRITE,
   "ステートロード時に SaveRAM を上書きしない"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_BLOCK_SRAM_OVERWRITE,
   "セーブしたステートをロードするときに上書き保存からRAMをブロックします. 潜在的にバグのあるゲームにつながる可能性があります."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AUTOSAVE_INTERVAL,
   "SaveRAM の自動保存間隔"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_AUTOSAVE_INTERVAL,
   "不揮発性セーブRAMを, 一定間隔(秒)で自動的に保存します."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SAVESTATE_AUTO_INDEX,
   "セーブステートのインデックスを自動的に増加"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SAVESTATE_AUTO_INDEX,
   "ステートセーブ前に, ステートセーブのインデックスが自動的に増加します. コンテンツをロードするとき, インデックスは既存のインデックスのうち最も大きい値に設定されます."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SAVESTATE_MAX_KEEP,
   "自動ステートセーブの最大保存数"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SAVESTATE_AUTO_SAVE,
   "自動ステートセーブ"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SAVESTATE_AUTO_SAVE,
   "コンテンツを閉じるときに自動的にステートセーブを行います. '自動的にステートをロード'が有効の場合, RetroArchは自動的にこのセーブステートをロードします."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SAVESTATE_AUTO_LOAD,
   "自動ステートロード"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SAVESTATE_AUTO_LOAD,
   "起動時に自動ステートセーブを自動的にロードします."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SAVESTATE_THUMBNAIL_ENABLE,
   "ステートセーブサムネイル"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SAVESTATE_THUMBNAIL_ENABLE,
   "メニューにステートセーブのサムネイルを表示します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SAVE_FILE_COMPRESSION,
   "SaveRAM 圧縮"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SAVE_FILE_COMPRESSION,
   "不揮発性セーブRAMファイルをアーカイブ形式で書き込みます. 保存/読み込み時間が長くなりますが, ファイルサイズを大幅に削減します.\n 標準のlibretroセーブRAMインタフェースを介して保存をするコアにのみ適用されます."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SAVESTATE_FILE_COMPRESSION,
   "ステートセーブ圧縮"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SAVESTATE_FILE_COMPRESSION,
   "セーブステートファイルをアーカイブ形式で書き込みます. 保存/読み込み時間の増加を犠牲にしてファイルサイズを劇的に削減します. "
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SORT_SCREENSHOTS_BY_CONTENT_ENABLE,
   "スクリーンショットをコンテンツディレクトリごとにフォルダに振り分ける"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SORT_SCREENSHOTS_BY_CONTENT_ENABLE,
   "コンテンツがあるディレクトリに基づいた名前のフォルダにスクリーンショットを振り分けます。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SAVEFILES_IN_CONTENT_DIR_ENABLE,
   "コンテンツディレクトリにセーブファイルを書き込む"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SAVEFILES_IN_CONTENT_DIR_ENABLE,
   "コンテンツディレクトリをセーブファイルのディレクトリとして使用します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SAVESTATES_IN_CONTENT_DIR_ENABLE,
   "コンテンツディレクトリにステートセーブを書き込む"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SAVESTATES_IN_CONTENT_DIR_ENABLE,
   "コンテンツディレクトリをステートセーブのディレクトリとして使用します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEMFILES_IN_CONTENT_DIR_ENABLE,
   "コンテンツディレクトリからシステムファイルを読み込む"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SYSTEMFILES_IN_CONTENT_DIR_ENABLE,
   "コンテンツディレクトリをシステムのディレクトリとして使用します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SCREENSHOTS_IN_CONTENT_DIR_ENABLE,
   "コンテンツディレクトリにスクリーンショットを書き込む"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SCREENSHOTS_IN_CONTENT_DIR_ENABLE,
   "コンテンツディレクトリをスクリーンショットのディレクトリとして使用します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONTENT_RUNTIME_LOG,
   "プレイ記録を保存(コアごと)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CONTENT_RUNTIME_LOG,
   "コアごとに分けて, 各コンテンツの実行時間を記録します."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONTENT_RUNTIME_LOG_AGGREGATE,
   "プレイ記録を保存(総計)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CONTENT_RUNTIME_LOG_AGGREGATE,
   "各コンテンツの実行時間を合計し, すべてのコアの総計として記録します."
   )

/* Settings > Logging */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LOG_VERBOSITY,
   "ログの出力"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_LOG_VERBOSITY,
   "イベントを端末またはファイルにログ出力します."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_FRONTEND_LOG_LEVEL,
   "フロントエンドのログ出力レベル"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_FRONTEND_LOG_LEVEL,
   "フロントエンドのログレベルを設定します. フロントエンドによって発行されたログレベルがこの値を下回る場合, 無視されます."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LIBRETRO_LOG_LEVEL,
   "コアのログ出力レベル"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_LIBRETRO_LOG_LEVEL,
   "コアのログレベルを設定します. コアによって発行されたログレベルがこの値を下回る場合, 無視されます."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LOG_VERBOSITY_DEBUG,
   "0 (デバッグ)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LOG_VERBOSITY_INFO,
   "1 (情報)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LOG_VERBOSITY_WARNING,
   "2 (警告)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LOG_VERBOSITY_ERROR,
   "3 (エラー)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LOG_TO_FILE,
   "ログのファイル出力"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_LOG_TO_FILE,
   "システムのイベントログメッセージをファイルにリダイレクトします. 'ログの出力'を有効にする必要があります."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LOG_TO_FILE_TIMESTAMP,
   "タイムスタンプ付きのログファイル"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_LOG_TO_FILE_TIMESTAMP,
   "ファイルへのログ出力時, RetroArchの各セッション毎に新たなタイムスタンプ付きのファイルにリダイレクトします. 無効の場合, ログはRetroArchを再起動するたびに上書きされます."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PERFCNT_ENABLE,
   "パフォーマンスカウンタ"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_PERFCNT_ENABLE,
   "RetroArchとコアのパフォーマンスカウンタです. カウンタデータはシステムのボトルネック解析や性能の微調整に役立ちます."
   )

/* Settings > File Browser */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SHOW_HIDDEN_FILES,
   "隠しファイルとディレクトリを表示"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SHOW_HIDDEN_FILES,
   "隠しファイルとディレクトリをファイルブラウザに表示します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NAVIGATION_BROWSER_FILTER_SUPPORTED_EXTENSIONS_ENABLE,
   "不明な拡張子を隠す"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NAVIGATION_BROWSER_FILTER_SUPPORTED_EXTENSIONS_ENABLE,
   "サポートされている拡張子によってファイルブラウザに表示されるファイルをフィルタリングします."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_USE_BUILTIN_PLAYER,
   "内蔵メディアプレイヤーを使用"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_FILTER_BY_CURRENT_CORE,
   "現在のコアで絞り込み"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_USE_LAST_START_DIRECTORY,
   "最後に使用した開始ディレクトリを記憶"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_USE_LAST_START_DIRECTORY,
   "コンテンツをロードするとき、最後に使用したディレクトリでファイルブラウザを開きます。注意: 再起動すると場所はデフォルトにリセットされます。"
   )

/* Settings > Frame Throttle */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_REWIND_SETTINGS,
   "巻き戻し"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_META_REWIND,
   "巻き戻しの設定を変更します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_FRAME_TIME_COUNTER_SETTINGS,
   "フレームタイムカウンタ"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_FRAME_TIME_COUNTER_SETTINGS,
   "フレームタイムカウンタに影響する設定を調整します\nビデオのスレッド化が無効になっている場合のみ有効です."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_FASTFORWARD_RATIO,
   "早送りの倍率"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_FASTFORWARD_RATIO,
   "早送り中のコンテンツの最大フレームレートです. 例えば, 60FPSコンテンツに5xを指定すると, 最大フレームレートは300FPSになります. '0.0x'を指定した場合は無制限になります(フレームレート制限なし)."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SLOWMOTION_RATIO,
   "スローモーションの倍率"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SLOWMOTION_RATIO,
   "スローモーションを使用するときにコンテンツが再生される倍率."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_ENUM_THROTTLE_FRAMERATE,
   "メニューのフレームレートを制限"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_ENUM_THROTTLE_FRAMERATE,
   "メニュー内でフレームレートが制限されるようにします."
   )

/* Settings > Frame Throttle > Rewind */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_REWIND_ENABLE,
   "巻き戻し対応"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_REWIND_ENABLE,
   "直近のゲームプレイで以前のポイントに戻ります. パフォーマンスが大きく悪化します."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_REWIND_GRANULARITY,
   "巻き戻しフレーム数"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_REWIND_GRANULARITY,
   "ステップごとに巻き戻すフレームです. 数値が大きいほど巻き戻し速度が上がります."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_REWIND_BUFFER_SIZE,
   "巻き戻しバッファサイズ(MB)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_REWIND_BUFFER_SIZE,
   "巻き戻しバッファ用に予約するメモリ量(MB)です. これを増やすと, 巻き戻し履歴の量が増えます."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_REWIND_BUFFER_SIZE_STEP,
   "巻き戻しバッファサイズのステップ(MB)"
   )

/* Settings > Frame Throttle > Frame Time Counter */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_FRAME_TIME_COUNTER_RESET_AFTER_FASTFORWARDING,
   "早送り後にリセット"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_FRAME_TIME_COUNTER_RESET_AFTER_FASTFORWARDING,
   "高速転送後にフレームタイムカウンタをリセットします. "
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_FRAME_TIME_COUNTER_RESET_AFTER_LOAD_STATE,
   "ステートセーブの読み込み後にリセット"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_FRAME_TIME_COUNTER_RESET_AFTER_LOAD_STATE,
   "ステートロード後にフレームタイムカウンタをリセットします. "
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_FRAME_TIME_COUNTER_RESET_AFTER_SAVE_STATE,
   "ステートセーブの保存後にリセット"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_FRAME_TIME_COUNTER_RESET_AFTER_SAVE_STATE,
   "ステートセーブ後にフレームタイムカウンタをリセットします. "
   )

/* Settings > Recording */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_RECORD_QUALITY,
   "録画品質"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_RECORD_CONFIG_TYPE_RECORDING_CUSTOM,
   "カスタム"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_RECORD_CONFIG_TYPE_RECORDING_LOW_QUALITY,
   "低"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_RECORD_CONFIG_TYPE_RECORDING_MED_QUALITY,
   "中"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_RECORD_CONFIG_TYPE_RECORDING_HIGH_QUALITY,
   "高"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_RECORD_CONFIG_TYPE_RECORDING_LOSSLESS_QUALITY,
   "ロスレス"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RECORD_CONFIG,
   "カスタム録画構成"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_RECORD_THREADS,
   "録画スレッド数"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_POST_FILTER_RECORD,
   "フィルタ適用後の録画"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_POST_FILTER_RECORD,
   "(シェーダを除く) フィルタ適用後の出力を録画します. 画面上で見ているるものと同じくらい見栄えがよくなります."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_GPU_RECORD,
   "GPU 録画を使用"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_GPU_RECORD,
   "可能な場合, GPUのシェードした出力を録画します."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_STREAMING_MODE,
   "配信モード"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_STREAMING_MODE_LOCAL,
   "ローカル"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_STREAMING_MODE_CUSTOM,
   "カスタム"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_STREAM_QUALITY,
   "配信品質"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_RECORD_CONFIG_TYPE_STREAMING_CUSTOM,
   "カスタム"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_RECORD_CONFIG_TYPE_STREAMING_LOW_QUALITY,
   "低"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_RECORD_CONFIG_TYPE_STREAMING_MED_QUALITY,
   "中"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_RECORD_CONFIG_TYPE_STREAMING_HIGH_QUALITY,
   "高"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_STREAM_CONFIG,
   "カスタム配信設定"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_STREAMING_TITLE,
   "配信タイトル"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_STREAMING_URL,
   "配信 URL"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_UDP_STREAM_PORT,
   "UDP 配信ポート"
   )

/* Settings > On-Screen Display */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ONSCREEN_OVERLAY_SETTINGS,
   "OSD オーバーレイ"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_ONSCREEN_OVERLAY_SETTINGS,
   "OSD コントロールとベゼルを調整します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ONSCREEN_VIDEO_LAYOUT_SETTINGS,
   "ビデオレイアウト"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_ONSCREEN_VIDEO_LAYOUT_SETTINGS,
   "ビデオレイアウトを調整します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ONSCREEN_NOTIFICATIONS_SETTINGS,
   "OSD通知"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_ONSCREEN_NOTIFICATIONS_SETTINGS,
   "OSD 通知を調整します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ONSCREEN_NOTIFICATIONS_VIEWS_SETTINGS,
   "通知の表示"
   )

/* Settings > On-Screen Display > On-Screen Overlay */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_OVERLAY_ENABLE,
   "オーバーレイを表示"
   )

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_OVERLAY_HIDE_IN_MENU,
   "メニュー表示中にオーバーレイを隠す"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_OVERLAY_HIDE_IN_MENU,
   "メニュー内でオーバーレイを非表示にし、メニューを終了すると再び表示します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_OVERLAY_HIDE_WHEN_GAMEPAD_CONNECTED,
   "コントローラーが接続されているときにオーバーレイを隠す"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_OVERLAY_HIDE_WHEN_GAMEPAD_CONNECTED,
   "物理コントローラがポート 1 に接続されているときにオーバーレイを非表示にし、コントローラーが切断されたときに再び表示します。"
   )
#if defined(ANDROID)
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_OVERLAY_HIDE_WHEN_GAMEPAD_CONNECTED_ANDROID,
   "物理コントローラーがポート 1 に接続されているときにオーバーレイを非表示にします。コントローラーが切断されても、オーバーレイは自動的に復元されません。"
   )
#endif
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_OVERLAY_SHOW_INPUTS,
   "オーバーレイに入力を表示"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_OVERLAY_SHOW_INPUTS,
   "オーバーレイに登録された入力を表示します. 'Touched' は押されたりクリックされたオーバーレイ要素を強調表示します. 'Physical (Controller)'は, 接続されたコントローラ/キーボードからコアに渡された実際の入力を強調表示します."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_OVERLAY_SHOW_INPUTS_PORT,
   "ポートからの入力を表示"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_OVERLAY_SHOW_INPUTS_PORT,
   "'オーバーレイに入力を表示' が'Physical (Controller)'に設定されているときに監視する入力デバイスのポートを選択します."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_OVERLAY_SHOW_MOUSE_CURSOR,
   "オーバーレイにマウスカーソルを表示"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_OVERLAY_SHOW_MOUSE_CURSOR,
   "オンスクリーンオーバーレイを使用中にマウスカーソルを表示します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_OVERLAY_AUTO_ROTATE,
   "オーバーレイの自動回転"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_OVERLAY_AUTO_ROTATE,
   "現在のオーバーレイでサポートされている場合, 画面の向き/アスペクト比に合わせてレイアウトを自動的に回転させます. "
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_OVERLAY_AUTO_SCALE,
   "オーバーレイの自動スケーリング"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_OVERLAY_AUTO_SCALE,
   "画面のアスペクト比に一致するよう, オーバーレイのスケーリングとUI部品の表示間隔を自動調整します. コントローラのオーバレイで最も良い結果をもたらします."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OVERLAY,
   "オーバーレイ"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OVERLAY_AUTOLOAD_PREFERRED,
   "優先オーバーレイを自動ロード"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OVERLAY_OPACITY,
   "オーバーレイの不透明度"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_OVERLAY_OPACITY,
   "オーバーレイUI要素の不透明度です."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OVERLAY_PRESET,
   "オーバーレイプリセット"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_OVERLAY_PRESET,
   "ファイルブラウザからオーバーレイを選択します."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OVERLAY_SCALE_LANDSCAPE,
   "(横長画面) オーバーレイ倍率"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_OVERLAY_SCALE_LANDSCAPE,
   "横長の画面を使用するときの, UI部品の表示倍率です."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OVERLAY_ASPECT_ADJUST_LANDSCAPE,
   "(横長画面) オーバーレイアスペクト調整"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_OVERLAY_ASPECT_ADJUST_LANDSCAPE,
   "横長の画面を使用するときの, アスペクト比補正係数をオーバーレイに適用します. 正の値を設定すると, 実質的なオーバーレイ幅が増加します(負の値だと減少します)."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OVERLAY_X_SEPARATION_LANDSCAPE,
   "(横長画面) オーバーレイの水平方向の分割"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_OVERLAY_X_SEPARATION_LANDSCAPE,
   "現在のプリセットでサポートされている場合, 横長画面時にオーバーレイの左右 UI 要素間の間隔を調整します. 正の値は, 各要素の距離を増加します (負の値は減少します)."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OVERLAY_Y_SEPARATION_LANDSCAPE,
   "(横長画面) オーバーレイの垂直方向の分割"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_OVERLAY_Y_SEPARATION_LANDSCAPE,
   "現在のプリセットでサポートされている場合, 横長画面時にオーバーレイの上下 UI 要素間の間隔を調整します. 正の値は, 各要素の距離を増加します (負の値は減少します)."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OVERLAY_X_OFFSET_LANDSCAPE,
   "(横長画面) オーバーレイX方向オフセット"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_OVERLAY_X_OFFSET_LANDSCAPE,
   "横長画面での水平オーバーレイオフセット値です. 正の値はオーバーレイを右に移動し, 負の値は左に移動します."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OVERLAY_Y_OFFSET_LANDSCAPE,
   "(横長画面) オーバーレイY方向オフセット"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_OVERLAY_Y_OFFSET_LANDSCAPE,
   "横長画面での垂直オーバーレイオフセット値です. 正の値はオーバーレイを上に移動し, 負の値は下に移動します."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OVERLAY_SCALE_PORTRAIT,
   "(縦長画面) オーバーレイ倍率"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_OVERLAY_SCALE_PORTRAIT,
   "縦長画面仕様時の, UI部品の表示倍率です."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OVERLAY_ASPECT_ADJUST_PORTRAIT,
   "(縦長画面) オーバーレイアスペクト調整"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_OVERLAY_ASPECT_ADJUST_PORTRAIT,
   "横長画面でのアスペクト比補正係数をオーバーレイに適用します. 正の値を設定すると, 実質的なオーバーレイ幅が増加します(負の値だと減少します)."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OVERLAY_X_SEPARATION_PORTRAIT,
   "(縦長画面) オーバーレイの水平方向の分割"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_OVERLAY_X_SEPARATION_PORTRAIT,
   "現在のプリセットでサポートされている場合, 縦長画面時にオーバーレイの左右 UI 要素間の間隔を調整します. 正の値は, 各要素の距離を増加します (負の値は減少します)."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OVERLAY_Y_SEPARATION_PORTRAIT,
   "(縦長画面) オーバーレイの垂直方向の分割"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_OVERLAY_Y_SEPARATION_PORTRAIT,
   "現在のプリセットでサポートされている場合, 縦長画面時にオーバーレイの上下 UI 要素間の間隔を調整します. 正の値は, 各要素の距離を増加します (負の値は減少します)."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OVERLAY_X_OFFSET_PORTRAIT,
   "(縦長画面) オーバーレイX方向オフセット"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_OVERLAY_X_OFFSET_PORTRAIT,
   "縦長画面での水平オーバーレイオフセット値です. 正の値はオーバーレイを右に移動し, 負の値は左に移動します."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OVERLAY_Y_OFFSET_PORTRAIT,
   "(縦長画面) オーバーレイY方向オフセット"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_OVERLAY_Y_OFFSET_PORTRAIT,
   "縦長画面での垂直オーバーレイオフセット値です. 正の値はオーバーレイを上に移動し, 負の値は下に移動します."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OSK_OVERLAY_SETTINGS,
   "キーボードオーバーレイ"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_OSK_OVERLAY_SETTINGS,
   "キーボードオーバーレイを選択して調整します。"
   )

/* Settings > On-Screen Display > On-Screen Overlay > Keyboard Overlay */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OSK_OVERLAY_PRESET,
   "キーボードオーバーレイプリセット"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_OSK_OVERLAY_AUTO_SCALE,
   "キーボードオーバーレイの自動スケール"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_OSK_OVERLAY_AUTO_SCALE,
   "キーボードオーバーレイを元のアスペクト比に調整します。無効にすると画面にストレッチします。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OSK_OVERLAY_OPACITY,
   "キーボードオーバーレイの透明度"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_OSK_OVERLAY_OPACITY,
   "キーボードオーバーレイのすべての UI 要素の透明度です。"
   )

/* Settings > On-Screen Display > Video Layout */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_LAYOUT_ENABLE,
   "ビデオレイアウトを有効にする"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_LAYOUT_ENABLE,
   "ビデオレイアウトはベゼルなどのアートワークに使用されます."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_LAYOUT_PATH,
   "ビデオレイアウトのパス"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_LAYOUT_PATH,
   "ファイルブラウザからビデオレイアウトを選択します."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_LAYOUT_SELECTED_VIEW,
   "選択したビュー"
   )
MSG_HASH( /* FIXME Unused */
   MENU_ENUM_SUBLABEL_VIDEO_LAYOUT_SELECTED_VIEW,
   "ロードされたレイアウト内のビューを選択します. "
   )

/* Settings > On-Screen Display > On-Screen Notifications */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_FONT_ENABLE,
   "OSD 通知を表示"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_FONT_ENABLE,
   "OSD メッセージを表示します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_WIDGETS_ENABLE,
   "グラフィックウィジェット"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_WIDGETS_ENABLE,
   "装飾されたアニメーション, 通知, インジケータ, コントロールを使用します."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_WIDGET_SCALE_AUTO,
   "グラフィックウィジェットを自動的にスケーリングする"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_WIDGET_SCALE_AUTO,
   "現在のメニュースケールに基づいて, 装飾された通知, インジケータ, コントロールのサイズを自動的に変更します."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_FPS_SHOW,
   "フレームレートを表示"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_FPS_SHOW,
   "1 秒ごとの現在のフレーム数を表示します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_FPS_UPDATE_INTERVAL,
   "フレームレートの更新間隔(フレーム数)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_FPS_UPDATE_INTERVAL,
   "指定されたフレーム数おきにフレームレートの表示を更新します."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_FRAMECOUNT_SHOW,
   "フレームレート表示でフレーム数を表示"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_FRAMECOUNT_SHOW,
   "現在のフレームカウントを表示します."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_STATISTICS_SHOW,
   "統計を表示"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_STATISTICS_SHOW,
   "技術的統計を表示します."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MEMORY_SHOW,
   "メモリ使用量を表示"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MEMORY_SHOW,
   "使用メモリ量と合計メモリ量を表示します."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MEMORY_UPDATE_INTERVAL,
   "メモリ使用量の更新間隔 (フレーム)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MEMORY_UPDATE_INTERVAL,
   "指定されたフレーム数おきにメモリ使用量の表示を更新します."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_PING_SHOW,
   "ネットプレイ Ping を表示"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NETPLAY_PING_SHOW,
   "現在のネットプレイルームの Ping を表示します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_SHOW_LOAD_CONTENT_ANIMATION,
   "「コンテンツをロード」起動時の通知"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_SHOW_LOAD_CONTENT_ANIMATION,
   "コンテンツの読み込み時に, 短い起動フィードバックアニメーションを表示します."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NOTIFICATION_SHOW_AUTOCONFIG,
   "入力デバイス接続通知 (オートコンフィグ)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NOTIFICATION_SHOW_CHEATS_APPLIED,
   "チートコードの通知"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NOTIFICATION_SHOW_CHEATS_APPLIED,
   "チートコード適用時にOSDメッセージを表示します."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NOTIFICATION_SHOW_PATCH_APPLIED,
   "パッチ適用時の通知"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NOTIFICATION_SHOW_PATCH_APPLIED,
   "パッチ適用時にOSDメッセージを表示します."
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NOTIFICATION_SHOW_AUTOCONFIG,
   "入力デバイスの接続/切断時にOSDメッセージを表示します."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NOTIFICATION_SHOW_REMAP_LOAD,
   "入力リマップロード時の通知"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NOTIFICATION_SHOW_REMAP_LOAD,
   "入力リマップファイルのロード時にOSDメッセージを表示します."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NOTIFICATION_SHOW_CONFIG_OVERRIDE_LOAD,
   "設定上書きのロード時に通知"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NOTIFICATION_SHOW_CONFIG_OVERRIDE_LOAD,
   "設定上書きファイルをロードしたときにOSDメッセージを表示します."
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NOTIFICATION_SHOW_SET_INITIAL_DISK,
   "M3Uプレイリストでロードされた複数ディスクコンテンツにおいて, 最後に使用されたディスクを自動的に起動したときにOSDメッセージを表示します."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NOTIFICATION_SHOW_FAST_FORWARD,
   "早送り時の通知"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NOTIFICATION_SHOW_FAST_FORWARD,
   "コンテンツの早送り時にOSD通知を表示します."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NOTIFICATION_SHOW_SCREENSHOT,
   "スクリーンショット撮影時の通知"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NOTIFICATION_SHOW_SCREENSHOT,
   "スクリーンショット撮影時にOSDメッセージを表示します."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NOTIFICATION_SHOW_SCREENSHOT_DURATION,
   "スクリーンショット撮影時の通知メッセージ持続時間"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NOTIFICATION_SHOW_SCREENSHOT_DURATION,
   "スクリーンショット撮影時のOSDメッセージ表示時間を設定します."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NOTIFICATION_SHOW_SCREENSHOT_DURATION_NORMAL,
   "普通"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NOTIFICATION_SHOW_SCREENSHOT_DURATION_FAST,
   "高速"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NOTIFICATION_SHOW_SCREENSHOT_DURATION_VERY_FAST,
   "非常に速い"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NOTIFICATION_SHOW_SCREENSHOT_DURATION_INSTANT,
   "即時"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NOTIFICATION_SHOW_SCREENSHOT_FLASH,
   "スクリーンショットのフラッシュ効果"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NOTIFICATION_SHOW_SCREENSHOT_FLASH,
   "スクリーンショット撮影時に, 指定された長さで画面を点滅させます."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NOTIFICATION_SHOW_SCREENSHOT_FLASH_NORMAL,
   "オン (通常)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NOTIFICATION_SHOW_SCREENSHOT_FLASH_FAST,
   "オン (高速)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NOTIFICATION_SHOW_REFRESH_RATE,
   "リフレッシュレートの通知"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NOTIFICATION_SHOW_REFRESH_RATE,
   "リフレッシュレートを設定したときにメッセージを表示します."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NOTIFICATION_SHOW_NETPLAY_EXTRA,
   "追加のネットプレイ通知"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NOTIFICATION_SHOW_WHEN_MENU_IS_ALIVE,
   "メニューでのみ通知"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NOTIFICATION_SHOW_WHEN_MENU_IS_ALIVE,
   "メニューが開いているときにのみ通知を表示します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_FONT_PATH,
   "通知のフォント"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_FONT_PATH,
   "OSD 通知のフォントを選択します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_FONT_SIZE,
   "通知のサイズ"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_FONT_SIZE,
   "フォントサイズをポイントで指定します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_MESSAGE_POS_X,
   "通知の表示位置 (水平)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_MESSAGE_POS_X,
   "OSD テキストのカスタム X 軸位置を指定します。0 は左端です。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_MESSAGE_POS_Y,
   "通知の表示位置 (垂直)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_MESSAGE_POS_Y,
   "OSD テキストのカスタム Y 軸位置を指定します。0 は下端です。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_MESSAGE_COLOR_RED,
   "通知の色 (赤)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_MESSAGE_COLOR_RED,
   "OSD テキスト色の赤の値を設定します。有効な値は 0 から 255 の間です。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_MESSAGE_COLOR_GREEN,
   "通知の色 (緑)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_MESSAGE_COLOR_GREEN,
   "OSD テキスト色の緑の値を設定します。有効な値は 0 から 255 の間です。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_MESSAGE_COLOR_BLUE,
   "通知の色 (青)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_MESSAGE_COLOR_BLUE,
   "OSD テキスト色の青の値を設定します。有効な値は 0 から 255 の間です。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_MESSAGE_BGCOLOR_ENABLE,
   "通知の背景"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_MESSAGE_BGCOLOR_ENABLE,
   "OSD の背景色を有効にします。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_MESSAGE_BGCOLOR_RED,
   "通知の背景色 (赤)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_MESSAGE_BGCOLOR_RED,
   "OSD 背景色の赤の値を設定します。有効な値は 0 から 255 の間です。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_MESSAGE_BGCOLOR_GREEN,
   "通知の背景色 (緑)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_MESSAGE_BGCOLOR_GREEN,
   "OSD 背景色の緑の値を設定します。有効な値は 0 から 255 の間です。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_MESSAGE_BGCOLOR_BLUE,
   "通知の背景色 (青)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_MESSAGE_BGCOLOR_BLUE,
   "OSD 背景色の青の値を設定します。有効な値は 0 から 255 の間です。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_MESSAGE_BGCOLOR_OPACITY,
   "通知の背景色の透明度"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_MESSAGE_BGCOLOR_OPACITY,
   "OSD 背景色の透明度を設定します。有効な値は 0.0 から 1.0 の間です。"
   )

/* Settings > User Interface */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_VIEWS_SETTINGS,
   "メニュー項目の表示"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_VIEWS_SETTINGS,
   "各メニュー項目の表示/非表示を切り替えます."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_SETTINGS,
   "外観"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_SETTINGS,
   "メニュー画面の外観の設定を変更します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_APPICON_SETTINGS,
   "アプリアイコン"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_APPICON_SETTINGS,
   "アプリアイコンを変更します。"
   )
#ifdef _3DS
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_BOTTOM_SETTINGS,
   "3DS 下画面の外観"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_BOTTOM_SETTINGS,
   "下画面の外観の設定を変更します。"
   )
#endif
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SHOW_ADVANCED_SETTINGS,
   "詳細設定を表示"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SHOW_ADVANCED_SETTINGS,
   "パワーユーザー向けの高度な設定を表示します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_ENABLE_KIOSK_MODE,
   "キオスクモード"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_ENABLE_KIOSK_MODE,
   "設定変更メニューを隠すことでセットアップを保護します."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_KIOSK_MODE_PASSWORD,
   "キオスクモードを無効にするパスワードを設定"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_KIOSK_MODE_PASSWORD,
   "キオスクモードを有効にする際にあらかじめパスワードを設定しておくことで, そのパスワードを使用してメニューからキオスクモードを無効にすることができます."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NAVIGATION_WRAPAROUND,
   "ナビゲーションの回り込み"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NAVIGATION_WRAPAROUND,
   "リストの終端に水平または垂直に達したときに先頭/末尾に折り返します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PAUSE_LIBRETRO,
   "メニュー表示中はコンテンツを一時停止"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_PAUSE_LIBRETRO,
   "メニュー表示中は, 実行中のコンテンツを一時停止します."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_SAVESTATE_RESUME,
   "ステートセーブ後にコンテンツを再開"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_SAVESTATE_RESUME,
   "ステートセーブ/ロード後に, 自動でメニューを閉じてコンテンツを再開します. 非常に遅いデバイスの場合, これをオフにするとステートセーブのパフォーマンスを向上できます."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_INSERT_DISK_RESUME,
   "ディスク入れ替え後にコンテンツを再開"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_INSERT_DISK_RESUME,
   "新しいディスクが挿入されたとき, 自動でメニューを閉じてコンテンツを再開します."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QUIT_ON_CLOSE_CONTENT,
   "コンテンツを閉じる時に終了"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_QUIT_ON_CLOSE_CONTENT,
   "コンテンツを閉じる際にRetroArchを自動的に終了します. 'CLI' コマンドラインでコンテンツが起動された場合にのみ終了します."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_SCREENSAVER_TIMEOUT,
   "メニュースクリーンセーバーのタイムアウト"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_SCREENSAVER_TIMEOUT,
   "メニュー表示中に, 指定した非アクティブ期間が経過したらスクリーンセーバーを表示します."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_SCREENSAVER_ANIMATION,
   "メニュースクリーンセーバーのアニメーション"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_SCREENSAVER_ANIMATION,
   "メニュースクリーンセーバーのアニメーション効果を有効にします. パフォーマンスに影響を与えます."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_SCREENSAVER_ANIMATION_SPEED,
   "メニュースクリーンセーバーのアニメーション速度"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_SCREENSAVER_ANIMATION_SPEED,
   "メニュースクリーンセーバーのアニメーション速度を調整します."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MOUSE_ENABLE,
   "マウス対応"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MOUSE_ENABLE,
   "メニューをマウスで操作できるようにします。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_POINTER_ENABLE,
   "タッチ対応"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_POINTER_ENABLE,
   "メニューをタッチスクリーンで操作できるようにします。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_THREADED_DATA_RUNLOOP_ENABLE,
   "タスクをスレッド化"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_THREADED_DATA_RUNLOOP_ENABLE,
   "タスクを別のスレッドで実行します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PAUSE_NONACTIVE,
   "アクティブでないときにコンテンツを一時停止"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_PAUSE_NONACTIVE,
   "RetroArch がアクティブウィンドウでなくなったときに, コンテンツを一時停止します."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_DISABLE_COMPOSITION,
   "デスクトップコンポジションを無効にする"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_SCROLL_FAST,
   "メニュースクロール加速"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_SCROLL_FAST,
   "スクロールするときのカーソルの最大速度."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_SCROLL_DELAY,
   "メニュースクロールの遅延"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_SCROLL_DELAY,
   "スクロールする方向を保持したときの初期遅延(ms)です."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_UI_COMPANION_ENABLE,
   "UIコンパニオン"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_UI_COMPANION_START_ON_BOOT,
   "起動時にUIコンパニオンを開始"
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_UI_COMPANION_START_ON_BOOT,
   "起動時にユーザーインターフェースコンパニオンドライバを起動します (利用可能な場合)。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DESKTOP_MENU_ENABLE,
   "デスクトップメニュー (再起動が必要)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_UI_COMPANION_TOGGLE,
   "起動時にデスクトップメニューを開く"
   )

/* Settings > User Interface > Menu Item Visibility */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QUICK_MENU_VIEWS_SETTINGS,
   "クイックメニュー"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_QUICK_MENU_VIEWS_SETTINGS,
   "クイックメニュー内の各メニュー項目の表示/非表示を切り替えます. "
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SETTINGS_VIEWS_SETTINGS,
   "設定"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SETTINGS_VIEWS_SETTINGS,
   "'設定'内の各メニュー項目の表示/非表示を切り替えます. "
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_SHOW_LOAD_CORE,
   "[コアをロード] を表示"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_SHOW_LOAD_CORE,
   "メインメニューに [コアをロード] オプションを表示します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_SHOW_LOAD_CONTENT,
   "[コンテンツをロード] を表示"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_SHOW_LOAD_CONTENT,
   "メインメニューに [コンテンツをロード] オプションを表示します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_SHOW_LOAD_DISC,
   "[ディスクをロード] を表示"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_SHOW_LOAD_DISC,
   "メインメニューに [ディスクをロード] オプションを表示します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_SHOW_DUMP_DISC,
   "[ディスクをダンプ] を表示"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_SHOW_DUMP_DISC,
   "メインメニューに [ディスクをダンプ] オプションを表示します。"
   )
#ifdef HAVE_LAKKA
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_SHOW_EJECT_DISC,
   "[ディスクの取り出し] を表示"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_SHOW_EJECT_DISC,
   "メインメニューに [ディスクの取り出し] を表示します。"
   )
#endif
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_SHOW_ONLINE_UPDATER,
   "[オンラインアップデータ] を表示"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_SHOW_ONLINE_UPDATER,
   "メインメニューに [オンラインアップデータ] オプションを表示します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_SHOW_CORE_UPDATER,
   "[コアダウンローダー] を表示"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_SHOW_CORE_UPDATER,
   "[オンラインアップデータ] オプションで、コア (およびコア情報ファイル) を更新する機能を表示します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_SHOW_LEGACY_THUMBNAIL_UPDATER,
   "古い [サムネイルアップデータ] を表示"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_SHOW_LEGACY_THUMBNAIL_UPDATER,
   "[オンラインアップデータ] オプションに、レガシーサムネイルパッケージをダウンロードするための項目を表示します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_SHOW_INFORMATION,
   "[情報] を表示"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_SHOW_INFORMATION,
   "メインメニューに [情報] オプションを表示します."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_SHOW_CONFIGURATIONS,
   "[設定ファイル] を表示"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_SHOW_CONFIGURATIONS,
   "メインメニューに [設定ファイル] オプションを表示します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_SHOW_HELP,
   "[ヘルプ] を表示"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_SHOW_HELP,
   "メインメニューに [ヘルプ] オプションを表示します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_SHOW_QUIT_RETROARCH,
   "[終了] を表示"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_SHOW_QUIT_RETROARCH,
   "メインメニューに [終了] オプションを表示します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_SHOW_RESTART_RETROARCH,
   "[再起動] を表示"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_SHOW_RESTART_RETROARCH,
   "メインメニューに [再起動] オプションを表示します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONTENT_SHOW_SETTINGS,
   "[設定] を表示"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CONTENT_SHOW_SETTINGS,
   "[設定] メニューを表示します。 (Ozone/XMB で再起動が必要)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONTENT_SHOW_SETTINGS_PASSWORD,
   "'設定'を有効にするためのパスワードを設定"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CONTENT_SHOW_SETTINGS_PASSWORD,
   "設定タブを隠すときにあらかじめパスワードを設定しておくことで、後でメニューから設定タブを復元することができます。設定タブを復元するには、メインメニュータブを開き、[設定タブを有効にする] でそのパスワードを入力します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONTENT_SHOW_FAVORITES,
   "[お気に入り] を表示"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CONTENT_SHOW_FAVORITES,
   "[お気に入り] メニューを表示します。 (Ozone/XMB で再起動が必要)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONTENT_SHOW_IMAGES,
   "[画像] を表示"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CONTENT_SHOW_IMAGES,
   "[画像] メニューを表示します。 (Ozone/XMB で再起動が必要)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONTENT_SHOW_MUSIC,
   "[音楽] を表示"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CONTENT_SHOW_MUSIC,
   "[音楽] メニューを表示します。 (Ozone/XMB で再起動が必要)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONTENT_SHOW_VIDEO,
   "[動画] を表示"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CONTENT_SHOW_VIDEO,
   "[動画] メニューを表示します。 (Ozone/XMB で再起動が必要)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONTENT_SHOW_NETPLAY,
   "[ネットプレイ] を表示"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CONTENT_SHOW_NETPLAY,
   "[ネットプレイ] メニューを表示します。 (Ozone/XMB で再起動が必要)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONTENT_SHOW_HISTORY,
   "[履歴] を表示"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CONTENT_SHOW_HISTORY,
   "[履歴] メニューを表示します。 (Ozone/XMB で再起動が必要)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONTENT_SHOW_ADD,
   "[コンテンツをインポート] を表示"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CONTENT_SHOW_ADD,
   "[コンテンツをインポート] メニューを表示します。 (Ozone/XMB で再起動が必要)"
   )
MSG_HASH( /* FIXME can now be replaced with MENU_ENUM_LABEL_VALUE_CONTENT_SHOW_ADD */
   MENU_ENUM_LABEL_VALUE_CONTENT_SHOW_ADD_ENTRY,
   "[コンテンツをインポート] を表示"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CONTENT_SHOW_ADD_ENTRY,
   "メインメニューとプレイリストのサブメニューに、[コンテンツをインポート] メニューを表示します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_ADD_CONTENT_ENTRY_DISPLAY_MAIN_TAB,
   "メインメニュー"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_ADD_CONTENT_ENTRY_DISPLAY_PLAYLISTS_TAB,
   "プレイリストメニュー"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONTENT_SHOW_PLAYLISTS,
   "[プレイリスト] を表示"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CONTENT_SHOW_PLAYLISTS,
   "[プレイリスト] メニューを表示します。 (Ozone/XMB で再起動が必要)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONTENT_SHOW_EXPLORE,
   "[エクスプローラー] を表示"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CONTENT_SHOW_EXPLORE,
   "[エクスプローラー] メニューを表示します。 (Ozone/XMB で再起動が必要)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONTENT_SHOW_CONTENTLESS_CORES,
   "[コンテンツレスコア] を表示"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CONTENT_SHOW_CONTENTLESS_CORES,
   "[コンテンツレスコア] メニューに表示するコアの種類を指定します。「カスタム」に設定すると、[コアの管理] メニューから個々のコアの表示/非表示を切り替えることができます。 (Ozone/XMB で再起動が必要)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SHOW_CONTENTLESS_CORES_ALL,
   "すべて"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SHOW_CONTENTLESS_CORES_CUSTOM,
   "カスタム"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TIMEDATE_ENABLE,
   "日付/時刻を表示"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_TIMEDATE_ENABLE,
   "メニューに現在の日付と時刻を表示します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TIMEDATE_STYLE,
   "日付/時刻の表示形式"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_TIMEDATE_STYLE,
   "メニュー内での日付/時刻の表示形式を変更します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TIMEDATE_DATE_SEPARATOR,
   "日付の区切り文字"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_TIMEDATE_DATE_SEPARATOR,
   "現在の日付がメニュー内に表示されるときに, 年/月/日の区切りとして使用する文字を指定します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_BATTERY_LEVEL_ENABLE,
   "バッテリー残量を表示"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_BATTERY_LEVEL_ENABLE,
   "メニュー内に現在のバッテリー残量を表示します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_ENABLE,
   "コアの名前を表示"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CORE_ENABLE,
   "メニュー内に現在のコア名を表示します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_SHOW_SUBLABELS,
   "メニューのサブラベルを表示"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_SHOW_SUBLABELS,
   "メニューアイテムに関する追加情報を表示します."
   )
MSG_HASH( /* FIXME Not RGUI specific */
   MENU_ENUM_LABEL_VALUE_RGUI_SHOW_START_SCREEN,
   "スタート画面を表示"
   )
MSG_HASH( /* FIXME Not RGUI specific */
   MENU_ENUM_SUBLABEL_RGUI_SHOW_START_SCREEN,
   "メニューにスタートスクリーンを表示します。このオプションは、プログラムを初めて起動した後に自動的にオフに設定されます。"
   )

/* Settings > User Interface > Menu Item Visibility > Quick Menu */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QUICK_MENU_SHOW_RESUME_CONTENT,
   "[再開] を表示"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_QUICK_MENU_SHOW_RESUME_CONTENT,
   "コンテンツの [再開] オプションを表示します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QUICK_MENU_SHOW_RESTART_CONTENT,
   "[再起動] を表示"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_QUICK_MENU_SHOW_RESTART_CONTENT,
   "コンテンツの [再起動] オプションを表示します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QUICK_MENU_SHOW_CLOSE_CONTENT,
   "[コンテンツを閉じる] を表示"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_QUICK_MENU_SHOW_CLOSE_CONTENT,
   "[コンテンツを閉じる] オプションを表示します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QUICK_MENU_SHOW_SAVESTATE_SUBMENU,
   "[ステートセーブ] サブメニューを表示"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_QUICK_MENU_SHOW_SAVESTATE_SUBMENU,
   "サブメニューに [ステートセーブ] オプションを表示します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QUICK_MENU_SHOW_SAVE_LOAD_STATE,
   "[ステートセーブ/ロード] を表示"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_QUICK_MENU_SHOW_SAVE_LOAD_STATE,
   "[ステートセーブ/ロード] オプションを表示します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QUICK_MENU_SHOW_UNDO_SAVE_LOAD_STATE,
   "[ステートセーブ/ロードを元に戻す] を表示"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_QUICK_MENU_SHOW_UNDO_SAVE_LOAD_STATE,
   "[ステートロード/セーブを元に戻す] オプションを表示します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QUICK_MENU_SHOW_OPTIONS,
   "[コア設定] を表示"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_QUICK_MENU_SHOW_OPTIONS,
   "[コア設定] オプションを表示します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QUICK_MENU_SHOW_CONTROLS,
   "[コントロール] を表示"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_QUICK_MENU_SHOW_CONTROLS,
   "[コントロール] オプションを表示します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QUICK_MENU_SHOW_TAKE_SCREENSHOT,
   "[スクリーンショットを撮る] を表示"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_QUICK_MENU_SHOW_TAKE_SCREENSHOT,
   "[スクリーンショットを撮る] オプションを表示します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QUICK_MENU_SHOW_START_RECORDING,
   "[録画を開始] を表示"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_QUICK_MENU_SHOW_START_RECORDING,
   "[録画を開始] オプションを表示します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QUICK_MENU_SHOW_START_STREAMING,
   "[配信を開始] を表示"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_QUICK_MENU_SHOW_START_STREAMING,
   "[配信を開始] オプションを表示します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONTENT_SHOW_OVERLAYS,
   "[オンスクリーンオーバーレイ] を表示"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CONTENT_SHOW_OVERLAYS,
   "[オンスクリーンオーバーレイ] オプションを表示します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONTENT_SHOW_VIDEO_LAYOUT,
   "[ビデオレイアウト] を表示"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CONTENT_SHOW_VIDEO_LAYOUT,
   "[ビデオレイアウト] オプションを表示します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONTENT_SHOW_LATENCY,
   "[遅延] を表示"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CONTENT_SHOW_LATENCY,
   "[遅延] オプションを表示します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONTENT_SHOW_REWIND,
   "[巻き戻し] を表示"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CONTENT_SHOW_REWIND,
   "[巻き戻し] オプションを表示します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QUICK_MENU_SHOW_SAVE_CORE_OVERRIDES,
   "[コア優先を保存] を表示"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_QUICK_MENU_SHOW_SAVE_CORE_OVERRIDES,
   "[優先] メニューに [コア優先を保存] オプションを表示します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QUICK_MENU_SHOW_SAVE_CONTENT_DIR_OVERRIDES,
   "[コンテンツディレクトリ優先を保存] を表示"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_QUICK_MENU_SHOW_SAVE_CONTENT_DIR_OVERRIDES,
   "[優先] メニューに [コンテンツディレクトリ優先を保存] オプションを表示します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QUICK_MENU_SHOW_SAVE_GAME_OVERRIDES,
   "[ゲーム優先を保存] を表示"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_QUICK_MENU_SHOW_SAVE_GAME_OVERRIDES,
   "[優先] メニューに [ゲーム優先を保存] オプションを表示します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QUICK_MENU_SHOW_CHEATS,
   "[チート] を表示"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_QUICK_MENU_SHOW_CHEATS,
   "[チート] オプションを表示します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QUICK_MENU_SHOW_SHADERS,
   "[シェーダー] を表示"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_QUICK_MENU_SHOW_SHADERS,
   "[シェーダー] オプションを表示します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QUICK_MENU_SHOW_ADD_TO_FAVORITES,
   "[お気に入りに追加] を表示"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_QUICK_MENU_SHOW_ADD_TO_FAVORITES,
   "[お気に入りに追加] オプションを表示します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QUICK_MENU_SHOW_SET_CORE_ASSOCIATION,
   "[コアの関連付けを設定] を表示"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_QUICK_MENU_SHOW_SET_CORE_ASSOCIATION,
   "コンテンツが実行されていない場合は、[コアの関連付けを設定] オプションを表示します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QUICK_MENU_SHOW_RESET_CORE_ASSOCIATION,
   "[コアの関連付けをリセット] を表示"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_QUICK_MENU_SHOW_RESET_CORE_ASSOCIATION,
   "コンテンツが実行されていない場合は、[コアの関連付けをリセット] オプションを表示します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QUICK_MENU_SHOW_DOWNLOAD_THUMBNAILS,
   "[サムネイルをダウンロード] を表示"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_QUICK_MENU_SHOW_DOWNLOAD_THUMBNAILS,
   "コンテンツが実行されていない場合は、[サムネイルのダウンロード] オプションを表示します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QUICK_MENU_SHOW_INFORMATION,
   "[情報] を表示"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_QUICK_MENU_SHOW_INFORMATION,
   "[情報] オプションを表示します。"
   )

/* Settings > User Interface > Views > Settings */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SETTINGS_SHOW_DRIVERS,
   "[ドライバ] を表示"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SETTINGS_SHOW_DRIVERS,
   "[ドライバ] 設定を表示します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SETTINGS_SHOW_VIDEO,
   "[ビデオ] を表示"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SETTINGS_SHOW_VIDEO,
   "[ビデオ] 設定を表示します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SETTINGS_SHOW_AUDIO,
   "[オーディオ] を表示"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SETTINGS_SHOW_AUDIO,
   "[オーディオ] 設定を表示します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SETTINGS_SHOW_INPUT,
   "[入力] を表示"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SETTINGS_SHOW_INPUT,
   "[入力] 設定を表示します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SETTINGS_SHOW_LATENCY,
   "[遅延] を表示"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SETTINGS_SHOW_LATENCY,
   "[遅延] 設定を表示します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SETTINGS_SHOW_CORE,
   "[コア] を表示"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SETTINGS_SHOW_CORE,
   "[コア] 設定を表示します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SETTINGS_SHOW_CONFIGURATION,
   "[構成] を表示"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SETTINGS_SHOW_CONFIGURATION,
   "[構成] 設定を表示します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SETTINGS_SHOW_SAVING,
   "[保存] を表示"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SETTINGS_SHOW_SAVING,
   "[保存] 設定を表示します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SETTINGS_SHOW_LOGGING,
   "[ログ] を表示"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SETTINGS_SHOW_LOGGING,
   "[ログ] 設定を表示します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SETTINGS_SHOW_FILE_BROWSER,
   "[ファイルブラウザ] を表示"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SETTINGS_SHOW_FILE_BROWSER,
   "[ファイルブラウザ] 設定を表示します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SETTINGS_SHOW_FRAME_THROTTLE,
   "[フレーム制御] を表示"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SETTINGS_SHOW_FRAME_THROTTLE,
   "[フレーム制御] 設定を表示します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SETTINGS_SHOW_RECORDING,
   "[録画] を表示"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SETTINGS_SHOW_RECORDING,
   "[録画] 設定を表示します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SETTINGS_SHOW_ONSCREEN_DISPLAY,
   "[OSD ディスプレイ] を表示"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SETTINGS_SHOW_ONSCREEN_DISPLAY,
   "[OSD ディスプレイ] 設定を表示します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SETTINGS_SHOW_USER_INTERFACE,
   "[ユーザーインタフェース] を表示"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SETTINGS_SHOW_USER_INTERFACE,
   "[ユーザーインタフェース] 設定を表示します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SETTINGS_SHOW_AI_SERVICE,
   "[AIサービス] を表示"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SETTINGS_SHOW_AI_SERVICE,
   "[AI サービス] 設定を表示します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SETTINGS_SHOW_ACCESSIBILITY,
   "[ユーザー補助] を表示"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SETTINGS_SHOW_ACCESSIBILITY,
   "[ユーザー補助] 設定を表示します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SETTINGS_SHOW_POWER_MANAGEMENT,
   "[電源管理] を表示"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SETTINGS_SHOW_POWER_MANAGEMENT,
   "[電源管理] 設定を表示します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SETTINGS_SHOW_ACHIEVEMENTS,
   "[実績] を表示"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SETTINGS_SHOW_ACHIEVEMENTS,
   "[実績] 設定を表示します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SETTINGS_SHOW_NETWORK,
   "[ネットワーク] を表示"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SETTINGS_SHOW_NETWORK,
   "[ネットワーク] 設定を表示します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SETTINGS_SHOW_PLAYLISTS,
   "[プレイリスト] を表示"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SETTINGS_SHOW_PLAYLISTS,
   "[プレイリスト] 設定を表示します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SETTINGS_SHOW_USER,
   "[ユーザー] を表示"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SETTINGS_SHOW_USER,
   "[ユーザー] 設定を表示します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SETTINGS_SHOW_DIRECTORY,
   "[ディレクトリ] を表示"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SETTINGS_SHOW_DIRECTORY,
   "[ディレクトリ] 設定を表示します。"
   )

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SETTINGS_SHOW_STEAM,
   "[Steam] を表示"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SETTINGS_SHOW_STEAM,
   "[Steam] 設定を表示します。"
   )

/* Settings > User Interface > Appearance */

MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_SCALE_FACTOR,
   "メニュー内でのユーザインタフェース部品のサイズを調整します."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_WALLPAPER,
   "背景画像"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_WALLPAPER_OPACITY,
   "壁紙の不透明度"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_WALLPAPER_OPACITY,
   "背景画像の透明度を変更します."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_FRAMEBUFFER_OPACITY,
   "透明度"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_FRAMEBUFFER_OPACITY,
   "デフォルトのメニュー背景の透明度を変更します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_USE_PREFERRED_SYSTEM_COLOR_THEME,
   "システムの優先色テーマを使用"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_USE_PREFERRED_SYSTEM_COLOR_THEME,
   "(もしあれば)システムのカラーテーマを使用します. テーマ設定を上書きします."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_THUMBNAILS,
   "プライマリーサムネイル"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_THUMBNAILS,
   "表示するサムネイルの種類です。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_THUMBNAIL_UPSCALE_THRESHOLD,
   "サムネイル拡大しきい値"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_THUMBNAIL_UPSCALE_THRESHOLD,
   "指定された値より小さい幅/高さのサムネイル画像を自動的に拡大します. 画質を改善します. 中程度のパフォーマンスへの影響があります. "
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_TICKER_TYPE,
   "ティッカーテキストのアニメーション"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_TICKER_TYPE,
   "メニューに長い文字列を表示するときの水平スクロール方式を選択します."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_TICKER_SPEED,
   "ティッカーテキストの速度"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_TICKER_SPEED,
   "メニューに長い文字列を表示するときのアニメーション速度です."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_TICKER_SMOOTH,
   "ティッカーテキストのスムージング"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_TICKER_SMOOTH,
   "長いテキスト文字列を表示するときのスクロールをスムーズにします. パフォーマンスに少し影響します."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_REMEMBER_SELECTION,
   "タブを変更したときの選択を記憶する"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_REMEMBER_SELECTION_ALWAYS,
   "常に"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_REMEMBER_SELECTION_PLAYLISTS,
   "プレイリストのみ"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_REMEMBER_SELECTION_MAIN,
   "メインメニューと設定のみ"
   )

/* Settings > AI Service */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AI_SERVICE_MODE,
   "AIサービス出力"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AI_SERVICE_URL,
   "AI サービス URL"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_AI_SERVICE_URL,
   "翻訳サービスに使用するURLです。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AI_SERVICE_ENABLE,
   "AIサービス有効"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_AI_SERVICE_ENABLE,
   "AIサービスのホットキーを押したときにAIサービスの実行を有効にします。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AI_SERVICE_PAUSE,
   "翻訳中に一時停止"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_AI_SERVICE_PAUSE,
   "画面の翻訳中にコアを一時停止します."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AI_SERVICE_SOURCE_LANG,
   "翻訳対象の言語"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_AI_SERVICE_SOURCE_LANG,
   "サービスを利用して翻訳する対象の言語です. 'デフォルト'に設定している場合, 自動検出を試みます. 適切に言語を設定すれば, 翻訳の精度が向上します."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AI_SERVICE_TARGET_LANG,
   "翻訳したあとの言語"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_AI_SERVICE_TARGET_LANG,
   "サービスを利用して翻訳したあとの言語です. 'デフォルト' は英語です."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AI_SERVICE_TEXT_PADDING,
   "AI サービステキスト余白 (%)"
   )

/* Settings > Accessibility */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ACCESSIBILITY_ENABLED,
   "ユーザー補助を有効"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_ACCESSIBILITY_ENABLED,
   "メニュー操作時にテキスト読み上げを有効にします."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ACCESSIBILITY_NARRATOR_SPEECH_SPEED,
   "テキスト読み上げ速度"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_ACCESSIBILITY_NARRATOR_SPEECH_SPEED,
   "テキスト読み上げ音声の速度."
   )

/* Settings > Power Management */

/* Settings > Achievements */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEEVOS_ENABLE,
   "実績"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEEVOS_ENABLE,
   "クラシックゲームで実績を獲得しましょう. 詳細については, 'https://retroachievements.org' をご覧ください."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEEVOS_HARDCORE_MODE_ENABLE,
   "ハードコアモード"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEEVOS_LEADERBOARDS_ENABLE,
   "ランキング"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEEVOS_RICHPRESENCE_ENABLE,
   "詳細なプレゼンス"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEEVOS_BADGES_ENABLE,
   "実績バッジ"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEEVOS_BADGES_ENABLE,
   "実績リスト中のバッジを表示します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEEVOS_TEST_UNOFFICIAL,
   "非公式実績をテスト"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEEVOS_TEST_UNOFFICIAL,
   "非公式実績/ベータ機能をテスト目的で有効または無効にします。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEEVOS_UNLOCK_SOUND_ENABLE,
   "ロック解除音"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEEVOS_UNLOCK_SOUND_ENABLE,
   "実績を獲得したときにサウンドを再生します."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEEVOS_AUTO_SCREENSHOT,
   "自動スクリーンショット"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEEVOS_AUTO_SCREENSHOT,
   "実績を獲得したときに自動的にスクリーンショットを撮ります."
   )

/* Settings > Achievements > Appearance */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEEVOS_APPEARANCE_SETTINGS,
   "外観"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEEVOS_APPEARANCE_SETTINGS,
   "OSD 実績通知の位置とオフセットを変更します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEEVOS_APPEARANCE_ANCHOR,
   "位置"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEEVOS_APPEARANCE_ANCHOR_TOPLEFT,
   "左上"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEEVOS_APPEARANCE_ANCHOR_TOPCENTER,
   "中央上"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEEVOS_APPEARANCE_ANCHOR_TOPRIGHT,
   "右上"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEEVOS_APPEARANCE_ANCHOR_BOTTOMLEFT,
   "左下"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEEVOS_APPEARANCE_ANCHOR_BOTTOMCENTER,
   "中央下"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEEVOS_APPEARANCE_ANCHOR_BOTTOMRIGHT,
   "右下"
   )

/* Settings > Achievements > Visibility */

MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEEVOS_VISIBILITY_SETTINGS,
   "どのメッセージや OSD 要素を表示するかを変更します。機能を無効にしません。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEEVOS_VISIBILITY_ACCOUNT,
   "ログインメッセージ"
   )

/* Settings > Network */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_PUBLIC_ANNOUNCE,
   "ネットプレイの公開アナウンス"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NETPLAY_PUBLIC_ANNOUNCE,
   "ゲームのネットプレイを一般公開します. 設定しない場合, クライアントは手動接続が必要です. "
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_USE_MITM_SERVER,
   "中継サーバーを使用"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NETPLAY_USE_MITM_SERVER,
   "中継サーバーを介してネットプレイ接続を転送します。ホストがファイアウォールの内側にある場合や、NAT/UPnP の問題がある場合に役立ちます。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_MITM_SERVER,
   "中継サーバーの場所"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NETPLAY_MITM_SERVER,
   "使用する特定の中継サーバーを選択します。地理的に近い位置であれば低遅延となる傾向があります。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_CUSTOM_MITM_SERVER,
   "カスタム中継サーバーアドレス"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_MITM_SERVER_LOCATION_1,
   "北米 (東海岸, アメリカ)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_MITM_SERVER_LOCATION_2,
   "西ヨーロッパ"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_MITM_SERVER_LOCATION_3,
   "南アメリカ (南東, ブラジル)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_MITM_SERVER_LOCATION_4,
   "東南アジア"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_MITM_SERVER_LOCATION_CUSTOM,
   "カスタム"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_IP_ADDRESS,
   "サーバー IP アドレス"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NETPLAY_IP_ADDRESS,
   "接続するホストのアドレスです。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_TCP_UDP_PORT,
   "ネットプレイ TCP ポート"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NETPLAY_TCP_UDP_PORT,
   "ホスト IP アドレスのポートです。TCP または UDP のいずれかを指定できます。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_MAX_CONNECTIONS,
   "最大同時接続数"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_MAX_PING,
   "Ping 制限"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NETPLAY_MAX_PING,
   "ホストが受け入れる最大接続遅延 (ping) です。無制限にする場合は 0 に設定します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_PASSWORD,
   "サーバーパスワード"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NETPLAY_PASSWORD,
   "ホストに接続しているクライアントが使用するパスワード."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_SPECTATE_PASSWORD,
   "サーバー観覧パスワード"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NETPLAY_SPECTATE_PASSWORD,
   "視聴者としてホストに接続するクライアントが使用するパスワード."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_START_AS_SPECTATOR,
   "ネットプレイの観覧モード"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NETPLAY_START_AS_SPECTATOR,
   "視聴モードでネットプレイを開始します."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_ALLOW_SLAVES,
   "スレーブモードのクライアントを許可"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NETPLAY_ALLOW_SLAVES,
   "スレーブモードでの接続を許可します. スレーブモードのクライアントはどちら側にもほとんど処理能力を必要としませんが, ネットワークの遅延に大きく影響を受けます."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_REQUIRE_SLAVES,
   "スレーブモードのクライアント以外を拒否"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NETPLAY_REQUIRE_SLAVES,
   "スレーブモードでの接続を禁止します. 非常に弱いマシンがある非常に高速なネットワーク以外では推奨されません."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_CHECK_FRAMES,
   "ネットプレイのチェックフレーム"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NETPLAY_CHECK_FRAMES,
   "ネットプレイ時にホストとクライアントが同期しているかどうかを確認する頻度(フレーム数)です."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_INPUT_LATENCY_FRAMES_MIN,
   "入力遅延フレーム数"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NETPLAY_INPUT_LATENCY_FRAMES_MIN,
   "ネットワーク遅延を隠すために使用する, ネットプレイ中の入力遅延のフレーム数です. 顕著な入力の遅れを犠牲にして, ジッタを減らし, CPUの負担を軽減します. "
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_INPUT_LATENCY_FRAMES_RANGE,
   "入力遅延フレーム範囲"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NETPLAY_INPUT_LATENCY_FRAMES_RANGE,
   "ネットワーク遅延を隠すために使用される可能性がある入力遅延フレームの範囲です. 予期しない入力遅延を犠牲にして, ジッタを減らし, ネットプレイのCPU使用率を減らします. "
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_NAT_TRAVERSAL,
   "ネットプレイのNAT通過"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NETPLAY_NAT_TRAVERSAL,
   "ホスティングするときは, LANから逃れるためにUPnPまたはそれに類似した技術を使用して, 公衆インターネットからの接続待ち受けを試みます。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_SHARE_DIGITAL,
   "デジタル入力を共有"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_REQUEST_DEVICE_I,
   "デバイス'%u'を要求する"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NETPLAY_REQUEST_DEVICE_I,
   "指定された入力デバイスでプレイすることを要求します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETWORK_CMD_ENABLE,
   "ネットワークコマンドを有効"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETWORK_CMD_PORT,
   "ネットワークコマンドのポート"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETWORK_REMOTE_ENABLE,
   "ネットワークレトロパッド"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETWORK_REMOTE_PORT,
   "ネットワークレトロパッドの基底ポート番号"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETWORK_USER_REMOTE_ENABLE,
   "ユーザー %d ネットワークのレトロパッド"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_STDIN_CMD_ENABLE,
   "stdinコマンド"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_STDIN_CMD_ENABLE,
   "stdinコマンドインタフェースを有効にします。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETWORK_ON_DEMAND_THUMBNAILS,
   "オンデマンドでのサムネイルダウンロード"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NETWORK_ON_DEMAND_THUMBNAILS,
   "再生リストの閲覧中に, 欠落しているサムネイルを自動的にダウンロードします. パフォーマンスに大きな影響を与えます. "
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_UPDATER_SETTINGS,
   "アップデータ設定"
   )

/* Settings > Network > Updater */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_UPDATER_BUILDBOT_URL,
   "Buildbot コア URL"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CORE_UPDATER_BUILDBOT_URL,
   "Libretro buildbot上のコアアップデータディレクトリを示すURLです."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_BUILDBOT_ASSETS_URL,
   "Buildbot アセット URL"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_BUILDBOT_ASSETS_URL,
   "Libretro buildbot上のアセットアップデータディレクトリを示すURLです."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_UPDATER_AUTO_EXTRACT_ARCHIVE,
   "ダウンロードしたアーカイブを自動展開"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CORE_UPDATER_AUTO_EXTRACT_ARCHIVE,
   "ダウンロード後, ダウンロードしたコンテンツが含まれるアーカイブを自動的に展開します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_UPDATER_SHOW_EXPERIMENTAL_CORES,
   "実験的なコアを表示"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CORE_UPDATER_SHOW_EXPERIMENTAL_CORES,
   "コアダウンローダリストに'実験的な'コアを含めます. これらは通常, 開発/テストのみを目的としており, 一般的な使用には推奨されません."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_UPDATER_AUTO_BACKUP,
   "更新時にコアをバックアップ"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CORE_UPDATER_AUTO_BACKUP,
   "オンラインアップデートを実行するときに, インストールされているコアのバックアップを自動的に作成します. 更新で問題が発生した場合, 動作するコアに簡単に戻せるようになります."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_UPDATER_AUTO_BACKUP_HISTORY_SIZE,
   "コアバックアップ履歴サイズ"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CORE_UPDATER_AUTO_BACKUP_HISTORY_SIZE,
   "インストールされているコアごとに自動生成されるバックアップの数を指定します. この制限に達すると, オンラインアップデートを介して新しいバックアップを作成したときに最も古いバックアップが削除されます. 手動でのコアバックアップはこの設定の影響を受けません."
   )

/* Settings > Playlists */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_HISTORY_LIST_ENABLE,
   "履歴"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_HISTORY_LIST_ENABLE,
   "最近使ったファイル履歴を有効または無効にします。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONTENT_HISTORY_SIZE,
   "履歴のサイズ"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CONTENT_HISTORY_SIZE,
   "最近使ったファイル履歴の最大保存件数を設定します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONTENT_FAVORITES_SIZE,
   "お気に入りのサイズ"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_ENTRY_RENAME,
   "項目の名前変更を許可"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_PLAYLIST_ENTRY_RENAME,
   "プレイリスト項目の名前変更を許可します."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_ENTRY_REMOVE,
   "項目の削除を許可"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_PLAYLIST_ENTRY_REMOVE,
   "プレイリスト項目の削除を許可します."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_SORT_ALPHABETICAL,
   "アルファベット順に並び替え"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_PLAYLIST_SORT_ALPHABETICAL,
   "'履歴', '画像', '音楽', '動画'を除き, プレイリストをアルファベット順に並べ替えます."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_USE_OLD_FORMAT,
   "古いフォーマットで保存"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_PLAYLIST_USE_OLD_FORMAT,
   "非推奨のプレーンテキスト形式でプレイリストを書き込みます. 無効にすると, プレイリストはJSON形式でフォーマットされます."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_COMPRESSION,
   "プレイリストを圧縮"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_PLAYLIST_COMPRESSION,
   "ディスクに書き込むときにプレイリストデータをアーカイブします. CPU使用率が上昇しますがファイルサイズと読み込み時間を短縮できます. 古い形式と新しい形式のどちらのプレイリストでも使用できます."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_SHOW_INLINE_CORE_NAME,
   "関連付けられたコアを表示"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_PLAYLIST_SHOW_INLINE_CORE_NAME,
   "(もしあれば)プレイリスト中の項目に関連付けられているコアを表示します.\nプレイリストのサブラベル表示が有効になっている場合, この設定は無視されます."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_SHOW_SUBLABELS,
   "サブラベルを表示"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_PLAYLIST_SHOW_SUBLABELS,
   "(可能であれば)現在のコア関連付けやプレイ記録など, 各プレイリスト項目の追加情報を表示します. パフォーマンスに影響があります."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_SUBLABEL_CORE,
   "コア:"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_SUBLABEL_RUNTIME,
   "プレイ時間:"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_SUBLABEL_LAST_PLAYED,
   "最終プレイ日時:"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TIME_UNIT_SECONDS_SINGLE,
   "秒"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TIME_UNIT_SECONDS_PLURAL,
   "秒"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TIME_UNIT_MINUTES_SINGLE,
   "分"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TIME_UNIT_MINUTES_PLURAL,
   "分"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TIME_UNIT_HOURS_SINGLE,
   "時間"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TIME_UNIT_HOURS_PLURAL,
   "時間"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TIME_UNIT_DAYS_SINGLE,
   "日"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TIME_UNIT_DAYS_PLURAL,
   "日"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TIME_UNIT_WEEKS_SINGLE,
   "週"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TIME_UNIT_WEEKS_PLURAL,
   "週"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TIME_UNIT_MONTHS_SINGLE,
   "月"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TIME_UNIT_MONTHS_PLURAL,
   "月"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TIME_UNIT_YEARS_SINGLE,
   "年"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TIME_UNIT_YEARS_PLURAL,
   "年"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TIME_UNIT_AGO,
   "前"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_SHOW_ENTRY_IDX,
   "プレイリストの項目にインデックス番号を表示"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_PLAYLIST_SHOW_ENTRY_IDX,
   "プレイリストを表示するときに各項目のインデックス番号を表示します. 表示形式は現在選択されているメニュードライバによって異なります."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_SUBLABEL_RUNTIME_TYPE,
   "プレイ記録の種類"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_PLAYLIST_SUBLABEL_RUNTIME_TYPE,
   "サブラベルに表示するプレイ記録の種類を選択します.\n対応するプレイ記録は'保存'オプションメニューで有効にする必要があります."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_SUBLABEL_LAST_PLAYED_STYLE,
   "'最終プレイ日時'の日付/時刻形式"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_PLAYLIST_SUBLABEL_LAST_PLAYED_STYLE,
   "'最終プレイ日時'を表示する日付と時刻の形式を指定します. '(午前/午後)'オプションは, 一部のプラットフォームではパフォーマンスに少し影響します."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_FUZZY_ARCHIVE_MATCH,
   "アーカイブのファジーマッチング"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_PLAYLIST_FUZZY_ARCHIVE_MATCH,
   "圧縮ファイルに関連付けられた項目をプレイリストで検索するときは, 'ファイル名'+'内容'ではなく, アーカイブファイル名のみを一致させます. 圧縮ファイルをロードするときに重複するコンテンツ履歴項目を避けるためにこれを有効にしてください."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SCAN_WITHOUT_CORE_MATCH,
   "スキャン時にコアのマッチングをしない"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SCAN_WITHOUT_CORE_MATCH,
   "サポートするコアがインストールされていないコンテンツを, スキャン対象としてプレイリストに追加します."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_MANAGER_LIST,
   "プレイリストの管理"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_PLAYLIST_MANAGER_LIST,
   "プレイリストに対する管理タスクを実行します."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_PORTABLE_PATHS,
   "ポータブルプレイリスト"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_PLAYLIST_PORTABLE_PATHS,
   "有効にすると, 'ファイルブラウザ'ディレクトリも選択され, 現在の'ファイルブラウザ'の値がプレイリストに保存されます. 同じオプションが有効な別のシステムにプレイリストがロードされている場合, 'ファイルブラウザ'の値とプレイリストの値を比較します. それらが異なる場合, プレイリスト項目のパスは自動的に修正されます."
   )
   
/* Settings > Playlists > Playlist Management */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_MANAGER_DEFAULT_CORE,
   "デフォルトのコア"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_PLAYLIST_MANAGER_DEFAULT_CORE,
   "プレイリスト項目を介してコア関連付けを持たないコンテンツを起動するときに使用するコアを指定します. "
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_MANAGER_RESET_CORES,
   "コアの関連付けをリセット"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_PLAYLIST_MANAGER_RESET_CORES,
   "全項目のコアの関連付けをリセットします."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_MANAGER_LABEL_DISPLAY_MODE,
   "ラベルの表示モード"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_PLAYLIST_MANAGER_LABEL_DISPLAY_MODE,
   "プレイリスト内でのコンテンツラベルの表示方式を変更します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_MANAGER_SORT_MODE,
   "並べ替え方法"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_PLAYLIST_MANAGER_SORT_MODE,
   "このプレイリストでの項目の並べ替え方法を決定します."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_MANAGER_CLEAN_PLAYLIST,
   "プレイリストをクリーニング"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_PLAYLIST_MANAGER_CLEAN_PLAYLIST,
   "コアの関連付けを検証し, 無効または重複した項目を削除します."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DELETE_PLAYLIST,
   "プレイリストを削除"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_DELETE_PLAYLIST,
   "ファイルシステムからプレイリストを削除します. "
   )

/* Settings > User */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PRIVACY_SETTINGS,
   "プライバシー"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_PRIVACY_SETTINGS,
   "プライバシー設定を変更します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ACCOUNTS_LIST,
   "アカウント"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_ACCOUNTS_LIST,
   "現在設定されているアカウントを管理します."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_NICKNAME,
   "ユーザー名"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NETPLAY_NICKNAME,
   "ネットプレイで使用するニックネームです。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_USER_LANGUAGE,
   "言語"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_USER_LANGUAGE,
   "ユーザインタフェースの言語を指定します."
   )

/* Settings > User > Privacy */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CAMERA_ALLOW,
   "カメラの使用を許可"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CAMERA_ALLOW,
   "コアがカメラを利用することを許可します."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DISCORD_ALLOW,
   "Discordを有効"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_DISCORD_ALLOW,
   "Discordアプリに再生されたコンテンツのデータを表示することを許可します.\nネイティブデスクトップクライアントでのみ使用できます."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LOCATION_ALLOW,
   "位置情報の使用を許可"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_LOCATION_ALLOW,
   "コアが位置情報を利用することを許可します."
   )

/* Settings > User > Accounts */

MSG_HASH(
   MENU_ENUM_SUBLABEL_ACCOUNTS_RETRO_ACHIEVEMENTS,
   "クラシックゲームで実績を獲得しましょう. 詳細については, 'https://retroachievements.org' をご覧ください."
   )

/* Settings > User > Accounts > RetroAchievements */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ACCOUNTS_CHEEVOS_USERNAME,
   "ユーザ名"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEEVOS_USERNAME,
   "RetroAchievements のアカウントユーザー名を入力してください."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ACCOUNTS_CHEEVOS_PASSWORD,
   "パスワード"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEEVOS_PASSWORD,
   "RetroAchievementsアカウントのパスワードを入力してください。最大長：255文字"
   )

/* Settings > User > Accounts > YouTube */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_YOUTUBE_STREAM_KEY,
   "YouTube ストリームキー"
   )

/* Settings > User > Accounts > Twitch */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TWITCH_STREAM_KEY,
   "Twitch 配信キー"
   )

/* Settings > User > Accounts > Facebook Gaming */


/* Settings > Directory */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_DIRECTORY,
   "システム/BIOS"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SYSTEM_DIRECTORY,
   "BIOS、ブート ROM、システム固有のファイルなどはこのディレクトリに保存されます。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_ASSETS_DIRECTORY,
   "ダウンロード"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CORE_ASSETS_DIRECTORY,
   "ダウンロードしたファイルはこのディレクトリに保存されます。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ASSETS_DIRECTORY,
   "アセット"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_ASSETS_DIRECTORY,
   "RetroArch が使用するメニューアセットはこのディレクトリに保存されます。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DYNAMIC_WALLPAPERS_DIRECTORY,
   "ダイナミック壁紙"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_DYNAMIC_WALLPAPERS_DIRECTORY,
   "メニュー内で使用される背景画像はこのディレクトリに保存されます。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_THUMBNAILS_DIRECTORY,
   "サムネイル"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_THUMBNAILS_DIRECTORY,
   "ボックスアート、スクリーンショット、タイトル画面のサムネイルはこのディレクトリに保存されます。"
   )
MSG_HASH( /* FIXME Not RGUI specific */
   MENU_ENUM_LABEL_VALUE_RGUI_BROWSER_DIRECTORY,
   "ファイルブラウザ"
   )
MSG_HASH( /* FIXME Not RGUI specific */
   MENU_ENUM_SUBLABEL_RGUI_BROWSER_DIRECTORY,
   "ファイルブラウザの開始ディレクトリを設定します."
   )
MSG_HASH( /* FIXME Not RGUI specific */
   MENU_ENUM_LABEL_VALUE_RGUI_CONFIG_DIRECTORY,
   "構成"
   )
MSG_HASH( /* FIXME Not RGUI specific */
   MENU_ENUM_SUBLABEL_RGUI_CONFIG_DIRECTORY,
   "メニュー設定ブラウザの開始ディレクトリを設定します."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LIBRETRO_DIR_PATH,
   "コア"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_LIBRETRO_DIR_PATH,
   "Libretro コアはこのディレクトリに保存されます。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LIBRETRO_INFO_PATH,
   "コア情報"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_LIBRETRO_INFO_PATH,
   "アプリケーション/コア情報ファイルはこのディレクトリに保存されます。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONTENT_DATABASE_DIRECTORY,
   "データベース"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CONTENT_DATABASE_DIRECTORY,
   "データベースはこのディレクトリに保存されます。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_DATABASE_PATH,
   "チートファイル"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEAT_DATABASE_PATH,
   "チートファイルはこのディレクトリに保存されます。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_FILTER_DIR,
   "ビデオフィルタ"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_FILTER_DIR,
   "CPU ベースのビデオフィルターはこのディレクトリに保存されます。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AUDIO_FILTER_DIR,
   "オーディオフィルター"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_AUDIO_FILTER_DIR,
   "オーディオ DSP フィルタはこのディレクトリに保存されます。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_SHADER_DIR,
   "ビデオシェーダ"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_SHADER_DIR,
   "GPU ベースのビデオフィルターはこのディレクトリに保存されます。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RECORDING_OUTPUT_DIRECTORY,
   "録画"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_RECORDING_OUTPUT_DIRECTORY,
   "録画はこのディレクトリに保存されます。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RECORDING_CONFIG_DIRECTORY,
   "録画構成"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_RECORDING_CONFIG_DIRECTORY,
   "録画構成はこのディレクトリに保存されます。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OVERLAY_DIRECTORY,
   "オーバーレイ"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_OVERLAY_DIRECTORY,
   "オーバーレイはこのディレクトリに保存されます。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OSK_OVERLAY_DIRECTORY,
   "キーボードオーバーレイ"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_OSK_OVERLAY_DIRECTORY,
   "キーボードオーバーレイはこのディレクトリに保存されます。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_LAYOUT_DIRECTORY,
   "ビデオレイアウト"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_LAYOUT_DIRECTORY,
   "ビデオレイアウトはこのディレクトリに保存されます。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SCREENSHOT_DIRECTORY,
   "スクリーンショット"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SCREENSHOT_DIRECTORY,
   "スクリーンショットはこのディレクトリに保存されます。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_JOYPAD_AUTOCONFIG_DIR,
   "コントローラープロファイル"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_JOYPAD_AUTOCONFIG_DIR,
   "コントローラーを自動構成するためのコントローラープロファイルはこのディレクトリに保存されます。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_REMAPPING_DIRECTORY,
   "入力リマップ"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_REMAPPING_DIRECTORY,
   "入力リマップはこのディレクトリに保存されます."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_DIRECTORY,
   "プレイリスト"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_PLAYLIST_DIRECTORY,
   "プレイリストはこのディレクトリに保存されます。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONTENT_FAVORITES_DIRECTORY,
   "お気に入りプレイリスト"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CONTENT_FAVORITES_DIRECTORY,
   "お気に入りプレイリストはこのディレクトリに保存されます。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONTENT_HISTORY_DIRECTORY,
   "履歴プレイリスト"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CONTENT_HISTORY_DIRECTORY,
   "履歴プレイリストはこのディレクトリに保存されます。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONTENT_IMAGE_HISTORY_DIRECTORY,
   "画像プレイリスト"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CONTENT_IMAGE_HISTORY_DIRECTORY,
   "画像履歴プレイリストはこのディレクトリに保存されます。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONTENT_MUSIC_HISTORY_DIRECTORY,
   "音楽プレイリスト"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CONTENT_MUSIC_HISTORY_DIRECTORY,
   "音楽プレイリストはこのディレクトリに保存されます。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONTENT_VIDEO_HISTORY_DIRECTORY,
   "動画プレイリスト"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CONTENT_VIDEO_HISTORY_DIRECTORY,
   "動画プレイリストはこのディレクトリに保存されます。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RUNTIME_LOG_DIRECTORY,
   "実行時ログ"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_RUNTIME_LOG_DIRECTORY,
   "実行時ログはこのディレクトリに保存されます。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SAVEFILE_DIRECTORY,
   "セーブファイル"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SAVEFILE_DIRECTORY,
   "このディレクトリにすべてのセーブファイルを保存します。設定されていない場合は、コンテンツファイルの作業ディレクトリに保存を試みます。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_SAVEFILE_DIRECTORY,
   "このディレクトリにすべてのセーブファイル (*.srm) を保存します。これには .rt、.psrm などの関連ファイルが含まれます。これは明示的なコマンドラインオプションで上書きされます。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SAVESTATE_DIRECTORY,
   "ステートセーブ"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SAVESTATE_DIRECTORY,
   "ステートセーブとリプレイはこのディレクトリに保存されます。設定されていない場合、コンテンツがあるディレクトリに保存を試みます。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CACHE_DIRECTORY,
   "キャッシュ"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CACHE_DIRECTORY,
   "アーカイブされたコンテンツは一時的にこのディレクトリに展開されます。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LOG_DIR,
   "システムイベントログ"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_LOG_DIR,
   "システムイベントログはこのディレクトリに保存されます."
   )

#ifdef HAVE_MIST
/* Settings > Steam */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_STEAM_RICH_PRESENCE_ENABLE,
   "Rich Presence を有効にする"
   )

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_STEAM_RICH_PRESENCE_FORMAT,
   "Rich Presence コンテンツ形式"
   )

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_STEAM_RICH_PRESENCE_FORMAT_CONTENT,
   "コンテンツ"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_STEAM_RICH_PRESENCE_FORMAT_CORE,
   "コアの名前"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_STEAM_RICH_PRESENCE_FORMAT_SYSTEM,
   "システム名"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_STEAM_RICH_PRESENCE_FORMAT_CONTENT_SYSTEM,
   "コンテンツ (システム名)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_STEAM_RICH_PRESENCE_FORMAT_CONTENT_CORE,
   "コンテンツ (コア名)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_STEAM_RICH_PRESENCE_FORMAT_CONTENT_SYSTEM_CORE,
   "コンテンツ (システム名 - コア名)"
   )
#endif

/* Music */

/* Music > Quick Menu */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ADD_TO_MIXER,
   "ミキサーに追加"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_ADD_TO_MIXER,
   "このオーディオトラックを利用可能なオーディオストリームスロットに追加します.\n空きスロットが存在しない場合は無視されます."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ADD_TO_MIXER_AND_PLAY,
   "ミキサーに追加して再生"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_ADD_TO_MIXER_AND_PLAY,
   "このオーディオトラックを利用可能なオーディオストリームスロットに追加して再生します.\n空きスロットが存在しない場合は無視されます."
   )

/* Netplay */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETWORK_HOSTING_SETTINGS,
   "ホスト"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_ENABLE_CLIENT,
   "ネットプレイホストに接続"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NETPLAY_ENABLE_CLIENT,
   "ネットプレイサーバーアドレスを入力し、クライアントモードで接続します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_DISCONNECT,
   "ネットプレイホストから切断"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NETPLAY_DISCONNECT,
   "アクティブなネットプレイ接続を切断します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_LOBBY_FILTERS,
   "ロビーフィルター"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_SHOW_ONLY_CONNECTABLE,
   "接続可能な部屋のみ"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_SHOW_ONLY_INSTALLED_CORES,
   "インストール済みのコアのみ"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_SHOW_PASSWORDED,
   "パスワード付きルーム"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_REFRESH_ROOMS,
   "ネットプレイのホスト一覧を更新"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NETPLAY_REFRESH_ROOMS,
   "ネットプレイホストをスキャンします。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_REFRESH_LAN,
   "ネットプレイ LAN リストを更新"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NETPLAY_REFRESH_LAN,
   "LAN 上のネットプレイホストをスキャンします。"
   )

/* Netplay > Host */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_ENABLE_HOST,
   "ネットプレイホストを開始"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NETPLAY_ENABLE_HOST,
   "ホスト (サーバー) モードでネットプレイを開始します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_DISABLE_HOST,
   "ネットプレイホストを停止"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_KICK,
   "クライアントをキック"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NETPLAY_KICK,
   "現在ホストしている部屋からクライアントをキックします。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_BAN,
   "クライアントを BAN"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NETPLAY_BAN,
   "現在ホストしている部屋からクライアントを BAN します。"
   )

/* Import Content */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SCAN_DIRECTORY,
   "ディレクトリをスキャン"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SCAN_DIRECTORY,
   "データベースと一致するコンテンツがあるかディレクトリをスキャンします。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SCAN_THIS_DIRECTORY,
   "<このディレクトリをスキャン>"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SCAN_FILE,
   "ファイルをスキャン"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SCAN_FILE,
   "データベースと一致するコンテンツがあるかファイルをスキャンします。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MANUAL_CONTENT_SCAN_LIST,
   "手動スキャン"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MANUAL_CONTENT_SCAN_LIST,
   "コンテンツのファイル名に基づいた, 詳細設定可能なスキャンです. コンテンツはデータベースと一致している必要はありません."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SCAN_ENTRY,
   "スキャン"
   )

/* Import Content > Scan File */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ADD_TO_MIXER_AND_COLLECTION,
   "ミキサーに追加"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ADD_TO_MIXER_AND_COLLECTION_AND_PLAY,
   "ミキサーに追加して再生"
   )

/* Import Content > Manual Scan */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MANUAL_CONTENT_SCAN_DIR,
   "コンテンツディレクトリ"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MANUAL_CONTENT_SCAN_DIR,
   "コンテンツをスキャンするディレクトリを選択します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MANUAL_CONTENT_SCAN_SYSTEM_NAME,
   "システム名"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MANUAL_CONTENT_SCAN_SYSTEM_NAME,
   "スキャンしたコンテンツに関連付けるシステム名を指定します. 生成されたプレイリストファイルの名前として, またプレイリストサムネイルを識別するために使用されます."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MANUAL_CONTENT_SCAN_SYSTEM_NAME_CUSTOM,
   "カスタムシステム名"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MANUAL_CONTENT_SCAN_SYSTEM_NAME_CUSTOM,
   "スキャンしたコンテンツに使用するシステム名を手動で指定します. 'システム名'が<カスタム>に設定されている場合にのみ使用されます."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MANUAL_CONTENT_SCAN_CORE_NAME,
   "デフォルトのコア"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MANUAL_CONTENT_SCAN_CORE_NAME,
   "スキャンしたコンテンツを起動するときに使用するデフォルトのコアを選択します."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MANUAL_CONTENT_SCAN_FILE_EXTS,
   "ファイル拡張子"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MANUAL_CONTENT_SCAN_FILE_EXTS,
   "スキャンに含めるファイルタイプのリストです. スペースで区切ってください. 空の場合は, すべてのファイルタイプを含むか, コアが指定されている場合はそのコアでサポートされているすべてのファイルを含みます."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MANUAL_CONTENT_SCAN_SEARCH_RECURSIVELY,
   "再帰的にスキャン"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MANUAL_CONTENT_SCAN_SEARCH_RECURSIVELY,
   "有効にすると, 指定されたコンテンツディレクトリ下のすべてのサブディレクトリがスキャンされます."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MANUAL_CONTENT_SCAN_SEARCH_ARCHIVES,
   "アーカイブの内部をスキャン"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MANUAL_CONTENT_SCAN_SEARCH_ARCHIVES,
   "有効にすると, アーカイブ ファイル (.zip, .7zなど) が検索対象となります. スキャンのパフォーマンスに大きな影響を与える場合があります. "
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MANUAL_CONTENT_SCAN_DAT_FILE,
   "Arcade DAT ファイル"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MANUAL_CONTENT_SCAN_DAT_FILE,
   "Logiqx または MAME の リスト XML DATファイルを選択して, スキャンされたアーケードコンテンツ(MAME, FinalBurn Neoなど)の自動命名を有効にします."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MANUAL_CONTENT_SCAN_DAT_FILE_FILTER,
   "Arcade DAT フィルタ"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MANUAL_CONTENT_SCAN_OVERWRITE,
   "既存のプレイリストを上書き"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MANUAL_CONTENT_SCAN_OVERWRITE,
   "有効にすると, コンテンツをスキャンする前に既存のプレイリストが削除されます.  無効にすると, 既存のプレイリスト項目が保存され, 現在プレイリストから欠落しているコンテンツのみが追加されます. "
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MANUAL_CONTENT_SCAN_START,
   "スキャンを開始"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MANUAL_CONTENT_SCAN_START,
   "選択されたコンテンツをスキャンします。"
   )

/* Explore tab */
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_EXPLORE_INITIALISING_LIST,
   "リストを初期化中..."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_EXPLORE_CATEGORY_RELEASE_YEAR,
   "発売年"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_EXPLORE_CATEGORY_PLAYER_COUNT,
   "プレイヤー数"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_EXPLORE_CATEGORY_REGION,
   "地域"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_EXPLORE_CATEGORY_TAG,
   "タグ"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_EXPLORE_SEARCH_NAME,
   "名前で検索..."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_EXPLORE_SHOW_ALL,
   "すべて表示"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_EXPLORE_ADDITIONAL_FILTER,
   "追加フィルター"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_EXPLORE_ALL,
   "すべて"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_EXPLORE_ADD_ADDITIONAL_FILTER,
   "フィルターを追加"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_EXPLORE_ITEMS_COUNT,
   "%u 個"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_EXPLORE_BY_DEVELOPER,
   "開発元別"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_EXPLORE_BY_PUBLISHER,
   "販売元別"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_EXPLORE_BY_RELEASE_YEAR,
   "発売年別"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_EXPLORE_BY_PLAYER_COUNT,
   "プレイヤー数別"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_EXPLORE_BY_GENRE,
   "ジャンル別"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_EXPLORE_BY_ACHIEVEMENTS,
   "実績別"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_EXPLORE_BY_CATEGORY,
   "カテゴリー別"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_EXPLORE_BY_LANGUAGE,
   "言語別"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_EXPLORE_BY_REGION,
   "地域別"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_EXPLORE_BY_CONSOLE_EXCLUSIVE,
   "コンソール専用別"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_EXPLORE_BY_PLATFORM_EXCLUSIVE,
   "プラットフォーム専用別"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_EXPLORE_BY_RUMBLE,
   "振動別"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_EXPLORE_BY_SCORE,
   "スコア別"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_EXPLORE_BY_MEDIA,
   "メディア別"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_EXPLORE_BY_CONTROLS,
   "コントロール別"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_EXPLORE_BY_ARTSTYLE,
   "アートスタイル別"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_EXPLORE_BY_GAMEPLAY,
   "ゲームプレイ別"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_EXPLORE_BY_NARRATIVE,
   "ナラティブ別"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_EXPLORE_BY_PERSPECTIVE,
   "視点別"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_EXPLORE_BY_SETTING,
   "設定別"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_EXPLORE_BY_FRANCHISE,
   "フランチャイズ別"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_EXPLORE_BY_TAG,
   "タグ別"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_EXPLORE_BY_SYSTEM_NAME,
   "システム名別"
   )
MSG_HASH(
   MENU_ENUM_LABEL_EXPLORE_VIEW,
   "表示"
   )
MSG_HASH(
   MENU_ENUM_LABEL_EXPLORE_SAVE_VIEW,
   "ビューとして保存"
   )
MSG_HASH(
   MENU_ENUM_LABEL_EXPLORE_DELETE_VIEW,
   "このビューを削除"
   )
MSG_HASH(
   MENU_ENUM_LABEL_EXPLORE_NEW_VIEW,
   "新しいビューの名前を入力してください"
   )
MSG_HASH(
   MENU_ENUM_LABEL_EXPLORE_VIEW_EXISTS,
   "ビューは既に同じ名前で存在します"
   )
MSG_HASH(
   MENU_ENUM_LABEL_EXPLORE_VIEW_SAVED,
   "ビューが保存されました"
   )
MSG_HASH(
   MENU_ENUM_LABEL_EXPLORE_VIEW_DELETED,
   "ビューが削除されました"
   )

/* Playlist > Playlist Item */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RUN,
   "実行"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_RUN,
   "コンテンツを開始します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RENAME_ENTRY,
   "名前の変更"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_RENAME_ENTRY,
   "このエントリーのタイトルを変更します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DELETE_ENTRY,
   "削除"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_DELETE_ENTRY,
   "このエントリーをプレイリストから削除します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ADD_TO_FAVORITES_PLAYLIST,
   "お気に入りに追加"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_ADD_TO_FAVORITES_PLAYLIST,
   "[お気に入り] にコンテンツを追加します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SET_CORE_ASSOCIATION,
   "コアの関連付けを設定"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SET_CORE_ASSOCIATION,
   "このコンテンツに関連付けるコアを設定します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RESET_CORE_ASSOCIATION,
   "コアの関連付けをリセット"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_RESET_CORE_ASSOCIATION,
   "このコンテンツに関連付けられたコアをリセットします。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INFORMATION,
   "情報"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INFORMATION,
   "このコンテンツについての詳細を表示します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DOWNLOAD_PL_ENTRY_THUMBNAILS,
   "サムネイルをダウンロード"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_DOWNLOAD_PL_ENTRY_THUMBNAILS,
   "現在のコンテンツに対応するスクリーンショット/ボックスアート/タイトルスクリーンをダウンロードします. すでに存在するサムネイルがあれば更新します. "
   )

/* Playlist Item > Set Core Association */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DETECT_CORE_LIST_OK_CURRENT_CORE,
   "現在のコア"
   )

/* Playlist Item > Information */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONTENT_INFO_LABEL,
   "名前"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONTENT_INFO_PATH,
   "ファイルパス"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONTENT_INFO_ENTRY_IDX,
   "項目: %lu/%lu"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONTENT_INFO_CORE_NAME,
   "コア"
   )
MSG_HASH( /* FIXME Unused? */
   MENU_ENUM_LABEL_VALUE_CONTENT_INFO_RUNTIME,
   "プレイ時間"
   )
MSG_HASH( /* FIXME Unused? */
   MENU_ENUM_LABEL_VALUE_CONTENT_INFO_LAST_PLAYED,
   "最終プレイ日時"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONTENT_INFO_DATABASE,
   "データベース"
   )

/* Quick Menu */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RESUME_CONTENT,
   "再開"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_RESUME_CONTENT,
   "クイックメニューを閉じて現在動作中のアプリを再開します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RESTART_CONTENT,
   "再起動"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_RESTART_CONTENT,
   "コンテンツを最初から再起動します."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CLOSE_CONTENT,
   "コンテンツを閉じる"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CLOSE_CONTENT,
   "現在のコンテンツを終了します. 保存されていない変更は失われます."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TAKE_SCREENSHOT,
   "スクリーンショットを撮る"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_TAKE_SCREENSHOT,
   "画面をキャプチャします。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_STATE_SLOT,
   "ステートスロット"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_STATE_SLOT,
   "現在選択中のステートスロットを変更します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SAVE_STATE,
   "ステートセーブ"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SAVE_STATE,
   "現在選択中のスロットにゲームの進行状況を保存します."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LOAD_STATE,
   "ステートロード"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_LOAD_STATE,
   "現在選択中のスロットに保存されたゲームの進行状況をロードします."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_UNDO_LOAD_STATE,
   "ステートロードを取り消す"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_UNDO_LOAD_STATE,
   "ステートがロードされていた場合, コンテンツをロード前の状態に戻す。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_UNDO_SAVE_STATE,
   "ステートセーブを取り消す"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_UNDO_SAVE_STATE,
   "ステートが上書きされていた場合, 以前のステートセーブに戻します。"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_REPLAY_SLOT,
   "現在選択中のステートスロットを変更します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ADD_TO_FAVORITES,
   "お気に入りに追加"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_ADD_TO_FAVORITES,
   "[お気に入り] にコンテンツを追加します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QUICK_MENU_START_RECORDING,
   "録画を開始"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_QUICK_MENU_START_RECORDING,
   "録画を開始します."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QUICK_MENU_STOP_RECORDING,
   "録画を停止"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_QUICK_MENU_STOP_RECORDING,
   "録画を停止します."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QUICK_MENU_START_STREAMING,
   "配信を開始"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_QUICK_MENU_START_STREAMING,
   "選択した宛先に対して配信を開始します."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QUICK_MENU_STOP_STREAMING,
   "配信を停止"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_QUICK_MENU_STOP_STREAMING,
   "配信を終了します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SAVESTATE_LIST,
   "ステートセーブ"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_OPTIONS,
   "コアオプション"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CORE_OPTIONS,
   "現在動作中のコンテンツのオプションを変更します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_INPUT_REMAPPING_OPTIONS,
   "コントロール"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CORE_INPUT_REMAPPING_OPTIONS,
   "現在動作中のコンテンツのコントロールを変更します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_CHEAT_OPTIONS,
   "チート"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CORE_CHEAT_OPTIONS,
   "チートコードを設定します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DISK_OPTIONS,
   "ディスクコントロール"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_DISK_OPTIONS,
   "ディスクイメージの管理です。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SHADER_OPTIONS,
   "シェーダー"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SHADER_OPTIONS,
   "画像を視覚的に補強するシェーダーを設定します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QUICK_MENU_OVERRIDE_OPTIONS,
   "優先"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_QUICK_MENU_OVERRIDE_OPTIONS,
   "グローバル構成を一時的に上書きするためのオプションです。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ACHIEVEMENT_LIST,
   "実績"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_ACHIEVEMENT_LIST,
   "実績と関連する設定を表示します。"
   )

/* Quick Menu > Options */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_OPTION_OVERRIDE_LIST,
   "コアオプションの管理"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CORE_OPTION_OVERRIDE_LIST,
   "現在のコンテンツのオプション優先を保存または削除します。"
   )

/* Quick Menu > Options > Manage Core Options */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_GAME_SPECIFIC_CORE_OPTIONS_CREATE,
   "ゲームオプションを保存"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_GAME_SPECIFIC_CORE_OPTIONS_CREATE,
   "現在のコンテンツにのみ適用されるコアオプションを保存します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_GAME_SPECIFIC_CORE_OPTIONS_REMOVE,
   "ゲームオプションを削除"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_GAME_SPECIFIC_CORE_OPTIONS_REMOVE,
   "現在のコンテンツのみに適用されるコアオプションを削除します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_FOLDER_SPECIFIC_CORE_OPTIONS_CREATE,
   "コンテンツディレクトリオプションを保存"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_FOLDER_SPECIFIC_CORE_OPTIONS_CREATE,
   "現在のファイルと同じディレクトリからロードされるすべてのコンテンツに適用されるコアオプションを保存します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_FOLDER_SPECIFIC_CORE_OPTIONS_REMOVE,
   "コンテンツディレクトリオプションを削除"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_FOLDER_SPECIFIC_CORE_OPTIONS_REMOVE,
   "現在のファイルと同じディレクトリからロードされるすべてのコンテンツに適用されるコアオプションを削除します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_OPTION_OVERRIDE_INFO,
   "アクティブなオプションファイル"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CORE_OPTION_OVERRIDE_INFO,
   "現在使用中のオプションファイルです。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_OPTIONS_RESET,
   "オプションをリセット"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CORE_OPTIONS_RESET,
   "すべてのコアオプションをデフォルト値に設定します."
   )

/* - Legacy (unused) */
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_GAME_SPECIFIC_OPTIONS_CREATE,
   "ゲームオプションファイルを作成"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_GAME_SPECIFIC_OPTIONS_IN_USE,
   "ゲームオプションファイルを保存"
   )

/* Quick Menu > Controls */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_REMAP_FILE_MANAGER_LIST,
   "リマップファイルの管理"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_REMAP_FILE_MANAGER_LIST,
   "現在のコンテンツの入力リマップファイルをロード、保存、または削除します。"
   )

/* Quick Menu > Controls > Manage Remap Files */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_REMAP_FILE_INFO,
   "アクティブなリマップファイル"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_REMAP_FILE_INFO,
   "現在使用中のリマップファイルです。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_REMAP_FILE_LOAD,
   "リマップファイルをロード"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_REMAP_FILE_LOAD,
   "リマップファイルをロードして現在の入力マッピングを置き換えます。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_REMAP_FILE_SAVE_AS,
   "リマップファイルに名前を付けて保存"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_REMAP_FILE_SAVE_AS,
   "現在の入力マッピングを新しいリマップファイルとして保存します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_REMAP_FILE_SAVE_CORE,
   "コアリマップファイルを保存"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_REMAP_FILE_SAVE_CORE,
   "このコアでロードされるすべてのコンテンツに適用されるリマップファイルを保存します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_REMAP_FILE_REMOVE_CORE,
   "コアリマップファイルを削除"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_REMAP_FILE_REMOVE_CORE,
   "このコアでロードされるすべてのコンテンツに適用されるリマップファイルを削除します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_REMAP_FILE_SAVE_CONTENT_DIR,
   "コンテンツディレクトリリマップファイルを保存"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_REMAP_FILE_SAVE_CONTENT_DIR,
   "現在のファイルと同じディレクトリからロードされるすべてのコンテンツに適用されるリマップファイルを保存します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_REMAP_FILE_REMOVE_CONTENT_DIR,
   "ゲームコンテンツディレクトリリマップファイルを削除"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_REMAP_FILE_REMOVE_CONTENT_DIR,
   "現在のファイルと同じディレクトリからロードされるすべてのコンテンツに適用されるリマップファイルを削除します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_REMAP_FILE_SAVE_GAME,
   "ゲームリマップファイルを保存"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_REMAP_FILE_SAVE_GAME,
   "現在のコンテンツのみに適用されるリマップファイルを保存します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_REMAP_FILE_REMOVE_GAME,
   "ゲームリマップファイルを削除"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_REMAP_FILE_REMOVE_GAME,
   "現在のコンテンツのみに適用されるリマップファイルを削除します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_REMAP_FILE_RESET,
   "入力マッピングをリセット"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_REMAP_FILE_RESET,
   "すべての入力リマップオプションをデフォルトの値に設定します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_REMAP_FILE_FLUSH,
   "入力リマップファイルを更新"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_REMAP_FILE_FLUSH,
   "アクティブなリマップファイルを現在の入力リマップオプションで上書きします。"
   )

/* Quick Menu > Controls > Manage Remap Files > Load Remap File */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_REMAP_FILE,
   "リマップファイル"
   )

/* Quick Menu > Cheats */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_START_OR_CONT,
   "チート検索を開始/再開"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_FILE_LOAD,
   "チートファイルをロード"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEAT_FILE_LOAD,
   "チートファイルをロードして既存のチートを置き換えます。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_FILE_LOAD_APPEND,
   "チートファイルを追加"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEAT_FILE_LOAD_APPEND,
   "チートファイルをロードして既存のチートに追加します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_RELOAD_CHEATS,
   "ゲーム固有のチートを再ロードする"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_FILE_SAVE_AS,
   "チートファイルに名前を付けて保存"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEAT_FILE_SAVE_AS,
   "現在のチートをファイルに保存します."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_ADD_NEW_TOP,
   "新規チートを先頭に追加"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_ADD_NEW_BOTTOM,
   "新規チートを最後に追加"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_DELETE_ALL,
   "すべてのチートを削除"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_APPLY_AFTER_LOAD,
   "コンテンツのロード時にチートを自動適用"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEAT_APPLY_AFTER_LOAD,
   "ゲームをロードしたときにチートを自動で適用します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_APPLY_AFTER_TOGGLE,
   "切り替えの後で適用"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEAT_APPLY_AFTER_TOGGLE,
   "切り替えた後, 直ちにチートを適用します."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_APPLY_CHANGES,
   "変更を適用"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEAT_APPLY_CHANGES,
   "チートの変更はただちに適用されます。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT,
   "チート"
   )

/* Quick Menu > Cheats > Start or Continue Cheat Search */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_START_OR_RESTART,
   "チート検索を開始/再開始"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEAT_START_OR_RESTART,
   "左/右を押してビット幅を変更します."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_BIG_ENDIAN,
   "ビッグエンディアン"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEAT_BIG_ENDIAN,
   "ビッグエンディアン: 258 = 0x0102\nリトルエンディアン: 258 = 0x0201"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_SEARCH_EXACT,
   "値でメモリ空間を検索"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEAT_SEARCH_EXACT,
   "左/右で値を変更."
   )
MSG_HASH(
   MENU_ENUM_LABEL_CHEAT_SEARCH_EXACT_VAL,
   "%u (%X) に等しい"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_SEARCH_LT,
   "値でメモリ空間を検索"
   )
MSG_HASH(
   MENU_ENUM_LABEL_CHEAT_SEARCH_LT_VAL,
   "以前の値より小さい"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_SEARCH_LTE,
   "値でメモリ空間を検索"
   )
MSG_HASH(
   MENU_ENUM_LABEL_CHEAT_SEARCH_LTE_VAL,
   "以前の値と等しいまたは小さい"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_SEARCH_GT,
   "値でメモリ空間を検索"
   )
MSG_HASH(
   MENU_ENUM_LABEL_CHEAT_SEARCH_GT_VAL,
   "以前の値より大きい"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_SEARCH_GTE,
   "値でメモリ空間を検索"
   )
MSG_HASH(
   MENU_ENUM_LABEL_CHEAT_SEARCH_GTE_VAL,
   "以前の値と等しいまたは大きい"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_SEARCH_EQ,
   "値でメモリ空間を検索"
   )
MSG_HASH(
   MENU_ENUM_LABEL_CHEAT_SEARCH_EQ_VAL,
   "以前の値と等しい"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_SEARCH_NEQ,
   "値でメモリ空間を検索"
   )
MSG_HASH(
   MENU_ENUM_LABEL_CHEAT_SEARCH_NEQ_VAL,
   "以前の値と等しくない"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_SEARCH_EQPLUS,
   "値でメモリ空間を検索"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEAT_SEARCH_EQPLUS,
   "左/右で値を変更."
   )
MSG_HASH(
   MENU_ENUM_LABEL_CHEAT_SEARCH_EQPLUS_VAL,
   "以前の値 +%u (%X ) に等しい"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_SEARCH_EQMINUS,
   "値でメモリ空間を検索"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEAT_SEARCH_EQMINUS,
   "左/右で値を変更."
   )
MSG_HASH(
   MENU_ENUM_LABEL_CHEAT_SEARCH_EQMINUS_VAL,
   "以前の値 -%u (%X ) に等しい"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_ADD_MATCHES,
   "マッチした %u 件をリストに追加"
   )

/* Quick Menu > Cheats > Load Cheat File (Replace) */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_FILE,
   "チートファイル (置き換え)"
   )

/* Quick Menu > Cheats > Load Cheat File (Append) */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_FILE_APPEND,
   "チートファイル(追加)"
   )

/* Quick Menu > Cheats > Cheat Details */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_DETAILS_SETTINGS,
   "チート詳細"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_IDX,
   "インデックス"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_STATE,
   "有効"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_DESC,
   "説明"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_HANDLER,
   "ハンドラ"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_MEMORY_SEARCH_SIZE,
   "メモリ検索サイズ"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_TYPE,
   "種別"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_VALUE,
   "値"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_ADDRESS,
   "メモリアドレス"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_BROWSE_MEMORY,
   "参照アドレス: %08X"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_ADDRESS_BIT_POSITION,
   "メモリアドレスマスク"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEAT_ADDRESS_BIT_POSITION,
   "メモリ検索サイズ < 8ビットのときのアドレスビットマスク."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_REPEAT_COUNT,
   "繰り返し回数"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEAT_REPEAT_COUNT,
   "チートが適用される回数です. 他の2つの'繰り返し'オプションと併用することで, メモリの大規模な領域に影響を与えることができます."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_RUMBLE_TYPE,
   "メモリ内容が条件を満たしたときにコントローラを振動"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_RUMBLE_VALUE,
   "振動値"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_RUMBLE_PORT,
   "振動ポート"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_RUMBLE_PRIMARY_STRENGTH,
   "最初の振動の強さ"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_RUMBLE_PRIMARY_DURATION,
   "最初の振動の長さ (ms)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_RUMBLE_SECONDARY_STRENGTH,
   "2回目の振動の強さ"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_RUMBLE_SECONDARY_DURATION,
   "2回目の振動の長さ (ms)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_CODE,
   "コード"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_ADD_NEW_AFTER,
   "新規チートをこの後に追加"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_ADD_NEW_BEFORE,
   "新規チートをこの前に追加"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_COPY_AFTER,
   "このチートの後にコピー"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_COPY_BEFORE,
   "このチートの前にコピー"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_DELETE,
   "このチートを削除"
   )

/* Quick Menu > Disc Control */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DISK_TRAY_EJECT,
   "ディスクの取り出し"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_DISK_TRAY_EJECT,
   "仮想ディスクトレイを開き、現在ロードされているディスクを取り出します. 「メニュー表示中はコンテンツを一時停止」が有効な場合, いくつかのコアでは, ディスク操作の後に数秒間おいてコンテンツを再開しないと、変更が反映されない可能性があります."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DISK_TRAY_INSERT,
   "ディスクイメージを挿入"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DISK_IMAGE_APPEND,
   "新規ディスクを読み込む"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DISK_INDEX,
   "現在のディスクインデックス"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_DISK_INDEX,
   "利用可能な画像のリストから現在のディスクを選択してください. 'ディスクを挿入'を選択するとディスクが読み込まれます."
   )

/* Quick Menu > Shaders */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_SHADERS_ENABLE,
   "ビデオシェーダー"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_SHADERS_ENABLE,
   "ビデオシェーダーパイプラインを有効にします。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SHADER_WATCH_FOR_CHANGES,
   "シェーダーファイルの変更を監視"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SHADER_WATCH_FOR_CHANGES,
   "ディスク上のシェーダーファイルに加えられた変更を自動的に適用します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_SHADER_REMEMBER_LAST_DIR,
   "最後に使用したシェーダーディレクトリを記憶"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_SHADER_REMEMBER_LAST_DIR,
   "シェーダープリセットとパスをロードするとき、最後に使用したディレクトリでファイルブラウザを開きます。"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_SHADER_PRESET,
   "シェーダプリセットをロードします. シェーダパイプラインは自動的にセットアップされます. "
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_SHADER_PRESET_PREPEND,
   "プリセットを先頭に追加"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_SHADER_PRESET_PREPEND,
   "現在読み込まれているプリセットの先頭にプリセットを追加します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_SHADER_PRESET_APPEND,
   "プリセットを末尾に追加"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_SHADER_PRESET_APPEND,
   "現在読み込まれているプリセットの末尾にプリセットを追加します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_SHADER_PRESET_SAVE,
   "プリセットを保存"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_SHADER_PRESET_SAVE,
   "現在のシェーダプリセットを保存します. "
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_SHADER_PRESET_REMOVE,
   "プリセットを削除"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_SHADER_PRESET_REMOVE,
   "自動シェーダープリセットを削除します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SHADER_APPLY_CHANGES,
   "変更を適用"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SHADER_APPLY_CHANGES,
   "シェーダーの設定の変更を直ちに反映します。シェーダーのパス数やフィルタリング、FBO スケールなどを変更したときに使用します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_SHADER_APPLY_CHANGES,
   "シェーダーパスの数、フィルタリング、FBO スケールなどのシェーダー設定を変更した後、これを使用して変更を適用します。\nこれらのシェーダー設定を変更するのはやや高度な操作であるため、明示的に行う必要があります。\nシェーダーを適用すると、シェーダー設定は一時ファイル (retroarch.slangp/.cgp/.glslp) に保存され、ロードされます。このファイルが RetroArch 終了[...]"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_SHADER_PARAMETERS,
   "シェーダーパラメータ"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_SHADER_PARAMETERS,
   "現在のシェーダを直接変更します. 変更はプリセットファイルに保存されません."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_SHADER_NUM_PASSES,
   "シェーダーパス"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_SHADER_NUM_PASSES,
   "シェーダパイプラインのパス数を増加/減少します. 各パイプラインに別々のシェーダを割り当てることができ, フィルタリングとスケールを設定することもできます."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SHADER,
   "シェーダー"
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_VIDEO_SHADER_PASS,
   "シェーダーへのパスです。すべてのシェーダーは同じタイプ (例: Cg, GLSL または Slang など) である必要があります。ブラウザがシェーダーを探し始める場所を設定するには、シェーダーディレクトリを設定します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_FILTER,
   "フィルター"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SCALE,
   "スケール"
   )

/* Quick Menu > Shaders > Save */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_SHADER_PRESET_SAVE_REFERENCE,
   "シンプルプリセット"
   )

MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_SHADER_PRESET_SAVE_REFERENCE,
   "元のプリセットへのリンクが読み込まれ、パラメータのみの変更が含まれるシェーダープリセットを保存します。"
   )

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_SHADER_PRESET_SAVE_AS,
   "シェーダープリセットに名前を付けて保存"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_SHADER_PRESET_SAVE_AS,
   "現在のシェーダー設定を新しいシェーダープリセットとして保存します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_SHADER_PRESET_SAVE_GLOBAL,
   "グローバルプリセットを保存"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_SHADER_PRESET_SAVE_GLOBAL,
   "現在のシェーダー設定をデフォルトのグローバル設定として保存します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_SHADER_PRESET_SAVE_CORE,
   "コアプリセットを保存"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_SHADER_PRESET_SAVE_CORE,
   "現在のシェーダー設定をこのコアのデフォルトとして保存します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_SHADER_PRESET_SAVE_PARENT,
   "コンテンツディレクトリプリセットを保存"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_SHADER_PRESET_SAVE_PARENT,
   "現在のシェーダー設定を、現在のコンテンツディレクトリ内のすべてのファイルに対するデフォルトとして保存します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_SHADER_PRESET_SAVE_GAME,
   "ゲームプリセットを保存"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_SHADER_PRESET_SAVE_GAME,
   "現在のシェーダー設定をコンテンツのデフォルト設定として保存します。"
   )

/* Quick Menu > Shaders > Remove */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NO_PRESETS_FOUND,
   "自動シェーダープリセットが見つかりません"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_SHADER_PRESET_REMOVE_GLOBAL,
   "グローバルプリセットを削除"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_SHADER_PRESET_REMOVE_GLOBAL,
   "すべてのコンテンツとすべてのコアで使用されるグローバルプリセットを削除します. "
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_SHADER_PRESET_REMOVE_CORE,
   "コアプリセットを削除"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_SHADER_PRESET_REMOVE_CORE,
   "現在ロードされているコアで実行されたすべてのコンテンツで使用されるコアプリセットを削除します. "
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_SHADER_PRESET_REMOVE_PARENT,
   "コンテンツディレクトリプリセットを削除"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_SHADER_PRESET_REMOVE_PARENT,
   "現在の作業ディレクトリ内のすべてのコンテンツで使用されるコンテンツディレクトリプリセットを削除します. "
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_SHADER_PRESET_REMOVE_GAME,
   "ゲームプリセットを削除"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_SHADER_PRESET_REMOVE_GAME,
   "特定のゲームのみで使用されるプリセットを削除します。"
   )

/* Quick Menu > Shaders > Shader Parameters */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NO_SHADER_PARAMETERS,
   "シェーダーのパラメータはありません。"
   )

/* Quick Menu > Overrides */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OVERRIDE_FILE_INFO,
   "アクティブな優先ファイル"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_OVERRIDE_FILE_INFO,
   "現在使用中の優先ファイルです。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OVERRIDE_FILE_LOAD,
   "優先ファイルをロード"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_OVERRIDE_FILE_LOAD,
   "優先ファイルをロードして現在の構成を置き換えます。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OVERRIDE_FILE_SAVE_AS,
   "優先に名前を付けて保存"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_OVERRIDE_FILE_SAVE_AS,
   "現在の構成を新しい優先ファイルとして保存します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SAVE_CURRENT_CONFIG_OVERRIDE_CORE,
   "コア優先を保存"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SAVE_CURRENT_CONFIG_OVERRIDE_CORE,
   "このコアでロードされるすべてのコンテンツに適用する優先構成ファイルを保存します。メイン構成よりも優先されます。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_REMOVE_CURRENT_CONFIG_OVERRIDE_CORE,
   "コア優先を削除"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_REMOVE_CURRENT_CONFIG_OVERRIDE_CORE,
   "このコアでロードされるすべてのコンテンツに適用される優先構成ファイルを削除します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SAVE_CURRENT_CONFIG_OVERRIDE_CONTENT_DIR,
   "コンテンツディレクトリ優先を保存"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SAVE_CURRENT_CONFIG_OVERRIDE_CONTENT_DIR,
   "現在のファイルと同じディレクトリからロードされたすべてのコンテンツに適用されるオーバーライド設定ファイルを保存します. メイン設定よりも優先されます."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_REMOVE_CURRENT_CONFIG_OVERRIDE_CONTENT_DIR,
   "コンテンツディレクトリ優先を削除"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_REMOVE_CURRENT_CONFIG_OVERRIDE_CONTENT_DIR,
   "現在のファイルと同じディレクトリからロードされるすべてのコンテンツに適用される優先構成ファイルを削除します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SAVE_CURRENT_CONFIG_OVERRIDE_GAME,
   "ゲーム優先を保存"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SAVE_CURRENT_CONFIG_OVERRIDE_GAME,
   "現在のコンテンツにのみ適用されるオーバーライド設定ファイルを保存します. メイン設定よりも優先されます."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_REMOVE_CURRENT_CONFIG_OVERRIDE_GAME,
   "ゲーム優先を削除"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_REMOVE_CURRENT_CONFIG_OVERRIDE_GAME,
   "現在のコンテンツにのみ適用される優先構成ファイルを削除します。"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_OVERRIDE_UNLOAD,
   "すべてのオプションをグローバル構成値にリセットします。"
   )

/* Quick Menu > Achievements */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NO_ACHIEVEMENTS_TO_DISPLAY,
   "表示する実績がありません"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ACHIEVEMENT_PAUSE,
   "実績ハードコアモードを一時停止"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ACHIEVEMENT_RESUME,
   "実績ハードコアモードを再開"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NOT_LOGGED_IN,
   "ログインしていません"
)
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETWORK_ERROR,
   "ネットワークエラー"
)
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_UNKNOWN_GAME,
   "不明なゲーム"
)

/* Quick Menu > Information */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONTENT_INFO_CHEEVOS_HASH,
   "RetroAchievements ハッシュ"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RDB_ENTRY_DETAIL,
   "データベースエントリー"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_RDB_ENTRY_DETAIL,
   "現在のコンテンツに関するデータベースの情報を表示します."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NO_ENTRIES_TO_DISPLAY,
   "表示する項目はありません"
   )

/* Miscellaneous UI Items */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NO_CORES_AVAILABLE,
   "コアはありません。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NO_CORE_OPTIONS_AVAILABLE,
   "利用可能なコアオプションがありません。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NO_CORE_INFORMATION_AVAILABLE,
   "コア情報はありません。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NO_CORE_BACKUPS_AVAILABLE,
   "利用可能なコアのバックアップはありません"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NO_FAVORITES_AVAILABLE,
   "お気に入りがありません。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NO_HISTORY_AVAILABLE,
   "履歴はありません。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NO_IMAGES_AVAILABLE,
   "画像ファイルがありません。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NO_MUSIC_AVAILABLE,
   "音楽ファイルがありません。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NO_VIDEOS_AVAILABLE,
   "動画ファイルがありません。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NO_INFORMATION_AVAILABLE,
   "情報はありません。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NO_PLAYLIST_ENTRIES_AVAILABLE,
   "利用可能なプレイリストの項目はありません"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NO_SETTINGS_FOUND,
   "設定が見つかりませんでした。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NO_BT_DEVICES_FOUND,
   "Bluetooth デバイスが見つかりません"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NO_NETWORKS_FOUND,
   "該当するネットワークが見つかりませんでした。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NO_CORE,
   "コアはありません"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SEARCH,
   "検索"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_BASIC_MENU_CONTROLS_BACK,
   "戻る"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PARENT_DIRECTORY,
   "親ディレクトリ"
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_PARENT_DIRECTORY,
   "親ディレクトリに戻ります。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DIRECTORY_NOT_FOUND,
   "ディレクトリが見つかりません"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NO_ITEMS,
   "アイテムが見つかりません。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SELECT_FILE,
   "ファイル選択"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_ROTATION_NORMAL,
   "通常"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_ROTATION_90_DEG,
   "90 度"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_ROTATION_180_DEG,
   "180 度"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_ROTATION_270_DEG,
   "270 度"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_ORIENTATION_NORMAL,
   "通常"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_ORIENTATION_VERTICAL,
   "90 度"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_ORIENTATION_FLIPPED,
   "180 度"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_ORIENTATION_FLIPPED_ROTATED,
   "270 度"
   )

/* Settings Options */

MSG_HASH( /* FIXME Should be MENU_LABEL_VALUE */
   MSG_UNKNOWN_COMPILER,
   "不明なコンパイラ"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_SHARE_DIGITAL_OR,
   "共有"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_SHARE_DIGITAL_XOR,
   "取り組む"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_SHARE_DIGITAL_VOTE,
   "投票"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_SHARE_ANALOG,
   "アナログ入力を共有"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_SHARE_ANALOG_MAX,
   "最大"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_SHARE_ANALOG_AVERAGE,
   "平均"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_SHARE_NONE,
   "なし"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_SHARE_NO_PREFERENCE,
   "優先無し"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_TICKER_TYPE_BOUNCE,
   "左右で跳ね返りスクロール"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_TICKER_TYPE_LOOP,
   "左方向にスクロール"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AI_SERVICE_IMAGE_MODE,
   "画像モード"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AI_SERVICE_SPEECH_MODE,
   "音声モード"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AI_SERVICE_NARRATOR_MODE,
   "ナレーターモード"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AI_SERVICE_TEXT_POSITION_TOP,
   "先頭"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_ENTRY_REMOVE_ENABLE_HIST_FAV,
   "[履歴]と[お気に入り]で許可"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_ENTRY_REMOVE_ENABLE_ALL,
   "すべてのプレイリストで許可"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_ENTRY_REMOVE_ENABLE_NONE,
   "オフ"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_INLINE_CORE_DISPLAY_HIST_FAV,
   "履歴 & お気に入り"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_INLINE_CORE_DISPLAY_ALWAYS,
   "常に"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_INLINE_CORE_DISPLAY_NEVER,
   "なし"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_RUNTIME_PER_CORE,
   "コアごと"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_RUNTIME_AGGREGATE,
   "総計"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_POWER_SOURCE_CHARGED,
   "充電完了"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_POWER_SOURCE_CHARGING,
   "充電中"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_POWER_SOURCE_DISCHARGING,
   "放電"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_POWER_SOURCE_NO_SOURCE,
   "ソースなし"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_USE_THIS_DIRECTORY,
   "<このディレクトリを使用>"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DIRECTORY_CONTENT,
   "<コンテンツディレクトリ>"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DIRECTORY_DEFAULT,
   "<デフォルト>"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DIRECTORY_NONE,
   "<無し>"
   )
MSG_HASH( /* FIXME Unused? */
   MENU_ENUM_LABEL_VALUE_RETROKEYBOARD,
   "レトロキーボード"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RETROPAD,
   "レトロパッド"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RETROPAD_WITH_ANALOG,
   "アナログ付きレトロパッド"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NONE,
   "なし"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_UNKNOWN,
   "不明"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DOWN_Y_L_R,
   "下 + Y + L1 + R1"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_L1_R1_START_SELECT,
   "L1 + R1 + スタート + セレクト"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_START_SELECT,
   "スタート + セレクト"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_HOLD_START,
   "スタートを長押し (2秒)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_HOLD_SELECT,
   "セレクトを長押し (2秒)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DOWN_SELECT,
   "下 + セレクト"
   )
MSG_HASH(
   MENU_ENUM_LABEL_RUMBLE_TYPE_DISABLED,
   "<無効>"
   )
MSG_HASH(
   MENU_ENUM_LABEL_RUMBLE_TYPE_CHANGES,
   "変更されるときに振動"
   )
MSG_HASH(
   MENU_ENUM_LABEL_RUMBLE_TYPE_DOES_NOT_CHANGE,
   "変更されないときに振動"
   )
MSG_HASH(
   MENU_ENUM_LABEL_RUMBLE_TYPE_INCREASE,
   "増加"
   )
MSG_HASH(
   MENU_ENUM_LABEL_RUMBLE_TYPE_DECREASE,
   "減少"
   )
MSG_HASH(
   MENU_ENUM_LABEL_RUMBLE_TYPE_EQ_VALUE,
   "値が等しいときに振動"
   )
MSG_HASH(
   MENU_ENUM_LABEL_RUMBLE_TYPE_NEQ_VALUE,
   "値が等しくないときに振動"
   )
MSG_HASH(
   MENU_ENUM_LABEL_RUMBLE_TYPE_LT_VALUE,
   "値が小さいときに振動"
   )
MSG_HASH(
   MENU_ENUM_LABEL_RUMBLE_TYPE_GT_VALUE,
   "値が大きいときに振動"
   )
MSG_HASH(
   MENU_ENUM_LABEL_RUMBLE_TYPE_INCREASE_BY_VALUE,
   "値の増加で振動"
   )
MSG_HASH(
   MENU_ENUM_LABEL_RUMBLE_TYPE_DECREASE_BY_VALUE,
   "値の減少で振動"
   )
MSG_HASH(
   MENU_ENUM_LABEL_RUMBLE_PORT_16,
   "すべて"
   )
MSG_HASH(
   MENU_ENUM_LABEL_CHEAT_TYPE_DISABLED,
   "<無効>"
   )
MSG_HASH(
   MENU_ENUM_LABEL_CHEAT_TYPE_RUN_NEXT_IF_EQ,
   "値がメモリ内容と等しいときに次のチートを実行"
   )
MSG_HASH(
   MENU_ENUM_LABEL_CHEAT_TYPE_RUN_NEXT_IF_NEQ,
   "値がメモリ内容と等しくないときに次のチートを実行"
   )
MSG_HASH(
   MENU_ENUM_LABEL_CHEAT_TYPE_RUN_NEXT_IF_LT,
   "値がメモリ内容より小さいときに次のチートを実行"
   )
MSG_HASH(
   MENU_ENUM_LABEL_CHEAT_TYPE_RUN_NEXT_IF_GT,
   "値がメモリ内容より大きいときに次のチートを実行"
   )
MSG_HASH(
   MENU_ENUM_LABEL_CHEAT_HANDLER_TYPE_EMU,
   "エミュレータ"
   )
MSG_HASH(
   MENU_ENUM_LABEL_CHEAT_MEMORY_SIZE_1,
   "1ビット, 最大値 = 0x01"
   )
MSG_HASH(
   MENU_ENUM_LABEL_CHEAT_MEMORY_SIZE_2,
   "2ビット, 最大値 = 0x03"
   )
MSG_HASH(
   MENU_ENUM_LABEL_CHEAT_MEMORY_SIZE_4,
   "4ビット, 最大値 = 0x0F"
   )
MSG_HASH(
   MENU_ENUM_LABEL_CHEAT_MEMORY_SIZE_8,
   "8ビット, 最大値 = 0xFF"
   )
MSG_HASH(
   MENU_ENUM_LABEL_CHEAT_MEMORY_SIZE_16,
   "16ビット, 最大値 0xFFFF"
   )
MSG_HASH(
   MENU_ENUM_LABEL_CHEAT_MEMORY_SIZE_32,
   "32ビット, 最大値 = 0xFFFFFFFF"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_MANAGER_SORT_MODE_DEFAULT,
   "システムのデフォルト"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_MANAGER_SORT_MODE_ALPHABETICAL,
   "アルファベット順"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_MANAGER_SORT_MODE_OFF,
   "なし"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_MANAGER_LABEL_DISPLAY_MODE_DEFAULT,
   "すべてを表示"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_MANAGER_LABEL_DISPLAY_MODE_REMOVE_PARENS,
   "丸かっこ内の文字を取り除く"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_MANAGER_LABEL_DISPLAY_MODE_REMOVE_BRACKETS,
   "角かっこ内の文字を取り除く"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_MANAGER_LABEL_DISPLAY_MODE_REMOVE_PARENS_AND_BRACKETS,
   "丸かっこと角かっこ内の文字を取り除く"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_MANAGER_LABEL_DISPLAY_MODE_KEEP_REGION,
   "地域を保持"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_MANAGER_LABEL_DISPLAY_MODE_KEEP_DISC_INDEX,
   "ディスクインデックスを保持"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_MANAGER_LABEL_DISPLAY_MODE_KEEP_REGION_AND_DISC_INDEX,
   "地域とディスクインデックスを保持"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_MANAGER_THUMBNAIL_MODE_DEFAULT,
   "システムのデフォルト"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_THUMBNAIL_MODE_BOXARTS,
   "ボックスアート"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_THUMBNAIL_MODE_SCREENSHOTS,
   "スクリーンショット"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_THUMBNAIL_MODE_TITLE_SCREENS,
   "タイトルスクリーン"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SCROLL_NORMAL,
   "通常"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SCROLL_FAST,
   "高速"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ON,
   "オン"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OFF,
   "オフ"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_YES,
   "はい"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NO,
   "いいえ"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TRUE,
   "真"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_FALSE,
   "偽"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ENABLED,
   "有効"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DISABLED,
   "無効"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NOT_AVAILABLE,
   "該当なし"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEEVOS_LOCKED_ENTRY,
   "未解除"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEEVOS_UNLOCKED_ENTRY,
   "解除済み"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEEVOS_UNLOCKED_ENTRY_HARDCORE,
   "解除済み(ハードコア)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEEVOS_UNOFFICIAL_ENTRY,
   "非公式"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEEVOS_UNSUPPORTED_ENTRY,
   "非対応"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEEVOS_RECENTLY_UNLOCKED_ENTRY,
   "最近解除された実績"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEEVOS_NOTIFICATIONS_ONLY,
   "通知のみ"
)
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DONT_CARE,
   "デフォルト"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LINEAR,
   "リニア"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NEAREST,
   "ニアレスト"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONTENT,
   "コンテンツ"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MANUAL_CONTENT_SCAN_SYSTEM_NAME_USE_CONTENT_DIR,
   "<コンテンツディレクトリ>"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MANUAL_CONTENT_SCAN_SYSTEM_NAME_USE_CUSTOM,
   "<カスタム>"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MANUAL_CONTENT_SCAN_CORE_NAME_DETECT,
   "<未指定>"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LEFT_ANALOG,
   "左のアナログ"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RIGHT_ANALOG,
   "右のアナログ"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_MOUSE_LEFT,
   "マウス ボタン1(左)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_MOUSE_RIGHT,
   "マウス ボタン2(右)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_MOUSE_MIDDLE,
   "マウス ボタン3(中央)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_MOUSE_BUTTON4,
   "マウス 4"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_MOUSE_BUTTON5,
   "マウス 5"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_MOUSE_WHEEL_UP,
   "マウスホイール上"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_MOUSE_WHEEL_DOWN,
   "マウスホイール下"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_MOUSE_HORIZ_WHEEL_UP,
   "マウスホイール左"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_MOUSE_HORIZ_WHEEL_DOWN,
   "マウスホイール右"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_POLL_TYPE_BEHAVIOR_EARLY,
   "早い"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_POLL_TYPE_BEHAVIOR_NORMAL,
   "普通"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_POLL_TYPE_BEHAVIOR_LATE,
   "遅い"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TIMEDATE_YMD_HMS,
   "年-月-日 時:分:秒"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TIMEDATE_YMD_HM,
   "年-月-日 時:分"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TIMEDATE_YMD,
   "年-月-日"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TIMEDATE_YM,
   "年-月"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TIMEDATE_MDYYYY_HMS,
   "月-日-年 時:分:秒"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TIMEDATE_MDYYYY_HM,
   "月-日-年 時:分"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TIMEDATE_MD_HM,
   "月-日 時:分"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TIMEDATE_MDYYYY,
   "月-日-年"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TIMEDATE_MD,
   "月-日"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TIMEDATE_DDMMYYYY_HMS,
   "日-月-年 時:分:秒"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TIMEDATE_DDMMYYYY_HM,
   "日-月-年 時:分"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TIMEDATE_DDMM_HM,
   "日-月 時:分"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TIMEDATE_DDMMYYYY,
   "日-月-年"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TIMEDATE_DDMM,
   "日-月"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TIMEDATE_HMS,
   "時:分:秒"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TIMEDATE_HM,
   "時:分"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TIMEDATE_YMD_HMS_AMPM,
   "年-月-日 時:分:秒 (午前/午後)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TIMEDATE_YMD_HM_AMPM,
   "年-月-日 時:分 (午前/午後)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TIMEDATE_MDYYYY_HMS_AMPM,
   "月-日-年 時:分:秒 (午前/午後)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TIMEDATE_MDYYYY_HM_AMPM,
   "月-日-年 時:分 (午前/午後)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TIMEDATE_MD_HM_AMPM,
   "月-日 時:分 (午前/午後)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TIMEDATE_DDMMYYYY_HMS_AMPM,
   "日-月-年 時:分:秒 (午前/午後)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TIMEDATE_DDMMYYYY_HM_AMPM,
   "日-月-年 時:分 (午前/午後)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TIMEDATE_DDMM_HM_AMPM,
   "日-月 時:分 (午前/午後)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TIMEDATE_HMS_AMPM,
   "時:分:秒 (午前/午後)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TIMEDATE_HM_AMPM,
   "時:分 (午前/午後)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TIMEDATE_AGO,
   "前"
   )

/* RGUI: Settings > User Interface > Appearance */

MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_RGUI_BORDER_FILLER_ENABLE,
   "メニューの枠線を表示します."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_RGUI_FULL_WIDTH_LAYOUT,
   "フル幅レイアウトを使用"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_RGUI_FULL_WIDTH_LAYOUT,
   "メニュー項目のサイズ変更と配置を行うことで, 画面を最大限に活用します. 無効にすると, 古典的な固定幅の 2 列レイアウトを使用します."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_LINEAR_FILTER,
   "リニアフィルター"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_LINEAR_FILTER,
   "ピクセルの角を取るため, メニューにわずかなぼかしを追加します."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_RGUI_INTERNAL_UPSCALE_LEVEL,
   "内部アップスケーリング"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_RGUI_ASPECT_RATIO,
   "アスペクト比"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_RGUI_ASPECT_RATIO,
   "メニューのアスペクト比を選択します. ワイドスクリーン比率はメニューインタフェースの水平解像度を上げます. ('メニューアスペクト比をロック'が無効になっている場合は再起動が必要です)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_RGUI_ASPECT_RATIO_LOCK,
   "メニューが常に正しいアスペクト比で表示されるようにします. 無効にすると, クイックメニューは現在読み込まれているコンテンツと一致するように表示されます."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_MENU_COLOR_THEME,
   "カラーテーマ"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_RGUI_MENU_COLOR_THEME,
   "別のカラーテーマを選択します. 'カスタム'を選択すると, メニューのテーマプリセットファイルを使用できます."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_MENU_THEME_PRESET,
   "カスタムテーマプリセット"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_RGUI_SHADOWS,
   "影のエフェクト"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_RGUI_SHADOWS,
   "メニューテキスト, 外枠, サムネイルの影のドロップを有効にします. パフォーマンスに影響を与えます. "
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_RGUI_PARTICLE_EFFECT,
   "背景アニメーション"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_RGUI_PARTICLE_EFFECT,
   "背景の部分アニメーション効果を有効にします. パフォーマンスに大きな影響を与えます. "
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_RGUI_PARTICLE_EFFECT_SPEED,
   "背景アニメーション速度"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_RGUI_PARTICLE_EFFECT_SPEED,
   "背景の部分アニメーション効果の速度を調整します. "
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_RGUI_PARTICLE_EFFECT_SCREENSAVER,
   "スクリーンセーバー背景アニメーション"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_RGUI_INLINE_THUMBNAILS,
   "プレイリストサムネイルを表示"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_THUMBNAILS_RGUI,
   "上のサムネイル"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LEFT_THUMBNAILS_RGUI,
   "下のサムネイル"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_RGUI_SWAP_THUMBNAILS,
   "サムネイルを入れ替える"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_RGUI_SWAP_THUMBNAILS,
   "'上のサムネイル’と'下のサムネイル'の表示位置を入れ替えます。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_RGUI_THUMBNAIL_DOWNSCALER,
   "サムネイルのダウンスケーリング方式"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_RGUI_THUMBNAIL_DOWNSCALER,
   "大きなサムネイルを縮小してディスプレイに合わせるためのリサンプリング方式です."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_RGUI_THUMBNAIL_DELAY,
   "サムネイルの遅延 (ms)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_RGUI_THUMBNAIL_DELAY,
   "プレイリストの項目を選択したとき、関連付けられたサムネイルを読み込むまでの時間遅延を適用します。この値を 256ms 以上に設定すると、最も低性能なデバイスでも遅延のない高速スクロールが可能になります。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_RGUI_EXTENDED_ASCII,
   "拡張 ASCII サポート"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_RGUI_EXTENDED_ASCII,
   "非標準ASCII文字の表示を有効にします. 特定の非英語言語との互換性に必要です. パフォーマンスに中程度の影響を与えます."
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_RGUI_SWITCH_ICONS,
   "オン/オフ文字列の代わりにアイコンを使用して, '切り替え' メニュー設定項目を表します."
   )

/* RGUI: Settings Options */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_THUMB_SCALE_POINT,
   "ニアレストネイバー(最近傍補間) (高速)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_THUMB_SCALE_BILINEAR,
   "バイリニア（線形補間）"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_THUMB_SCALE_SINC,
   "Sinc/Lanczos3 (低速)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_UPSCALE_NONE,
   "なし"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_UPSCALE_AUTO,
   "自動"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_ASPECT_RATIO_16_9_CENTRE,
   "16:9 (中央)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_ASPECT_RATIO_16_10_CENTRE,
   "16:10 (中央)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_ASPECT_RATIO_3_2_CENTRE,
   "3:2 (中央)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_ASPECT_RATIO_5_3_CENTRE,
   "5:3 (中央)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_ASPECT_RATIO_AUTO,
   "自動"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_ASPECT_RATIO_LOCK_NONE,
   "オフ"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_ASPECT_RATIO_LOCK_FIT_SCREEN,
   "画面に合わせる"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_ASPECT_RATIO_LOCK_INTEGER,
   "整数スケール"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_ASPECT_RATIO_LOCK_FILL_SCREEN,
   "画面に合わせる (拡大)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_MENU_COLOR_THEME_CUSTOM,
   "カスタム"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_MENU_COLOR_THEME_APPLE_GREEN,
   "アップルグリーン"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_PARTICLE_EFFECT_NONE,
   "オフ"
   )

/* XMB: Settings > User Interface > Appearance */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LEFT_THUMBNAILS,
   "セカンダリーサムネイル"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_LEFT_THUMBNAILS,
   "左側に表示するサムネイルの種類です。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DYNAMIC_WALLPAPER,
   "ダイナミック壁紙"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_DYNAMIC_WALLPAPER,
   "コンテキストに応じて新しい壁紙を動的にロードします。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_HORIZONTAL_ANIMATION,
   "水平アニメーション"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_HORIZONTAL_ANIMATION,
   "メニューの水平アニメーションを有効にします. これによりパフォーマンスが低下します. "
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_XMB_ANIMATION_HORIZONTAL_HIGHLIGHT,
   "水平アイコンハイライト時のアニメーション"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_XMB_ANIMATION_HORIZONTAL_HIGHLIGHT,
   "タブ間をスクロールしたときのアニメーション. "
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_XMB_ANIMATION_MOVE_UP_DOWN,
   "上下移動時のアニメーション"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_XMB_ANIMATION_MOVE_UP_DOWN,
   "上下に移動するときのアニメーション. "
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_XMB_ANIMATION_OPENING_MAIN_MENU,
   "メインメニュー開閉時のアニメーション"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_XMB_ANIMATION_OPENING_MAIN_MENU,
   "サブメニューを開いたときのアニメーション. "
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_FONT,
   "フォント"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_XMB_FONT,
   "メニューで使用する別のメインフォントを選択します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_FONT_COLOR_RED,
   "フォントの色 (赤)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_FONT_COLOR_GREEN,
   "フォントの色 (緑)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_FONT_COLOR_BLUE,
   "フォントの色 (青)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_XMB_LAYOUT,
   "XMBインタフェースに異なるレイアウトを選択します。"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_XMB_THEME,
   "アイコンに異なるテーマを選択します。変更はプログラムの再起動後に反映されます。"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_XMB_SWITCH_ICONS,
   "オン/オフ文字列の代わりにアイコンを使用して, '切り替え' メニュー設定項目を表します."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_SHADOWS_ENABLE,
   "影のエフェクト"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_XMB_RIBBON_ENABLE,
   "背景アニメーション効果を選択します. 効果によってはGPUに大きな負荷をかけます. パフォーマンスが不足する場合, 効果をオフにするか, より単純な効果を選択してください. "
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_MENU_COLOR_THEME,
   "カラーテーマ"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_XMB_VERTICAL_THUMBNAILS,
   "左側サムネイルを右側サムネイルの下に表示し, 両方ともスクリーンの右側に配置します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_XMB_THUMBNAIL_SCALE_FACTOR,
   "サムネイル倍率"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_XMB_THUMBNAIL_SCALE_FACTOR,
   "最大許容幅でスケーリングして, サムネイル表示サイズを縮小します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_XMB_SHOW_TITLE_HEADER,
   "タイトルヘッダーを表示"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_MAIN_MENU_ENABLE_SETTINGS,
   "設定タブを有効にする (再起動が必要)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_XMB_MAIN_MENU_ENABLE_SETTINGS,
   "プログラム設定を含む設定タブを表示します."
   )

/* XMB: Settings Options */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SHADER_PIPELINE_RIBBON,
   "リボン"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SHADER_PIPELINE_SIMPLE_SNOW,
   "シンプルスノー"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SHADER_PIPELINE_SNOW,
   "スノー"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SHADER_PIPELINE_BOKEH,
   "ぼかし"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SHADER_PIPELINE_SNOWFLAKE,
   "スノーフレーク"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_ICON_THEME_CUSTOM,
   "カスタム"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_ICON_THEME_FLATUI,
   "フラットUI"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_ICON_THEME_MONOCHROME,
   "モノクローム"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_ICON_THEME_MONOCHROME_INVERTED,
   "モノクローム反転"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_ICON_THEME_SYSTEMATIC,
   "システマティック"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_ICON_THEME_NEOACTIVE,
   "ネオアクティブ"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_ICON_THEME_PIXEL,
   "ピクセル"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_ICON_THEME_RETROACTIVE,
   "レトロアクティブ"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_ICON_THEME_RETROSYSTEM,
   "レトロシステム"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_ICON_THEME_DOTART,
   "ドットアート"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_ICON_THEME_AUTOMATIC,
   "自動"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_MENU_COLOR_THEME_APPLE_GREEN,
   "アップルグリーン"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_MENU_COLOR_THEME_DARK,
   "ダーク"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_MENU_COLOR_THEME_LIGHT,
   "ライト"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_MENU_COLOR_THEME_MORNING_BLUE,
   "モーニングブルー"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_MENU_COLOR_THEME_DARK_PURPLE,
   "ダークパープル"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_MENU_COLOR_THEME_ELECTRIC_BLUE,
   "エレクトリックブルー"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_MENU_COLOR_THEME_GOLDEN,
   "ゴールデン"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_MENU_COLOR_THEME_LEGACY_RED,
   "レガシーレッド"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_MENU_COLOR_THEME_MIDNIGHT_BLUE,
   "ミッドナイトブルー"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_MENU_COLOR_THEME_PLAIN,
   "背景画像"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_MENU_COLOR_THEME_UNDERSEA,
   "アンダーシー"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_MENU_COLOR_THEME_VOLCANIC_RED,
   "ボルカニックレッド"
   )

/* Ozone: Settings > User Interface > Appearance */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OZONE_COLLAPSE_SIDEBAR,
   "サイドバーを折りたたむ"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_OZONE_COLLAPSE_SIDEBAR,
   "左サイドバーを常に隠れた状態にします."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OZONE_TRUNCATE_PLAYLIST_NAME,
   "プレイリスト名を切り詰める (再起動が必要)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_OZONE_TRUNCATE_PLAYLIST_NAME,
   "プレイリストからメーカー名を削除します. たとえば, 'Sony - PlayStation'は'PlayStation'になります."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OZONE_SORT_AFTER_TRUNCATE_PLAYLIST_NAME,
   "プレイリスト名を切り詰め後に並べ替える (再起動が必要)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_OZONE_SORT_AFTER_TRUNCATE_PLAYLIST_NAME,
   "プレイリストは, メーカー名を削除した後に再度アルファベット順に並べ替えられます."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OZONE_MENU_COLOR_THEME,
   "カラーテーマ"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_OZONE_MENU_COLOR_THEME,
   "色テーマを選択します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OZONE_COLOR_THEME_BASIC_WHITE,
   "ベーシックホワイト"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OZONE_COLOR_THEME_BASIC_BLACK,
   "ベーシックブラック"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LEFT_THUMBNAILS_OZONE,
   "セカンダリーサムネイル"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_LEFT_THUMBNAILS_OZONE,
   "コンテンツのメタデータを表示するパネルを, 別のサムネイルを表示するパネルに置き換えます."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OZONE_SCROLL_CONTENT_METADATA,
   "コンテンツのメタデータ表示にティッカーテキストを使用"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OZONE_THUMBNAIL_SCALE_FACTOR,
   "サムネイル倍率"
   )

/* MaterialUI: Settings > User Interface > Appearance */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_ICONS_ENABLE,
   "アイコン"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MATERIALUI_ICONS_ENABLE,
   "メニュー項目の左側にアイコンを表示します."
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MATERIALUI_SWITCH_ICONS,
   "オン/オフ文字列の代わりにアイコンを使用して, '切り替え' メニュー設定項目を表します."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_PLAYLIST_ICONS_ENABLE,
   "プレイリストアイコン (再起動が必要)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MATERIALUI_PLAYLIST_ICONS_ENABLE,
   "プレイリストにシステム固有のアイコンを表示します."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_LANDSCAPE_LAYOUT_OPTIMIZATION,
   "横長画面表示の最適化"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MATERIALUI_LANDSCAPE_LAYOUT_OPTIMIZATION,
   "横長画面表示中に, 画面に収まるように自動的にメニューレイアウトを調整します."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_SHOW_NAV_BAR,
   "ナビゲーションバーを表示"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MATERIALUI_SHOW_NAV_BAR,
   "メニューナビゲーションのショートカットを常時表示します. メニューカテゴリ間で素早く切り替えることができます. タッチスクリーンデバイスで推奨します."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_AUTO_ROTATE_NAV_BAR,
   "ナビゲーションバーを自動的に回転"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MATERIALUI_AUTO_ROTATE_NAV_BAR,
   "横長画面表示中に, ナビゲーションバーを画面の右側に自動的に移動します."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_MENU_COLOR_THEME,
   "カラーテーマ"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MATERIALUI_MENU_TRANSITION_ANIMATION,
   "メニューの異なる階層間を移動するときに, スムーズなアニメーション効果を有効にします."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_MENU_THUMBNAIL_VIEW_PORTRAIT,
   "縦長画面でのサムネイル表示"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MATERIALUI_MENU_THUMBNAIL_VIEW_PORTRAIT,
   "縦長画面でのプレイリストのサムネイル表示モードを指定します."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_MENU_THUMBNAIL_VIEW_LANDSCAPE,
   "横長画面でのサムネイル表示"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MATERIALUI_MENU_THUMBNAIL_VIEW_LANDSCAPE,
   "横長画面でのプレイリストのサムネイル表示モードを指定します."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_DUAL_THUMBNAIL_LIST_VIEW_ENABLE,
   "リストにセカンダリーサムネイルを表示"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MATERIALUI_DUAL_THUMBNAIL_LIST_VIEW_ENABLE,
   "リスト形式のサムネイル表示モードを使用している場合, 2番目のサムネイルを表示します. この設定は, 画面に2つのサムネイルを表示するのに十分な幅がある場合のみ適用されます."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_THUMBNAIL_BACKGROUND_ENABLE,
   "サムネイルの背景を描画"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MATERIALUI_THUMBNAIL_BACKGROUND_ENABLE,
   "サムネイル画像の背景に, 未使用領域のパディングを適用します. これにより, すべての画像の均一な表示サイズが確保され, 異なるサイズのサムネイルを表示する際のメニュー外観が改善されます."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_THUMBNAILS_MATERIALUI,
   "プライマリーサムネイル"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_THUMBNAILS_MATERIALUI,
   "各プレイリスト項目に関連付けるサムネイルの種類です. 通常はコンテンツアイコンとして機能します."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LEFT_THUMBNAILS_MATERIALUI,
   "セカンダリーサムネイル"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_LEFT_THUMBNAILS_MATERIALUI,
   "プレイリストの各項目に関連付けるサムネイルの種類です. 使用方法は現在のプレイリストのサムネイル表示モードによって異なります."
   )

/* MaterialUI: Settings Options */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_MENU_COLOR_THEME_BLUE,
   "ブルー"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_MENU_COLOR_THEME_BLUE_GREY,
   "ブルーグレイ"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_MENU_COLOR_THEME_DARK_BLUE,
   "ダークブルー"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_MENU_COLOR_THEME_GREEN,
   "グリーン"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_MENU_COLOR_THEME_RED,
   "レッド"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_MENU_COLOR_THEME_YELLOW,
   "イエロー"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_MENU_TRANSITION_ANIM_AUTO,
   "自動"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_MENU_TRANSITION_ANIM_FADE,
   "フェード"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_MENU_TRANSITION_ANIM_SLIDE,
   "スライド"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_MENU_TRANSITION_ANIM_NONE,
   "オフ"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_THUMBNAIL_VIEW_PORTRAIT_DISABLED,
   "オフ"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_THUMBNAIL_VIEW_PORTRAIT_LIST_SMALL,
   "リスト (小)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_THUMBNAIL_VIEW_PORTRAIT_LIST_MEDIUM,
   "リスト (中)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_THUMBNAIL_VIEW_LANDSCAPE_DISABLED,
   "オフ"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_THUMBNAIL_VIEW_LANDSCAPE_LIST_SMALL,
   "リスト (小)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_THUMBNAIL_VIEW_LANDSCAPE_LIST_MEDIUM,
   "リスト (中)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_THUMBNAIL_VIEW_LANDSCAPE_LIST_LARGE,
   "リスト (大)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_THUMBNAIL_VIEW_LANDSCAPE_DESKTOP,
   "デスクトップ"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_LANDSCAPE_LAYOUT_OPTIMIZATION_DISABLED,
   "オフ"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_LANDSCAPE_LAYOUT_OPTIMIZATION_ALWAYS,
   "オン"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_LANDSCAPE_LAYOUT_OPTIMIZATION_EXCLUDE_THUMBNAIL_VIEWS,
   "サムネイルビューを除外"
   )

/* Qt (Desktop Menu) */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_INFO,
   "詳細"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_MENU_FILE,
   "ファイル(&F)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_MENU_FILE_LOAD_CORE,
   "コアをロード(&L)..."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_MENU_FILE_UNLOAD_CORE,
   "コアをアンロード(&U)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_MENU_FILE_EXIT,
   "終了(&X)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_MENU_EDIT,
   "編集(&E)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_MENU_EDIT_SEARCH,
   "検索(&S)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_MENU_VIEW,
   "表示(&V)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_MENU_VIEW_CLOSED_DOCKS,
   "閉じたドック"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_MENU_VIEW_SHADER_PARAMS,
   "シェーダのパラメータ"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_MENU_VIEW_OPTIONS,
   "設定(&O)..."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_MENU_VIEW_OPTIONS_SAVE_DOCK_POSITIONS,
   "ドック配置を記憶:"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_MENU_VIEW_OPTIONS_SAVE_GEOMETRY,
   "ウィンドウ位置とサイズを記憶:"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_MENU_VIEW_OPTIONS_SAVE_LAST_TAB,
   "最後のコンテンツブラウザのタブを記憶:"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_MENU_VIEW_OPTIONS_THEME,
   "テーマ:"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_MENU_VIEW_OPTIONS_THEME_SYSTEM_DEFAULT,
   "<システムデフォルト>"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_MENU_VIEW_OPTIONS_THEME_DARK,
   "ダーク"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_MENU_VIEW_OPTIONS_THEME_CUSTOM,
   "カスタム..."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_MENU_VIEW_OPTIONS_TITLE,
   "設定"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_MENU_TOOLS,
   "ツール(&T)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_MENU_HELP,
   "ヘルプ(&H)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_MENU_HELP_ABOUT,
   "RetroArch について"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_MENU_HELP_DOCUMENTATION,
   "ドキュメント"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_LOAD_CUSTOM_CORE,
   "カスタムなコアをロード..."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_LOAD_CORE,
   "コアをロード"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_LOADING_CORE,
   "コアをロード中..."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_NAME,
   "名前"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_CORE_VERSION,
   "バージョン"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_TAB_PLAYLISTS,
   "プレイリスト"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_TAB_FILE_BROWSER,
   "ファイルブラウザ"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_TAB_FILE_BROWSER_TOP,
   "先頭"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_TAB_FILE_BROWSER_UP,
   "上へ"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_MENU_DOCK_CONTENT_BROWSER,
   "コンテンツブラウザ"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_THUMBNAIL_BOXART,
   "ボックスアート"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_THUMBNAIL_SCREENSHOT,
   "スクリーンショット"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_THUMBNAIL_TITLE_SCREEN,
   "タイトルスクリーン"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_ALL_PLAYLISTS,
   "すべてのプレイリスト"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_CORE,
   "コア"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_CORE_INFO,
   "コア情報"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_CORE_SELECTION_ASK,
   "<問い合わせる>"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_INFORMATION,
   "情報"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_WARNING,
   "警告"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_ERROR,
   "エラー"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_NETWORK_ERROR,
   "ネットワークエラー"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_RESTART_TO_TAKE_EFFECT,
   "変更はRetroArchを再起動した後に反映されます。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_LOG,
   "ログ"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_ITEMS_COUNT,
   "%1 個"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_DROP_IMAGE_HERE,
   "ここに画像をドロップ"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_DONT_SHOW_AGAIN,
   "今後表示しない"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_STOP,
   "停止"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_ASSOCIATE_CORE,
   "コアに関連付ける"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_HIDDEN_PLAYLISTS,
   "隠したプレイリスト"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_HIDE,
   "隠す"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_MENU_VIEW_OPTIONS_HIGHLIGHT_COLOR,
   "ハイライトカラー:"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_CHOOSE,
   "選択(&C)..."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_SELECT_COLOR,
   "色の選択"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_SELECT_THEME,
   "テーマの選択"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_CUSTOM_THEME,
   "カスタムテーマ"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_FILE_PATH_IS_BLANK,
   "ファイルパスが空白です。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_FILE_IS_EMPTY,
   "ファイルは空きです。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_FILE_READ_OPEN_FAILED,
   "ファイルの読み込みに失敗しました。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_FILE_WRITE_OPEN_FAILED,
   "ファイルの書き込みに失敗しました。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_FILE_DOES_NOT_EXIST,
   "ファイルは存在しません。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_MENU_VIEW_OPTIONS_SUGGEST_LOADED_CORE_FIRST,
   "ロードしたコアを最初に優先する:"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_ZOOM,
   "ズーム"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_VIEW,
   "表示"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_VIEW_TYPE_ICONS,
   "アイコン"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_VIEW_TYPE_LIST,
   "一覧"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_MENU_SEARCH_CLEAR,
   "クリア"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_PROGRESS,
   "進行状況:"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_MENU_VIEW_OPTIONS_ALL_PLAYLISTS_LIST_MAX_COUNT,
   "'すべてのプレイリスト'一覧の最大個数:"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_MENU_VIEW_OPTIONS_ALL_PLAYLISTS_GRID_MAX_COUNT,
   "'すべてのプレイリスト'一覧の最大個数:"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_MENU_VIEW_OPTIONS_SHOW_HIDDEN_FILES,
   "隠しファイルとフォルダを表示:"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_NEW_PLAYLIST,
   "新規プレイリスト"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_ENTER_NEW_PLAYLIST_NAME,
   "新しいプレイリストの名前を入力してください:"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_DELETE_PLAYLIST,
   "プレイリストを削除"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_RENAME_PLAYLIST,
   "プレイリストの名前を変更"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_CONFIRM_DELETE_PLAYLIST,
   "プレイリスト「%1'」を削除してもよろしいですか？"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_QUESTION,
   "質問"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_COULD_NOT_DELETE_FILE,
   "ファイルの削除に失敗しました。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_COULD_NOT_RENAME_FILE,
   "ファイルの名前を変更できませんでした。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_GATHERING_LIST_OF_FILES,
   "ファイルの一覧を構築しています..."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_ADDING_FILES_TO_PLAYLIST,
   "ファイルをプレイリストに追加しています..."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_PLAYLIST_ENTRY,
   "プレイリスト項目"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_PLAYLIST_ENTRY_NAME,
   "名前:"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_PLAYLIST_ENTRY_PATH,
   "パス:"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_PLAYLIST_ENTRY_CORE,
   "コア:"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_PLAYLIST_ENTRY_DATABASE,
   "データベース:"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_PLAYLIST_ENTRY_EXTENSIONS,
   "拡張子:"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_PLAYLIST_ENTRY_EXTENSIONS_PLACEHOLDER,
   "(スペースで区切る。 既定は全部の拡張子)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_PLAYLIST_ENTRY_FILTER_INSIDE_ARCHIVES,
   "アーカイブの中に絞り込み"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_FOR_THUMBNAILS,
   "(サムネイルを見つかることに使う)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_CONFIRM_DELETE_PLAYLIST_ITEM,
   "アイテム「%1」を削除してもよろしいですか？"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_CANNOT_ADD_TO_ALL_PLAYLISTS,
   "まずひとつのプレイリストを選択してください。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_DELETE,
   "削除"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_ADD_ENTRY,
   "項目を追加..."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_ADD_FILES,
   "ファイルを追加..."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_ADD_FOLDER,
   "フォルダを追加..."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_EDIT,
   "編集"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_SELECT_FILES,
   "ファイル選択"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_SELECT_FOLDER,
   "フォルダ選択"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_FIELD_MULTIPLE,
   "<複数>"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_COULD_NOT_UPDATE_PLAYLIST_ENTRY,
   "プレイリスト項目の更新エラー."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_PLEASE_FILL_OUT_REQUIRED_FIELDS,
   "必須フィールドがすべて入力されていることを確認してください。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_UPDATE_RETROARCH_NIGHTLY,
   "RetroArchを更新 (nightly)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_UPDATE_RETROARCH_FINISHED,
   "更新に成功しました。変更を適用にするには, RetroArchを再起動する必要があります。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_UPDATE_RETROARCH_FAILED,
   "更新に失敗しました。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_MENU_HELP_ABOUT_CONTRIBUTORS,
   "作成者"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_CURRENT_SHADER,
   "現在のシェーダー"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_MOVE_DOWN,
   "下へ移動"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_MOVE_UP,
   "上へ移動"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_LOAD,
   "ロード"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_SAVE,
   "保存"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_REMOVE,
   "取り除く"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_REMOVE_PASSES,
   "パスを削除"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_APPLY,
   "適用"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_SHADER_ADD_PASS,
   "パスを追加"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_SHADER_CLEAR_ALL_PASSES,
   "すべてのパスを取り除く"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_SHADER_NO_PASSES,
   "シェーダパスはありません。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_RESET_PASS,
   "このパスをリセット"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_RESET_ALL_PASSES,
   "すべてのパスをリセット"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_RESET_PARAMETER,
   "パラメータをリセット"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_DOWNLOAD_THUMBNAIL,
   "サムネイルをダウンロード"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_DOWNLOAD_ALREADY_IN_PROGRESS,
   "他のダウンロードが実行中です。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_MENU_VIEW_OPTIONS_STARTUP_PLAYLIST,
   "起動時に表示するプレイリスト:"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_MENU_VIEW_OPTIONS_THUMBNAIL_TYPE,
   "サムネイル"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_MENU_VIEW_OPTIONS_THUMBNAIL_CACHE_LIMIT,
   "サムネイルキャッシュの上限:"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_MENU_VIEW_OPTIONS_THUMBNAIL_DROP_SIZE_LIMIT,
   "ドラッグ&ドロップしたサムネイルサイズの上限:"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_DOWNLOAD_ALL_THUMBNAILS,
   "すべてのサムネイルをダウンロード"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_DOWNLOAD_ALL_THUMBNAILS_ENTIRE_SYSTEM,
   "システムのすべて"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_DOWNLOAD_ALL_THUMBNAILS_THIS_PLAYLIST,
   "このプレイリスト"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_THUMBNAIL_PACK_DOWNLOADED_SUCCESSFULLY,
   "サムネイルのダウンロードが成功しました。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_DOWNLOAD_PLAYLIST_THUMBNAIL_PROGRESS,
   "成功した数: %1 失敗した数: %2"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_CORE_OPTIONS,
   "コアオプション"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_RESET,
   "リセット"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_RESET_ALL,
   "全てをリセット"
   )

/* Unsorted */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_UPDATER_SETTINGS,
   "コアアップデータ設定"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ACCOUNTS_CHEEVOS_SETTINGS,
   "Cheevosアカウント"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_COUNTERS,
   "コアカウンタ"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NO_DISK,
   "ディスクが選択されていません"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_FRONTEND_COUNTERS,
   "フロントエンドカウンタ"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_HORIZONTAL_MENU,
   "水平メニュー"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_DESCRIPTOR_HIDE_UNBOUND,
   "未定義のコア入力の識別子を隠す"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_DESCRIPTOR_LABEL_SHOW,
   "入力の識別子ラベルを表示"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OVERLAY_SETTINGS,
   "OSDオーバーレイ"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LOAD_CONTENT_HISTORY,
   "履歴"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_LOAD_CONTENT_HISTORY,
   "最近の履歴プレイリストからコンテンツを選択します."
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_LOAD_CONTENT_HISTORY,
   "コンテンツをロードすると、コンテンツと libretro コアの組み合わせが履歴に保存されます。\n履歴は RetroArch の構成ファイルと同じディレクトリのファイルに保存されます。起動時に構成ファイルが読み込まれていない場合、履歴は保存も読み込みもされず、メインメニューにも現れません。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MULTIMEDIA_SETTINGS,
   "マルチメディア"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SUBSYSTEM_SETTINGS,
   "サブシステム"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NO_NETPLAY_HOSTS_FOUND,
   "該当するネットプレイホストが見つかりませんでした。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NO_PLAYLISTS,
   "プレイリストが見つかりません。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_BT_CONNECTED,
   "接続しました"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ONLINE,
   "オンライン"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PORT,
   "ポート"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_SETTINGS,
   "チート設定"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_SEARCH_SETTINGS,
   "チート検索を開始/続行"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SECONDS,
   "秒"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_START_CORE,
   "コアをスタート"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_START_CORE,
   "コンテンツなしでコアを開始します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SUPPORTED_CORES,
   "提案するコア"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_UNABLE_TO_READ_COMPRESSED_FILE,
   "圧縮ファイルの読み込みに失敗しました"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_USER,
   "ユーザ"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_KEYBOARD,
   "キーボード"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_USE_BUILTIN_IMAGE_VIEWER,
   "内蔵の画像ビューアを使用"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_MAX_SWAPCHAIN_IMAGES,
   "指定したバッファリングモードを明示的に使用するようビデオドライバに指定します. "
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_WAITABLE_SWAPCHAINS,
   "CPUとGPUを強制に同期します. 遅延が減る代わりに性能が低下します."
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_MAX_FRAME_LATENCY,
   "指定したバッファリングモードを明示的に使用するようビデオドライバに指定します. "
   )
MSG_HASH(
   MENU_ENUM_LABEL_VIDEO_SHADER_PRESET_TWO,
   "シェーダのプリセット"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VIDEO_SHADER_PRESET_PREPEND_TWO,
   "シェーダのプリセット"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VIDEO_SHADER_PRESET_APPEND_TWO,
   "シェーダのプリセット"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_BROWSE_URL_LIST,
   "URLを参照"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_BROWSE_URL,
   "URLのパス"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_BROWSE_START,
   "スタート"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_ROOM_NICKNAME,
   "ニックネーム: %s"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_COMPAT_CONTENT_FOUND,
   "対応するコンテンツが見つかりました"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_START_GONG,
   "開始"
   )

/* Unused (Only Exist in Translation Files) */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_ASPECT_RATIO_AUTO,
   "自動アスペクト比"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_ROOM_NICKNAME_LAN,
   "ニックネーム (LAN): %s"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_STATUS,
   "ステータス"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_BGM_ENABLE,
   "システムBGMを有効"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CUSTOM_RATIO,
   "カスタム比"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RECORD_ENABLE,
   "録画対応"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RECORD_PATH,
   "出力ファイル"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RECORD_USE_OUTPUT_DIRECTORY,
   "出力ディレクトリを使用"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_FORCE_ASPECT,
   "アスペクト比を強制"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SELECT_FROM_PLAYLIST,
   "プレイリストから選択"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RESUME,
   "再開"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_RESUME,
   "クイックメニューを閉じて現在動作中のアプリを再開します。"
   )
MSG_HASH( /* FIXME Still exists in a comment about being removed */
   MENU_ENUM_LABEL_VALUE_MATERIALUI_MENU_FOOTER_OPACITY,
   "フッタの不透明度"
   )
MSG_HASH( /* FIXME Still exists in a comment about being removed */
   MENU_ENUM_SUBLABEL_MATERIALUI_MENU_FOOTER_OPACITY,
   "フッタの不透明度を修正します."
   )
MSG_HASH( /* FIXME Still exists in a comment about being removed */
   MENU_ENUM_LABEL_VALUE_MATERIALUI_MENU_HEADER_OPACITY,
   "ヘッダの不透明度"
   )
MSG_HASH( /* FIXME Still exists in a comment about being removed */
   MENU_ENUM_SUBLABEL_MATERIALUI_MENU_HEADER_OPACITY,
   "ヘッダの不透明度を修正します."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_ENABLE,
   "ネットプレイを有効"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RDB_ENTRY_START_CONTENT,
   "コンテンツをスタート"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONTENT_HISTORY_PATH,
   "コンテンツの履歴ディレクトリ"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CRT_SWITCH_RESOLUTION_OUTPUT_DISPLAY_ID,
   "出力ディスプレイの識別番号"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CRT_SWITCH_RESOLUTION_OUTPUT_DISPLAY_ID,
   "CRTディスプレイに接続されている出力ポートを選択します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_HELP,
   "ヘルプ"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CLEAR_SETTING,
   "クリア"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_HELP_AUDIO_VIDEO_TROUBLESHOOTING,
   "オーディオとビデオのトラブルシューティング"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_HELP_LOADING_CONTENT,
   "コンテンツをロードするには"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_HELP_SCANNING_CONTENT,
   "コンテンツをスキャン中"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_HELP_WHAT_IS_A_CORE,
   "コアとは？"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_HELP_SEND_DEBUG_INFO,
   "デバッグ情報の送信"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_HELP_SEND_DEBUG_INFO,
   "解析のため, デバイスとRetroArch設定に関する情報をサーバに送信します."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MANAGEMENT,
   "データベースの設定"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_DELAY_FRAMES,
   "ネットプレイの延期フレーム"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_LAN_SCAN_SETTINGS,
   "ローカルネットワークをスキャン"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NETPLAY_LAN_SCAN_SETTINGS,
   "ローカルネットワーク上のネットプレイホストをスキャンして接続します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_MODE,
   "ネットプレイのクライアントを有効"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_SPECTATOR_MODE_ENABLE,
   "ネットプレイの観覧を有効"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEEVOS_DESCRIPTION,
   "説明"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_FRAME_THROTTLE_ENABLE,
   "フレーム制御"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_START_SEARCH,
   "新しいチート検索を開始"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_CONTINUE_SEARCH,
   "検索を続行"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEAT_CONTINUE_SEARCH,
   "新しいチートを検索し続けます。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ACHIEVEMENT_LIST_HARDCORE,
   "実績表(ハードコア)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_CHEAT_DETAILS,
   "チート詳細"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_META_CHEAT_DETAILS,
   "チートの詳細設定を管理します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_CHEAT_SEARCH,
   "チート検索を開始/続行"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_META_CHEAT_SEARCH,
   "チートコードの検索を開始/再開します."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_NUM_PASSES,
   "チートのパス"
   )

/* Unused (Needs Confirmation) */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_ANALOG_LEFT_X,
   "左アナログX"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_ANALOG_LEFT_Y,
   "左アナログY"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_ANALOG_RIGHT_X,
   "右アナログX"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_ANALOG_RIGHT_Y,
   "右アナログY"
   )
MSG_HASH(
   MENU_ENUM_LABEL_CHEAT_SEARCH_SETTINGS,
   "チート検索を開始/再開する"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DATABASE_CURSOR_LIST,
   "データベースのカーソル表"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DATABASE_CURSOR_LIST_ENTRY_DATABASE_INFO,
   "データベース情報"
   )
MSG_HASH( /* FIXME Seems related to MENU_ENUM_LABEL_VALUE_CORE_ASSETS_DIRECTORY, possible duplicate */
   MENU_ENUM_LABEL_VALUE_CORE_ASSETS_DIR,
   "ダウンロード"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_SETTINGS,
   "ネットプレイ設定"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_SLANG_SUPPORT,
   "Slang 対応"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_FBO_SUPPORT,
   "OpenGL/Direct3Dテクスチャーへのレンダリング(マルチパスシェーダ)対応"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONTENT_DIR,
   "コンテンツ"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ASK_ARCHIVE,
   "尋ねる"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_BASIC_MENU_ENUM_CONTROLS,
   "基本的なメニューコントルール"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_BASIC_MENU_ENUM_CONTROLS_CONFIRM,
   "確認/OK"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_BASIC_MENU_ENUM_CONTROLS_INFO,
   "情報"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_BASIC_MENU_ENUM_CONTROLS_QUIT,
   "終了"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_BASIC_MENU_ENUM_CONTROLS_SCROLL_UP,
   "上にスクロール"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_BASIC_MENU_ENUM_CONTROLS_START,
   "デフォルト"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_BASIC_MENU_ENUM_CONTROLS_TOGGLE_KEYBOARD,
   "キーボードに切り替え"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_BASIC_MENU_ENUM_CONTROLS_TOGGLE_MENU,
   "メニューに切り替え"
   )

/* Discord Status */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DISCORD_IN_MENU,
   "メニュー表示中"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DISCORD_IN_GAME,
   "ゲーム中"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DISCORD_IN_GAME_PAUSED,
   "ゲーム内(一時停止)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DISCORD_STATUS_PLAYING,
   "実行中"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DISCORD_STATUS_PAUSED,
   "一時停止"
   )

/* Notifications */

MSG_HASH( /* FIXME Should be MSG_ */
   MENU_ENUM_LABEL_VALUE_NETPLAY_START_WHEN_LOADED,
   "ネットプレイはコンテンツロード後に開始します。"
   )
MSG_HASH(
   MSG_NETPLAY_NEED_CONTENT_LOADED,
   "ネットプレイを開始する前にコンテンツをロードする必要があります。"
   )
MSG_HASH( /* FIXME Should be MSG_ */
   MENU_ENUM_LABEL_VALUE_NETPLAY_LOAD_CONTENT_MANUALLY,
   "該当するコアやコンテンツファイルが見つかりませんでした。手動でロードしてください。 "
   )
MSG_HASH( /* FIXME Should be MSG_ */
   MENU_ENUM_LABEL_VALUE_VIDEO_DRIVER_FALLBACK,
   "グラフィックドライバは, RetroArchの現在のビデオドライバと互換性がありません.  %s ドライバに戻ります.  変更を有効にするには, RetroArchを再起動してください. "
   )
MSG_HASH( /* FIXME Should be MSG_ */
   MENU_ENUM_LABEL_VALUE_SIDELOAD_CORE_SUCCESS,
   "コアのインストールに成功しました"
   )
MSG_HASH( /* FIXME Should be MSG_ */
   MENU_ENUM_LABEL_VALUE_SIDELOAD_CORE_ERROR,
   "コアのインストールに失敗しました"
   )
MSG_HASH(
   MSG_AI_AUTO_MODE_ENABLED,
   "自動翻訳を有効にしました。"
   )
MSG_HASH(
   MSG_AI_AUTO_MODE_DISABLED,
   "自動翻訳を無効にしました。"
   )
MSG_HASH(
   MSG_CHEAT_DELETE_ALL_INSTRUCTIONS,
   "すべてのチートを削除するには, 右を5回押してください."
   )
MSG_HASH(
   MSG_FAILED_TO_SAVE_DEBUG_INFO,
   "デバッグ情報の保存に失敗しました。"
   )
MSG_HASH(
   MSG_FAILED_TO_SEND_DEBUG_INFO,
   "デバッグ情報のサーバへの送信に失敗しました。"
   )
MSG_HASH(
   MSG_SENDING_DEBUG_INFO,
   "デバッグ情報の送信中..."
   )
MSG_HASH(
   MSG_SENT_DEBUG_INFO,
   "デバッグ情報のサーバへの送信に成功しました。ID番号は %u です。"
   )
MSG_HASH(
   MSG_PRESS_TWO_MORE_TIMES_TO_SEND_DEBUG_INFO,
   "2回以上押すと, 診断情報をRetroArchチームに送信します."
   )
MSG_HASH(
   MSG_PRESS_ONE_MORE_TIME_TO_SEND_DEBUG_INFO,
   "もう一度押すと, 診断情報をRetroArchチームに送信します."
   )
MSG_HASH(
   MSG_AUDIO_MIXER_VOLUME,
   "グローバルのミキサー音量"
   )
MSG_HASH(
   MSG_NETPLAY_LAN_SCAN_COMPLETE,
   "ネットプレイスキャン完了"
   )
MSG_HASH(
   MSG_SORRY_UNIMPLEMENTED_CORES_DONT_DEMAND_CONTENT_NETPLAY,
   "申し訳ありませんが, 実装されていません: コンテンツを要求しないコアはネットプレイに参加できません."
   )
MSG_HASH(
   MSG_NATIVE,
   "ネイティブ"
   )
MSG_HASH(
   MSG_UNKNOWN_NETPLAY_COMMAND_RECEIVED,
   "不正なネットプレイコマンドを受信しました"
   )
MSG_HASH(
   MSG_FILE_ALREADY_EXISTS_SAVING_TO_BACKUP_BUFFER,
   "ファイルが既に存在します。バックアップバッファに保存中"
   )
MSG_HASH(
   MSG_GOT_CONNECTION_FROM,
   "\"%s\" からの接続を確立:"
   )
MSG_HASH(
   MSG_GOT_CONNECTION_FROM_NAME,
   "\"%s (%s)\" からの接続を確立:"
   )
MSG_HASH(
   MSG_SETTING_DISK_IN_TRAY,
   "ディスクがトレイに入りました"
   )
MSG_HASH(
   MSG_WAITING_FOR_CLIENT,
   "クライアントを待っています..."
   )
MSG_HASH(
   MSG_NETPLAY_YOU_HAVE_LEFT_THE_GAME,
   "ゲームから退出しました"
   )
MSG_HASH(
   MSG_NETPLAY_YOU_HAVE_JOINED_AS_PLAYER_N,
   "'プレイヤー%u'で接続しました"
   )
MSG_HASH(
   MSG_NETPLAY_YOU_HAVE_JOINED_WITH_INPUT_DEVICES_S,
   "入力デバイス'%.*s'で接続しました"
   )
MSG_HASH(
   MSG_NETPLAY_PLAYER_S_LEFT,
   "プレイヤー'%.*s'が退出しました"
   )
MSG_HASH(
   MSG_NETPLAY_S_HAS_JOINED_AS_PLAYER_N,
   "'%.*s'がプレイヤー'%u'として接続しました"
   )
MSG_HASH(
   MSG_NETPLAY_S_HAS_JOINED_WITH_INPUT_DEVICES_S,
   "'%.*s'が入力デバイス'%.*s'で接続しました"
   )
MSG_HASH(
   MSG_NETPLAY_NOT_RETROARCH,
   "相手の接続が失敗しました. 古いRetroArchバージョンを使っているかもしれません. "
   )
MSG_HASH(
   MSG_NETPLAY_DIFFERENT_VERSIONS,
   "警告: 相手が違うRetroArchバージョンを使っています. 問題があれば同じバージョンを使って下さい. "
   )
MSG_HASH(
   MSG_NETPLAY_DIFFERENT_CORES,
   "相手が違うコアを使っています。接続できません。"
   )
MSG_HASH(
   MSG_NETPLAY_DIFFERENT_CORE_VERSIONS,
   "警告: 相手が違うコアのバージョンを使っています. 問題があれば同じバージョンを使って下さい. "
   )
MSG_HASH(
   MSG_NETPLAY_ENTER_PASSWORD,
   "ネットプレイサーバのパスワードを入力してください:"
   )
MSG_HASH(
   MSG_DISCORD_CONNECTION_REQUEST,
   "ユーザからの接続を許可しますか:"
   )
MSG_HASH(
   MSG_NETPLAY_INCORRECT_PASSWORD,
   "不正なパスワード"
   )
MSG_HASH(
   MSG_NETPLAY_SERVER_NAMED_HANGUP,
   "\"%s\" は退出しました"
   )
MSG_HASH(
   MSG_NETPLAY_SERVER_HANGUP,
   "ネットプレイのクライアントが切断されました"
   )
MSG_HASH(
   MSG_NETPLAY_CLIENT_HANGUP,
   "ネットプレイが切断されました"
   )
MSG_HASH(
   MSG_NETPLAY_CANNOT_PLAY_UNPRIVILEGED,
   "プレイする許可はありません"
   )
MSG_HASH(
   MSG_NETPLAY_CANNOT_PLAY_NO_SLOTS,
   "空きプレイヤースロットはありません"
   )
MSG_HASH(
   MSG_NETPLAY_CANNOT_PLAY_NOT_AVAILABLE,
   "選択した入力デバイスは使用できません"
   )
MSG_HASH(
   MSG_NETPLAY_CANNOT_PLAY,
   "プレイモードを切り替えできませんでした"
   )
MSG_HASH(
   MSG_NETPLAY_PEER_PAUSED,
   "ネットプレイのピア \"%s\" が一時停止しました"
   )
MSG_HASH(
   MSG_NETPLAY_CHANGED_NICK,
   "ニックネームを \"%s\" に変更しました"
   )
MSG_HASH(
   MSG_NETPLAY_FAILED_TO_KICK_CLIENT_S,
   "クライアントのキックに失敗しました: \"%s\""
   )
MSG_HASH(
   MSG_NETPLAY_FAILED_TO_BAN_CLIENT_S,
   "クライアントの BAN に失敗しました: \"%s\""
   )
MSG_HASH(
   MSG_NETPLAY_STATUS_PLAYING,
   "実行中"
   )
MSG_HASH(
   MSG_NETPLAY_CLIENT_DEVICES,
   "デバイス"
   )

MSG_HASH(
   MSG_AUDIO_VOLUME,
   "音量"
   )
MSG_HASH(
   MSG_AUTODETECT,
   "自動検出"
   )
MSG_HASH(
   MSG_AUTOLOADING_SAVESTATE_FROM,
   "ステートセーブを自動ロード中 from"
   )
MSG_HASH(
   MSG_CAPABILITIES,
   "対応機能"
   )
MSG_HASH(
   MSG_CONNECTING_TO_NETPLAY_HOST,
   "ネットプレイホストに接続中"
   )
MSG_HASH(
   MSG_CONNECTING_TO_PORT,
   "ポートに接続中"
   )
MSG_HASH(
   MSG_CONNECTION_SLOT,
   "接続スロット"
   )
MSG_HASH(
   MSG_FETCHING_CORE_LIST,
   "コアのリストを取得しています..."
   )
MSG_HASH(
   MSG_CORE_LIST_FAILED,
   "コアのリストの取得に失敗しました!"
   )
MSG_HASH(
   MSG_LATEST_CORE_INSTALLED,
   "すでに最新バージョンがインストール済み: "
   )
MSG_HASH(
   MSG_UPDATING_CORE,
   "コアを更新中: "
   )
MSG_HASH(
   MSG_DOWNLOADING_CORE,
   "コアをダウンロード中: "
   )
MSG_HASH(
   MSG_EXTRACTING_CORE,
   "コアを展開中: "
   )
MSG_HASH(
   MSG_CORE_INSTALLED,
   "コアをインストールしました: "
   )
MSG_HASH(
   MSG_CORE_INSTALL_FAILED,
   "コアのインストールに失敗しました: "
   )
MSG_HASH(
   MSG_SCANNING_CORES,
   "コアをスキャン中..."
   )
MSG_HASH(
   MSG_CHECKING_CORE,
   "コアをチェック中: "
   )
MSG_HASH(
   MSG_ALL_CORES_UPDATED,
   "すべてのインストール済みコアは最新バージョンです"
   )
MSG_HASH(
   MSG_ALL_CORES_SWITCHED_PFD,
   "サポートされているすべてのコアがGoogleプレイストアのバージョンに切り替わりました"
   )
MSG_HASH(
   MSG_NUM_CORES_UPDATED,
   "更新されたコア: "
   )
MSG_HASH(
   MSG_NUM_CORES_LOCKED,
   "スキップしたコア: "
   )
MSG_HASH(
   MSG_CORE_UPDATE_DISABLED,
   "コアの更新は無効です - コアがロックされています: "
   )
MSG_HASH(
   MSG_PLAYLIST_MANAGER_RESETTING_CORES,
   "コアをリセット中: "
   )
MSG_HASH(
   MSG_PLAYLIST_MANAGER_CORES_RESET,
   "コアのリセット: "
   )
MSG_HASH(
   MSG_PLAYLIST_MANAGER_CLEANING_PLAYLIST,
   "プレイリストをクリーニング中: "
   )
MSG_HASH(
   MSG_PLAYLIST_MANAGER_PLAYLIST_CLEANED,
   "プレイリストをクリーニングしました: "
   )
MSG_HASH(
   MSG_PLAYLIST_MANAGER_REFRESH_MISSING_CONFIG,
   "更新に失敗しました - プレイリストに有効なスキャン記録がありません: "
   )
MSG_HASH(
   MSG_PLAYLIST_MANAGER_REFRESH_INVALID_CONTENT_DIR,
   "更新に失敗しました - 無効/不足しているコンテンツディレクトリ:"
   )
MSG_HASH(
   MSG_ADDED_TO_FAVORITES,
   "お気に入りに追加しました"
   )
MSG_HASH(
   MSG_ADD_TO_FAVORITES_FAILED,
   "お気に入りの追加に失敗しました: プレイリストがいっぱいです"
   )
MSG_HASH(
   MSG_SET_CORE_ASSOCIATION,
   "コアを設定しました:"
   )
MSG_HASH(
   MSG_RESET_CORE_ASSOCIATION,
   "プレイリスト項目のコアの関連付けがリセットされました."
   )
MSG_HASH(
   MSG_APPENDED_DISK,
   "ディスクを挿入しました"
   )
MSG_HASH(
   MSG_FAILED_TO_APPEND_DISK,
   "ディスクの追加に失敗しました"
   )
MSG_HASH(
   MSG_APPLICATION_DIR,
   "アプリディレクトリ"
   )
MSG_HASH(
   MSG_APPLYING_CHEAT,
   "チートの変更を適用中"
   )
MSG_HASH(
   MSG_APPLYING_PATCH,
   "パッチを適用中: %s"
   )
MSG_HASH(
   MSG_APPLYING_SHADER,
   "シェーダーを適用中"
   )
MSG_HASH(
   MSG_AUDIO_MUTED,
   "音声をミュートしました。"
   )
MSG_HASH(
   MSG_AUDIO_UNMUTED,
   "音声のミュートを解除しました。"
   )
MSG_HASH(
   MSG_AUTOCONFIG_FILE_ERROR_SAVING,
   "コントローラープロファイルの保存に失敗しました。"
   )
MSG_HASH(
   MSG_AUTOCONFIG_FILE_SAVED_SUCCESSFULLY,
   "コントローラープロファイルを正常に保存しました。"
   )
MSG_HASH(
   MSG_AUTOSAVE_FAILED,
   "自動セーブを初期化できませんでした。"
   )
MSG_HASH(
   MSG_AUTO_SAVE_STATE_TO,
   "自動ステートセーブ to"
   )
MSG_HASH(
   MSG_BYTES,
   "バイト"
   )
MSG_HASH(
   MSG_CHEEVOS_HARDCORE_MODE_ENABLE,
   "ハードコアモードが有効になりました。ステートセーブと巻き戻しが無効になります。"
   )
MSG_HASH(
   MSG_COMPARING_WITH_KNOWN_MAGIC_NUMBERS,
   "既知のマジックナンバーと比較しています..."
   )
MSG_HASH(
   MSG_CONFIG_DIRECTORY_NOT_SET,
   "構成ディレクトリが設定されていません。新しい構成を保存できません。"
   )
MSG_HASH(
   MSG_CONNECTED_TO,
   "接続しました to"
   )
MSG_HASH(
   MSG_CONTENT_CRC32S_DIFFER,
   "コンテンツの CRC32 が異なります。異なるゲームでは使用できません。"
   )
MSG_HASH(
   MSG_CONTENT_LOADING_SKIPPED_IMPLEMENTATION_WILL_DO_IT,
   "コンテンツのロードがスキップされました。実装は独自にロードされます。"
   )
MSG_HASH(
   MSG_CORE_DOES_NOT_SUPPORT_SAVESTATES,
   "コアはステートセーブに対応していません。"
   )
MSG_HASH(
   MSG_CORE_OPTIONS_FILE_CREATED_SUCCESSFULLY,
   "コアオプションファイルの作成に成功しました。"
   )
MSG_HASH(
   MSG_CORE_OPTIONS_FILE_REMOVED_SUCCESSFULLY,
   "コアオプションファイルは正常に削除されました。"
   )
MSG_HASH(
   MSG_CORE_OPTIONS_RESET,
   "すべてのコアオプションはデフォルトにリセットされます。"
   )
MSG_HASH(
   MSG_CORE_OPTIONS_FLUSHED,
   "コアオプションファイルを保存しました to:"
   )
MSG_HASH(
   MSG_CORE_OPTIONS_FLUSH_FAILED,
   "コアオプションの保存に失敗しました to:"
   )
MSG_HASH(
   MSG_COULD_NOT_FIND_ANY_NEXT_DRIVER,
   "次のドライバを見つけることができませんでした"
   )
MSG_HASH(
   MSG_COULD_NOT_FIND_COMPATIBLE_SYSTEM,
   "対応システムを見つけることができませんでした。"
   )
MSG_HASH(
   MSG_COULD_NOT_FIND_VALID_DATA_TRACK,
   "有効なデータトラックを見つけることができませんでした"
   )
MSG_HASH(
   MSG_COULD_NOT_OPEN_DATA_TRACK,
   "データトラックを開くことができませんでした。"
   )
MSG_HASH(
   MSG_COULD_NOT_READ_CONTENT_FILE,
   "コンテンツファイルを読み込むことができませんでした"
   )
MSG_HASH(
   MSG_COULD_NOT_READ_MOVIE_HEADER,
   "動画ヘッダーを読み込むことができませんでした。"
   )
MSG_HASH(
   MSG_COULD_NOT_READ_STATE_FROM_MOVIE,
   "動画から状態を読み込むことができませんでした。"
   )
MSG_HASH(
   MSG_CRC32_CHECKSUM_MISMATCH,
   "CRC32 checksum mismatch between content file and saved content checksum in replay file header) replay highly likely to desync on playback."
   )
MSG_HASH(
   MSG_DECOMPRESSION_ALREADY_IN_PROGRESS,
   "展開は既に進行中です."
   )
MSG_HASH(
   MSG_DECOMPRESSION_FAILED,
   "展開に失敗しました."
   )
MSG_HASH(
   MSG_DETECTED_VIEWPORT_OF,
   "表示領域を検出しました:"
   )
MSG_HASH(
   MSG_DID_NOT_FIND_A_VALID_CONTENT_PATCH,
   "有効なコンテンツパッチが見つかりませんでした。"
   )
MSG_HASH(
   MSG_DISCONNECT_DEVICE_FROM_A_VALID_PORT,
   "デバイスを有効なポートから切断してください"
   )
MSG_HASH(
   MSG_DISK_EJECTED,
   "仮想ディスクトレイが取り出されました。"
   )
MSG_HASH(
   MSG_DOWNLOADING,
   "ダウンロード中"
   )
MSG_HASH(
   MSG_INDEX_FILE,
   "インデックス"
   )
MSG_HASH(
   MSG_DOWNLOAD_FAILED,
   "ダウンロードに失敗しました"
   )
MSG_HASH(
   MSG_ERROR,
   "エラー"
   )
MSG_HASH(
   MSG_ERROR_LIBRETRO_CORE_REQUIRES_CONTENT,
   "Libretroコアはコンテンツを必要としますが, 何も提供されませんでした."
   )
MSG_HASH(
   MSG_ERROR_LIBRETRO_CORE_REQUIRES_SPECIAL_CONTENT,
   "Libretro コアは特別なコンテンツを必要としていますが, それらが供給されていません。"
   )
MSG_HASH(
   MSG_ERROR_LIBRETRO_CORE_REQUIRES_VFS,
   "コアが VFS をサポートしておらず、ローカルコピーからのロードに失敗しました"
   )
MSG_HASH(
   MSG_ERROR_PARSING_ARGUMENTS,
   "引数の解析エラーです。"
   )
MSG_HASH(
   MSG_ERROR_SAVING_CORE_OPTIONS_FILE,
   "コアオプションファイルの保存に失敗しました。"
   )
MSG_HASH(
   MSG_ERROR_REMOVING_CORE_OPTIONS_FILE,
   "コアオプションファイルの削除に失敗しました。"
   )
MSG_HASH(
   MSG_ERROR_SAVING_REMAP_FILE,
   "リマップファイルの保存に失敗しました。"
   )
MSG_HASH(
   MSG_ERROR_REMOVING_REMAP_FILE,
   "リマップファイルの削除に失敗しました"
   )
MSG_HASH(
   MSG_ERROR_SAVING_SHADER_PRESET,
   "シェーダープリセットの保存に失敗しました。"
   )
MSG_HASH(
   MSG_EXTERNAL_APPLICATION_DIR,
   "外部アプリディレクトリ"
   )
MSG_HASH(
   MSG_EXTRACTING,
   "展開中"
   )
MSG_HASH(
   MSG_EXTRACTING_FILE,
   "ファイルを展開中"
   )
MSG_HASH(
   MSG_FAILED_SAVING_CONFIG_TO,
   "構成の保存に失敗しました to"
   )
MSG_HASH(
   MSG_FAILED_TO_ALLOCATE_MEMORY_FOR_PATCHED_CONTENT,
   "パッチを適用したコンテンツのメモリ割り当てに失敗しました..."
   )
MSG_HASH(
   MSG_FAILED_TO_APPLY_SHADER,
   "シェーダーの適用に失敗しました。"
   )
MSG_HASH(
   MSG_FAILED_TO_APPLY_SHADER_PRESET,
   "シェーダープリセットの適用に失敗しました:"
   )
MSG_HASH(
   MSG_FAILED_TO_BIND_SOCKET,
   "ソケットのバインドに失敗しました。"
   )
MSG_HASH(
   MSG_FAILED_TO_CREATE_THE_DIRECTORY,
   "ディレクトリの作成に失敗しました"
   )
MSG_HASH(
   MSG_FAILED_TO_EXTRACT_CONTENT_FROM_COMPRESSED_FILE,
   "圧縮ファイルのコンテンツの展開に失敗しました"
   )
MSG_HASH(
   MSG_FAILED_TO_GET_NICKNAME_FROM_CLIENT,
   "クライアントのニックネームの取得に失敗しました"
   )
MSG_HASH(
   MSG_FAILED_TO_LOAD,
   "ロードに失敗しました"
   )
MSG_HASH(
   MSG_FAILED_TO_LOAD_CONTENT,
   "コンテンツのロードに失敗しました"
   )
MSG_HASH(
   MSG_FAILED_TO_LOAD_MOVIE_FILE,
   "動画ファイルのロードに失敗しました"
   )
MSG_HASH(
   MSG_FAILED_TO_LOAD_OVERLAY,
   "オーバーレイのロードに失敗しました"
   )
MSG_HASH(
   MSG_FAILED_TO_LOAD_STATE,
   "ステートロードに失敗しました from"
   )
MSG_HASH(
   MSG_FAILED_TO_OPEN_LIBRETRO_CORE,
   "libretro コアを開くことができませんでした"
   )
MSG_HASH(
   MSG_FAILED_TO_PATCH,
   "パッチに失敗しました"
   )
MSG_HASH(
   MSG_FAILED_TO_RECEIVE_HEADER_FROM_CLIENT,
   "クライアントのヘッダの受信に失敗しました"
   )
MSG_HASH(
   MSG_FAILED_TO_RECEIVE_NICKNAME,
   "ニックネームの受信に失敗しました。"
   )
MSG_HASH(
   MSG_FAILED_TO_RECEIVE_NICKNAME_FROM_HOST,
   "ホストからニックネームの受信に失敗しました。"
   )
MSG_HASH(
   MSG_FAILED_TO_RECEIVE_NICKNAME_SIZE_FROM_HOST,
   "ホストからニックネームサイズの受信に失敗しました。"
   )
MSG_HASH(
   MSG_FAILED_TO_RECEIVE_SRAM_DATA_FROM_HOST,
   "ホストから SRAM データを受信できませんでした。"
   )
MSG_HASH(
   MSG_FAILED_TO_REMOVE_DISK_FROM_TRAY,
   "トレイからディスクを削除できませんでした。"
   )
MSG_HASH(
   MSG_FAILED_TO_REMOVE_TEMPORARY_FILE,
   "一時ファイルの除去に失敗しました"
   )
MSG_HASH(
   MSG_FAILED_TO_SAVE_SRAM,
   "SRAMの保存に失敗しました"
   )
MSG_HASH(
   MSG_FAILED_TO_LOAD_SRAM,
   "SRAM のロードに失敗しました"
   )
MSG_HASH(
   MSG_FAILED_TO_SAVE_STATE_TO,
   "ステートセーブに失敗しました to"
   )
MSG_HASH(
   MSG_FAILED_TO_SEND_NICKNAME,
   "ニックネームの送信に失敗しました。"
   )
MSG_HASH(
   MSG_FAILED_TO_SEND_NICKNAME_SIZE,
   "ニックネームサイズの送信に失敗しました。"
   )
MSG_HASH(
   MSG_FAILED_TO_SEND_NICKNAME_TO_CLIENT,
   "クライアントへのニックネームの送信に失敗しました。"
   )
MSG_HASH(
   MSG_FAILED_TO_SEND_NICKNAME_TO_HOST,
   "ホストへのニックネームの送信に失敗しました。"
   )
MSG_HASH(
   MSG_FAILED_TO_SEND_SRAM_DATA_TO_CLIENT,
   "クライアントへの SRAM データの送信に失敗しました。"
   )
MSG_HASH(
   MSG_FAILED_TO_START_AUDIO_DRIVER,
   "オーディオドライバの開始に失敗しました。オーディオなしで続行します"
   )
MSG_HASH(
   MSG_FAILED_TO_START_MOVIE_RECORD,
   "動画の録画の開始に失敗しました"
   )
MSG_HASH(
   MSG_FAILED_TO_START_RECORDING,
   "録画の開始に失敗しました"
   )
MSG_HASH(
   MSG_FAILED_TO_TAKE_SCREENSHOT,
   "スクリーンショットの撮影に失敗しました"
   )
MSG_HASH(
   MSG_FAILED_TO_UNDO_LOAD_STATE,
   "ステートロードの取り消しに失敗しました"
   )
MSG_HASH(
   MSG_FAILED_TO_UNDO_SAVE_STATE,
   "ステートセーブの取り消しに失敗しました"
   )
MSG_HASH(
   MSG_FAILED_TO_UNMUTE_AUDIO,
   "オーディオの消音解除に失敗しました"
   )
MSG_HASH(
   MSG_FATAL_ERROR_RECEIVED_IN,
   "致命的なエラーが発生しました in"
   )
MSG_HASH(
   MSG_FILE_NOT_FOUND,
   "ファイルが見つかりません"
   )
MSG_HASH(
   MSG_FOUND_AUTO_SAVESTATE_IN,
   "自動ステートセーブが見つかりました in"
   )
MSG_HASH(
   MSG_FOUND_DISK_LABEL,
   "ディスクラベルが見つかりました"
   )
MSG_HASH(
   MSG_FOUND_FIRST_DATA_TRACK_ON_FILE,
   "ファイルの最初のデータトラックが見つかりました"
   )
MSG_HASH(
   MSG_FOUND_LAST_STATE_SLOT,
   "最後のステートスロットが見つかりました"
   )
MSG_HASH(
   MSG_FOUND_SHADER,
   "シェーダが見つかりました"
   )
MSG_HASH(
   MSG_FRAMES,
   "フレーム"
   )
MSG_HASH(
   MSG_FOLDER_SPECIFIC_CORE_OPTIONS_FOUND_AT,
   "フォルダ固有のコアオプションが見つかりました at"
   )
MSG_HASH(
   MSG_GOT_INVALID_DISK_INDEX,
   "無効なディスクインデックスです"
   )
MSG_HASH(
   MSG_GRAB_MOUSE_STATE,
   "マウスステートをグラブする"
   )
MSG_HASH(
   MSG_GAME_FOCUS_ON,
   "ゲームフォーカス オン"
   )
MSG_HASH(
   MSG_GAME_FOCUS_OFF,
   "ゲームフォーカス オフ"
   )
MSG_HASH(
   MSG_INFLATED_CHECKSUM_DID_NOT_MATCH_CRC32,
   "チェックサムがCRC32と一致しませんでした."
   )
MSG_HASH(
   MSG_INPUT_CHEAT,
   "チートを入力"
   )
MSG_HASH(
   MSG_INPUT_CHEAT_FILENAME,
   "チートファイル名を入力"
   )
MSG_HASH(
   MSG_INPUT_PRESET_FILENAME,
   "プリセットファイル名を入力"
   )
MSG_HASH(
   MSG_INPUT_RENAME_ENTRY,
   "タイトルを変更"
   )
MSG_HASH(
   MSG_INTERFACE,
   "インタフェース"
   )
MSG_HASH(
   MSG_INTERNAL_STORAGE,
   "内蔵ストレージ"
   )
MSG_HASH(
   MSG_REMOVABLE_STORAGE,
   "リムーバブルストレージ"
   )
MSG_HASH(
   MSG_INVALID_NICKNAME_SIZE,
   "無効なニックネームサイズです"
   )
MSG_HASH(
   MSG_IN_BYTES,
   "(バイト)"
   )
MSG_HASH(
   MSG_IN_MEGABYTES,
   "(メガバイト)"
   )
MSG_HASH(
   MSG_IN_GIGABYTES,
   "(ギガバイト)"
   )
MSG_HASH(
   MSG_LIBRETRO_ABI_BREAK,
   "はこのlibretro実装とは異なるバージョンのlibretro用にコンパイルされています."
   )
MSG_HASH(
   MSG_LIBRETRO_FRONTEND,
   "libretroのフロントエンド"
   )
MSG_HASH(
   MSG_LOADED_STATE_FROM_SLOT,
   "スロット%dからステートロードしました"
   )
MSG_HASH(
   MSG_LOADING,
   "ロード中"
   )
MSG_HASH(
   MSG_FIRMWARE,
   "ファームウェアファイルが見つかりませんでした"
   )
MSG_HASH(
   MSG_LOADING_CONTENT_FILE,
   "コンテンツをロード中"
   )
MSG_HASH(
   MSG_LOADING_HISTORY_FILE,
   "履歴ファイルをロード中"
   )
MSG_HASH(
   MSG_LOADING_FAVORITES_FILE,
   "お気に入りファイルを読み込み中"
   )
MSG_HASH(
   MSG_LOADING_STATE,
   "ステートロード中"
   )
MSG_HASH(
   MSG_MEMORY,
   "メモリ"
   )
MSG_HASH(
   MSG_MOVIE_FORMAT_DIFFERENT_SERIALIZER_VERSION,
   "入力リプレイ動画フォーマットはシリアライザのバージョンが異なるようです. ほとんどの場合失敗します. "
   )
MSG_HASH(
   MSG_MOVIE_PLAYBACK_ENDED,
   "動画の再生を終了しました"
   )
MSG_HASH(
   MSG_MOVIE_RECORD_STOPPED,
   "動画の録画を停止しました"
   )
MSG_HASH(
   MSG_NETPLAY_FAILED,
   "ネットプレイの初期化に失敗しました。"
   )
MSG_HASH(
   MSG_NETPLAY_UNSUPPORTED,
   "コアはネットプレイに対応していません。"
   )
MSG_HASH(
   MSG_NO_CONTENT_STARTING_DUMMY_CORE,
   "コンテンツがありません. ダミーコアを開始します. "
   )
MSG_HASH(
   MSG_NO_SAVE_STATE_HAS_BEEN_OVERWRITTEN_YET,
   "ステートセーブはまだ上書きされていません"
   )
MSG_HASH(
   MSG_NO_STATE_HAS_BEEN_LOADED_YET,
   "ステートはまだロードされていません"
   )
MSG_HASH(
   MSG_OVERRIDES_ERROR_SAVING,
   "優先ファイルの保存に失敗しました。"
   )
MSG_HASH(
   MSG_OVERRIDES_SAVED_SUCCESSFULLY,
   "優先ファイルを保存しました"
   )
MSG_HASH(
   MSG_PAUSED,
   "一時停止"
   )
MSG_HASH(
   MSG_READING_FIRST_DATA_TRACK,
   "最初のデータトラックを読み込んでいます..."
   )
MSG_HASH(
   MSG_RECORDING_TERMINATED_DUE_TO_RESIZE,
   "サイズ変更のため録音が終了しました. "
   )
MSG_HASH(
   MSG_RECORDING_TO,
   "録画中 "
   )
MSG_HASH(
   MSG_REDIRECTING_CHEATFILE_TO,
   "チートファイルの出力先を変更しています to"
   )
MSG_HASH(
   MSG_REDIRECTING_SAVEFILE_TO,
   "セーブファイルの出力先を変更しています to"
   )
MSG_HASH(
   MSG_REDIRECTING_SAVESTATE_TO,
   "ステートセーブの出力先を変更しています to"
   )
MSG_HASH(
   MSG_REMAP_FILE_SAVED_SUCCESSFULLY,
   "リマップファイルを保存しました"
   )
MSG_HASH(
   MSG_REMAP_FILE_REMOVED_SUCCESSFULLY,
   "リマップファイルを削除しました"
   )
MSG_HASH(
   MSG_REMOVED_DISK_FROM_TRAY,
   "ディスクをトレイから取り出しました"
   )
MSG_HASH(
   MSG_REMOVING_TEMPORARY_CONTENT_FILE,
   "一時コンテンツファイルを削除中"
   )
MSG_HASH(
   MSG_RESET,
   "リセット"
   )
MSG_HASH(
   MSG_RESTARTING_RECORDING_DUE_TO_DRIVER_REINIT,
   "ドライバの再初期化により, 録画を再スタートしています."
   )
MSG_HASH(
   MSG_RESTORED_OLD_SAVE_STATE,
   "以前のステートセーブを復元しました"
   )
MSG_HASH(
   MSG_RESTORING_DEFAULT_SHADER_PRESET_TO,
   "シェーダ: デフォルトのシェーダプリセットを復元"
   )
MSG_HASH(
   MSG_REVERTING_SAVEFILE_DIRECTORY_TO,
   "セーブファイルディレクトリを元に戻しています to"
   )
MSG_HASH(
   MSG_REVERTING_SAVESTATE_DIRECTORY_TO,
   "ステートセーブディレクトリを元に戻しています to"
   )
MSG_HASH(
   MSG_REWINDING,
   "巻き戻しています"
   )
MSG_HASH(
   MSG_REWIND_INIT_FAILED,
   "巻き戻しバッファの初期化に失敗しました。巻き戻しが無効になります。"
   )
MSG_HASH(
   MSG_REWIND_INIT_FAILED_THREADED_AUDIO,
   "実装はスレッドオーディオを使用しています. 巻き戻しは使用できません. "
   )
MSG_HASH(
   MSG_REWIND_REACHED_END,
   "巻き戻しバッファの終わりに達しました"
   )
MSG_HASH(
   MSG_SAVED_NEW_CONFIG_TO,
   "新しい構成を保存しました to:"
   )
MSG_HASH(
   MSG_SAVED_STATE_TO_SLOT,
   "スロット%dにステートセーブしました"
   )
MSG_HASH(
   MSG_SAVED_SUCCESSFULLY_TO,
   "保存に成功しました to"
   )
MSG_HASH(
   MSG_SAVING_RAM_TYPE,
   "RAMの種類を保存中"
   )
MSG_HASH(
   MSG_SAVING_STATE,
   "ステートセーブ中"
   )
MSG_HASH(
   MSG_SCANNING,
   "スキャン中"
   )
MSG_HASH(
   MSG_SCANNING_OF_DIRECTORY_FINISHED,
   "ディレクトリのスキャンは完了しました。"
   )
MSG_HASH(
   MSG_SENDING_COMMAND,
   "コマンドを送信中"
   )
MSG_HASH(
   MSG_SHADER,
   "シェーダ"
   )
MSG_HASH(
   MSG_SHADER_PRESET_SAVED_SUCCESSFULLY,
   "シェーダのプリセットの保存に成功しました"
   )
MSG_HASH(
   MSG_SLOW_MOTION,
   "スローモーション"
   )
MSG_HASH(
   MSG_FAST_FORWARD,
   "早送り"
   )
MSG_HASH(
   MSG_SLOW_MOTION_REWIND,
   "スローモーション巻き戻し"
   )
MSG_HASH(
   MSG_SKIPPING_SRAM_LOAD,
   "SRAMのロードをスキップ中"
   )
MSG_HASH(
   MSG_SRAM_WILL_NOT_BE_SAVED,
   "SRAMはセーブされません"
   )
MSG_HASH(
   MSG_BLOCKING_SRAM_OVERWRITE,
   "SRAMの上書きをブロックしています"
   )
MSG_HASH(
   MSG_STARTING_MOVIE_PLAYBACK,
   "動画の再生を開始しています"
   )
MSG_HASH(
   MSG_STARTING_MOVIE_RECORD_TO,
   "動画の録画を開始しています to"
   )
MSG_HASH(
   MSG_STATE_SIZE,
   "ステートサイズ"
   )
MSG_HASH(
   MSG_STATE_SLOT,
   "ステートスロット"
   )
MSG_HASH(
   MSG_TAKING_SCREENSHOT,
   "スクリーンショットを撮影中"
   )
MSG_HASH(
   MSG_SCREENSHOT_SAVED,
   "スクリーンショットを保存しました"
   )
MSG_HASH(
   MSG_ACHIEVEMENT_UNLOCKED,
   "実績をアンロックしました"
   )
MSG_HASH(
   MSG_CHANGE_THUMBNAIL_TYPE,
   "サムネイルの種類を変更"
   )
MSG_HASH(
   MSG_TOGGLE_FULLSCREEN_THUMBNAILS,
   "サムネイルを全画面表示"
   )
MSG_HASH(
   MSG_TOGGLE_CONTENT_METADATA,
   "メタデータの切り替え"
   )
MSG_HASH(
   MSG_NO_THUMBNAIL_AVAILABLE,
   "利用可能なサムネイルがありません"
   )
MSG_HASH(
   MSG_PRESS_AGAIN_TO_QUIT,
   "もう一度押すと終了します..."
   )
MSG_HASH(
   MSG_UNDID_LOAD_STATE,
   "ステートロードを取り消しました"
   )
MSG_HASH(
   MSG_UNDOING_SAVE_STATE,
   "ステートセーブを取り消しています"
   )
MSG_HASH(
   MSG_UNKNOWN,
   "不明"
   )
MSG_HASH(
   MSG_UNPAUSED,
   "一時停止解除"
   )
MSG_HASH(
   MSG_USING_LIBRETRO_DUMMY_CORE_RECORDING_SKIPPED,
   "Libretroダミーコアを使用します. 録画をスキップします."
   )
MSG_HASH(
   MSG_VALUE_CONNECT_DEVICE_FROM_A_VALID_PORT,
   "デバイスを有効なポートから接続してください。"
   )
MSG_HASH(
   MSG_VALUE_DISCONNECTING_DEVICE_FROM_PORT,
   "デバイスをポートから切断中"
   )
MSG_HASH(
   MSG_VALUE_REBOOTING,
   "再起動しています..."
   )
MSG_HASH(
   MSG_VALUE_SHUTTING_DOWN,
   "シャットダウンしています..."
   )
MSG_HASH(
   MSG_VERSION_OF_LIBRETRO_API,
   "Libretro API のバージョン"
   )
MSG_HASH(
   MSG_VIEWPORT_SIZE_CALCULATION_FAILED,
   "Viewport size calculation failed! Will continue using raw data. This will probably not work right ..."
   )
MSG_HASH(
   MSG_VIRTUAL_DISK_TRAY_EJECT,
   "仮想ディスクトレイの取り出しに失敗しました。"
   )
MSG_HASH(
   MSG_VIRTUAL_DISK_TRAY_CLOSE,
   "仮想ディスクトレイを閉じることができませんでした。"
   )
MSG_HASH(
   MSG_DEVICE_NOT_CONFIGURED,
   "設定されていません"
   )
MSG_HASH(
   MSG_DEVICE_NOT_CONFIGURED_FALLBACK,
   "設定されていません. フォールバックを使用します"
   )
MSG_HASH(
   MSG_BLUETOOTH_SCAN_COMPLETE,
   "Bluetooth のスキャンが完了しました。"
   )
MSG_HASH(
   MSG_WIFI_SCAN_COMPLETE,
   "Wi-Fiスキャン完了"
   )
MSG_HASH(
   MSG_SCANNING_BLUETOOTH_DEVICES,
   "Bluetoothデバイスをスキャン中..."
   )
MSG_HASH(
   MSG_SCANNING_WIRELESS_NETWORKS,
   "無線ネットワークをスキャン中"
   )
MSG_HASH(
   MSG_ENABLING_WIRELESS,
   "Wi-Fiを有効にしています..."
   )
MSG_HASH(
   MSG_DISABLING_WIRELESS,
   "Wi-Fi を無効にしています..."
   )
MSG_HASH(
   MSG_DISCONNECTING_WIRELESS,
   "Wi-Fiを切断中..."
   )
MSG_HASH(
   MSG_NETPLAY_LAN_SCANNING,
   "ネットプレイホストをスキャン中"
   )
MSG_HASH(
   MSG_PREPARING_FOR_CONTENT_SCAN,
   "コンテンツをスキャンするための準備中"
   )
MSG_HASH(
   MSG_INPUT_ENABLE_SETTINGS_PASSWORD,
   "パスワードを入力してください"
   )
MSG_HASH(
   MSG_INPUT_ENABLE_SETTINGS_PASSWORD_OK,
   "パスワードが正解"
   )
MSG_HASH(
   MSG_INPUT_ENABLE_SETTINGS_PASSWORD_NOK,
   "パスワードが違います"
   )
MSG_HASH(
   MSG_INPUT_KIOSK_MODE_PASSWORD,
   "パスワードを入力してください"
   )
MSG_HASH(
   MSG_INPUT_KIOSK_MODE_PASSWORD_OK,
   "パスワードが一致しました."
   )
MSG_HASH(
   MSG_INPUT_KIOSK_MODE_PASSWORD_NOK,
   "パスワードが一致しません."
   )
MSG_HASH(
   MSG_CONFIG_OVERRIDE_LOADED,
   "優先ファイルをロードしました。"
   )
MSG_HASH(
   MSG_GAME_REMAP_FILE_LOADED,
   "ゲームのリマップファイルをロードしました。"
   )
MSG_HASH(
   MSG_DIRECTORY_REMAP_FILE_LOADED,
   "コンテンツディレクトリのリマップファイルをロードしました。"
   )
MSG_HASH(
   MSG_CORE_REMAP_FILE_LOADED,
   "コアのリマップファイルをロードしました。"
   )
MSG_HASH(
   MSG_RUNAHEAD_ENABLED,
   "先行実行を有効にしました. 遅延フレームを削除しました: %u."
   )
MSG_HASH(
   MSG_RUNAHEAD_ENABLED_WITH_SECOND_INSTANCE,
   "2番目のインスタンスで先行実行を有効にしました. 遅延フレームを削除しました: %u."
   )
MSG_HASH(
   MSG_RUNAHEAD_DISABLED,
   "先行実行を無効にしました."
   )
MSG_HASH(
   MSG_RUNAHEAD_CORE_DOES_NOT_SUPPORT_SAVESTATES,
   "このコアはステートセーブに対応していないために先行実行が無効になりました."
   )
MSG_HASH(
   MSG_SCANNING_OF_FILE_FINISHED,
   "ファイルのスキャンは完了しました。"
   )
MSG_HASH(
   MSG_CHEAT_INIT_SUCCESS,
   "チート検索の開始に成功しました"
   )
MSG_HASH(
   MSG_CHEAT_INIT_FAIL,
   "チート検索の開始に失敗しました"
   )
MSG_HASH(
   MSG_CHEAT_SEARCH_NOT_INITIALIZED,
   "検索は初期化/開始されていません"
   )
MSG_HASH(
   MSG_CHEAT_SEARCH_FOUND_MATCHES,
   "新しいマッチ数 = %u"
   )
MSG_HASH(
   MSG_CHEAT_SEARCH_ADDED_MATCHES_SUCCESS,
   "マッチした %u 件を追加しました"
   )
MSG_HASH(
   MSG_CHEAT_SEARCH_ADDED_MATCHES_FAIL,
   "追加に失敗しました"
   )
MSG_HASH(
   MSG_CHEAT_SEARCH_ADD_MATCH_FAIL,
   "コードの生成に失敗しました"
   )
MSG_HASH(
   MSG_CHEAT_SEARCH_ADDED_MATCHES_TOO_MANY,
   "空きがありません. 同時に利用可能なチート最大数は100です."
   )
MSG_HASH(
   MSG_CHEAT_ADD_TOP_SUCCESS,
   "新しいチートをリストの先頭に追加しました。"
   )
MSG_HASH(
   MSG_CHEAT_ADD_BOTTOM_SUCCESS,
   "新しいチートをリストの最後に追加しました。"
   )
MSG_HASH(
   MSG_CHEAT_DELETE_ALL_SUCCESS,
   "すべてのチートを削除しました。"
   )
MSG_HASH(
   MSG_CHEAT_ADD_BEFORE_SUCCESS,
   "この前に新しいチートが追加されました. "
   )
MSG_HASH(
   MSG_CHEAT_ADD_AFTER_SUCCESS,
   "この後に新しいチートが追加されました. "
   )
MSG_HASH(
   MSG_CHEAT_COPY_BEFORE_SUCCESS,
   "チートはこの前にコピーされました。"
   )
MSG_HASH(
   MSG_CHEAT_COPY_AFTER_SUCCESS,
   "チートはこの後にコピーされました。"
   )
MSG_HASH(
   MSG_CHEAT_DELETE_SUCCESS,
   "チートを削除しました。"
   )
MSG_HASH(
   MSG_FAILED_TO_SET_DISK,
   "ディスクのセットに失敗しました"
   )
MSG_HASH(
   MSG_FAILED_TO_SET_INITIAL_DISK,
   "最後に使用したディスクをセットできませんでした..."
   )
MSG_HASH(
   MSG_FAILED_TO_CONNECT_TO_CLIENT,
   "クライアントへの接続に失敗しました"
   )
MSG_HASH(
   MSG_FAILED_TO_CONNECT_TO_HOST,
   "ホストへの接続に失敗しました"
   )
MSG_HASH(
   MSG_FAILED_TO_RECEIVE_HEADER_FROM_HOST,
   "ホストからヘッダーを受信できませんでした"
   )
MSG_HASH(
   MSG_CHEEVOS_HARDCORE_MODE_DISABLED,
   "セーブステートがロードされました. このセッションでは実績ハードコアモードが無効になります."
   )
MSG_HASH(
   MSG_CHEEVOS_HARDCORE_MODE_DISABLED_CHEAT,
   "チートが有効になりました. このセッションでは実績ハードコアモードが無効になります."
   )
MSG_HASH(
   MSG_RESAMPLER_QUALITY_LOWEST,
   "最低"
   )
MSG_HASH(
   MSG_RESAMPLER_QUALITY_LOWER,
   "低"
   )
MSG_HASH(
   MSG_RESAMPLER_QUALITY_NORMAL,
   "普通"
   )
MSG_HASH(
   MSG_RESAMPLER_QUALITY_HIGHER,
   "高"
   )
MSG_HASH(
   MSG_RESAMPLER_QUALITY_HIGHEST,
   "最高"
   )
MSG_HASH(
   MSG_MISSING_ASSETS,
   "警告: アセットがありません. 利用可能な場合はオンラインアップデータを使用してください."
   )
MSG_HASH(
   MSG_RGUI_MISSING_FONTS,
   "警告: 選択した言語に対応するフォントがありません。 利用可能な場合はオンラインアップデータを使用してください。"
   )
MSG_HASH(
   MSG_RGUI_INVALID_LANGUAGE,
   "警告: 非対応の言語です - 英語を使用します"
   )
MSG_HASH(
   MSG_DUMPING_DISC,
   "ディスクをダンプ中..."
   )
MSG_HASH(
   MSG_DRIVE_NUMBER,
   "ドライブ%d"
   )
MSG_HASH(
   MSG_LOAD_CORE_FIRST,
   "コアをロードしてください。"
   )
MSG_HASH(
   MSG_DISC_DUMP_FAILED_TO_READ_FROM_DRIVE,
   "ドライブからの読み込みに失敗しました。ダンプが中止されました。"
   )
MSG_HASH(
   MSG_DISC_DUMP_FAILED_TO_WRITE_TO_DISK,
   "ディスクに書き込みに失敗しました。ダンプが中止されました。"
   )
MSG_HASH(
   MSG_NO_DISC_INSERTED,
   "ドライブにディスクが挿入されていません。"
   )
MSG_HASH(
   MSG_SHADER_PRESET_REMOVED_SUCCESSFULLY,
   "シェーダのプリセットを取り除くに成功しました。"
   )
MSG_HASH(
   MSG_ERROR_REMOVING_SHADER_PRESET,
   "シェーダープリセットの削除に失敗しました。"
   )
MSG_HASH(
   MSG_MANUAL_CONTENT_SCAN_DAT_FILE_INVALID,
   "選択されたアーケードDATファイルは無効です"
   )
MSG_HASH(
   MSG_MANUAL_CONTENT_SCAN_DAT_FILE_TOO_LARGE,
   "選択されたアーケードDATファイルは大きすぎます (空きメモリ容量が不足しています)"
   )
MSG_HASH(
   MSG_MANUAL_CONTENT_SCAN_DAT_FILE_LOAD_ERROR,
   "アーケード DAT ファイルのロードに失敗しました (無効なフォーマット?)"
   )
MSG_HASH(
   MSG_MANUAL_CONTENT_SCAN_INVALID_CONFIG,
   "手動スキャンの設定が無効です"
   )
MSG_HASH(
   MSG_MANUAL_CONTENT_SCAN_INVALID_CONTENT,
   "有効なコンテンツが見つかりませんでした"
   )
MSG_HASH(
   MSG_MANUAL_CONTENT_SCAN_START,
   "コンテンツをスキャン中: "
   )
MSG_HASH(
   MSG_MANUAL_CONTENT_SCAN_IN_PROGRESS,
   "スキャン中: "
   )
MSG_HASH(
   MSG_MANUAL_CONTENT_SCAN_END,
   "スキャン完了: "
   )
MSG_HASH(
   MSG_CORE_BACKUP_SCANNING_CORE,
   "コアをスキャン中: "
   )
MSG_HASH(
   MSG_CORE_BACKUP_ALREADY_EXISTS,
   "インストールされているコアのバックアップは既に存在します: "
   )
MSG_HASH(
   MSG_BACKING_UP_CORE,
   "コアをバックアップ中: "
   )
MSG_HASH(
   MSG_PRUNING_CORE_BACKUP_HISTORY,
   "古いバックアップの削除中: "
   )
MSG_HASH(
   MSG_CORE_BACKUP_COMPLETE,
   "コアのバックアップ完了: "
   )
MSG_HASH(
   MSG_CORE_RESTORATION_ALREADY_INSTALLED,
   "選択したコアのバックアップは既にインストールされています: "
   )
MSG_HASH(
   MSG_RESTORING_CORE,
   "コアの復元中: "
   )
MSG_HASH(
   MSG_CORE_RESTORATION_COMPLETE,
   "コアの復元が完了: "
   )
MSG_HASH(
   MSG_CORE_INSTALLATION_ALREADY_INSTALLED,
   "選択されたコアファイルは既にインストールされています: "
   )
MSG_HASH(
   MSG_INSTALLING_CORE,
   "コアをインストール中: "
   )
MSG_HASH(
   MSG_CORE_INSTALLATION_COMPLETE,
   "コアのインストール完了: "
   )
MSG_HASH(
   MSG_CORE_RESTORATION_INVALID_CONTENT,
   "無効なコアファイルが選択されました: "
   )
MSG_HASH(
   MSG_CORE_BACKUP_FAILED,
   "コアのバックアップに失敗しました: "
   )
MSG_HASH(
   MSG_CORE_RESTORATION_FAILED,
   "コアの復元に失敗しました: "
   )
MSG_HASH(
   MSG_CORE_INSTALLATION_FAILED,
   "コアのインストールに失敗しました: "
   )
MSG_HASH(
   MSG_CORE_RESTORATION_DISABLED,
   "コアの復元は無効です - コアはロックされています: "
   )
MSG_HASH(
   MSG_CORE_INSTALLATION_DISABLED,
   "コアのインストールは無効です - コアがロックされています: "
   )
MSG_HASH(
   MSG_CORE_LOCK_FAILED,
   "コアをロックできませんでした: "
   )
MSG_HASH(
   MSG_CORE_UNLOCK_FAILED,
   "コアのロック解除に失敗しました: "
   )
MSG_HASH(
   MSG_CORE_SET_STANDALONE_EXEMPT_FAILED,
   "[コンテンツレスコア] リストからコアを削除できませんでした:"
   )
MSG_HASH(
   MSG_CORE_DELETE_DISABLED,
   "コアの削除は無効です - コアはロックされています: "
   )
MSG_HASH(
   MSG_UNSUPPORTED_VIDEO_MODE,
   "非対応のビデオモード"
   )
MSG_HASH(
   MSG_CORE_INFO_CACHE_UNSUPPORTED,
   "コア情報ディレクトリに書き込めません - コア情報のキャッシュは無効になります"
   )

/* Lakka */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_UPDATE_LAKKA,
   "Lakkaを更新"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_FRONTEND_NAME,
   "フロントエンド名"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_LAKKA_VERSION,
   "Lakkaバージョン"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_REBOOT,
   "再起動"
   )

/* Environment Specific Settings */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SCREEN_RESOLUTION,
   "スクリーン解像度"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SHUTDOWN,
   "シャットダウン"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_FILE_BROWSER_OPEN_UWP_PERMISSIONS,
   "外部ファイルアクセスを有効にする"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_FILE_BROWSER_OPEN_UWP_PERMISSIONS,
   "Windowsファイルアクセス権限の設定を開く"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_FILE_BROWSER_OPEN_PICKER,
   "開く..."
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_FILE_BROWSER_OPEN_PICKER,
   "システムファイルピッカーを使用して別のディレクトリを開く"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_FILTER_FLICKER,
   "フリッカーフィルタ"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_GAMMA,
   "ビデオのガンマ"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_SOFT_FILTER,
   "ソフトフィルタ"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_BLUETOOTH_SETTINGS,
   "Bluetoothデバイスをスキャンして接続します."
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_WIFI_SETTINGS,
   "無線ネットワークをスキャンして接続を確立します."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_WIFI_ENABLED,
   "Wi-Fiを有効にする"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_WIFI_NETWORK_SCAN,
   "ネットワークに接続"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_WIFI_NETWORKS,
   "ネットワークに接続"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_WIFI_DISCONNECT,
   "切断"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_VFILTER,
   "非フリッカー"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_VI_WIDTH,
   "VI画面の幅を設定"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_OVERSCAN_CORRECTION_TOP,
   "オーバースキャン補正 (上部)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_OVERSCAN_CORRECTION_BOTTOM,
   "オーバースキャン補正 (下部)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SUSTAINED_PERFORMANCE_MODE,
   "パフォーマンス維持モード"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CPU_PERFPOWER,
   "CPU パフォーマンスと電力"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CPU_POLICY_ENTRY,
   "ポリシー"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CPU_PERF_MODE,
   "ガバナーモード"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CPU_PERF_MODE_MANUAL,
   "手動"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VALUE_CPU_PERF_MODE_MANUAL,
   "ガバナー, 周波数など, CPUの挙動詳細を手動で調整できます. 上級ユーザにのみお勧めします."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CPU_PERF_MODE_MANAGED_PERF,
   "パフォーマンス (管理)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CPU_PERF_MODE_MANAGED_PER_CONTEXT,
   "カスタム管理"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CPU_PERF_MODE_MAX_PERF,
   "最大パフォーマンス"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VALUE_CPU_PERF_MODE_MAX_PERF,
   "最大のパフォーマンスを得るため, 常に最高周波数で動作します."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CPU_PERF_MODE_MIN_POWER,
   "最小電力"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VALUE_CPU_PERF_MODE_MIN_POWER,
   "電力を節約するため, 利用可能な最低周波数で動作します. バッテリー駆動のデバイスで役立ちますが, パフォーマンスは大幅に低下します."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CPU_PERF_MODE_BALANCED,
   "バランス"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CPU_POLICY_MIN_FREQ,
   "最小周波数"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CPU_POLICY_MAX_FREQ,
   "最大周波数"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CPU_MANAGED_MIN_FREQ,
   "最小コア周波数"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CPU_MANAGED_MAX_FREQ,
   "最大コア周波数"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CPU_POLICY_GOVERNOR,
   "CPU ガバナー"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CPU_POLICY_CORE_GOVERNOR,
   "コアガバナー"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CPU_POLICY_MENU_GOVERNOR,
   "メニューガバナー"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PAL60_ENABLE,
   "PAL60モードを使用"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_RESTART_KEY,
   "RetroArchを再起動"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_META_RESTART_KEY,
   "終了してRetroArchを再起動します. 特定のメニュー設定を有効にするために必要です (例えばメニュードライバの変更時など)."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_PREFER_FRONT_TOUCH,
   "フロントタッチを優先"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_TOUCH_ENABLE,
   "タッチを有効"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_ICADE_ENABLE,
   "キーボードコントローラのマッピング"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_KEYBOARD_GAMEPAD_MAPPING_TYPE,
   "キーボードコントローラのマッピングタイプ"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_SMALL_KEYBOARD_ENABLE,
   "小さいキーボードを有効"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_BLOCK_TIMEOUT,
   "入力ブロックタイムアウト"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_BLOCK_TIMEOUT,
   "完全な入力サンプルを取得するまでの時間(ms) です. ボタン同時押しで問題が発生した場合に使用します (Android のみ)."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_SHOW_REBOOT,
   "[再起動] を表示"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_SHOW_REBOOT,
   "[再起動] オプションを表示します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_SHOW_SHUTDOWN,
   "[シャットダウン] を表示"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_SHOW_SHUTDOWN,
   "[シャットダウン] オプションを表示します。"
   )
MSG_HASH(
   MSG_INTERNET,
   "インターネット"
   )
MSG_HASH(
   MSG_INTERNET_RELAY,
   "インターネット (リレー)"
   )
MSG_HASH(
   MSG_LOCAL,
   "ローカル"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_BRIGHTNESS_CONTROL,
   "画面の明るさ"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_BRIGHTNESS_CONTROL,
   "画面の明るさを増減します."
   )
#ifdef HAVE_LIBNX
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SWITCH_CPU_PROFILE,
   "CPU オーバークロック"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SWITCH_CPU_PROFILE,
   "SwitchのCPUをオーバークロックします."
   )
#endif
#ifdef HAVE_LAKKA
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_BLUETOOTH_ENABLE,
   "Bluetoothを有効"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LAKKA_SERVICES,
   "Lakkaのサービス"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SERVICES_SETTINGS,
   "OSに関係するサービスを管理します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SAMBA_ENABLE,
   "SAMBAを有効"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SAMBA_ENABLE,
   "SMB プロトコルを介してネットワークフォルダを共有します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SSH_ENABLE,
   "SSHを有効"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SSH_ENABLE,
   "SSHでのアクセスを有効します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LOCALAP_ENABLE,
   "Wi-Fi アクセスポイント"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_LOCALAP_ENABLE,
   "Wi-Fi アクセスポイントを有効または無効にします。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TIMEZONE,
   "タイムゾーン"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_TIMEZONE,
   "タイムゾーンを選択して, 場所に合わせて日付と時刻を調整します."
   )
#ifdef HAVE_LAKKA_SWITCH
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SWITCH_OC_ENABLE,
   "CPU オーバークロック"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SWITCH_OC_ENABLE,
   "CPU 周波数のオーバークロックを有効にする"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SWITCH_CEC_ENABLE,
   "CEC 対応"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_BLUETOOTH_ERTM_DISABLE,
   "Bluetooth ERTM を無効にしてデバイスのペアリングを修正する"
   )
#endif
MSG_HASH(
   MSG_LOCALAP_SWITCHING_OFF,
   "Wi-Fi アクセスポイントを切り替えます。"
   )
MSG_HASH(
   MSG_WIFI_DISCONNECT_FROM,
   "Wi-Fi '%s' から切断します"
   )
MSG_HASH(
   MSG_WIFI_CONNECTING_TO,
   "Wi-Fi '%s' に接続中"
   )
MSG_HASH(
   MSG_WIFI_EMPTY_SSID,
   "'SSIDなし'"
   )
MSG_HASH(
   MSG_LOCALAP_ALREADY_RUNNING,
   "Wi-Fi アクセスポイントはすでに開始されています"
   )
MSG_HASH(
   MSG_LOCALAP_NOT_RUNNING,
   "Wi-Fi アクセスポイントが動作してません"
   )
MSG_HASH(
   MSG_LOCALAP_STARTING,
   "Wi-Fi アクセスポイントを SSID=%s, Passkey=%s で開始しています"
   )
MSG_HASH(
   MSG_LOCALAP_ERROR_CONFIG_CREATE,
   "Wi-Fi アクセスポイントの構成ファイルを作成できませんでした。"
   )
MSG_HASH(
   MSG_LOCALAP_ERROR_CONFIG_PARSE,
   "設定ファイルが不正です - APNAME または PASSWORD が %s に見つかりませんでした"
   )
#endif
#ifdef HAVE_LAKKA_SWITCH
#endif
#ifdef GEKKO
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_MOUSE_SCALE,
   "マウスのスケーリング"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_MOUSE_SCALE,
   "Wiimoteのライトガン速度に合わせてx/yスケールを調整します."
   )
#endif
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_TOUCH_SCALE,
   "タッチのスケーリング"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_TOUCH_SCALE,
   "タッチスクリーン座標のx/yスケールを調整し, OSレベルの表示スケールに対応します."
   )
#ifdef UDEV_TOUCH_SUPPORT
#endif
#ifdef HAVE_ODROIDGO2
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_RGA_SCALING,
   "RGAスケーリング"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_RGA_SCALING,
   "RGAスケーリングとバイキュービックフィルタリングです. ウィジェットが壊れる可能性があります."
   )
#else
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_CTX_SCALING,
   "コンテキスト固有のスケーリング"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_CTX_SCALING,
   "ハードウェアコンテキストのスケーリングです. （利用可能な場合）"
   )
#endif
#ifdef _3DS
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_3DS_LCD_BOTTOM,
   "3DS 下画面"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_3DS_LCD_BOTTOM,
   "画面の下部にステータス情報を表示できるようにします. 無効にするとバッテリー寿命が延長され, パフォーマンスが向上します."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_3DS_DISPLAY_MODE,
   "3DS ディスプレイモード"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_3DS_DISPLAY_MODE,
   "3D 表示モードと 2D 表示モードを選択します. '3D'モードでは, クイックメニューを表示するときにピクセルが正方形になり, 深さエフェクトが適用されます. '2D' モードは最高のパフォーマンスを提供します."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CTR_VIDEO_MODE_2D_400X240,
   "2D (ピクセルグリッドエフェクト)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CTR_VIDEO_MODE_2D_800X240,
   "2D (高解像度)"
   )
MSG_HASH(
   MSG_3DS_BOTTOM_MENU_ASSET_NOT_FOUND,
   "アセットが見つかりません"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_BOTTOM_ASSETS_DIRECTORY,
   "下画面アセットディレクトリ"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_BOTTOM_ASSETS_DIRECTORY,
   "下画面アセットのディレクトリです。ディレクトリには「bottom_menu.png」を含める必要があります。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_BOTTOM_FONT_ENABLE,
   "フォントを有効にする"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_BOTTOM_FONT_ENABLE,
   "下メニューのフォントを表示します。下画面にボタンの説明を表示することが出来ます。ステートセーブの日付は表示されません。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_BOTTOM_FONT_COLOR_RED,
   "フォントの色 (赤)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_BOTTOM_FONT_COLOR_RED,
   "下画面のフォントの赤色を調整します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_BOTTOM_FONT_COLOR_GREEN,
   "フォントの色 (緑)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_BOTTOM_FONT_COLOR_GREEN,
   "下画面のフォントの緑色を調整します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_BOTTOM_FONT_COLOR_BLUE,
   "フォントの色 (青)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_BOTTOM_FONT_COLOR_BLUE,
   "下画面のフォントの青色を調整します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_BOTTOM_FONT_COLOR_OPACITY,
   "フォントの色の透明度"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_BOTTOM_FONT_COLOR_OPACITY,
   "下画面のフォントの透明度を調整します。"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_BOTTOM_FONT_SCALE,
   "フォントの大きさ"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_BOTTOM_FONT_SCALE,
   "下画面のフォントの大きさを調整します。"
   )
#endif
#ifdef HAVE_QT
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_SCAN_FINISHED,
   "スキャンが成功しました. <br><br>\nコンテンツを正確にスキャンするには:\n<ul><li>互換機コアがもうダウンロードされた</li>\n<li>オンラインアップデータで'コア情報'がもうアップデートされた</li>\n<li>オンラインアップデータで'データベース'がもうアップデートされた</li>\n<li>上記タスクの後にRetroArchを再起動してください. </li></ul>\nコンテンツが<a href=\"https://docs.libretro.com/guides/roms-playlists-thumbnails/#sources\">存在データベース</a>の一致が必要です. \nまだちゃんと動けないとバグを<a href=\"https://www.github.com/libretro/RetroArch/issues\">報告</a>できます. "
   )
#endif
