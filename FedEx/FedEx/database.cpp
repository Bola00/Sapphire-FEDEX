#include <stdio.h>
#include <stdlib.h>
#include <sqlite3.h> 
#include <iostream>

static int callback(void *NotUsed, int argc, char **argv, char **azColName) {
	int i;
	for (i = 0; i < argc; i++) {
		printf("%s = %s\n", azColName[i], argv[i] ? argv[i] : "NULL");
	}
	printf("\n");
	return 0;
}

void makeTable(int rc, sqlite3 *db, const char *sql, char *zErrMsg) {
	// Execute SQL statement
	rc = sqlite3_exec(db, sql, callback, 0, &zErrMsg);

	if (rc != SQLITE_OK) {
		fprintf(stderr, "SQL error: %s\n", zErrMsg);
		sqlite3_free(zErrMsg);
	}
	else {
		fprintf(stdout, "Table created successfully\n");
	}
}


int makeDataBase(){
sqlite3 *db;
char *zErrMsg = 0;
int rc;
const char *sql;

/* Open database */
rc = sqlite3_open("fedEx.db", &db);

if (rc) {
	fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db));
	return(0);
}
else {
	fprintf(stdout, "Opened database successfully\n");
}

/* Create SQL statement */
sql = "CREATE TABLE WAKE_UP_HOUR("  \
"ID INT PRIMARY KEY     NOT NULL," \
"DATE          TEXT     NOT NULL);";

/* Execute SQL statement */
makeTable(rc, db, sql, zErrMsg);

/* Create SQL statement */
sql = "CREATE TABLE BASE_QUESTION_1("  \
"ID INT PRIMARY KEY           NOT NULL," \
"NUMBER_ONE           INT     NOT NULL," \
"NUMBER_TWO           INT     NOT NULL," \
"NUMBER_THREE         INT     NOT NULL," \
"NUMBER_FOUR          INT     NOT NULL," \
"NUMBER_FIVE          INT     NOT NULL);";

/* Execute SQL statement */
makeTable(rc, db, sql, zErrMsg);

sql = "CREATE TABLE BASE_QUESTION_2("  \
"ID INT PRIMARY KEY           NOT NULL," \
"NUMBER_ONE           INT	  NOT NULL," \
"NUMBER_TWO           INT     NOT NULL," \
"NUMBER_THREE         INT     NOT NULL," \
"NUMBER_FOUR          INT     NOT NULL," \
"NUMBER_FIVE          INT     NOT NULL);";

makeTable(rc, db, sql, zErrMsg);

sql = "CREATE TABLE BASE_QUESTION_3("  \
"ID INT PRIMARY KEY           NOT NULL," \
"NUMBER_ONE           INT     NOT NULL," \
"NUMBER_TWO           INT     NOT NULL," \
"NUMBER_THREE         INT     NOT NULL," \
"NUMBER_FOUR          INT     NOT NULL," \
"NUMBER_FIVE          INT     NOT NULL);";

makeTable(rc, db, sql, zErrMsg);

sql = "CREATE TABLE WHERE_DO_YOU_KNOW_CR("  \
"ID INT PRIMARY KEY      NOT NULL," \
"SHOOL           INT     NOT NULL," \
"PARENTS         INT     NOT NULL," \
"FAMILY          INT     NOT NULL," \
"FRIENDS         INT     NOT NULL," \
"UNICEF          INT     NOT NULL," \
"INTERNET        INT     NOT NULL," \
"TV				 INT     NOT NULL," \
"OTHER           INT     NOT NULL," \
"NOWHERE         INT     NOT NULL);";

makeTable(rc, db, sql, zErrMsg);

sql = "CREATE TABLE MOST_USEFULL_OF_WAKEUP("  \
"ID INT PRIMARY KEY             NOT NULL," \
"CR						INT     NOT NULL," \
"POOR_CHILDREN          INT     NOT NULL," \
"WORK_OF_UNICEF         INT     NOT NULL," \
"INTERNET_BULLYING      INT     NOT NULL," \
"HELPING				INT     NOT NULL," \
"GAME					INT     NOT NULL," \
"MOVIE					INT     NOT NULL," \
"EVERYTHING				INT     NOT NULL," \
"NONE_OF_THEM           INT     NOT NULL);";

makeTable(rc, db, sql, zErrMsg);

