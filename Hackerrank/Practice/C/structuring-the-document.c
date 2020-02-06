#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#define MAX_CHARACTERS 1005
#define MAX_PARAGRAPHS 5

struct word {
    char* data;
};

struct sentence {
    struct word* data;
    int word_count;//denotes number of words in a sentence
};

struct paragraph {
    struct sentence* data  ;
    int sentence_count;//denotes number of sentences in a paragraph
};

struct document {
    struct paragraph* data;
    int paragraph_count;//denotes number of paragraphs in a document
};

struct document get_document(char* text) {

    struct document docstruc;
    docstruc.paragraph_count = 0;

    char* para;
    para = strtok(text, "\n");
    while (para != NULL) {

        // use the para here
        struct paragraph parastruc;
        parastruc.sentence_count = 0;
        docstruc.data = (struct paragraph*)realloc(docstruc.data, sizeof(struct paragraph)*docstruc.paragraph_count);
        docstruc.data[docstruc.paragraph_count] = parastruc;
        docstruc.paragraph_count++;
        
        char* sent = strtok(para, ".");
        while (sent != NULL) {

            struct sentence sentstruct;
            sentstruct.word_count = 0;
            parastruc.data = (struct sentence*)realloc(parastruc.data, sizeof(struct sentence)*parastruc.sentence_count);
            parastruc.data[parastruc.sentence_count] = sentstruct;
            parastruc.sentence_count++;

            char* word = strtok(sent, " ");
            while (word != NULL) {

                struct word wordstruct;
                wordstruct.data = NULL;

                sentstruct.data = (struct word*)realloc(sentstruct.data, sizeof(struct word)*sentstruct.word_count);
                sentstruct.data[sentstruct.word_count] = wordstruct;
                sentstruct.word_count++;

                wordstruct.data = (char*)realloc(wordstruct.data, sizeof(char)*strlen(word));
                strcpy(wordstruct.data, word);

                word = strtok(NULL, " ");
            }
            sent = strtok(NULL, ".");
        }
        para = strtok(NULL, "\n");        
    }

    return docstruc;

}

struct word kth_word_in_mth_sentence_of_nth_paragraph(struct document Doc, int k, int m, int n) {
    return Doc.data[n-1].data[m-1].data[k-1];
}

struct sentence kth_sentence_in_mth_paragraph(struct document Doc, int k, int m) { 
    return Doc.data[m-1].data[k-1];
}

struct paragraph kth_paragraph(struct document Doc, int k) {
    return Doc.data[k-1];
}


void print_word(struct word w) {
    printf("%s", w.data);
}

void print_sentence(struct sentence sen) {
    for(int i = 0; i < sen.word_count; i++) {
        print_word(sen.data[i]);
        if (i != sen.word_count - 1) {
            printf(" ");
        }
    }
}

void print_paragraph(struct paragraph para) {
    for(int i = 0; i < para.sentence_count; i++){
        print_sentence(para.data[i]);
        printf(".");
    }
}

void print_document(struct document doc) {
    for(int i = 0; i < doc.paragraph_count; i++) {
        print_paragraph(doc.data[i]);
        if (i != doc.paragraph_count - 1)
            printf("\n");
    }
}

char* get_input_text() {	
    int paragraph_count;
    scanf("%d", &paragraph_count);

    char p[MAX_PARAGRAPHS][MAX_CHARACTERS], doc[MAX_CHARACTERS];
    memset(doc, 0, sizeof(doc));
    getchar();
    for (int i = 0; i < paragraph_count; i++) {
        scanf("%[^\n]%*c", p[i]);
        strcat(doc, p[i]);
        if (i != paragraph_count - 1)
            strcat(doc, "\n");
    }

    char* returnDoc = (char*)malloc((strlen (doc)+1) * (sizeof(char)));
    strcpy(returnDoc, doc);
    return returnDoc;
}

int main() 
{
    char* text = get_input_text();
    struct document Doc = get_document(text);

    int q;
    scanf("%d", &q);

    while (q--) {
        int type;
        scanf("%d", &type);

        if (type == 3){
            int k, m, n;
            scanf("%d %d %d", &k, &m, &n);
            struct word w = kth_word_in_mth_sentence_of_nth_paragraph(Doc, k, m, n);
            print_word(w);
        }

        else if (type == 2) {
            int k, m;
            scanf("%d %d", &k, &m);
            struct sentence sen= kth_sentence_in_mth_paragraph(Doc, k, m);
            print_sentence(sen);
        }

        else{
            int k;
            scanf("%d", &k);
            struct paragraph para = kth_paragraph(Doc, k);
            print_paragraph(para);
        }
        printf("\n");
    }     
}