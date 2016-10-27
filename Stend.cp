#line 1 "D:/Stend1/Stend.c"
#line 25 "D:/Stend1/Stend.c"
const char cca_ver[] = "Version  2.03   ";
const char cca_pus[] = "                ";
const char cca_tip[] = "T∏æ:";
const char cca_rab[] = "Pe∂∏º:";
const char cca_std[] = "Stend proverki" ;
const char cca_prv[] = "Pultov ASCBv.1" ;
const char cca_vkl[] = "BKß ";
const char cca_vik[] = "BÆKß";
const char cca_izd[] = "BÆ†OP T•®A";
const char cca_imp[] = "imp";
const char cca_kmh[] = "∫º/¿";
const char cca_eeprom[] = "EEPROM";
const char cca_ga[] = "°a ";
const char cca_zgr[] = "§A°P©§KA";
const char cca_dnh[] = "‡AHHÆX";
const char cca_prb[] = "           ";
const char cca_prbb[] = "     ";
const char cca_zb[] = "Chislo zubiev";
const char cca_zh[] = "Shirina kolei";
const char cca_dl[] = "Okrushost kol";

const char cca_tip1[] = "A®®-3A-00";
const char cca_tip2[] = "A®®-3A-01";
const char cca_tip3[] = "A®®-3A-02";
const char cca_tip4[] = "A®®-3A-03";
const char cca_tip5[] = "A®®-3A-04";
const char cca_tip6[] = "A®®-3A-05";
const char cca_tip7[] = "C®©3-A‡  ";
const char cca_tip8[] = "C®©-3A-A6";
const char cca_tip9[] = "C®©-3A-Aß";
const char cca_tip10[] = "C®©-3A-‡K";
const char cca_tip11[] = "C®©3A-‡9K";
const char cca_tip12[] = "C®©3A-A9K";
const char cca_tip13[] = "A®®-4    ";
const char cca_tip14[] = "A®®M-4   ";
const char cca_tip15[] = "C®©-4M‡  ";
const char cca_tip16[] = "A®®M-6   ";
const char cca_tip17[] = "A®®6-A†  ";
const char cca_tip18[] = "C®©-6    ";
const char cca_tip19[] = "C®M-6-06 ";
const char cca_tip20[] = "C®M-6-07 ";
const char cca_tip21[] = "C®M-6-12 ";
const char cca_tip22[] = "C®M-6-16 ";
const char cca_tip23[] = "C-6T     ";
const char cca_tip24[] = "CK®12-K© ";
const char cca_tip25[] = "C®¨-9-00 ";
const char cca_tip26[] = "C®ß-6    ";
const char cca_tip27[] = "C®¨-9-01 ";
const char cca_tip28[] = "seylka28 ";
const char cca_tip29[] = "seylka29 ";
const char cca_tip30[] = "seylka30 ";
const char cca_tip31[] = "Ruchnoy  ";

 char txt_msg[16];
 char txt_msg1[16];
 char txt5[5];
 char txt3[3];
 char txt4[4];
 char txt2[2];
 unsigned long imp, frt=1, ch=0, cl=0, pl=0, zd=0, zb=0, Typ_izdelia=1;
 double float ob=0, dl=0.1E+0, zh=0, nl=0.1E+0, ga=0;
 char tip;
 unsigned short count_warn,warning;

 unsigned int adres_24C, adres_24C_rd, ch_im ;
 unsigned short page_save, old_alarm_0, old_alarm_1, old_alarm_2, old_alarm_3, ALARM__0, ALARM__1, ALARM__2;
 unsigned short push, old_0, old_1, old_2, old_3, old_4, old_5, old_6, old_7, old_8, jdem, jdem1, jdem2, jdem3;
 unsigned short flag_t, flag_ta, poz_kur, kurs;








 unsigned short temp_Per_CCP, Per_CCP1, Per_CCP2, Per_TMR1, flag, page, page_old, kp, B_visev_1, B_visev_2 ;
 unsigned int old_CCP1, old_CCP2, temp_CCP, adc_rd;
 unsigned long rez_CCP1, rez_CCP2;










 unsigned short flag_bit0,flag_bit1,flag_bit2;
