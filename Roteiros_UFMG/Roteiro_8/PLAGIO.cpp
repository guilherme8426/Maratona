    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include <math.h>
    #include <inttypes.h>
    #include <ctype.h>
    #include <limits.h>
    #include <assert.h>
    #include <algorithm>
    #include <utility>
    #include <iostream>
    #include <map>
    #include <set>
    #include <vector>
    #include <list>
    #include <queue>
    #include <sstream>
   using namespace std;
    #define MAX_PATTERN_SIZE 10010
   int F[MAX_PATTERN_SIZE];
   void build_failure_function( const string & pattern ) {
      int m = pattern.size();
      F[0] = -1;
      for (int i = 0; i < m; i++) {
         F[i+1] = F[i] + 1;
         while ( F[i+1] > 0 && pattern[i] != pattern[ F[i+1]-1 ] )
            F[i+1] = F[ F[i+1]-1 ] + 1;
      }
   }
   vector<int> KMP( const string & text, const string & pattern ) {
      build_failure_function( pattern ); 
      vector<int> start_positions; 
      int j = 0, m = pattern.size(), n = text.size(); 
      for (int i = 0; i < n; i++) { 
         while ( true ) { 
            if ( text[i] == pattern[j] ) { 
               if ( ++j == m ) { 
                  start_positions.push_back( i - m + 1 ); 
                  j = F[j];
               } 
               break;
            } 
            if ( j == 0 ) 
               break; j = F[j];
         }
      } 
      return start_positions;
   } 
   int main() { 
      int M, T; 
      map<string, char> decodeNote; 
      decodeNote["A"] = 'a'; 
      decodeNote["A#"] = 'b'; 
      decodeNote["Bb"] = 'b'; 
      decodeNote["B"] = 'c'; 
      decodeNote["Cb"] = 'c'; 
      decodeNote["C"] = 'd'; 
      decodeNote["B#"] = 'd'; 
      decodeNote["C#"] = 'e'; 
      decodeNote["Db"] = 'e'; 
      decodeNote["D"] = 'f'; 
      decodeNote["D#"] = 'g'; 
      decodeNote["Eb"] = 'g'; 
      decodeNote["E"] = 'h'; 
      decodeNote["Fb"] = 'h'; 
      decodeNote["F"] = 'i'; 
      decodeNote["E#"] = 'i'; 
      decodeNote["F#"] = 'j'; 
      decodeNote["Gb"] = 'j'; 
      decodeNote["G"] = 'k'; 
      decodeNote["G#"] = 'l'; 
      decodeNote["Ab"] = 'l'; 
      while (cin >> M >> T) { 
         if (M == 0 && T == 0) 
            break; 
         string musica, notas, lixo, nota; 
         string musicaDecoded, notasDecoded; 
         getline(cin, lixo); 
         getline(cin, musica); 
         getline(cin, notas); 
         stringstream ss1(musica); 
         while (ss1 >> nota) 
            musicaDecoded += decodeNote[nota]; 
         stringstream ss2(notas); 
         while (ss2 >> nota) 
            notasDecoded += decodeNote[nota]; 
         bool plagio = false; 
         for (int i = 0; i < 12; i++) { 
            vector<int> st = KMP(musicaDecoded, notasDecoded); 
            if (st.size() > 0) { 
               plagio = true; 
               break; 
            } 
            for (int j = 0; j < notasDecoded.size(); j++) { 
               int novaNota = notasDecoded[j] - 'a'; 
               novaNota++; 
               novaNota %= 12; 
               notasDecoded[j] = (char) (novaNota + 'a');
            } 
         } 
         if (plagio) 
            cout << "S" << endl; 
         else 
            cout << "N" << endl; } 
      return 0;
   } 