sql = "CREATE TABLE LIKE_THE_MOST_OF_WAKEUP("  \
"ID INT PRIMARY KEY             NOT NULL," \
"CR						INT     NOT NULL," \
"POOR_CHILDREN          INT     NOT NULL," \
"WORK_OF_UNICEF         INT     NOT NULL," \
"INTERNET_BULLYING      INT     NOT NULL," \
"HELPING				INT     NOT NULL," \
"GAME					INT     NOT NULL," \
"MOVIE					INT     NOT NULL," \
"EVERYTHING				INT     NOT NULL," \
"NONE_OF_THEM           INT     NOT NULL);";

makeTable(rc, db, sql, zErrMsg);

sql = "CREATE TABLE NEED_MORE_TIME("  \
"ID INT PRIMARY KEY             NOT NULL," \
"CR						INT     NOT NULL," \
"POOR_CHILDREN          INT     NOT NULL," \
"WORK_OF_UNICEF         INT     NOT NULL," \
"INTERNET_BULLYING      INT     NOT NULL," \
"HELPING				INT     NOT NULL," \
"GAME					INT     NOT NULL," \
"MOVIE					INT     NOT NULL," \
"EVERYTHING				INT     NOT NULL," \
"NONE_OF_THEM           INT     NOT NULL);";

makeTable(rc, db, sql, zErrMsg);

sql = "CREATE TABLE NEED_LESS_TIME("  \
"ID INT PRIMARY KEY             NOT NULL," \
"CR						INT     NOT NULL," \
"POOR_CHILDREN          INT     NOT NULL," \
"WORK_OF_UNICEF         INT     NOT NULL," \
"INTERNET_BULLYING      INT     NOT NULL," \
"HELPING				INT     NOT NULL," \
"GAME					INT     NOT NULL," \
"MOVIE					INT     NOT NULL," \
"EVERYTHING				INT     NOT NULL," \
"NONE_OF_THEM           INT     NOT NULL);";

makeTable(rc, db, sql, zErrMsg);

sql = "CREATE TABLE QUIZ_ONE("  \
"ID INT PRIMARY KEY     NOT NULL," \
"NUMBER_ONE		INT     NOT NULL," \
"NUMBER_TWO     INT     NOT NULL," \
"NUMBER_THREE   INT     NOT NULL);";

makeTable(rc, db, sql, zErrMsg);

sql = "CREATE TABLE QUIZ_TWO("  \
"ID INT PRIMARY KEY     NOT NULL," \
"NUMBER_ONE		INT     NOT NULL," \
"NUMBER_TWO     INT     NOT NULL," \
"NUMBER_THREE   INT     NOT NULL);";

makeTable(rc, db, sql, zErrMsg);

sql = "CREATE TABLE QUIZ_THREE("  \
"ID INT PRIMARY KEY     NOT NULL," \
"NUMBER_ONE		INT     NOT NULL," \
"NUMBER_TWO     INT     NOT NULL," \
"NUMBER_THREE   INT     NOT NULL);";

makeTable(rc, db, sql, zErrMsg);

sql = "CREATE TABLE QUIZ_FOUR("  \
"ID INT PRIMARY KEY     NOT NULL," \
"NUMBER_ONE		INT     NOT NULL," \
"NUMBER_TWO     INT     NOT NULL," \
"NUMBER_THREE   INT     NOT NULL);";

makeTable(rc, db, sql, zErrMsg);

sql = "CREATE TABLE QUIZ_FIVE("  \
"ID INT PRIMARY KEY     NOT NULL," \
"NUMBER_ONE		INT     NOT NULL," \
"NUMBER_TWO     INT     NOT NULL," \
"NUMBER_THREE   INT     NOT NULL);";

makeTable(rc, db, sql, zErrMsg);

sql = "CREATE TABLE QUIZ_SIX("  \
"ID INT PRIMARY KEY     NOT NULL," \
"NUMBER_ONE		INT     NOT NULL," \
"NUMBER_TWO     INT     NOT NULL," \
"NUMBER_THREE   INT     NOT NULL);";

makeTable(rc, db, sql, zErrMsg);

sql = "CREATE TABLE QUIZ_SEVEN("  \
"ID INT PRIMARY KEY     NOT NULL," \
"NUMBER_ONE		INT     NOT NULL," \
"NUMBER_TWO     INT     NOT NULL," \
"NUMBER_THREE   INT     NOT NULL);";

makeTable(rc, db, sql, zErrMsg);

sqlite3_close(db);
return(0);
}
