#include "header.h"

//pengali huruf dengan 2
int applyDoubleLetter(int letterScore) {
    return letterScore *= 2;
}

//pengali huruf dengan 3
int applyTripleLetter(int letterScore) {
   return letterScore *= 3;
}

//pengali kata dengan 2
int applyDoubleWord(int wordScore) {
    return wordScore *= 2;
}

//pengali kata dengan 3
int applyTripleWord(int wordScore) {
    return wordScore *= 3;
}

//inisialisasi papan
void initializeBoard(Tile board[BOARD_SIZE][BOARD_SIZE]) {
    int i, j;
    for (i = 0; i < BOARD_SIZE; i++) {
        for (j = 0; j < BOARD_SIZE; j++) {
            board[i][j].letter = ' ';
            board[i][j].score = 0;
        }
    }
}

//menampilakn update setiap pemain input kata
void displayBoard(Tile board[BOARD_SIZE][BOARD_SIZE]) {
    int i, j;
    for (i = 0; i < BOARD_SIZE; i++) {
        for (j = 0; j < BOARD_SIZE; j++) {
            printf("+---");
        }
        printf("+\n");

        for (j = 0; j < BOARD_SIZE; j++) {
            printf("| %c ", board[i][j].letter);
        }
        printf("|\n");
    }

    for (j = 0; j < BOARD_SIZE; j++) {
        printf("+---");
    }
    printf("+\n");
}

