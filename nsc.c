#include<stdio.h>
#include<string.h>
#include<math.h>
#include<conio.h>
char c;
void decimalToBinary();
void decimalToOctal();
void decimalToHexaDecimal();
void binaryToDecimal();
void binaryToOctal();
void binaryToHexaDecimal();
void octalToBinary();
void octalToDecimal();
void octalToHexaDecimal();
void hexaDecimalToDecimal();
void hexaDecimalToBinary();
void hexaDecimalToOctal();
void main()
{
    system("cls");
    printf("Number System Converter\n");
    printf("1. Decimal To Binary\n");
    printf("2. Decimal To Octal\n");
    printf("3. Decimal To HexaDecimal\n");
    printf("4. Binary To Decimal\n");
    printf("5. Binary To Octal\n");
    printf("6. Binary To HexaDecimal\n");
    printf("7. Octal To Decimal\n");
    printf("8. Octal To Binary\n");
    printf("9. Octal To HexaDecimal\n");
    printf("A. HexaDecimal To Decimal\n");
    printf("B. HexaDecimal To Binary\n");
    printf("C. HexaDecimal To Octal\n");
    printf("E. Exit\n");
    printf("Enter Your Choice..");

    c = getch();
    if(c == '1'){
        decimalToBinary();
    }
    else if(c == '2'){
        decimalToOctal();
    }
    else if(c == '3'){
        decimalToHexaDecimal();
    }
    else if(c == '4'){
        binaryToDecimal();
    }
    else if(c == '5'){
        binaryToOctal();
    }
    else if(c == '6'){
        binaryToHexaDecimal();
    }
    else if(c == '7'){
        octalToDecimal();
    }
    else if(c == '8'){
        octalToBinary();
    }
    else if(c == '9'){
        octalToHexaDecimal();
    }
    else if(c == 'A' || c == 'a'){
        hexaDecimalToDecimal();
    }
    else if(c == 'B' || c == 'b'){
        hexaDecimalToBinary();
    }
    else if(c == 'C' || c == 'c'){
        hexaDecimalToOctal();
    }
    else if(c == 'E' || c == 'e'){
        printf("\n\nThanks for Using My App..\n\n");
        printf("Use Again......\n");
        exit(0);
    }
    printf("\nDo you want to continue with Main Module Press 1 or Exit any key..\n\n");
    c = getch();
    if ( c == '1'){
        main();
    }
    else{
    printf("\n\nThanks for Using My App..\n\n");
    printf("Use Again......\n");
    }
}

/*Decimal To Binary Module Start*/

void decimalToBinary()
{
    char out[30];
    int num, temp, i;
    system("cls");
    printf("Decimal To Binary\n\n");
    printf("Enter a Decimal Number -- ");
    scanf("%d",&num);
    temp = num;
    for(i = 0; temp > 0 ; temp = temp / 2){
        out[i++] = (temp % 2)+48;
    }
    out[i] = '\0';
    strrev(out);
    printf("\n\nBinary of a Decimal Number %d is -- %s\n\n",num, out);
    printf("\nPress 1 for Continue.. Press 2 for Main Menu Press 3 for Exit\n");
    c = getch();
    if ( c == '1')
        decimalToBinary();
    else if ( c == '2')
        main();
    else if ( c == '3' ){
        printf("\n\nThanks for Using My App..\n\n");
        printf("Use Again......\n");
        exit(0);
    }
}

/*Decimal To Binary Module End*/
/*Decimal To Octal Module Start*/

void decimalToOctal()
{
    char out[30];
    int num, temp, i;
    system("cls");
    printf("Decimal To Octal\n\n");
    printf("Enter a Decimal Number -- ");
    scanf("%d",&num);
    temp = num;
    for(i = 0; temp > 0 ; temp = temp / 8){
        out[i++] = (temp % 8)+48;
    }
    out[i] = '\0';
    strrev(out);
    printf("\n\nOctal of a Decimal Number %d is -- %s\n\n",num, out);
    printf("\nPress 1 for Continue.. Press 2 for Main Menu Press 3 for Exit\n");
    c = getch();
    if ( c == '1')
        decimalToOctal();
    else if ( c == '2')
        main();
    else if ( c == '3' ){
        printf("\n\nThanks for Using My App..\n\n");
        printf("Use Again......\n");
        exit(0);
    }
}

