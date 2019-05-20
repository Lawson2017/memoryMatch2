//
//  main.cpp
//  Memory Matching Game
//
//  Created by James Lawson on 5/7/19.
//  Copyright © 2019 James Lawson. All rights reserved.
//


#include <iostream>
using namespace std;
int selectedRow; //user navigate row of puzzle grid
int selectedColumn; //user navigate column of puzzle grid
string selectedBird; // store users selected square/bird into variable to try and match with another
string matchedBird;
string difficulty;
string answerGrid[50][50]; // initialized as 50 variables so I can use these same arrays to loop through for all 3 difficulties
string puzzleGrid[50][50];
string Term = "Birds";
string birds[50] =  {"Goose","Teal","Shoveler","Mallard","Pintail","Quail","Pheasant","Turkey","Grebe","Pigeon","Dove","Nuthatch","Poorwill","Swift","Swallow","Rail","Sora","Coot","Stilt","Killdeer","Bushtit","Snipe","Wren","Murre","Murrelet","Gull","Loon","Kinglet","Pelican","Heron","Vulture","Osprey","Kite","Eagle","Harrier","Hawk","Owl","Thrush","Starling","Waxwing","Flicker","Kestrel","Merlin","Avocet","Pewee","Grosbeak","Phoebe","Shrike","Vireo","Jay"}; // global declaration of single dimmensional array of bird names to be placed in games
void checkMatch_easy(){ // checks for 4 matches on a 4X4 grid
    cout << "Enter a row 0-3: " << endl;
    cin >> selectedRow;
    cout << "Enter a column 0-3: " << endl;
    cin >> selectedColumn;
    selectedBird = answerGrid[selectedRow][selectedColumn];
    cout << "Selected bird: " << selectedBird << endl;
    cout << "Enter another row: " << endl;
    cin >> selectedRow;
    cout << "Enter another column: " << endl;
    cin >> selectedColumn;
    matchedBird = answerGrid[selectedColumn][selectedRow];
    cout << "Attempted match: " << matchedBird << endl;
    if(selectedBird == matchedBird){
        cout << selectedBird << " is a match with: " << matchedBird << endl;
        cout << "Enter another row: " << endl;
        cin >> selectedRow;
        cout << "Enter another column: " << endl;
        cin >> selectedColumn;
        selectedBird = answerGrid[selectedRow][selectedColumn];
        cout << selectedBird << endl;
        cout << "Now try to match another... Enter another row: ";
        cin >> selectedRow;
        cout << "column: " << endl;
        cin >> selectedColumn;
        matchedBird = answerGrid[selectedRow][selectedColumn];
        if(selectedBird == matchedBird){
            cout << "Nice job, another match!" << endl;
        } else {
            cout << "Incorrect, please try again" << endl;
        }
        cout << "Enter another row: " << endl;
        cin >> selectedRow;
        cout << "Enter another column: " << endl;
        cin >> selectedColumn;
        selectedBird = answerGrid[selectedRow][selectedColumn];
        cout << selectedBird << endl;
        cout << "Now try to match another... Enter another row: ";
        cin >> selectedRow;
        cout << "column: " << endl;
        cin >> selectedColumn;
        matchedBird = answerGrid[selectedRow][selectedColumn];
        if(selectedBird == matchedBird){
            cout << "Nice job, another match!" << endl;
        }
    } else {
        cout << "Incorrect. Please start over" << endl; // program must restart after 2 mistakes
    }
}
void checkMatch_medium(){ // checks for matches on a 6X6 grid
    cout << "Enter a row 0-5: " << endl;
    cin >> selectedRow;
    cout << "Enter a column 0-5: " << endl;
    cin >> selectedColumn;
    selectedBird = answerGrid[selectedRow][selectedColumn];
    cout << "Selected bird: " << selectedBird << endl;
    cout << "Enter another row: " << endl;
    cin >> selectedRow;
    cout << "Enter another column: " << endl;
    cin >> selectedColumn;
    matchedBird = answerGrid[selectedColumn][selectedRow];
    cout << "Attempted match: " << matchedBird << endl;
    if(selectedBird == matchedBird){
        cout << selectedBird << " is a match with: " << matchedBird << endl;
        cout << "Enter another row: " << endl;
        cin >> selectedRow;
        cout << "Enter another column: " << endl;
        cin >> selectedColumn;
        selectedBird = answerGrid[selectedRow][selectedColumn];
        cout << selectedBird << endl;
        cout << "Now try to match another... Enter another row: ";
        cin >> selectedRow;
        cout << "column: " << endl;
        cin >> selectedColumn;
        matchedBird = answerGrid[selectedRow][selectedColumn];
        if(selectedBird == matchedBird){
            cout << "Nice job, another match!" << endl;
        } else {
            cout << "Incorrect, please try again" << endl;
        }
        cout << "Enter another row: " << endl;
        cin >> selectedRow;
        cout << "Enter another column: " << endl;
        cin >> selectedColumn;
        selectedBird = answerGrid[selectedRow][selectedColumn];
        cout << "Selected bird: " << selectedBird << endl;
        cout << "Now try to match another... Enter another row: ";
        cin >> selectedRow;
        cout << "column: " << endl;
        cin >> selectedColumn;
        matchedBird = answerGrid[selectedRow][selectedColumn];
        if(selectedBird == matchedBird){
            cout << "Nice job, another match!" << endl;
        } else {
            cout << "Incorrect, please try again." << endl;
        }
        cout << "Enter another row: " << endl;
        cin >> selectedRow;
        cout << "Enter another column: " << endl;
        cin >> selectedColumn;
        selectedBird = answerGrid[selectedRow][selectedColumn];
        cout << selectedBird << endl;
        cout << "Now try to match another... Enter another row: ";
        cin >> selectedRow;
        cout << "column: " << endl;
        cin >> selectedColumn;
        cout << "Selected Bird: " << selectedBird << endl;
        matchedBird = answerGrid[selectedRow][selectedColumn];
        if(selectedBird == matchedBird){
            cout << "Nice job, another match!" << endl;
        } else {
            cout << "Incorrect, please try again" << endl;
        }
        cout << "Enter another row: " << endl;
        cin >> selectedRow;
        cout << "Enter another column: " << endl;
        cin >> selectedColumn;
        selectedBird = answerGrid[selectedRow][selectedColumn];
        cout << selectedBird << endl;
        cout << "Now try to match another... Enter another row: ";
        cin >> selectedRow;
        cout << "column: " << endl;
        cin >> selectedColumn;
        matchedBird = answerGrid[selectedRow][selectedColumn];
        if(selectedBird == matchedBird){
            cout << "Nice job, another match!" << endl;
        }
    } else {
        cout << "Incorrect. Please start over" << endl; // program must restart after 2 mistakes
    }
}
void checkMatch_hard(){ // checks for matches on an 8X8 grid
    cout << "Enter a row 0-7: " << endl;
    cin >> selectedRow;
    cout << "Enter a column 0-7: " << endl;
    cin >> selectedColumn;
    selectedBird = answerGrid[selectedRow][selectedColumn];
    cout << "Selected bird: " << selectedBird << endl;
    cout << "Enter another row: " << endl;
    cin >> selectedRow;
    cout << "Enter another column: " << endl;
    cin >> selectedColumn;
    matchedBird = answerGrid[selectedColumn][selectedRow];
    cout << "Attempted match: " << matchedBird << endl;
    if(selectedBird == matchedBird){
        cout << selectedBird << " is a match with: " << matchedBird << endl;
        cout << "Enter another row: " << endl;
        cin >> selectedRow;
        cout << "Enter another column: " << endl;
        cin >> selectedColumn;
        selectedBird = answerGrid[selectedRow][selectedColumn];
        cout << selectedBird << endl;
        cout << "Now try to match another... Enter another row: ";
        cin >> selectedRow;
        cout << "column: " << endl;
        cin >> selectedColumn;
        matchedBird = answerGrid[selectedRow][selectedColumn];
        if(selectedBird == matchedBird){
            cout << "Nice job, another match!" << endl;
        } else {
            cout << "Incorrect, please try again." << endl;
        }
        cout << "Enter another row: " << endl;
        cin >> selectedRow;
        cout << "Enter another column: " << endl;
        cin >> selectedColumn;
        selectedBird = answerGrid[selectedRow][selectedColumn];
        cout << selectedBird << endl;
        cout << "Now try to match another... Enter another row: ";
        cin >> selectedRow;
        cout << "column: " << endl;
        cin >> selectedColumn;
        matchedBird = answerGrid[selectedRow][selectedColumn];
        if(selectedBird == matchedBird){
            cout << "Nice job, another match!" << endl;
        } else{
            cout << "Incorrect, please try again." << endl;
        }
        cout << "Enter another row: " << endl;
        cin >> selectedRow;
        cout << "Enter another column: " << endl;
        cin >> selectedColumn;
        selectedBird = answerGrid[selectedRow][selectedColumn];
        cout << selectedBird << endl;
        cout << "Now try to match another... Enter another row: ";
        cin >> selectedRow;
        cout << "column: " << endl;
        cin >> selectedColumn;
        matchedBird = answerGrid[selectedRow][selectedColumn];
        if(selectedBird == matchedBird){
            cout << "Nice job, another match!" << endl;
        } else {
            cout << "Incorrect, please try again" << endl;
        }
        cout << "Enter another row: " << endl;
        cin >> selectedRow;
        cout << "Enter another column: " << endl;
        cin >> selectedColumn;
        selectedBird = answerGrid[selectedRow][selectedColumn];
        cout << selectedBird << endl;
        cout << "Now try to match another... Enter another row: ";
        cin >> selectedRow;
        cout << "column: " << endl;
        cin >> selectedColumn;
        matchedBird = answerGrid[selectedRow][selectedColumn];
        if(selectedBird == matchedBird){
            cout << "Nice job, another match!" << endl;
        } else{
            cout << "Incorrect, please try again" << endl;
        }
        cout << "Enter another row: " << endl;
        cin >> selectedRow;
        cout << "Enter another column: " << endl;
        cin >> selectedColumn;
        selectedBird = answerGrid[selectedRow][selectedColumn];
        cout << selectedBird << endl;
        cout << "Now try to match another... Enter another row: ";
        cin >> selectedRow;
        cout << "column: " << endl;
        cin >> selectedColumn;
        matchedBird = answerGrid[selectedRow][selectedColumn];
        if(selectedBird == matchedBird){
            cout << "Nice job, another match!" << endl;
        } else {
            cout << "Incorrect, please try again" << endl;
        }
        cout << "Enter another row: " << endl;
        cin >> selectedRow;
        cout << "Enter another column: " << endl;
        cin >> selectedColumn;
        selectedBird = answerGrid[selectedRow][selectedColumn];
        cout << selectedBird << endl;
        cout << "Now try to match another... Enter another row: ";
        cin >> selectedRow;
        cout << "column: " << endl;
        cin >> selectedColumn;
        matchedBird = answerGrid[selectedRow][selectedColumn];
        if(selectedBird == matchedBird){
            cout << "Nice job, another match!" << endl;
        }
    } else {
        cout << "Incorrect. Please start over" << endl; // program must restart after 2 mistakes
    }
}

