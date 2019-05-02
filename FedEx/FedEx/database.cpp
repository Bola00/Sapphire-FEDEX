#include "database.h"

static int callback(void *NotUsed, int argc, char **argv, char **azColName) {
	int i;
	for (i = 0; i < argc; i++) {
		printf("%s = %s\n", azColName[i], argv[i] ? argv[i] : "NULL");
	}
	printf("\n");
	return 0;
}

void orderForTables(int rc, sqlite3 *db, const char *sql, char *zErrMsg) {
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


int createDataBase(){
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
"ID INT PRIMARY KEY     NOT NULL,"	\
"DATE          TEXT     NOT NULL);";

/* Execute SQL statement */
orderForTables(rc, db, sql, zErrMsg);

/* Create SQL statement */
sql = "CREATE TABLE BASE_QUESTION_ONE("  \
"ID INT PRIMARY KEY           NOT NULL," \
"NUMBER_ONE           INT     NOT NULL," \
"NUMBER_TWO           INT     NOT NULL," \
"NUMBER_THREE         INT     NOT NULL," \
"NUMBER_FOUR          INT     NOT NULL," \
"NUMBER_FIVE          INT     NOT NULL);";

/* Execute SQL statement */
orderForTables(rc, db, sql, zErrMsg);

sql = "CREATE TABLE BASE_QUESTION_TWO("  \
"ID INT PRIMARY KEY           NOT NULL," \
"NUMBER_ONE           INT	  NOT NULL," \
"NUMBER_TWO           INT     NOT NULL," \
"NUMBER_THREE         INT     NOT NULL," \
"NUMBER_FOUR          INT     NOT NULL," \
"NUMBER_FIVE          INT     NOT NULL);";

orderForTables(rc, db, sql, zErrMsg);

sql = "CREATE TABLE BASE_QUESTION_THREE("  \
"ID INT PRIMARY KEY           NOT NULL," \
"NUMBER_ONE           INT     NOT NULL," \
"NUMBER_TWO           INT     NOT NULL," \
"NUMBER_THREE         INT     NOT NULL," \
"NUMBER_FOUR          INT     NOT NULL," \
"NUMBER_FIVE          INT     NOT NULL);";

orderForTables(rc, db, sql, zErrMsg);

sql = "CREATE TABLE PREVIOUS_IMPACT("  \
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

orderForTables(rc, db, sql, zErrMsg);

sql = "CREATE TABLE ABOUT_EVENT_ONE("  \
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

orderForTables(rc, db, sql, zErrMsg);

sql = "CREATE TABLE ABOUT_EVENT_TWO("  \
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

orderForTables(rc, db, sql, zErrMsg);

sql = "CREATE TABLE ABOUT_EVENT_THREE("  \
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

orderForTables(rc, db, sql, zErrMsg);

sql = "CREATE TABLE ABOUT_EVENT_FOUR("  \
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

orderForTables(rc, db, sql, zErrMsg);

sql = "CREATE TABLE QUIZ_ONE("  \
"ID INT PRIMARY KEY     NOT NULL," \
"NUMBER_ONE		INT     NOT NULL," \
"NUMBER_TWO     INT     NOT NULL," \
"NUMBER_THREE   INT     NOT NULL);";

orderForTables(rc, db, sql, zErrMsg);

sql = "CREATE TABLE QUIZ_TWO("  \
"ID INT PRIMARY KEY     NOT NULL," \
"NUMBER_ONE		INT     NOT NULL," \
"NUMBER_TWO     INT     NOT NULL," \
"NUMBER_THREE   INT     NOT NULL);";

orderForTables(rc, db, sql, zErrMsg);

sql = "CREATE TABLE QUIZ_THREE("  \
"ID INT PRIMARY KEY     NOT NULL," \
"NUMBER_ONE		INT     NOT NULL," \
"NUMBER_TWO     INT     NOT NULL," \
"NUMBER_THREE   INT     NOT NULL);";

orderForTables(rc, db, sql, zErrMsg);

sql = "CREATE TABLE QUIZ_FOUR("  \
"ID INT PRIMARY KEY     NOT NULL," \
"NUMBER_ONE		INT     NOT NULL," \
"NUMBER_TWO     INT     NOT NULL," \
"NUMBER_THREE   INT     NOT NULL);";

orderForTables(rc, db, sql, zErrMsg);

sql = "CREATE TABLE QUIZ_FIVE("  \
"ID INT PRIMARY KEY     NOT NULL," \
"NUMBER_ONE		INT     NOT NULL," \
"NUMBER_TWO     INT     NOT NULL," \
"NUMBER_THREE   INT     NOT NULL);";

orderForTables(rc, db, sql, zErrMsg);

sql = "CREATE TABLE QUIZ_SIX("  \
"ID INT PRIMARY KEY     NOT NULL," \
"NUMBER_ONE		INT     NOT NULL," \
"NUMBER_TWO     INT     NOT NULL," \
"NUMBER_THREE   INT     NOT NULL);";

orderForTables(rc, db, sql, zErrMsg);

sql = "CREATE TABLE QUIZ_SEVEN("  \
"ID INT PRIMARY KEY     NOT NULL," \
"NUMBER_ONE		INT     NOT NULL," \
"NUMBER_TWO     INT     NOT NULL," \
"NUMBER_THREE   INT     NOT NULL);";

orderForTables(rc, db, sql, zErrMsg);

sqlite3_close(db);
return(1);
}

int insertData(int ID, std::string TableChoose, std::vector<int> results) {
	sqlite3 *db;
	char *zErrMsg = 0;
	int rc;
	const char *sql;
	std::string order;

	// Open database 
	rc = sqlite3_open("FedEx.db", &db);

	if (rc) {
		fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db));
		return(0);
	}
	else {
		fprintf(stderr, "Opened database successfully\n");
	}

	if (TableChoose[0] == 'B') {
		// Create SQL statement

		std::string order = "INSERT INTO " + TableChoose + " (ID,NUMBER_ONE,NUMBER_TWO,NUMBER_THREE,NUMBER_FOUR, NUMBER_FIVE) "  \
			"VALUES (" + std::to_string(ID) + ", " + std::to_string(results[0]) + ", " + std::to_string(results[1]) + "," \
			+ std::to_string(results[2]) + " , " + std::to_string(results[3]) + ", " + std::to_string(results[4]);");";
	} else if (TableChoose[0] == 'P') {
		std::string order = "INSERT INTO " + TableChoose + " (ID,SHOOL,PARENTS,FAMILY,FRIENDS, UNICEF, INTERNET, TV, OTHER, NOWHERE) "  \
			"VALUES (" + std::to_string(ID) + ", " + std::to_string(results[0]) + ", " + std::to_string(results[1]) + "," \
			+ std::to_string(results[2]) + " , " + std::to_string(results[3]) + ", " + std::to_string(results[4]) +", "
			 + std::to_string(results[5]) + ", " + std::to_string(results[6]) + ", " \
			+ std::to_string(results[7]) + ", " + std::to_string(results[8]);");";
	} else if (TableChoose[0] == 'A') {
		std::string order = "INSERT INTO " + TableChoose + " (ID,CR,POOR_CHILDREN,WORK_OF_UNICEF,INTERNET_BULLYING, HELPING, GAME, MOVIE, EVERYTHING, NONE_OF_THEM) "  \
			"VALUES (" + std::to_string(ID) + ", " + std::to_string(results[0]) + ", " + std::to_string(results[1]) + "," \
			+ std::to_string(results[2]) + " , " + std::to_string(results[3]) + ", " + std::to_string(results[4]) + ", "
			+ std::to_string(results[5]) + ", " + std::to_string(results[6]) + ", " \
			+ std::to_string(results[7]) + ", " + std::to_string(results[8]);");";
	} else if (TableChoose[0] == 'Q') {
		std::string order = "INSERT INTO " + TableChoose + " (ID,NUMBER_ONE,NUMBER_TWO,NUMBER_THREE) "  \
			"VALUES (" + std::to_string(ID) + ", " + std::to_string(results[0]) + ", " + std::to_string(results[1]) + "," \
			+ std::to_string(results[2]);");";
	}
	//Execute SQL statement 
	sql = order.c_str();
	//orderForTables(rc, db, sql, zErrMsg);
	rc = sqlite3_exec(db, sql, callback, 0, &zErrMsg);

	if (rc != SQLITE_OK) {
		fprintf(stderr, "SQL error: %s\n", zErrMsg);
		sqlite3_free(zErrMsg);
	}
	else {
		fprintf(stdout, "Records created successfully\n");
	}
	sqlite3_close(db);
	return 1;
}