/*Decimal To Octal Module End*/
/*Decimal To HexaDecimal Module Start*/

void decimalToHexaDecimal()
{
    char out[30];
    int num, temp, i;
    system("cls");
    printf("Decimal To HexaDecimal\n\n");
    printf("Enter a Decimal Number -- ");
    scanf("%d",&num);
    temp = num;
    for(i = 0; temp > 0 ; temp = temp / 16){
        out[i++] = (temp%16 <= 9) ? (temp % 16)+48 :(temp % 16)+55;
    }
    out[i] = '\0';
    strrev(out);
    printf("\n\nHexaDecimal of a Decimal Number %d is -- %s\n\n",num, out);
    printf("\nPress 1 for Continue.. Press 2 for Main Menu Press 3 for Exit\n");
    c = getch();
    if ( c == '1')
        decimalToOctal();
    else if ( c == '2')
        main();
    else if ( c == '3' ){
        printf("\n\nThanks for Using My App..\n\n");
        printf("Use Again......\n");
        exit(0);
    }
}

/*Decimal To Hexadecimal Module End*/


/*Binary to Decimal Module Start*/

void binaryToDecimal()
{
    char inp[30];
    int out=0, i, l, p=0;
    system("cls");
    printf("Binary To Decimal\n\n");
    printf("Enter a Binary Number -- ");
    gets(inp);
    l = strlen(inp);
    for(i = l-1 ; i >= 0 ; i--, p++){
        out = out + ((inp[i]-48)* ((int)pow(2,p)));
    }
    printf("\n\nDecimal of a binary Number %s is -- %d\n\n",inp, out);
    printf("\nPress 1 for Continue.. Press 2 for Main Menu Press 3 for Exit\n");
    c = getch();
    if ( c == '1')
        binaryToDecimal();
    else if ( c == '2')
        main();
    else if ( c == '3' ){
        printf("\n\nThanks for Using My App..\n\n");
        printf("Use Again......\n");
        exit(0);
    }
}

/*Binary to Decimal Module End*/

/*Binary to Octal Module start*/
void binaryToOctal()
{
    char inp[30], out[30];
    int out1=0, i, l, p=0, temp;
    system("cls");
    printf("Binary To Octal\n\n");
    printf("Enter a Binary Number -- ");
    gets(inp);
    l = strlen(inp);
    for(i = l-1 ; i >= 0 ; i--, p++){
        out1 = out1 + ((inp[i]-48)* ((int)pow(2,p)));
    }
    temp = out1;
    for(i = 0; temp > 0 ; temp = temp / 8){
        out[i++] = (temp % 8)+48;
    }
    out[i] = '\0';
    strrev(out);
    printf("\n\nOctal of a Binary Number %d is -- %s\n\n",out1, out);
    printf("\nPress 1 for Continue.. Press 2 for Main Menu Press 3 for Exit\n");
    c = getch();
    if ( c == '1')
        binaryToOctal();
    else if ( c == '2')
        main();
    else if ( c == '3' ){
        printf("\n\nThanks for Using My App..\n\n");
        printf("Use Again......\n");
        exit(0);
    }
}

/*Binary to Octal Module end*/

/*Binary to HexaDecimal Module start*/

