#include <stdio.h>
int main() {
    char q[20][120]={
        "What is the capital of France?\n1. Paris\t2. London\n3. Berlin\t4. Moscow",
        "What is cube root of 8?\n1. 4\t2. 3\n3. 2\t4. 1",
        "Who wrote 'Hamlet'?\n1. Leornado Da Vinci\t2. Claude Monet\n3. Shakespeares\t4. None of the above",
        "What is the square root of 64?\n1. 2\t2. 4\n3. 6\t4. 8",
        "What is the largest planet in our solar system?\n1. Saturn\t2. Jupiter\n3. Neptune\t4. Sun",
        "What is the chemical symbol for water?\n1. H2O\t2. NaCl\n3. HO2\t4. Na2HCO3",
        "Who painted the Mona Lisa?\n1. Claude Monet\t2. Shakespeares\n3. Leornado Da Vinci\t4. Vincent Van Gosh",
        "What is the capital of Japan?\n1. Seoul\t2. Delhi\n3. Koyoto\t4. Tokyo",
        "What is 9*7?\n1. 25\t2. 52\n3. 35\t4. 63",
        "How many continents are there?\n1. 3\t2. 7\n3. 17\t4. 8",
        "What is the powerhouse of the cell?\n1. DNA\t2. RNA\n3. Mitochondria\t4. Lysosomes",
        "What is the capital of Italy?\n1. Bari\t2. Naples\n3. Milan\t4. Roma",
        "What gas do plants absorb from the atmosphere?\n1. CO2\t2. CO\n3. C2O\t4. C2O3",
        "Who discovered gravity?\n1. Nicole Tesla\t2. Einstein\n3. Mary Curie\t4. Newton",
        "What is the largest ocean on Earth?\n1. Antarctic\t2. Atlantic\n3. Pacific\t4. Indian",
        "How many legs does a spider have?\n1. 2\t2. 4\n3. 6\t4. 8",
        "What is the speed of light in m/s (approx)?\n1. 227351038\t2. 427193620\n3. 622223465\t4. 299792458",
        "Who was the first president of the USA?\n1. Nelson Mandela\t2. Washington\n3. Donald Trump\t4. Joe Biden",
        "What is the capital of Canada?\n1.Ottawa\t2.Toronto\n3. Victoria\t4. Regina",
        "What is the smallest prime number?\n1. 3\t2. 2\n3. 1\t4. 5"};
    int correct[20]={1,3,3,4,2,1,3,4,4,2,3,4,1,4,3,4,4,2,1,2};
    int ans[20], a[20];
    int i,j,score=0;
    for(i=0;i<20;i++){
        printf("\n%s\n", q[i]);
        scanf("%d", &ans[i]);
        if(ans[i]==correct[i]){
            printf("Right!");
            score=score+1;
            a[i]=1;
        }
        else{
            printf("Wrong");
            a[i]=0;
        };
        if(a[i]==a[i-1]){
            if(a[i]==0){
                score=-1;
                break;}
               
        };
    };
    if(score==-1){
        printf("\n\nYou're disqualified!");
        printf("\n\nYour score is: %d", score);
    }
    else{
        printf("\n\nYour score is: %d", score);
    };
    return 0;
}