int main(){
    cout << "Enter a difficulty of easy, medium or hard: " << endl;
    cin >> difficulty;
    if(difficulty == "easy"){ // generate 2 dimmensional array as a game grid based on user difficulty selection
        cout << "easy game: " << endl; // easy game generates 2 bird names per row and doubles for matching
        for(int i = 0; i <= 1; i++){
            for(int j = 0; j <= 1; j++){
                puzzleGrid[i][j] = Term;
                answerGrid[i][j] = birds[i];
                cout << puzzleGrid[i][j] << " ";
            }
        }cout << endl;
        for(int i = 2; i <= 3; i++){
            for(int j = 2; j <= 3; j++){
                puzzleGrid[i][j] = Term;
                answerGrid[i][j] = birds[i];
                cout << puzzleGrid[i][j] << " ";
            }
        }cout << endl;
        for(int i = 4; i <= 5; i++){
            for(int j = 4; j <= 5; j++){
                puzzleGrid[i][j] = Term;
                answerGrid[i][j] = birds[i];
                cout << puzzleGrid[i][j] << " ";
            }
        }cout << endl;
        puzzleGrid[2][2] = Term;
        puzzleGrid[3][3] = Term;
        answerGrid[2][2] = birds[6];
        answerGrid[3][3] = birds[6];

        answerGrid[3][3] = birds[7];
        cout << puzzleGrid[2][2] << " " << puzzleGrid[2][2] << " "; // compiler error if loops are used for assigning final rows of game grids
        cout << puzzleGrid[3][3] << " " << puzzleGrid[3][3];
        cout << endl;
        checkMatch_easy();
        
    }
    if(difficulty == "medium"){ // medium game generates 3 bird names per row and doubles for matching
        cout << "medium game: " << endl;
        for(int i = 0; i <= 2; i++){
            for(int j = 0; j <= 1; j++){
                puzzleGrid[i][j] = Term;
                answerGrid[i][j] = birds[i];
                cout << puzzleGrid[i][j] << " ";
            }
        }cout << endl;
        for(int i = 3; i <= 5; i++){
            for(int j = 2; j <= 3; j++){
                puzzleGrid[i][j] = Term;
                answerGrid[i][j] = birds[i];
                cout << puzzleGrid[i][j] << " ";
            }
        }cout << endl;
        for(int i = 6; i <= 8; i++){
            for(int j = 4; j <= 5; j++){
                puzzleGrid[i][j] = Term;
                answerGrid[i][j] = birds[i];
                cout << puzzleGrid[i][j] << " ";
            }
        }cout << endl;
        for(int i = 9; i <= 11; i++){
            for(int j = 6; j <= 7; j++){
                puzzleGrid[i][j] = Term;
                answerGrid[i][j] = birds[i];
                cout << puzzleGrid[i][j] << " ";
            }
        }cout << endl;
        for(int i =12; i <= 14; i++){
            for(int j = 0; j <= 1; j++){
                puzzleGrid[i][j] = Term;
                answerGrid[i][j] = birds[i];
                cout << puzzleGrid[i][j] << " ";
            }
        }cout << endl;
        puzzleGrid[5][5] = Term;
        puzzleGrid[6][6] = Term;
        puzzleGrid[7][7] = Term;
        answerGrid[5][5] = birds[15];
        answerGrid[6][6] = birds [16];
        answerGrid[7][7] = birds [17];
        cout << puzzleGrid[5][5] << " " << puzzleGrid[5][5] << " "; // compiler error if loops are used for assigning final rows of game grids
        cout << puzzleGrid[6][6] << " " << puzzleGrid[6][6] << " ";
        cout << puzzleGrid[7][7] << " " << puzzleGrid[7][7];
        cout << endl;
        checkMatch_medium();
        
    }
    if(difficulty == "hard"){
        cout << "hard game: " << endl; // hard row generates 8 rows, also with 3 bird names for each, doubled for matching
        for(int i = 0; i <= 3; i++){
            for(int j = 0; j <= 1; j++){
                puzzleGrid[i][j] = Term;
                answerGrid[i][j] = birds[i];
                cout << puzzleGrid[i][j] << " ";
            }
        }cout << endl;
        for(int i = 4; i <= 7; i++){
            for(int j = 2; j <= 3; j++){
                puzzleGrid[i][j] = Term;
                answerGrid[i][j] = birds[i];
                cout << puzzleGrid[i][j] << " ";
            }
        }cout << endl;
        for(int i = 8; i <= 11; i++){
            for(int j = 4; j <= 5; j++){
                puzzleGrid[i][j] = Term;
                answerGrid[i][j] = birds[i];
                cout << puzzleGrid[i][j] << " ";
            }
        }cout << endl;
        for(int i = 12; i <= 15; i++){
            for(int j = 6; j <= 7; j++){
                puzzleGrid[i][j] = Term;
                answerGrid[i][j] = birds[i];
                cout << puzzleGrid[i][j] << " ";
            }
        }cout << endl;
        for(int i = 16; i <= 19; i++){
            for(int j = 0; j <= 1; j++){
                puzzleGrid[i][j] = Term;
                answerGrid[i][j] = birds[i];
                cout << puzzleGrid[i][j] << " ";
            }
        }cout << endl;
        for(int i =20; i <= 23; i++){
            for(int j = 0; j <= 1; j++){
                puzzleGrid[i][j] = Term;
                answerGrid[i][j] = birds[i];
                cout << puzzleGrid[i][j] << " ";
            }
        }cout << endl;
        for(int i =24; i <= 27; i++){
            for(int j = 0; j <= 1; j++){
                puzzleGrid[i][j] = Term;
                answerGrid[i][j] = birds[i];
                cout << puzzleGrid[i][j] << " ";
            }
        }cout << endl;
        puzzleGrid[8][8] = Term;
        puzzleGrid[9][9] = Term;
        puzzleGrid[10][10] = Term;
        puzzleGrid[11][11] = Term;
        puzzleGrid[12][12] = Term;
        puzzleGrid[13][13] = Term;
        answerGrid[8][8] = birds[28];
        answerGrid[9][9] = birds[29];
        answerGrid[10][10] = birds[30];
        answerGrid[11][11] = birds[31];
        answerGrid[12][12] = birds[32];
        answerGrid[13][13] = birds[33];
        cout << puzzleGrid[8][8] << " " << puzzleGrid[8][8] << " ";
        cout << puzzleGrid[9][9] << " " << puzzleGrid[9][9] << " ";
        cout << puzzleGrid[10][10] << " " << puzzleGrid[10][10] << " ";
        cout << puzzleGrid[11][11] << " " << puzzleGrid[11][11] << endl; // Compiler error when using loops for final row of bird names, so they are assigned individually after loops.
        checkMatch_hard();
    }
    return 0;
}