void binaryToHexaDecimal()
{
    char inp[30], out[30];
    int out1=0, i, l, p=0, temp;
    system("cls");
    printf("Binary To HexaDecimal\n\n");
    printf("Enter a Binary Number -- ");
    gets(inp);
    l = strlen(inp);
    for(i = l-1 ; i >= 0 ; i--, p++){
        out1 = out1 + ((inp[i]-48)* ((int)pow(2,p)));
    }
    temp = out1;
    for(i = 0; temp > 0 ; temp = temp / 16){
        out[i++] = (temp%16 <= 9) ? (temp % 16)+48 :(temp % 16)+55;
    }
    out[i] = '\0';
    strrev(out);
    printf("\n\nOctal of a Binary Number %d is -- %s\n\n",out1, out);
    printf("\nPress 1 for Continue.. Press 2 for Main Menu Press 3 for Exit\n");
    c = getch();
    if ( c == '1')
        binaryToHexaDecimal();
    else if ( c == '2')
        main();
    else if ( c == '3' ){
        printf("\n\nThanks for Using My App..\n\n");
        printf("Use Again......\n");
        exit(0);
    }
}

/*Binary to HexaDecimal Module end*/

/*Octal to Decimal Module Start*/

void octalToDecimal()
{
    char inp[30];
    int out=0, i, l, p=0;
    system("cls");
    printf("Octal To Decimal\n\n");
    printf("Enter a Octal Number -- ");
    gets(inp);
    l = strlen(inp);
    for(i = l-1 ; i >= 0 ; i--, p++){
        out = out + ((inp[i]-48)* ((int)pow(8,p)));
    }
    printf("\n\nDecimal of a Octal Number %s is -- %d\n\n",inp, out);
    printf("\nPress 1 for Continue.. Press 2 for Main Menu Press 3 for Exit\n");
    c = getch();
    if ( c == '1')
        octalToDecimal();
    else if ( c == '2')
        main();
    else if ( c == '3' ){
        printf("\n\nThanks for Using My App..\n\n");
        printf("Use Again......\n");
        exit(0);
    }
}

/*Octal to Decimal Module End*/
/*Octal to Binary Module Start*/

void octalToBinary()
{
    char inp[30],out1[30];
    int out=0, i, l, p=0, temp;
    system("cls");
    printf("Octal To Binary\n\n");
    printf("Enter a Octal Number -- ");
    gets(inp);
    l = strlen(inp);
    for(i = l-1 ; i >= 0 ; i--, p++){
        out = out + ((inp[i]-48)* ((int)pow(8,p)));
    }
    temp = out;
    for(i = 0; temp > 0 ; temp = temp / 2){
        out1[i++] = (temp % 2)+48;
    }
    out1[i] = '\0';
    strrev(out1);
    printf("\n\nBinary of a Octal Number %s is -- %s\n\n",inp, out1);
    printf("\nPress 1 for Continue.. Press 2 for Main Menu Press 3 for Exit\n");
    c = getch();
    if ( c == '1')
        octalToBinary();
    else if ( c == '2')
        main();
    else if ( c == '3' ){
        printf("\n\nThanks for Using My App..\n\n");
        printf("Use Again......\n");
        exit(0);
    }
}

/*Octal to Binary Module End*/

/*Octal to Hexa Decimal Module Start*/

void octalToHexaDecimal()
{
    char inp[30],out1[30];
    int out=0, i, l, p=0, temp;
    system("cls");
    printf("Octal To HexaDecimal\n\n");
    printf("Enter a Octal Number -- ");
    gets(inp);
    l = strlen(inp);
    for(i = l-1 ; i >= 0 ; i--, p++){
        out = out + ((inp[i]-48)* ((int)pow(8,p)));
    }
    temp = out;
    for(i = 0; temp > 0 ; temp = temp / 16){
        out1[i++] = (temp%16 <= 9) ? (temp % 16)+48 :(temp % 16)+55;
    }
    out1[i] = '\0';
    strrev(out1);
    printf("\n\nHexaDecimal of a Octal Number %s is -- %s\n\n",inp, out1);
    printf("\nPress 1 for Continue.. Press 2 for Main Menu Press 3 for Exit\n");
    c = getch();
    if ( c == '1')
        octalToHexaDecimal();
    else if ( c == '2')
        main();
    else if ( c == '3' ){
        printf("\n\nThanks for Using My App..\n\n");
        printf("Use Again......\n");
        exit(0);
    }
}

