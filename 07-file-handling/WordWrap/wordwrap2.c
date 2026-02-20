//// CHATGPT VERSION
//
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <stdbool.h>
//#include <ctype.h>
//
//#define MAX_LINE_LENGTH 40
//#define MAX_WORD_LENGTH 1024
//
//extern bool file_wordwrap(const char* input_filename, const char* output_filename) {
//    if (!input_filename || !output_filename) {
//        return false;
//    }
//
//    FILE* fin = fopen(input_filename, "r");
//    if (!fin) return false;
//
//    FILE* fout = fopen(output_filename, "w");
//    if (!fout) {
//        fclose(fin);
//        return false;
//    }
//
//    int ch;
//    char word[MAX_WORD_LENGTH];
//    int word_len = 0;
//    int line_len = 0;
//    bool word_written = false;
//    bool has_words = false;
//
//    while ((ch = fgetc(fin)) != EOF) {
//        if (isspace(ch)) {
//            if (word_len > 0) {
//                word[word_len] = '\0';
//                has_words = true;
//
//                // Se la parola è più lunga di MAX_LINE_LENGTH
//                if (word_len >= MAX_LINE_LENGTH) {
//                    // Vai a capo prima di stamparla se la riga attuale ha contenuto
//                    if (line_len > 0) {
//                        fputc('\n', fout);
//                        line_len = 0;
//                    }
//
//                    // Scrivi la parola lunga spezzandola in righe da MAX_LINE_LENGTH
//                    int i = 0;
//                    while (i < word_len) {
//                        int to_write = (word_len - i < MAX_LINE_LENGTH) ? word_len - i : MAX_LINE_LENGTH;
//                        fwrite(&word[i], 1, to_write, fout);
//                        i += to_write;
//                        if (i < word_len) {
//                            fputc('\n', fout);
//                        }
//                    }
//                    line_len = word_len % MAX_LINE_LENGTH;
//                }
//                else {
//                    // Se la parola ci sta nella riga corrente
//                    if (line_len == 0) {
//                        fwrite(word, 1, word_len, fout);
//                        line_len = word_len;
//                    }
//                    else {
//                        if (line_len + 1 + word_len >= MAX_LINE_LENGTH) {
//                            fputc('\n', fout);
//                            fwrite(word, 1, word_len, fout);
//                            line_len = word_len;
//                        }
//                        else {
//                            fputc(' ', fout);
//                            fwrite(word, 1, word_len, fout);
//                            line_len += 1 + word_len;
//                        }
//                    }
//                }
//
//                word_len = 0;
//                word_written = true;
//            }
//            // Ignora spazi multipli
//        }
//        else {
//            if (word_len < MAX_WORD_LENGTH - 1) {
//                word[word_len++] = (char)ch;
//            }
//        }
//    }
//
//    // Gestione ultima parola se il file non finisce con uno spazio
//    if (word_len > 0) {
//        word[word_len] = '\0';
//        has_words = true;
//
//        if (word_len >= MAX_LINE_LENGTH) {
//            if (line_len > 0) {
//                fputc('\n', fout);
//            }
//            int i = 0;
//            while (i < word_len) {
//                int to_write = (word_len - i < MAX_LINE_LENGTH) ? word_len - i : MAX_LINE_LENGTH;
//                fwrite(&word[i], 1, to_write, fout);
//                i += to_write;
//                if (i < word_len) {
//                    fputc('\n', fout);
//                }
//            }
//        }
//        else {
//            if (line_len == 0) {
//                fwrite(word, 1, word_len, fout);
//            }
//            else {
//                if (line_len + 1 + word_len >= MAX_LINE_LENGTH) {
//                    fputc('\n', fout);
//                    fwrite(word, 1, word_len, fout);
//                }
//                else {
//                    fputc(' ', fout);
//                    fwrite(word, 1, word_len, fout);
//                }
//            }
//        }
//    }
//
//    fclose(fin);
//    fclose(fout);
//
//    return has_words;
//}