#line 131 "D:/Stend1/Stend.c"
void preobraz (float pr){
 FloatToStr(pr,txt_msg);
 if (pr<1E-6){txt_msg[7]=32;txt_msg[6]=32;txt_msg[5]=32;txt_msg[4]=32;txt_msg[3]=32;txt_msg[2]=32;txt_msg[1]=32;txt_msg[0]=48;goto end_preob;}
 if (pr<1E-5){txt_msg[7]=txt_msg[0];txt_msg[6]=48;txt_msg[5]=48;txt_msg[4]=48;txt_msg[3]=48;txt_msg[2]=48;txt_msg[1]=46;txt_msg[0]=48; goto end_preob;}
 if (pr<1E-4){txt_msg[7]=txt_msg[2];txt_msg[6]=txt_msg[0];txt_msg[5]=48;txt_msg[4]=48;txt_msg[3]=48;txt_msg[2]=48;txt_msg[1]=46;txt_msg[0]=48; goto end_preob;}
 if (pr<1E-3){txt_msg[7]=txt_msg[3];txt_msg[6]=txt_msg[2];txt_msg[5]=txt_msg[0];txt_msg[4]=48;txt_msg[3]=48;txt_msg[2]=48;txt_msg[1]=46;txt_msg[0]=48; goto end_preob;}
 if (pr<1E-2){txt_msg[7]=txt_msg[4];txt_msg[6]=txt_msg[3];txt_msg[5]=txt_msg[2];txt_msg[4]=txt_msg[0];txt_msg[3]=48;txt_msg[2]=48;txt_msg[1]=46;txt_msg[0]=48; goto end_preob;}
 if (pr<1E-1){txt_msg[7]=txt_msg[5];txt_msg[6]=txt_msg[4];txt_msg[5]=txt_msg[3];txt_msg[4]=txt_msg[2];txt_msg[3]=txt_msg[0];txt_msg[2]=48;txt_msg[1]=46;txt_msg[0]=48; goto end_preob;}
 if (pr<1E+0){txt_msg[7]=txt_msg[6];txt_msg[6]=txt_msg[5];txt_msg[5]=txt_msg[4];txt_msg[4]=txt_msg[3];txt_msg[3]=txt_msg[2];txt_msg[2]=txt_msg[0];txt_msg[1]=46;txt_msg[0]=48; }
end_preob: ;}
void preobraz_1 (void) {
 if (txt_msg[1]==46){txt_msg[7]=txt_msg[3]; txt_msg[6]=txt_msg[2]; txt_msg[5]=46; txt_msg[4]=txt_msg[0]; txt_msg[3]=32; txt_msg[2]=32; txt_msg[1]=32; txt_msg[0]=32; goto end_preob_1;}
 if (txt_msg[2]==46){txt_msg[7]=txt_msg[4]; txt_msg[6]=txt_msg[3]; txt_msg[5]=46; txt_msg[4]=txt_msg[1]; txt_msg[3]=txt_msg[0]; txt_msg[2]=32; txt_msg[1]=32; txt_msg[0]=32; goto end_preob_1;}
 if (txt_msg[3]==46){txt_msg[7]=txt_msg[5]; txt_msg[6]=txt_msg[4]; txt_msg[5]=46; txt_msg[4]=txt_msg[2]; txt_msg[3]=txt_msg[1]; txt_msg[2]=txt_msg[0]; txt_msg[1]=32; txt_msg[0]=32; goto end_preob_1;}
 if (txt_msg[4]==46){txt_msg[7]=txt_msg[6]; txt_msg[6]=txt_msg[5]; txt_msg[5]=46; txt_msg[4]=txt_msg[3]; txt_msg[3]=txt_msg[2]; txt_msg[2]=txt_msg[1]; txt_msg[1]=txt_msg[0]; txt_msg[0]=32; goto end_preob_1;}
end_preob_1: ;}
void preobraz_2 (void) {
 if (txt_msg[0]==48){if(txt_msg[1]==32){
 txt_msg[7]=48; txt_msg[6]=46; txt_msg[5]=48; txt_msg[4]=32; txt_msg[3]=32; txt_msg[2]=32; txt_msg[1]=32; txt_msg[0]=32; goto end_preob_2;}}
 if (txt_msg[1]==46){txt_msg[7]=txt_msg[2]; txt_msg[6]=46; txt_msg[5]=txt_msg[0]; txt_msg[4]=32; txt_msg[3]=32; txt_msg[2]=32; txt_msg[1]=32; txt_msg[0]=32; goto end_preob_2;}
 if (txt_msg[2]==46){txt_msg[7]=txt_msg[3]; txt_msg[6]=46; txt_msg[5]=txt_msg[1]; txt_msg[4]=txt_msg[0]; txt_msg[3]=32; txt_msg[2]=32; txt_msg[1]=32; txt_msg[0]=32; goto end_preob_2;}
 if (txt_msg[3]==46){txt_msg[7]=txt_msg[4]; txt_msg[6]=46; txt_msg[5]=txt_msg[2]; txt_msg[4]=txt_msg[1]; txt_msg[3]=txt_msg[0]; txt_msg[2]=32; txt_msg[1]=32; txt_msg[0]=32; goto end_preob_2;}
 if (txt_msg[4]==46){txt_msg[7]=txt_msg[5]; txt_msg[6]=46; txt_msg[5]=txt_msg[3]; txt_msg[4]=txt_msg[2]; txt_msg[3]=txt_msg[1]; txt_msg[2]=txt_msg[0]; txt_msg[1]=32; txt_msg[0]=32; goto end_preob_2;}
 if (txt_msg[5]==46){txt_msg[7]=txt_msg[6]; txt_msg[6]=46; txt_msg[5]=txt_msg[4]; txt_msg[4]=txt_msg[3]; txt_msg[3]=txt_msg[2]; txt_msg[2]=txt_msg[1]; txt_msg[1]=txt_msg[0]; txt_msg[0]=32; goto end_preob_2;}
end_preob_2: ;}