/*Octal to HexaDecimal Module End*/


/*Octal to Decimal Module Start*/

void hexaDecimalToDecimal()
{
    char inp[30],tmp[30];
    int out=0, i, l, p=0,t;
    system("cls");
    printf("HexaDecimal To Decimal\n\n");
    printf("Enter a HexaDecimal Number -- ");
    gets(inp);
    strcpy(tmp,inp);
    strupr(inp);
    l = strlen(inp);
    for(i = l-1 ; i >= 0 ; i--, p++){
        t = (inp[i] >=65 && inp[i]<=70)?(inp[i]-55) :(inp[i]-48);
        out = out + (t* ((int)pow(16,p)));
    }
    printf("\n\nDecimal of a HexaDecimal Number %s is -- %d\n\n",tmp, out);
    printf("\nPress 1 for Continue.. Press 2 for Main Menu Press 3 for Exit\n");
    c = getch();
    if ( c == '1')
        hexaDecimalToDecimal();
    else if ( c == '2')
        main();
    else if ( c == '3' ){
        printf("\n\nThanks for Using My App..\n\n");
        printf("Use Again......\n");
        exit(0);
    }
}

/*Hexadecimal to Decimal Module End*/
/*Hexadecimal to Binary Module Start*/

void hexaDecimalToBinary()
{
    char inp[30],tmp[30], out1[30];
    int out=0, temp, i, l, p=0,t;
    system("cls");
    printf("HexaDecimal To Binary\n\n");
    printf("Enter a HexaDecimal Number -- ");
    gets(inp);
    strcpy(tmp,inp);
    strupr(inp);
    l = strlen(inp);
    for(i = l-1 ; i >= 0 ; i--, p++){
        t = (inp[i] >=65 && inp[i]<=70)?(inp[i]-55) :(inp[i]-48);
        out = out + (t* ((int)pow(16,p)));
    }
    temp = out;
    for(i = 0; temp > 0 ; temp = temp / 2){
        out1[i++] = (temp % 2)+48;
    }
    out1[i] = '\0';
    strrev(out1);
    printf("\n\nBinary of a HexaDecimal Number %s is -- %s\n\n",tmp, out1);
    printf("\nPress 1 for Continue.. Press 2 for Main Menu Press 3 for Exit\n");
    c = getch();
    if ( c == '1')
        hexaDecimalToBinary();
    else if ( c == '2')
        main();
    else if ( c == '3' ){
        printf("\n\nThanks for Using My App..\n\n");
        printf("Use Again......\n");
        exit(0);
    }
}
/*Hexadecimal to Binary Module End*/

/*Hexadecimal to Octal Module Start*/

void hexaDecimalToOctal()
{
    char inp[30],tmp[30], out1[30];
    int out=0, temp, i, l, p=0,t;
    system("cls");
    printf("HexaDecimal To Binary\n\n");
    printf("Enter a HexaDecimal Number -- ");
    gets(inp);
    strcpy(tmp,inp);
    strupr(inp);
    l = strlen(inp);
    for(i = l-1 ; i >= 0 ; i--, p++){
        t = (inp[i] >=65 && inp[i]<=70)?(inp[i]-55) :(inp[i]-48);
        out = out + (t* ((int)pow(16,p)));
    }
    temp = out;
    for(i = 0; temp > 0 ; temp = temp / 8){
        out1[i++] = (temp % 8)+48;
    }
    out1[i] = '\0';
    strrev(out1);
    printf("\n\nOctal of a HexaDecimal Number %s is -- %s\n\n",tmp, out1);
    printf("\nPress 1 for Continue.. Press 2 for Main Menu Press 3 for Exit\n");
    c = getch();
    if ( c == '1')
        hexaDecimalToOctal();
    else if ( c == '2')
        main();
    else if ( c == '3' ){
        printf("\n\nThanks for Using My App..\n\n");
        printf("Use Again......\n");
        exit(0);
    }
}

/*Hexadecimal to Octal Module End*/