//tidak jadi digunakan
void printScrabbleBoard() {
	int i, j, k;
    char *scrabbleBoard[BOARD_SIZE][BOARD_SIZE] = {
        {"| ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " |"},
        {"| ", " ", " ", "TW", " ", " ", " ", "DW", " ", " ", " ", "TW", " ", " ", " |"},
        {"| ", " ", " ", " ", " ", "DL", " ", " ", " ", "DL", " ", " ", " ", " ", " |"},
        {"| ", "TW", " ", " ", " ", " ", "DW", " ", "DW", " ", " ", " ", "TW", " ", " |"},
        {"| ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " |"},
        {"| ", " ", "DL", " ", " ", " ", " ", "DW", " ", " ", " ", " ", "DL", " ", " |"},
        {"| ", " ", " ", "DL", " ", " ", " ", " ", " ", " ", " ", "DL", " ", " ", " |"},
        {"| ", "DW", " ", " ", " ", "DL", " ", " ", " ", "DL", " ", " ", " ", "DW", " |"},
        {"| ", " ", " ", "DL", " ", " ", " ", " ", " ", " ", " ", "DL", " ", " ", " |"},
        {"| ", "DW", " ", " ", " ", "DL", " ", "DW", " ", "DL", " ", " ", " ", "DW", " |"},
        {"| ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " |"},
        {"| ", "TW", " ", " ", " ", " ", "DW", " ", "Dw", " ", " ", " ", "TW", " ", " |"},
        {"| ", " ", " ", " ", " ", "DL", " ", " ", " ", "DL", " ", " ", " ", " ", " |"},
        {"| ", " ", " ", "TL", " ", " ", " ", "DW", " ", " ", " ", "TL", " ", " ", " |"},
        {"| ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " |"}
    };

    for (i = 0; i < BOARD_SIZE; i++) {
        for (j = 0; j < BOARD_SIZE; j++) {
            printf("%s", scrabbleBoard[i][j]);
            if (j < BOARD_SIZE - 1) {
                printf(" | ");
            }
        }
        printf("\n");
        if (i < BOARD_SIZE - 1) {
            for (k = 0; k < BOARD_SIZE - 1; k++) {
                printf("-----");
            }
            printf("\n");
        }
    }
}

//input nama player
void inputPlayerName() {
	system("cls");
	header();
	printf("\n\n\t\t\t\t                    ||===============================================================||\n");
	printf("\n\t\t\t\t\t\t    ||      Masukan Nama Player\t     :\t\t\t\t     ||\n\n");
    printf("\t\t\t\t\t\t           Player 1\t\t:\t\t\t\t");
	scanf("%s", &player1.name);
    printf("\n\t\t\t\t\t\t           Player 2\t\t:\t\t\t\t ");
	scanf("%s", &player2.name);
	printf("\t\t\t\t                    ||===============================================================||\n");
	system("cls");
}

//tampilan animasi loading
void loading(){
	int i;
	printf("\n\n\n\n\n\n\n");
	printf("\t\t\t\t\t\t\tLoading. \n\n\t\t\t\t");
	printf("\t\t      ");
	for (i=0; i<=65;i++){
		printf("%c",178);
		Sleep(15);
	}
}

//tampilan header
void header() {
    printf("\t\t   ---------------------------------------------------------------------------------------------------------------------------------\n");
	printf("\t\t   -¦¦¦¦¦¦¦¦¦¦¦¦¦¦-¦¦¦¦¦¦¦¦¦¦¦¦¦¦-¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦---¦¦¦¦¦¦¦¦¦¦¦¦¦¦-¦¦¦¦¦¦¦¦¦¦¦¦¦¦---¦¦¦¦¦¦¦¦¦¦¦¦¦¦---¦¦¦¦¦¦---------¦¦¦¦¦¦¦¦¦¦¦¦¦¦-\n");
	printf("\t\t   -¦¦¦¦¦¦¦¦¦¦¦¦¦¦-¦¦¦¦¦¦¦¦¦¦¦¦¦¦-¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦---¦¦¦¦¦¦¦¦¦¦¦¦¦¦-¦¦¦¦¦¦¦¦¦¦¦¦¦¦---¦¦¦¦¦¦¦¦¦¦¦¦¦¦---¦¦¦¦¦¦---------¦¦¦¦¦¦¦¦¦¦¦¦¦¦-\n");
	printf("\t\t   -¦¦¦¦¦¦¦¦¦¦¦¦¦¦-¦¦¦¦¦¦¦¦¦¦¦¦¦¦-¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦---¦¦¦¦¦¦¦¦¦¦¦¦¦¦-¦¦¦¦¦¦¦¦¦¦¦¦¦¦---¦¦¦¦¦¦¦¦¦¦¦¦¦¦---¦¦¦¦¦¦---------¦¦¦¦¦¦¦¦¦¦¦¦¦¦-\n");
	printf("\t\t   -¦¦¦¦¦¦---------¦¦¦¦¦¦---------¦¦¦¦¦¦----¦¦¦¦¦¦---¦¦¦¦¦¦--¦¦¦¦¦¦-¦¦¦¦¦¦--¦¦¦¦¦¦---¦¦¦¦¦¦--¦¦¦¦¦¦---¦¦¦¦¦¦---------¦¦¦¦¦¦---------\n");
	printf("\t\t   -¦¦¦¦¦¦¦¦¦¦¦¦¦¦-¦¦¦¦¦¦---------¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦---¦¦¦¦¦¦¦¦¦¦¦¦¦¦-¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦-¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦-¦¦¦¦¦¦---------¦¦¦¦¦¦¦¦¦¦¦¦¦¦-\n");
	printf("\t\t   -¦¦¦¦¦¦¦¦¦¦¦¦¦¦-¦¦¦¦¦¦---------¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦---¦¦¦¦¦¦¦¦¦¦¦¦¦¦-¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦-¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦-¦¦¦¦¦¦---------¦¦¦¦¦¦¦¦¦¦¦¦¦¦-\n");
	printf("\t\t   -¦¦¦¦¦¦¦¦¦¦¦¦¦¦-¦¦¦¦¦¦---------¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦---¦¦¦¦¦¦¦¦¦¦¦¦¦¦-¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦-¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦-¦¦¦¦¦¦---------¦¦¦¦¦¦¦¦¦¦¦¦¦¦-\n");
	printf("\t\t   ---------¦¦¦¦¦¦-¦¦¦¦¦¦---------¦¦¦¦¦¦--¦¦¦¦¦¦-----¦¦¦¦¦¦--¦¦¦¦¦¦-¦¦¦¦¦¦----¦¦¦¦¦¦-¦¦¦¦¦¦----¦¦¦¦¦¦-¦¦¦¦¦¦---------¦¦¦¦¦¦---------\n");
	printf("\t\t   -¦¦¦¦¦¦¦¦¦¦¦¦¦¦-¦¦¦¦¦¦¦¦¦¦¦¦¦¦-¦¦¦¦¦¦--¦¦¦¦¦¦¦¦¦¦-¦¦¦¦¦¦--¦¦¦¦¦¦-¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦-¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦-¦¦¦¦¦¦¦¦¦¦¦¦¦¦-¦¦¦¦¦¦¦¦¦¦¦¦¦¦-\n");
	printf("\t\t   -¦¦¦¦¦¦¦¦¦¦¦¦¦¦-¦¦¦¦¦¦¦¦¦¦¦¦¦¦-¦¦¦¦¦¦--¦¦¦¦¦¦¦¦¦¦-¦¦¦¦¦¦--¦¦¦¦¦¦-¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦-¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦-¦¦¦¦¦¦¦¦¦¦¦¦¦¦-¦¦¦¦¦¦¦¦¦¦¦¦¦¦-\n");
	printf("\t\t   -¦¦¦¦¦¦¦¦¦¦¦¦¦¦-¦¦¦¦¦¦¦¦¦¦¦¦¦¦-¦¦¦¦¦¦--¦¦¦¦¦¦¦¦¦¦-¦¦¦¦¦¦--¦¦¦¦¦¦-¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦-¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦-¦¦¦¦¦¦¦¦¦¦¦¦¦¦-¦¦¦¦¦¦¦¦¦¦¦¦¦¦-\n");
	printf("\t\t   ---------------------------------------------------------------------------------------------------------------------------------\n");
}

//main menu
void start(int *i) {
	header();
	printf("\n\n\t\t\t\t                    ||===============================================================||\n");
	printf("\n\t\t\t\t\t\t    ||     Pilih Menu di Bawah\t     :\t\t\t\t     ||\n");
    printf("\t\t\t\t\t\t    ||    1. Mulai Game\t\t\t\t\t\t     ||\n");
    printf("\t\t\t\t\t\t    ||    2. Keluar\t\t\t\t\t\t     ||\n\n");
	printf("\t\t\t\t                    ||===============================================================||\n");
    printf("\t\t\t\t\t\t         Pilihan Kamu\t\t    :\t\t\t");
	scanf("%d", &*i);
	system("cls");
}

//Main logic game scrabble
void twoPlayers(int whoseTurn) {
	Tile board[BOARD_SIZE][BOARD_SIZE];
	Player arrPlayer[2] = {player1, player2};
    
	inputPlayerName();
    initializeBoard(board);
    while(isFirstRowFilled(board) == false && isLastRowFilled(board) == false) {
    	clock_t mulai, akhir;
    	double cpuTimeUsed;
    	
		if(whoseTurn == PLAYER1) {
			system("cls");
			mulai = clock();
			placeStartingWord(board);
		    inputWord(board, &player1.name);
		    akhir = clock();
		    cpuTimeUsed = ((double)(akhir - mulai)) / CLOCKS_PER_SEC;
		    
		    if (cpuTimeUsed > MAX_THINKING_TIME) {
                printf("\t\t\t\t\t\t\t\t       Waktu berpikir habis! %s kalah.\n", &player1.name);
                whoseTurn = PLAYER2;
                saveScoreToFile(arrPlayer);
                break;
            } else {
//            	printScrabbleBoard();
			    displayBoard(board);
			    whoseTurn = PLAYER2;
			    player1.score += scoring(&word);
			}
		} else {
			system("cls");
			mulai = clock();
		    inputWord(board, &player2.name);
		    akhir = clock();
		    cpuTimeUsed = ((double)(akhir - mulai)) / CLOCKS_PER_SEC;
		    
		    if (cpuTimeUsed > MAX_THINKING_TIME) {
                printf("\t\t\t\t\t\t\t       Waktu berpikir habis! %s kalah.\n", &player2.name);
                whoseTurn = PLAYER1;
                saveScoreToFile(arrPlayer);
                break;
            } else {
//            	printScrabbleBoard();
				displayBoard(board);
			    whoseTurn = PLAYER1;
			    player2.score += scoring(&word);
			}
		}
	}
	
	if(isFirstRowFilled(board) == true || isLastRowFilled(board) == true) {
		checkWin();
	}
}

//tidak jadi dikembangkan
void fourPlayers() {
	
}

//pilihan mode, tetapi 4 player tidak jadi dikembangkan
void startGame() {
	system("cls");
	header();
	loading();
	system("cls");
	header();
	printf("\n\n\t\t\t                    ||===============================================================||\n");
	printf("\n\t\t\t                    ||\t\t      Pilih     Mode   \t    : \t\t             ||\n");
	printf("\t\t\t                    ||\t            1. \t\t          2 Pemain\t\t     ||\n");
	printf("\t\t\t                    ||\t            2. \t\t          4 Pemain\t\t     ||\n");
	printf("\t\t\t                    ||\t            3. \t\t          Kembali \t\t     ||\n");
	printf("\t\t\t                    ||===============================================================||\n");
    printf("\t\t\t\t\t\t         Pilihan Kamu\t\t    :\t\t\t");
	scanf("%d", &i);
	system("cls");
}
	
//void chooseNumberOfPlayers() {
//	system("cls");
//	header();
//	loading();
//	startGame(&i);
//	switch(i) {
//		case 1:
//			twoPlayers();
//			break;
//		case 2:
//			fourPlayers();
//			break;
//		case 3:
//			backToMain();
//			break;
//		default:
//			invalidChoose();
//			chooseNumberOfPlayers();
//	}
//}

//keluar game
void exitGame() {
	system("cls");
	header();
	loading();
	system("cls");
	header();
	printf("\n\n\t\t\t\t                    ||===============================================================||\n");
	printf("\n\t\t\t\t\t\t    ||      \t      Anda telah keluar dari Aplikasi\t\t     ||\n\n");
	printf("\t\t\t\t                    ||===============================================================||\n");
	exit(EXIT_SUCCESS);
}

//navigasi ke main menu
void backToMain() {
	system("cls");
	header();
	loading();
	system("cls");
	main();
}

//peringatan kesalahan memberikan jawaban pilihan
void invalidChoose() {
	system("cls");
	header();
	printf("\n\n\t\t\t\t\t\t\t\t\t    Input Salah!!!");
	printf("\n\n\t\t\t\t\t\t\t\t\t  Pilih Input dengan Benar!!!");
	printf("\n\n\t\t\t\t\t\t\t\t\t     Klik Enter!!!");
//	getch();
	system("cls");
}

//konfirmasi keluar game
void confirmExit(int *i) {
	system("cls");
	header();
	printf("\n\n\t\t\t\t                    ||===============================================================||\n");
	printf("\n\t\t\t\t\t\t    ||      Apakah Anda Yakin Ingin Keluar Dari Aplikasi?\t     ||\n");
	printf("\t\t\t\t\t\t    ||    1. Ya\t\t\t\t\t\t\t     ||\n");
	printf("\t\t\t\t\t\t    ||    2. Tidak\t\t\t\t\t\t     ||\n\n");
	printf("\t\t\t\t                    ||===============================================================||\n");
    printf("\t\t\t\t\t\t         Pilihan Kamu\t\t     :\t\t\t");
	scanf("%d", &*i);
}

//peringatan keluar game
void alertExit() {
	system("cls");
	header();
	loading();
	confirmExit(&i);
	switch(i){
		case 1:
			exitGame();
			break;
		case 2:
			backToMain();
			break;
		default:
			invalidChoose();
			alertExit();
	}
}

//ganti karakter null/alfabet di petak yang sama
void placeWord(Tile board[BOARD_SIZE][BOARD_SIZE], int x, int y, char *word, char *line) {
    int i;
    
    if(strcmp(line, "h") == 0 || strcmp(line, "H") == 0) {
        for (i = 0; i < strlen(word); i++) {
            board[x][y + i].letter = word[i];
        }
    } else if(strcmp(line, "v") == 0 || strcmp(line, "V") == 0) {
        for (i = 0; i < strlen(word); i++) {
            board[x + i][y].letter = word[i];
        }
    } else {
        printf("Lines = %s\n", line);
        printf("Gagal\n");
    }
}

//memberikan nilai ketika kata sudah diinputkan ke dalam papan
int scoring(char *word) {
	int i, score = 0;
	int row = x;
	int col = y;
//	printf("Word = %s", word);
	
    for (i = 0; i < strlen(word); i++) {
        if(isupper(word[i])) {
	        score = score + point[word[i] - 65];
	        
	        if(isDoubleWord(row, col)) {
	        	score = score + applyDoubleWord(score);
			} else if(isTripleWord(row, col)) {
				score = score + applyTripleWord(score);
			} else if(isDoubleLetter(row, col)){
				score = score + applyDoubleLetter(point[word[i] - 65]);
			} else if(isTripleLetter(row, col)) {
				score = score + applyTripleLetter(point[word[i] - 65]);
			}
		} else {
	        score = score + point[word[i] - 97];
	        
	        if(isDoubleWord(row, col)) {
	        	score = score + applyDoubleWord(score);
			} else if(isTripleWord(row, col)) {
				score = score + applyTripleWord(score);
			} else if(isDoubleLetter(row, col)){
				score = score + applyDoubleLetter(point[word[i] - 97]);
			} else if(isTripleLetter(row, col)) {
				score = score + applyTripleLetter(point[word[i] - 97]);
			}
		}
    }
    
    return score;
}

//input kata dari pemain
void inputWord(Tile board[BOARD_SIZE][BOARD_SIZE], char *whoseTurn) {
	system("cls");
	showPlayer();
    displayBoard(board);
    printf("\t\t\t\t\t\t\t\t\t       Giliran %s\t\t    \t\t\t", whoseTurn);
	printf("\n\n\t\t\t\t                    ||===============================================================||\n");
	printf("\t\t\t\t\t\t         Masukkan kata\t\t    :\t\t\t");
	scanf("%s", &word);
//	printf("\t\t\t\t\t\t         Masukkan baris\t\t    :\t\t\t");
//	scanf("%d", &x);
//	printf("\t\t\t\t\t\t         Masukkan kolom\t\t    :\t\t\t");
//	scanf("%d", &y);
//	printf("\t\t\t\t\t\t  Horizontal Vertikal input h atau v:\t\t\t");
//	scanf("%s", &lines);
//	printf("\n\n\t\t\t\t                    ||===============================================================||\n");
//	placeWord(board, x-1, y-1, &word, &lines);
	
	if (isWordValid(&word)) {
        // Kata valid, lanjutkan dengan memasukkan baris, kolom, dan arah
        printf("\t\t\t\t\t\t         Masukkan baris\t\t    :\t\t\t");
        scanf("%d", &x);
        printf("\t\t\t\t\t\t         Masukkan kolom\t\t    :\t\t\t");
        scanf("%d", &y);
        printf("\t\t\t\t\t\t  Horizontal Vertikal input h atau v:\t\t\t");
        scanf("%s", &lines);
        printf("\n\n\t\t\t\t                    ||===============================================================||\n");
        placeWord(board, x-1, y-1, &word, &lines);
    } else {
        printf("\t\t\t\t\t\t\t   Kata tidak valid. Silakan coba lagi.\n");
        inputWord(board, whoseTurn);
    }
}

//Menampilkan nama player dan skor player
void showPlayer() {
	printf("\n\n\t\t\t\t\t\t\t     Player %s Score: %d   -   Player %s Score: %d\n\n\n", &player1.name, player1.score, &player2.name, player2.score);
	clueSpecialTiles();
}

//Mengcek apakah Baris pertama telah terisi
bool isFirstRowFilled(Tile scrabbleBoard[BOARD_SIZE][BOARD_SIZE]) {
    int i;

//     Periksa baris pertama (0)
    for (i = 0; i < BOARD_SIZE; i++) {
        if (scrabbleBoard[0][i].letter == ' ') {
            return false;  // Ada setidaknya satu elemen yang kosong di baris pertama
        } else {
        	return true;
		}
    }

    // Periksa baris terakhir (BOARD_SIZE - 1)
//    for (i = 0; i < BOARD_SIZE; i++) {
//        if (scrabbleBoard[BOARD_SIZE - 1][i].letter == ' ') {
//            return false;  // Ada setidaknya satu elemen yang kosong di baris terakhir
//        } else {
//        	return true;
//		}
//    }
    // Jika semua elemen terisi, kembalikan true
//    return true;
}

//Mengcek apakah Baris terakhir telah terisi
bool isLastRowFilled(Tile scrabbleBoard[BOARD_SIZE][BOARD_SIZE]) {
    int i;

    // Periksa baris terakhir (BOARD_SIZE - 1)
    for (i = 0; i < BOARD_SIZE; i++) {
        if (scrabbleBoard[BOARD_SIZE - 1][i].letter == ' ') {
            return false;  // Ada setidaknya satu elemen yang kosong di baris terakhir
        } else {
        	return true;
		}
    }
    // Jika semua elemen terisi, kembalikan true
//    return true;
}

//Mengecek apakah huruf menempati petak Double Word
bool isDoubleWord(int row, int col) {
	int i;
    // Daftar ordo DW yang telah diidentifikasi sebelumnya
    int dwCoordinates[][2] = {
        {3, 7}, {5, 11}, {7, 1}, {7, 6}, {7, 8},
        {7, 13}, {9, 7}, {11, 5}, {11, 11}, {13, 1},
        {13, 13}
    };

    // Mengecek apakah tile berada pada ordo DW
    for (i = 0; i < sizeof(dwCoordinates) / sizeof(dwCoordinates[0]); ++i) {
        if (row == dwCoordinates[i][0] && col == dwCoordinates[i][1]) {
            return true;
        }
    }

    // Jika tidak ada kecocokan, mengembalikan false
    return false;
}

//Mengecek apakah huruf menempati petak Triple Word
bool isTripleWord(int row, int col) {
	int i;
    // Daftar ordo TW yang telah diidentifikasi sebelumnya
    int twCoordinates[][2] = {
        {1, 4}, {1, 10}, {4, 1}, {4, 8}, {4, 15},
        {8, 4}, {8, 12}, {10, 1}, {10, 8}, {10, 15},
        {12, 4}, {12, 12}, {15, 4}, {15, 10}
    };

    // Mengecek apakah tile berada pada ordo TW
    for (i = 0; i < sizeof(twCoordinates) / sizeof(twCoordinates[0]); ++i) {
        if (row == twCoordinates[i][0] && col == twCoordinates[i][1]) {
            return true;
        }
    }

    // Jika tidak ada kecocokan, mengembalikan false
    return false;
}

//Mengecek apakah huruf menempati petak Double Letter
bool isDoubleLetter(int row, int col) {
	int i;
    // Daftar ordo DL yang telah diidentifikasi sebelumnya
    int dlCoordinates[][2] = {
        {3, 7}, {6, 6}, {6, 8}, {7, 3}, {7, 7},
        {7, 11}, {8, 6}, {8, 8}, {11, 6}, {11, 8},
        {13, 7}
    };

    // Mengecek apakah tile berada pada ordo DL
    for (i = 0; i < sizeof(dlCoordinates) / sizeof(dlCoordinates[0]); ++i) {
        if (row == dlCoordinates[i][0] && col == dlCoordinates[i][1]) {
            return true;
        }
    }

    // Jika tidak ada kecocokan, mengembalikan false
    return false;
}

//Mengecek apakah huruf menempati petak Triple Letter
bool isTripleLetter(int row, int col) {
	int i;
    // Daftar ordo TL yang telah diidentifikasi sebelumnya
    int tlCoordinates[][2] = {
        {2, 6}, {2, 9}, {6, 2}, {6, 14}, {9, 2},
        {9, 14}, {14, 6}, {14, 9}
    };

    // Mengecek apakah tile berada pada ordo TL
    for (i = 0; i < sizeof(tlCoordinates) / sizeof(tlCoordinates[0]); ++i) {
        if (row == tlCoordinates[i][0] && col == tlCoordinates[i][1]) {
            return true;
        }
    }

    // Jika tidak ada kecocokan, mengembalikan false
    return false;
}

//Mengecek pemenang berdasarkan skor
void checkWin() {
	Player arrPlayer[2] = {player1, player2};
	if(player1.score < player2.score) {
		printf("\t\t\t\t\t\t\t\t\t\t\t       %s Menang!\n", &player2.name);
	} else {
		printf("\t\t\t\t\t\t\t\t\t\t\t       %s Menang!\n", &player1.name);
	}
	
	saveScoreToFile(arrPlayer);
	
	endGame(&i);
	switch(i) {
		case 1:
			backToMain();
			break;
		default:
			invalidChoose();
			endGame(&i);
	}
}

//Menyimpan data score dan menyimpan data tertinggi secara Descending
void saveScoreToFile(Player arrPlayer[2]) {
	FILE *frec;
	int i;
	
	if ((frec = fopen("HighscoreScrabble.txt", "a")) != NULL) {
		fseek(frec, 0, SEEK_SET);
        Player scores[100]; // Anggap saja maksimal 100 skor
        int numScores = 0;
        int i, j;

        while (fscanf(frec, "Nama: %s\nScore: %d\n", scores[numScores].name, &scores[numScores].score) == 2) {
            numScores++;
        }

        // Menambahkan skor baru dari arrPlayer ke dalam array
        for (i = 0; i < 2; i++) {
            scores[numScores + i] = arrPlayer[i];
        }
        numScores += 2;

        // Mengurutkan skor dalam urutan menurun (DSC)
        for (i = 0; i < numScores - 1; i++) {
            for (j = i + 1; j < numScores; j++) {
                if (scores[i].score < scores[j].score) {
                    Player temp = scores[i];
                    scores[i] = scores[j];
                    scores[j] = temp;
                }
            }
        }

        // Menulis kembali skor ke dalam file
        fseek(frec, 0, SEEK_SET);
        fprintf(frec, "Data Score Player Scrabble\n");

//        for (i = 0; i < numScores; i++) {
//            fprintf(frec, "Nama: %s\nScore: %d\n", scores[i].name, scores[i].score);
//        }
        
        for(i = 0; i < numScores; i++) {
        	fprintf(frec, "Nama: %s\nScore: %d\n", &scores[i].name, scores[i].score);
		}

        printf("\t\t\t\t\t\t\t       Simpan Data Berhasil!\n");

    	fclose(frec);
    } else {
        printf("\t\t\t\t\t\t\t       Pembuatan File Gagal!\n");
    }
}

//Input untuk kembali ke main menu ketika game selesai
void endGame() {
//	system("cls");
	header();
	printf("\n\n\t\t\t                    ||===============================================================||\n");
	printf("\n\t\t\t                    ||\t\t      Game     Selesai   \t    : \t\t             ||\n");
	printf("\t\t\t                    ||\t            1. \t\t          Kembali \t\t     ||\n");
	printf("\t\t\t                    ||===============================================================||\n");
    printf("\t\t\t\t\t\t         Pilihan Kamu\t\t    :\t\t\t");
	scanf("%d", &i);
	system("cls");
}

//Mengecek apakah kata terdapat pada kamus
int isWordValid(char *inputWord) {
    FILE *file = fopen(FILENAME, "r");
    char word[MAX_WORD_LENGTH];

    if (file == NULL) {
        printf("\t\t\t\t\t\t\t       File tidak dapat dibuka.\n");
        return 0;
    }

    while (fscanf(file, "%s", word) != EOF) {
        if (strcmp(inputWord, word) == 0) {
            fclose(file);
            
            // Kata ditemukan dalam file
            return 1;
        }
    }

    fclose(file);
    
    // Kata tidak ditemukan dalam file
    return 0;
}

//Menampilkan petak mana yang memiliki penambah poin
void clueSpecialTiles() {
	printf(" Double Word: {3, 7}, {5, 11}, {7, 1}, {7, 6}, {7, 8}, {7, 13}, {9, 7}, {11, 5}, {11, 11}, {13, 1},{13, 13}\n");
	printf(" Triple Word: {1, 4}, {1, 10}, {4, 1}, {4, 8}, {4, 15}, {8, 4}, {8, 12}, {10, 1}, {10, 8}, {10, 15}, {12, 4}, {12, 12}, {15, 4}, {15, 10}\n");
	printf(" Double Letter: {3, 7}, {6, 6}, {6, 8}, {7, 3}, {7, 7}, {7, 11}, {8, 6}, {8, 8}, {11, 6}, {11, 8}, {13, 7}\n");
	printf(" Triple Letter: {2, 6}, {2, 9}, {6, 2}, {6, 14}, {9, 2}, {9, 14}, {14, 6}, {14, 9}\n");
}

//mencari kata random dari kamus words bahasa inggris
void getRandomWord(char *word) {
	FILE *file = fopen("words.txt", "r");

    if (file == NULL) {
        perror("\t\t\t\t\t\t\t       File tidak dapat dibuka.\n");
        exit(EXIT_FAILURE);
    }

    // Hitung jumlah kata dalam file
    int numWords = 0;
    int i;
    char buffer[100];

    while (fgets(buffer, sizeof(buffer), file) != NULL) {
        numWords++;
    }

    // Kembalikan posisi file ke awal
    rewind(file);

    // Ambil kata secara acak dari file
    int randomIndex = rand() % numWords;
    for (i = 0; i <= randomIndex; i++) {
        fgets(word, sizeof(buffer), file);
    }

    // Hilangkan karakter newline di akhir kata
    size_t length = strlen(word);
    if (length > 0 && word[length - 1] == '\n') {
        word[length - 1] = '\0';
    }

    // Tutup file
    fclose(file);
}

//memberikan parameter untuk getRandomWord berdasarkan randomInteger
void placeStartingWord(Tile board[BOARD_SIZE][BOARD_SIZE]) {
	srand(time(NULL));
	int randomNumber = rand() % 100000 + 1;
    char word[randomNumber];

    // Mengambil kata secara acak dari file
    getRandomWord(word);

    // Menempatkan kata pada ordo 7,7
    int center = BOARD_SIZE / 2;
    int i;
    int start = center - (strlen(word) / 2);

    for (i = 0; i < strlen(word); i++) {
        board[center][start + i].letter = word[i];
    }
}