void strcp_c(char *str1, const char *cstr2) {
 unsigned short i = 0;
 do {
 str1[i] = cstr2[i];
 } while (str1[i++]);}



short keypad (void){
 if (Button(&PORTB, 5, 1, 1)) {old_0 = 1;}
 if (old_0 && Button(&PORTB, 5, 1, 0)) {
 push=1;
 old_0 = 0; }
 if (Button(&PORTB, 3, 1, 1)) {old_1 = 1;}
 if (old_1 && Button(&PORTB, 3, 1, 0)) {
 push=2;
 old_1 = 0; }
 if (Button(&PORTB, 4, 1, 1)) {old_2 = 1;}
 if (old_2 && Button(&PORTB, 4, 1, 0)) {
 push=3;
 old_2 = 0; }
 if (Button(&PORTB, 1, 1, 1)) {old_3 = 1;}
 if (old_3 && Button(&PORTB, 1, 1, 0)) {
 push=4;
 old_3 = 0; }
 if (Button(&PORTB, 2, 1, 1)) {old_4 = 1;}
 if (old_4 && Button(&PORTB, 2, 1, 0)) {
 push=5;
 old_4 = 0; }
 if (Button(&PORTB, 0, 1, 1)) {old_5 = 1;}
 if (old_5 && Button(&PORTB, 0, 1, 0)) {
 push=6;
 old_5 = 0; }
 if (old_0 && old_1 && old_2 && old_3 && old_4 && old_5) {push=0;}
 return push;}
void stop (void){
stop:
if(PORTB.F0==0){INTCON=0b00000000; goto stop;}
else{INTCON=0b11000000;}
}

 void interrupt(){
 if(PIR1.TMR1IF) {
 PIR1.TMR1IF=0;
 Per_TMR1++;
 Per_CCP1++;
 Per_CCP2++;
 if(Per_CCP1>=3){rez_CCP1=100000;}
 if(Per_CCP2>=4){rez_CCP2=300000;}
 asm { CLRWDT }
 }
 if(PIR1.CCP1IF) {
 PIR1.CCP1IF=0;
 temp_Per_CCP=Per_CCP1;
 Per_CCP1=0;
 temp_CCP=CCPR1H; temp_CCP<<=8; temp_CCP+=CCPR1L;
 if(temp_Per_CCP==0){rez_CCP1=temp_CCP-old_CCP1;}
 if(temp_Per_CCP==1){rez_CCP1=0xFFFF-old_CCP1; rez_CCP1+=temp_CCP;}
 if(temp_Per_CCP==2){rez_CCP1=0xFFFF-old_CCP1; rez_CCP1+=0xFFFF; rez_CCP1+=temp_CCP; }
 old_CCP1=temp_CCP;
 }
 if(PIR2.CCP2IF) {
 PIR2.CCP2IF=0;
 temp_Per_CCP=Per_CCP2;
 Per_CCP2=0;
 temp_CCP=CCPR2H; temp_CCP<<=8; temp_CCP+=CCPR2L;
 if(temp_Per_CCP==0){rez_CCP2=temp_CCP-old_CCP2;}
 if(temp_Per_CCP==1){rez_CCP2=0xFFFF-old_CCP2; rez_CCP2+=temp_CCP;}
 if(temp_Per_CCP==2){rez_CCP2=0xFFFF-old_CCP2; rez_CCP2+=0xFFFF; rez_CCP2+=temp_CCP; }
 if(temp_Per_CCP==3){rez_CCP2=0xFFFF-old_CCP2; rez_CCP2+=0x1FFFE; rez_CCP2+=temp_CCP; }
 old_CCP2=temp_CCP;
 }
 }
 void main()
 {
 imp=0;
 LVDCON=0b00011101;
 Delay_ms(500);

 MEMCON.EBDIS = 1;
 ADCON1=0x0E;
 ADCON2=0xBA;
 TRISA=0xFF;
 TRISB=0xFF;
 TRISC=0b00011111;
 TRISE=0b00000000;
 TRISF=0b00000000; ;
 PORTE.F0=0;
 PORTE.F1=0;
 PORTE.F2=1;
 ALARM__0=0; ALARM__1=0; ALARM__2=0;
 INTCON=0b00000000;
 PIE1=0; PIE2=0;
 PIR1=0; PIR2=0;
 CCP1CON=0; CCP2CON=0;
 CCP3CON=23;
 CCP1CON=0b00000101;
 CCP2CON=0b00000101;
 T1CON=0b00110001;

 Lcd_Custom_Config(&PORTD,2,3,4,5,&PORTD,7,1,6);
 Lcd_Custom_Cmd(Lcd_CURSOR_OFF);
 I2C_Init(20000);
 RCON.F7=1; IPR1.F3=1;
 PIR2.LVDIF = 0;

 INTCON=0b11000000;
 PIE1=0b00000000;
 PIE2=0b00000000;
 WDTCON.F0=0;

 page=1; page_save=1;
start:


 switch(page){
 case 1:
 strcp_c(txt_msg, cca_std); LCD_Custom_Out(1,2,txt_msg);
 strcp_c(txt_msg, cca_prv); LCD_Custom_Out(2,2,txt_msg);
 Delay_ms(500);
 PORTE.F1=1;
 Delay_ms(200);
 PORTE.F1=0;
 Lcd_Custom_Cmd(Lcd_Clear);
 page=2;push=0;
 break;
 case 2:
 strcp_c(txt_msg, cca_izd); LCD_Custom_Out(1,4,txt_msg);
 strcp_c(txt_msg, cca_tip); LCD_Custom_Out(2,1,txt_msg);
 switch(Typ_izdelia){
 case 1: strcp_c(txt_msg, cca_tip1); LCD_Custom_Out(2,6,txt_msg); zb=12; imp=1820; cl=1820; dl=2,198; zh=3; ob=151,653;break;
 case 2: strcp_c(txt_msg, cca_tip2); LCD_Custom_Out(2,6,txt_msg); zb=12; imp=1809; cl=1809; dl=2,21056; zh=3; ob=150,791; break;
 case 3: strcp_c(txt_msg, cca_tip3); LCD_Custom_Out(2,6,txt_msg); zb=12; imp=1809; cl=1809; dl=2,21056; zh=3; ob=150,791;break;
 case 4: strcp_c(txt_msg, cca_tip4); LCD_Custom_Out(2,6,txt_msg); zb=12; imp=1809; cl=1809; dl=2,21056; zh=3; ob=150,791;break;
 case 5: strcp_c(txt_msg, cca_tip5); LCD_Custom_Out(2,6,txt_msg); zb=12; imp=1820; cl=1820; dl=2,198; zh=3; ob=151,653;break;
 case 6: strcp_c(txt_msg, cca_tip6); LCD_Custom_Out(2,6,txt_msg); zb=12; imp=1820; cl=1820; dl=2,198; zh=3; ob=151,653;break;
 case 7: strcp_c(txt_msg, cca_tip7); LCD_Custom_Out(2,6,txt_msg); zb=12; imp=1820; cl=1820; dl=2,198; zh=3; ob=151,653;break;
 case 8: strcp_c(txt_msg, cca_tip8); LCD_Custom_Out(2,6,txt_msg); zb=12; imp=1820; cl=1820; dl=2,198; zh=3; ob=151,653;break;
 case 9: strcp_c(txt_msg, cca_tip9); LCD_Custom_Out(2,6,txt_msg); zb=12; imp=1820; cl=1820; dl=2,198; zh=3; ob=151,653;break;
 case 10: strcp_c(txt_msg, cca_tip10); LCD_Custom_Out(2,6,txt_msg); zb=12; imp=1820; cl=1820; dl=2,198; zh=3; ob=151,653;break;
 case 11: strcp_c(txt_msg, cca_tip11); LCD_Custom_Out(2,6,txt_msg); zb=12; imp=1809; cl=1809; dl=2,21056; zh=3; ob=150,791;break;
 case 12: strcp_c(txt_msg, cca_tip12); LCD_Custom_Out(2,6,txt_msg); zb=12; imp=1809; cl=1809; dl=2,21056; zh=3; ob=150,791; break;
 case 13: strcp_c(txt_msg, cca_tip13); LCD_Custom_Out(2,6,txt_msg); zb=12; imp=1357; cl=1357; dl=2,21056; zh=4; ob=113,1;break;
 case 14: strcp_c(txt_msg, cca_tip14); LCD_Custom_Out(2,6,txt_msg); zb=13; imp=1479; cl=1479; dl=2,198; zh=4; ob=113,74;break;
 case 15: strcp_c(txt_msg, cca_tip15); LCD_Custom_Out(2,6,txt_msg); zb=12; imp=1357; cl=1357; dl=2,21056; zh=4; ob=113,1;break;
 case 16: strcp_c(txt_msg, cca_tip16); LCD_Custom_Out(2,6,txt_msg); zb=15; imp=1137; cl=1137; dl=2,198; zh=6; ob=75,8265;break;
 case 17: strcp_c(txt_msg, cca_tip17); LCD_Custom_Out(2,6,txt_msg); zb=12; imp=905; cl=905; dl=2,21056; zh=6; ob=75,3957;break;
 case 18: strcp_c(txt_msg, cca_tip18); LCD_Custom_Out(2,6,txt_msg); zb=12; imp=905; cl=905; dl=2,198; zh=6; ob=75,3957;break;
 case 19: strcp_c(txt_msg, cca_tip19); LCD_Custom_Out(2,6,txt_msg); zb=15; imp=1137; cl=1137; dl=2,21056; zh=6; ob=75,8265;break;
 case 20: strcp_c(txt_msg, cca_tip20); LCD_Custom_Out(2,6,txt_msg); zb=15; imp=1137; cl=1137; dl=2,21056; zh=6; ob=75,8265;break;
 case 21: strcp_c(txt_msg, cca_tip21); LCD_Custom_Out(2,6,txt_msg); zb=15; imp=1137; cl=1137; dl=2,198; zh=6; ob=75,8265;break;
 case 22: strcp_c(txt_msg, cca_tip22); LCD_Custom_Out(2,6,txt_msg); zb=15; imp=1137; cl=1137; dl=2,198; zh=6; ob=75,8265;break;
 case 23: strcp_c(txt_msg, cca_tip23); LCD_Custom_Out(2,6,txt_msg); zb=8; imp=521; cl=521; dl=2,5591; zh=6; ob=65,1271;break;
 case 24: strcp_c(txt_msg, cca_tip24); LCD_Custom_Out(2,6,txt_msg); zb=13; imp=694; cl=694; dl=2,2294; zh=8,4; ob=53,3989;break;
 case 25: strcp_c(txt_msg, cca_tip25); LCD_Custom_Out(2,6,txt_msg); zb=13; imp=657; cl=657; dl=2,198; zh=9; ob=50,551;break;
 case 26: strcp_c(txt_msg, cca_tip26); LCD_Custom_Out(2,6,txt_msg); zb=13; imp=1624; cl=1624; dl=1,3345; zh=6; ob=124,891;break;
 case 27: strcp_c(txt_msg, cca_tip27); LCD_Custom_Out(2,6,txt_msg); zb=13; imp=657; cl=657; dl=2,198; zh=9; ob=50,551;break;
 case 28: strcp_c(txt_msg, cca_tip28); LCD_Custom_Out(2,6,txt_msg); zb=13; imp=657; cl=657; dl=2,198; zh=9; ob=50,551;break;
 case 29: strcp_c(txt_msg, cca_tip29); LCD_Custom_Out(2,6,txt_msg); zb=15; imp=1137; cl=1137; dl=2,198; zh=6; ob=75,8265;break;
 case 30: strcp_c(txt_msg, cca_tip30); LCD_Custom_Out(2,6,txt_msg); zb=13; imp=1479; cl=1479; dl=2,198; zh=4; ob=113,74;break;
 case 31: strcp_c(txt_msg, cca_tip31); LCD_Custom_Out(2,6,txt_msg); break;
 }
 keypad();
 if(kp==3){Typ_izdelia +=1;push=0;page=2;} if(Typ_izdelia>31){Typ_izdelia=1;}
 if(kp==4){Typ_izdelia -=1;push=0;page=2;} if(Typ_izdelia<1){Typ_izdelia=31;}
 if(kp==5){ if(Typ_izdelia==31){ Lcd_Custom_Cmd(Lcd_Clear);
 strcp_c(txt_msg, cca_zgr); LCD_Custom_Out(1,5,txt_msg);
 strcp_c(txt_msg, cca_dnh); LCD_Custom_Out(2,6,txt_msg);
 Delay_ms(1000);
 Lcd_Custom_Cmd(Lcd_Clear);page=5;push=0;break;}
 Lcd_Custom_Cmd(Lcd_Clear);
 strcp_c(txt_msg, cca_zgr); LCD_Custom_Out(1,5,txt_msg);
 strcp_c(txt_msg, cca_dnh); LCD_Custom_Out(2,6,txt_msg);
 Delay_ms(1000);
 Lcd_Custom_Cmd(Lcd_Clear);
 page=3;
 push=0;}
 break;
 case 3:

 strcp_c(txt_msg, cca_imp); LCD_Custom_Out(1,14,txt_msg);
 strcp_c(txt_msg, cca_Ga); LCD_Custom_Out(2,14,txt_msg);
 if (kp==3){nl+=0.1E+0;push=0;imp=imp+cl;frt=frt+1;
 strcp_c(txt_msg, cca_prb); LCD_Custom_Out(1,1,txt_msg);
 strcp_c(txt_msg, cca_prb); LCD_Custom_Out(2,1,txt_msg);}
 if (kp==4){nl-=0.1E+0;push=0;imp=imp-cl;frt=frt-1;
 strcp_c(txt_msg, cca_prb); LCD_Custom_Out(1,1,txt_msg);
 strcp_c(txt_msg, cca_prb); LCD_Custom_Out(2,1,txt_msg);}
 if(nl<0.1E+0){nl=0;imp=0;frt=frt;}
 LongToStr(imp,txt_msg); LCD_Custom_Out(1,1,txt_msg);
 *txt_msg='\0';
 sprintf(txt_msg, "%3g", nl); LCD_Custom_Out(2,1,txt_msg);
 strcp_c(txt_msg, cca_prbb);LCD_Custom_Out(2,5,txt_msg);
 *txt_msg='\0';
 if (kp==5){nl==nl;imp==imp;page=4;push=0;Lcd_Custom_Cmd(Lcd_Clear);}
 if (kp==1){Lcd_Custom_Cmd(Lcd_Clear);page=2;push=0;}
 if (kp==2){Lcd_Custom_Cmd(Lcd_Clear);page=2;push=0;}
 break;
 case 4:
 strcp_c(txt_msg, cca_Ga); LCD_Custom_Out(1,14,txt_msg);
 strcp_c(txt_msg, cca_imp); LCD_Custom_Out(2,14,txt_msg);

 if(kp==5){Lcd_Custom_Cmd(Lcd_Clear);page=2;push=0;}
 while (imp>=ch)
 {
 kp=keypad();
 if (kp==5){kp=0;Delay_ms(20);while(kp!=5){kp=keypad();Delay_ms(10);}}
 if (kp==6){break;}
 ch=ch++;
 PORTF.F0=0;
 Delay_ms(9);
 PORTF.F0=1;
 Delay_ms(1);
 ga=((ch/zb)*dl*zh)/10000+0.01*frt;
 sprintf(txt_msg, "%3g", ga);
 LCD_Custom_Out(1,1,txt_msg);
 *txt_msg='\0';
 sprintf(txt_msg, "%5d", ch);
 LCD_Custom_Out(2,1,txt_msg);
 *txt_msg='\0';
 strcp_c(txt_msg, cca_prbb); LCD_Custom_Out(1,8,txt_msg);
 }
 stop1:
 while (zd<=2)
 {
 zd=zd++;
 PORTE.F1=1;
 Delay_ms(200);
 PORTE.F1=0;
 Delay_ms(200);}
 imp=0, ch=1, zb=0, Typ_izdelia=1, nl=0.1;
 PORTF.F0=1;
 PORTE.F1=0;
 break;
 metka1:
 case 5:
 strcp_c(txt_msg, cca_imp); LCD_Custom_Out(1,1,txt_msg);
 keypad();
 if(kp==3){imp +=10;push=0;}
 if(kp==4){imp -=10;push=0;}
 sprintf(txt_msg, "%7u", imp); LCD_Custom_Out(2,1,txt_msg);
 *txt_msg='\0';
 if(kp==5){imp==imp;cl=imp;page=6;push=0;Lcd_Custom_Cmd(Lcd_Clear);}
 break;
 case 6:
 strcp_c(txt_msg, cca_zb); LCD_Custom_Out(1,1,txt_msg);
 keypad();
 if(kp==3){zb +=1;push=0;}
 if(kp==4){zb -=1;push=0;}
 sprintf(txt_msg, "%7u", zb); LCD_Custom_Out(2,1,txt_msg);
 *txt_msg='\0';
 if(kp==5){zb==zb;page=7;push=0;Lcd_Custom_Cmd(Lcd_Clear);}
 break;
 case 7:
 strcp_c(txt_msg, cca_zh); LCD_Custom_Out(1,1,txt_msg);
 keypad();
 if(kp==3){zh +=0.5E+0;push=0;}
 if(kp==4){zh -=0.5E+0;push=0;}
 sprintf(txt_msg, "%3g", zh); LCD_Custom_Out(2,1,txt_msg);
 *txt_msg='\0';
 if(kp==5){zh==zh;page=8;push=0;Lcd_Custom_Cmd(Lcd_Clear);}
 break;
 case 8:
 strcp_c(txt_msg, cca_dl); LCD_Custom_Out(1,1,txt_msg);
 keypad();
 if(kp==3){dl +=0.1E+0;push=0;}
 if(kp==4){dl -=0.1E+0;push=0;}
 sprintf(txt_msg, "%3g", dl);
 LCD_Custom_Out(2,1,txt_msg);
 if(kp==5){dl==dl;page=4;push=0;Lcd_Custom_Cmd(Lcd_Clear);}
 break;
}
kp=keypad();

goto start;
}
