#line 1 "D:/2017/ÒÚÂÌ‰\—ÚÂÌ‰ 1/Stend.c"
#line 11 "D:/2017/ÒÚÂÌ‰\—ÚÂÌ‰ 1/Stend.c"
const char cca_ver[] = "Version  2.03   ";
const char cca_pus[] = "                ";
const char cca_tip[] = "T∏æ:";
const char cca_rab[] = "Pe∂∏º:";
const char cca_std[] = "CøeΩ„ æpo≥ep∫∏ ";
const char cca_prv[] = "®yªƒøo≥ ACKBv.1";
const char cca_vkl[] = "BKß ";
const char cca_vik[] = "BÆKß";
const char cca_izd[] = "BÆ†OP T•®A";
const char cca_imp[] = "•ºæ";
const char cca_kmh[] = "∫º/¿";
const char cca_eeprom[] = "EEPROM";
const char cca_ga[] = "°a ";
const char cca_zgr[] = "§A°P©§KA";
const char cca_dnh[] = "‡AHHÆX";
const char cca_prb[] = "         ";
const char cca_prbb[] = "     ";
const char cca_zb[] = "Koª-≥o ∑y≤.";
const char cca_zh[] = "¨∏p. ∑ax≥aøa(M)";
const char cca_dl[] = "O∫p. ∫oªec(M)";
const char cca_imp1[] = "¬‚Â‰ËÚÂ ËÏÔÛÎ¸Ò˚:";
const char cca_skor[] = "Skorost";
const char cca_Gc[] = "km/ch";
const char cca_pustota[] = "A®®-3A-00";
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
const char cca_tip31[] = "C3TM-4H";
const char cca_e70[] = "?ß± §A?P.HA?M?";

 char txt_msg[16];
 char txt_msg1[16];
 char txt5[5];
 char txt3[3];
 char txt4[4];
 char txt2[2];
 char txt1[1];
 unsigned long Typ_izdelia=0;
 int i, nomer_seyalki=0, kp;
 int imp_vent=0;
 unsigned float preddelitel, preddelitel_ob;
 unsigned int preddelitel1, preddelitel_ob1;
 double float impuls=0, impuls2=0, shirina=0,period,skorost=0,period2=0,okruzhnost=0,chastota=0,chastota_ob=0, zubia=0, Ob_vent=0, gektar=0;
 double float ga_avto=0.1E+0;
 char tip;
 int sravnenie=0;
 unsigned short count_warn,warning;
 unsigned int adres_24C, adres_24C_rd, ch_im ;
 unsigned short page_save;
 unsigned short push, old_0, old_1, old_2, old_3, old_4, old_5, old_6, old_7, old_8, jdem, jdem1, jdem2, jdem3;
 unsigned short flag_t, flag_ta, poz_kur, kurs;
 unsigned short date, month, day, hours, minutes, seconds, year, prob, n_date, n_month, n_year, n_hours, n_minutes;








 unsigned short temp_Per_CCP, Per_CCP1, Per_CCP2, Per_TMR1, flag, page, page_old, B_visev_1, B_visev_2 ;
 unsigned int old_CCP1, old_CCP2, temp_CCP, adc_rd;
 unsigned long rez_CCP1, rez_CCP2;
#line 121 "D:/2017/ÒÚÂÌ‰\—ÚÂÌ‰ 1/Stend.c"
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
 typedef struct seialka {
 char tip[10];
 float impuls;
 float zubia;
 float shirina;
 float okruzhnost;
 float skorost;
 float Ob_vent;
 int imp_vent;};
struct seialka arr[31]={{"A®®-3A-00",1820.0,12.0,3.0,2.198, 30.0,3500.0, 2},
 {"A®®-3A-01",1809.0,12.0,3.0,2.21056,30.0,3500.0, 2},
 {"A®®-3A-02",1809.0,12.0,3.0,2.21056,30.0,3500.0, 2},
 {"A®®-3A-03",1809.0,12.0,3.0,2.21056,30.0,3500.0, 2},
 {"A®®-3A-04",1820.0,12.0,3.0,2.198, 30.0,3500.0, 2},
 {"A®®-3A-05",1820.0,12.0,3.0,2.198, 30.0,3500.0, 2},
 {"C®©3-A‡  ",1820.0,12.0,3.0,2.198, 30.0,3500.0, 2},
 {"C®©-3A-A6",1820.0,12.0,3.0,2.198, 30.0,3500.0, 2},
 {"C®©-3A-Aß",1820.0,12.0,3.0,2.198, 30.0,3500.0, 2},
 {"C®©-3A-‡K",1809.0,12.0,3.0,2.21056,30.0,3500.0, 2},
 {"C®©3A-‡9K",1809.0,12.0,3.0,2.21056,30.0,3500.0, 2},
 {"C®©3A-A9K",1809.0,12.0,3.0,2.21056,30.0,3500.0, 2},
 {"A®®-4    ",1357.0,12.0,4.0,2.21056,30.0,3500.0, 2},
 {"A®®M-4   ",1479.0,13.0,4.0,2.198, 30.0,3500.0, 2},
 {"C®©-4M‡  ",1357.0,12.0,4.0,2.21056,30.0,3500.0, 2},
 {"A®®M-6   ",1137.0,15.0,6.0,2.198, 30.0,3500.0, 2},
 {"A®®6-A†  ",905.0 ,12.0,6.0,2.21056,30.0,3500.0, 2},
 {"C®©-6    ",905.0 ,12.0,6.0,2.21056,30.0,3500.0, 2},
 {"C®M-6-06 ",1137.0,15.0,6.0,2.198, 30.0,3500.0, 2},
 {"C®M-6-07 ",1137.0,15.0,6.0,2.198, 30.0,3500.0, 2},
 {"C®M-6-12 ",1137.0,15.0,6.0,2.198, 30.0,3500.0, 2},
 {"C®M-6-16 ",1137.0,15.0,6.0,2.198, 30.0,3500.0, 2},
 {"C-6T     ",521.0 ,8.0 ,8.4,2.5591, 30.0,3500.0, 2},
 {"CK®12-K© ",694.0 ,13.0,9.0,2.2294, 30.0,3500.0, 2},
 {"C®¨-9-00 ",657.0 ,13.0,6.0,2.198, 30.0,3500.0, 2},
 {"C®ß-6    ",1624.0,13.0,9.0,1.3345, 30.0,3500.0, 2},
 {"C®¨-9-01 ",657.0 ,13.0,9.0,2.198, 30.0,3500.0, 6},
 {"seylka28 ",657.0 ,13.0,6.0,2.198, 30.0,3500.0, 2},
 {"seylka29 ",1137.0,15.0,3.0,2.198, 30.0,3500.0, 2},
 {"seylka30 ",1479.0,13.0,4.0,2.198, 30.0,3500.0, 2},
 {"C3TM-4H  ",1750.0,14.0,4.0,2.000, 30.0,3500.0, 2}
 };

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
 if (Button(&PORTB, 0, 1, 1)) {old_5 =
 1;}
 if (old_5 && Button(&PORTB, 0, 1, 0)) {
 push=6;
 old_5 = 0; }
 if (old_0 && old_1 && old_2 && old_3 && old_4 && old_5) {push=0;}
 return push;}
void stop (void){
stop:
if(PORTB.F0==0){INTCON=0b00000000; goto stop;}
else{INTCON=0b11100000;}
}
void DS1307_GetTime(void){
 I2C_Start();
 I2C_Wr(0xD0);
 I2C_Wr(0);
 I2C_Repeated_Start();
 I2C_Wr(0xD1);
 seconds = Bcd2Dec(I2C_Rd(1));
 minutes = Bcd2Dec(I2C_Rd(1));
 hours = Bcd2Dec(I2C_Rd(1));
 day = Bcd2Dec(I2C_Rd(1));
 date = Bcd2Dec(I2C_Rd(1));
 month = Bcd2Dec(I2C_Rd(1));
 year = Bcd2Dec(I2C_Rd(0));
 I2C_stop();
}
void ds1307_init(void){
 int seconds=0;
 seconds = (seconds & 0x7F);
 Delay_ms(50);
 I2C_Start();
 I2C_Wr(0xD0);
 I2C_Wr(0x00);
 I2C_Wr(Dec2Bcd(seconds));
 I2C_Stop();
}
void ds1307_set_date_time(void){
 seconds =(seconds & 0x7F);
 hours =(hours & 0x3F);
 I2C_Start();
 I2C_Wr(0xD0);
 I2C_Wr(0x00);
 I2C_Wr(Dec2Bcd(seconds));
 I2C_Wr(Dec2Bcd(n_minutes));
 I2C_Wr(Dec2Bcd(n_hours));
 I2C_Wr(Dec2Bcd(day));
 I2C_Wr(Dec2Bcd(n_date));
 I2C_Wr(Dec2Bcd(n_month));
 I2C_Wr(Dec2Bcd(n_year));
 I2C_Wr(0x80);
 I2C_Stop();
}
void DS1307_GetTime_hm(void){
 I2C_Start();
 I2C_Wr(0xD0);
 I2C_Wr(0x01);
 I2C_Repeated_Start();
 I2C_Wr(0xD1);
 minutes = Bcd2Dec(I2C_Rd(1));
 hours = Bcd2Dec(I2C_Rd(0));
 I2C_stop();
}

 void interrupt(){
 if(INTCON.TMR0IF) {
 sravnenie++;
 TMR0H = (preddelitel1>>8)& 0xFF;
 TMR0L = preddelitel1 & 0xFF;
 if(impuls2>=sravnenie){LATF.F0=~LATF.F0;}
 else INTCON=0b00000000;
 INTCON.TMR0IF=0;
 asm { CLRWDT }}
 if(PIR1.TMR1IF) {
 TMR1H = (preddelitel_ob1>>8)& 0xFF;
 TMR1L = preddelitel_ob1 & 0xFF;;
 LATF.F1=~LATF.F1;
 PIR1.TMR1IF=0;
 }
 }
 void main()
 {
 LVDCON=0b00011101;
 Delay_ms(500);
 MEMCON.EBDIS = 1;
 ADCON1=0x00001111;
 ADCON2=0xBA;
 TRISA=0xFF;
 TRISB=0xFF;
 TRISC=0b00011010;
 TRISE=0b0;
 TRISF=0b11111100;
 PORTE.F0=0;
 PORTE.F1=0;
 PORTE.F2=0;

 PIR2=0;
 CCP1CON=0; CCP2CON=0;
 CCP3CON=23;
 CCP1CON=0b00000101;
 CCP2CON=0b00000101;
 T0CON=0b10000100;
 T1CON=0b10101101;
 T2CON=0b01100010;
 T3CON=0b01100010;
 T4CON=0b01100010;
 Lcd_Custom_Config(&PORTD,2,3,4,5,&PORTD,7,1,6);
 Lcd_Custom_Cmd(Lcd_CURSOR_OFF);
 I2C_Init(20000);
 RCON.F7=1; IPR1.F3=1;
 PIR2.LVDIF = 0;

 PIE1=0b00000000;
 PIE2=0b00000000;
 PIR1=0b00000000;
 WDTCON.F0=0;
 INTCON=0b11000000;

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
 DS1307_GetTime();
 strcp_c(txt_msg, "Vremia:" ); LCD_Custom_Out(1,1,txt_msg);
 strcp_c(txt_msg, "Data:" ); LCD_Custom_Out(2,1,txt_msg);
 ShortToStr(hours,txt5);
 LCD_Custom_Chr(1,11,txt5[2]);
 Lcd_Custom_Chr(1,12,txt5[3]);
 Lcd_Custom_Chr(1, 13, ':');
 ShortToStr(minutes,txt5); if(txt5[2]==32){txt5[2]=48;}
 Lcd_Custom_Chr(1,14,txt5[2]);
 Lcd_Custom_Chr(1,15,txt5[3]);
 ShortToStr(date,txt5); if(txt5[2]==32){txt5[2]=48;}
 Lcd_Custom_Chr(2,6,txt5[2]);
 Lcd_Custom_Chr(2,7,txt5[3]);
 Lcd_Custom_Chr(2, 8, '.');
 ShortToStr(month,txt5); if(txt5[2]==32){txt5[2]=48;}
 Lcd_Custom_Chr(2,9,txt5[2]);
 Lcd_Custom_Chr(2,10,txt5[3]);
 Lcd_Custom_Chr(2, 11, '.');
 Lcd_Custom_Chr(2, 12, '2');
 Lcd_Custom_Chr(2, 13, '0');
 ShortToStr(year,txt5); if(txt5[2]==32){txt5[2]=48;}
 Lcd_Custom_Chr(2,14,txt5[2]);
 Lcd_Custom_Chr(2,15,txt5[3]);
 if(kp==1){page=3;push=0;Lcd_Custom_Cmd(Lcd_Clear);}
 if(kp==2){page=3;push=0;Lcd_Custom_Cmd(Lcd_Clear);}
 if(kp==5){page=23;push=0;Lcd_Custom_Cmd(Lcd_Clear);}
 break;
 case 3:
 strcp_c(txt_msg, "Pe∂∏º:" ); LCD_Custom_Out(1,1,txt_msg);
 strcp_c(txt_msg, "<-A≥øo.Py¿Ωoπ->" ); LCD_Custom_Out(2,1,txt_msg);
 if(kp==1){page=2;push=0;Lcd_Custom_Cmd(Lcd_Clear);}
 if(kp==2){page=2;push=0;Lcd_Custom_Cmd(Lcd_Clear);}
 if(kp==3){page=14;push=0;Lcd_Custom_Cmd(Lcd_Clear);}
 if(kp==4){page=4;push=0;Lcd_Custom_Cmd(Lcd_Clear);}
 break;
 case 4:
 strcp_c(txt_msg, "BÆ†OP T•®A" ); LCD_Custom_Out(1,3,txt_msg);
 LCD_Custom_Out(2,1,arr[nomer_seyalki]. tip);
 if(kp==1){nomer_seyalki++;push=0;if(nomer_seyalki>30){nomer_seyalki=0;}}
 if(kp==2){nomer_seyalki--;push=0;if(nomer_seyalki<0){nomer_seyalki=30;}}
 if(kp==3){page=5;push=0;Lcd_Custom_Cmd(Lcd_Clear);}
 if(kp==4){page=13;push=0;Lcd_Custom_Cmd(Lcd_Clear);}
 if(kp==6){page=3;push=0;Lcd_Custom_Cmd(Lcd_Clear);}
 if(kp==5){
 impuls=arr[nomer_seyalki].impuls;
 impuls2=impuls*2+80;
 zubia=arr[nomer_seyalki].zubia;
 shirina=arr[nomer_seyalki].shirina;
 okruzhnost=arr[nomer_seyalki].okruzhnost;
 skorost=arr[nomer_seyalki].skorost;
 Ob_vent=arr[nomer_seyalki].Ob_vent;
 imp_vent=arr[nomer_seyalki].imp_vent;
 chastota=(skorost*1000/3600/okruzhnost*zubia);
 preddelitel=65539-((1/chastota)*2500000)/32;
 preddelitel1=(unsigned int) preddelitel;
 chastota_ob=(Ob_vent/60)*imp_vent;
 preddelitel_ob=65550-((1/chastota_ob)*2500000)/4;
 preddelitel_ob1=(unsigned int)preddelitel_ob;
 INTCON=0b11100000;
 PIE1=0b00000001;
 Lcd_Custom_Cmd(Lcd_Clear);}
 break;
 case 5:
 strcp_c(txt_msg, "®apaº. ce«ª∫∏" ); LCD_Custom_Out(1,1,txt_msg);
 if(kp==3){page=12;push=0;Lcd_Custom_Cmd(Lcd_Clear);}
 if(kp==4){page=4; push=0;Lcd_Custom_Cmd(Lcd_Clear);}
 if(kp==5){page=6; push=0;Lcd_Custom_Cmd(Lcd_Clear);}
 if(kp==6){page=3; push=0;Lcd_Custom_Cmd(Lcd_Clear);}
 break;
 case 6:
 strcp_c(txt_msg, "Koª-≥o ∏ºæ."); LCD_Custom_Out(1,1,txt_msg);
 sprintf(txt_msg, "%5.0f", impuls);LCD_Custom_Out(2,1,txt_msg);
 if(kp==3){page=7;push=0;Lcd_Custom_Cmd(Lcd_Clear);}
 if(kp==4){page=11;push=0;Lcd_Custom_Cmd(Lcd_Clear);}
 if(kp==6){page=5; push=0;Lcd_Custom_Cmd(Lcd_Clear);}
 break;
 case 7:
 strcp_c(txt_msg, "Koª-≥o ∑y≤ƒe≥"); LCD_Custom_Out(1,1,txt_msg);
 sprintf(txt_msg, "%2.0f", zubia); LCD_Custom_Out(2,1,txt_msg);
 if(kp==3){page=8;push=0;Lcd_Custom_Cmd(Lcd_Clear);}
 if(kp==4){page=6;push=0;Lcd_Custom_Cmd(Lcd_Clear);}
 if(kp==6){page=5;push=0;Lcd_Custom_Cmd(Lcd_Clear);}
 break;
 case 8:
 strcp_c(txt_msg, "¨∏p∏Ωa ∑ax≥aøa"); LCD_Custom_Out(1,1,txt_msg);
 sprintf(txt_msg, "%1.1f", shirina);LCD_Custom_Out(2,1,txt_msg);
 strcp_c(txt_msg, "M" ); LCD_Custom_Out(2,5,txt_msg);
 if(kp==3){page=9;push=0;Lcd_Custom_Cmd(Lcd_Clear);}
 if(kp==4){page=7;push=0;Lcd_Custom_Cmd(Lcd_Clear);}
 if(kp==6){page=5;push=0;Lcd_Custom_Cmd(Lcd_Clear);}
 break;
 case 9:
 strcp_c(txt_msg, "O∫py∂Ω. ∫oªeca" ); LCD_Custom_Out(1,1,txt_msg);
 sprintf(txt_msg, "%1.2f", okruzhnost);LCD_Custom_Out(2,1,txt_msg);
 strcp_c(txt_msg, "M" ); LCD_Custom_Out(2,5,txt_msg);
 if(kp==3){page=10;push=0;Lcd_Custom_Cmd(Lcd_Clear);}
 if(kp==4){page=8;push=0;Lcd_Custom_Cmd(Lcd_Clear);}
 if(kp==6){page=5;push=0;Lcd_Custom_Cmd(Lcd_Clear);}
 break;
 case 10:
 strcp_c(txt_msg, "C∫opocøƒ" ); LCD_Custom_Out(1,1,txt_msg);
 sprintf(txt_msg, "%2.0f", skorost);LCD_Custom_Out(2,1,txt_msg);
 strcp_c(txt_msg, "Kº/¿" ); LCD_Custom_Out(2,5,txt_msg);
 if(kp==3){page=11;push=0;Lcd_Custom_Cmd(Lcd_Clear);}
 if(kp==4){page=9;push=0;Lcd_Custom_Cmd(Lcd_Clear);}
 if(kp==6){page=5; push=0;Lcd_Custom_Cmd(Lcd_Clear);}
 break;
 case 11:
 strcp_c(txt_msg, "O≤op. ≥eΩø∏ª.1" ); LCD_Custom_Out(1,1,txt_msg);
 sprintf(txt_msg, "%5.0f", Ob_vent);LCD_Custom_Out(2,1,txt_msg);
 strcp_c(txt_msg, "O≤/º∏Ω" ); LCD_Custom_Out(2,10,txt_msg);
 if(kp==3){page=6;push=0;Lcd_Custom_Cmd(Lcd_Clear);}
 if(kp==4){page=10;push=0;Lcd_Custom_Cmd(Lcd_Clear);}
 if(kp==6){page=5; push=0;Lcd_Custom_Cmd(Lcd_Clear);}
 break;
 case 12:
 strcp_c(txt_msg, "0.1" ); LCD_Custom_Out(1,1,txt_msg);
 strcp_c(txt_msg, "°a" ); LCD_Custom_Out(1,5,txt_msg);
 sprintf(txt_msg, "%2.0f", skorost);LCD_Custom_Out(1,8,txt_msg);;
 strcp_c(txt_msg, "Kº/¿" ); LCD_Custom_Out(1,11,txt_msg);
 sprintf(txt_msg, "%5.0f", impuls);LCD_Custom_Out(2,7,txt_msg);;
 strcp_c(txt_msg, "•ºæ" ); LCD_Custom_Out(2,12,txt_msg);
 if(kp==3){page=13;push=0;Lcd_Custom_Cmd(Lcd_Clear);}
 if(kp==4){page=5; push=0;Lcd_Custom_Cmd(Lcd_Clear);}
 if(kp==6){page=3; push=0;Lcd_Custom_Cmd(Lcd_Clear);}
 break;
 case 13:
 strcp_c(txt_msg, "O≤op. ≥eΩø∏ª.1" );LCD_Custom_Out(1,1,txt_msg);
 sprintf(txt_msg, "%5.0f", Ob_vent);LCD_Custom_Out(2,1,txt_msg);
 strcp_c(txt_msg, "O≤/º∏Ω" ); LCD_Custom_Out(2,10,txt_msg);
 if(kp==3){page=4; push=0;Lcd_Custom_Cmd(Lcd_Clear);}
 if(kp==4){page=12;push=0;Lcd_Custom_Cmd(Lcd_Clear);}
 if(kp==6){page=3; push=0;Lcd_Custom_Cmd(Lcd_Clear);}
 break;



 case 14:
 sprintf(txt_msg, "%2.1f", gektar);LCD_Custom_Out(1,1,txt_msg);
 strcp_c(txt_msg, "°a"); LCD_Custom_Out(1,5,txt_msg);
 sprintf(txt_msg, "%2.1f", skorost);LCD_Custom_Out(1,7,txt_msg);
 strcp_c(txt_msg, "Kº/¿"); LCD_Custom_Out(1,11,txt_msg);
 sprintf(txt_msg, "%5.0f", impuls);LCD_Custom_Out(2,1,txt_msg);;
 strcp_c(txt_msg, "•ºæ."); LCD_Custom_Out(2,6,txt_msg);
 if(kp==2){page=15;push=0;Lcd_Custom_Cmd(Lcd_Clear);}
 if(kp==3){page=22;push=0;Lcd_Custom_Cmd(Lcd_Clear);}
 if(kp==4){page=22;push=0;Lcd_Custom_Cmd(Lcd_Clear);}
 if(kp==6){page=3;push=0;Lcd_Custom_Cmd(Lcd_Clear);}
 if(kp==5){
 impuls=(gektar*10000*zubia)/(shirina*okruzhnost);
 impuls2=2*impuls+80;
 chastota=(skorost*1000/3600/okruzhnost*zubia);
 preddelitel=65539-((1/chastota)*2500000)/32;
 preddelitel1=(unsigned int) preddelitel;
 chastota_ob=(Ob_vent/60)*imp_vent;
 preddelitel_ob=65550-((1/chastota_ob)*2500000)/4;
 preddelitel_ob1=(unsigned int)preddelitel_ob;
 INTCON=0b11100000;
 PIE1=0b00000001;
 }
 break;
 case 15:
 strcp_c(txt_msg, "¨∏p∏Ωa ∑ax≥aøa" ); LCD_Custom_Out(1,1,txt_msg);
 sprintf(txt_msg, "%2.1f", shirina);LCD_Custom_Out(2,1,txt_msg);
 strcp_c(txt_msg, "M" ); LCD_Custom_Out(2,5,txt_msg);
 if(kp==1){shirina=shirina+0.2;push=0;if(shirina>20.0){shirina=0;}}
 if(kp==2){shirina=shirina-0.2;push=0;if(shirina<0){shirina=20.0;}}
 if(kp==3){page=16;push=0;Lcd_Custom_Cmd(Lcd_Clear);}
 if(kp==4){page=21;push=0;Lcd_Custom_Cmd(Lcd_Clear);}
 if(kp==6){page=14;push=0;Lcd_Custom_Cmd(Lcd_Clear);}
 if(kp==5){shirina==shirina;push=0;}
 break;
 case 16:
 strcp_c(txt_msg, "Koª-≥o ∑y≤ƒe≥" ); LCD_Custom_Out(1,1,txt_msg);
 sprintf(txt_msg, "%2.0f", zubia); LCD_Custom_Out(2,1,txt_msg);
 if(kp==1){zubia=zubia+1.0;push=0;if(zubia>20.0){zubia=0;}}
 if(kp==2){zubia=zubia-1.0;push=0;if(zubia<0){zubia=20.0;}}
 if(kp==3){page=17;push=0;Lcd_Custom_Cmd(Lcd_Clear);}
 if(kp==4){page=15;push=0;Lcd_Custom_Cmd(Lcd_Clear);}
 if(kp==6){page=14;push=0;Lcd_Custom_Cmd(Lcd_Clear);}
 if(kp==5){zubia==zubia;push=0;}
 break;
 case 17:
 strcp_c(txt_msg, "O∫py∂Ω. ∫oªeca" ); LCD_Custom_Out(1,1,txt_msg);
 sprintf(txt_msg, "%1.1f", okruzhnost);LCD_Custom_Out(2,1,txt_msg);
 strcp_c(txt_msg, "M" ); LCD_Custom_Out(2,5,txt_msg);
 if(kp==1){okruzhnost=okruzhnost+0.1;push=0;if(okruzhnost>3.5){okruzhnost=0;}}
 if(kp==2){okruzhnost=okruzhnost-0.1;push=0;if(okruzhnost<0){okruzhnost=3.5;}}
 if(kp==3){page=18;push=0;Lcd_Custom_Cmd(Lcd_Clear);}
 if(kp==4){page=16;push=0;Lcd_Custom_Cmd(Lcd_Clear);}
 if(kp==6){page=14;push=0;Lcd_Custom_Cmd(Lcd_Clear);}
 if(kp==5){okruzhnost==okruzhnost;push=0;}
 break;
 case 18:
 strcp_c(txt_msg, "C∫opocøƒ" ); LCD_Custom_Out(1,1,txt_msg);
 sprintf(txt_msg, "%2.1f", skorost);LCD_Custom_Out(2,1,txt_msg);
 strcp_c(txt_msg, "Kº/¿" ); LCD_Custom_Out(2,5,txt_msg);
 if(kp==1){skorost=skorost+0.1;push=0;if(skorost>100.0){skorost=0;}}
 if(kp==2){skorost=skorost-0.1;push=0;if(skorost<0){skorost=100.0;}}
 if(kp==3){page=19;push=0;Lcd_Custom_Cmd(Lcd_Clear);}
 if(kp==4){page=17;push=0;Lcd_Custom_Cmd(Lcd_Clear);}
 if(kp==6){page=14;push=0;Lcd_Custom_Cmd(Lcd_Clear);}
 if(kp==5){skorost==skorost;push=0;}
 break;
 case 19:
 strcp_c(txt_msg, "O≤op. ≥eΩø∏ª.1" );LCD_Custom_Out(1,1,txt_msg);
 sprintf(txt_msg, "%5.0f", Ob_vent);LCD_Custom_Out(2,1,txt_msg);
 strcp_c(txt_msg, "O≤/º∏Ω" ); LCD_Custom_Out(2,10,txt_msg);
 if(kp==1){Ob_vent=Ob_vent+100.0;push=0;if(Ob_vent>6000.0){Ob_vent=0;}}
 if(kp==2){Ob_vent=Ob_vent-100.0;push=0;if(Ob_vent<0){Ob_vent=6000.0;}}
 if(kp==3){page=20;push=0;Lcd_Custom_Cmd(Lcd_Clear);}
 if(kp==4){page=18;push=0;Lcd_Custom_Cmd(Lcd_Clear);}
 if(kp==6){page=14;push=0;Lcd_Custom_Cmd(Lcd_Clear);}
 if(kp==5){Ob_vent==Ob_vent;push=0;}
 break;
 case 20:
 strcp_c(txt_msg, "•ºæ. ≥eΩø∏ª.1" );LCD_Custom_Out(1,1,txt_msg);
 sprintf(txt_msg, "%2d", imp_vent);LCD_Custom_Out(2,1,txt_msg);
 if(kp==1){imp_vent=imp_vent+1;push=0;if(imp_vent>10){imp_vent=0;}}
 if(kp==2){imp_vent=imp_vent-1;push=0;if(imp_vent<0){imp_vent=10;}}
 if(kp==3){page=21;push=0;Lcd_Custom_Cmd(Lcd_Clear);}
 if(kp==4){page=19;push=0;Lcd_Custom_Cmd(Lcd_Clear);}
 if(kp==6){page=14;push=0;Lcd_Custom_Cmd(Lcd_Clear);}
 if(kp==5){imp_vent==imp_vent;push=0;}
 break;
 case 21:
 strcp_c(txt_msg, "Koª-≥o ¥e∫øapo≥" ); LCD_Custom_Out(1,1,txt_msg);
 sprintf(txt_msg, "%3.1f", gektar);LCD_Custom_Out(2,1,txt_msg);
 strcp_c(txt_msg, "°a" ); LCD_Custom_Out(2,10,txt_msg);
 if(kp==1){gektar=gektar+0.1;push=0;if(gektar>100.0){gektar=0;}}
 if(kp==2){gektar=gektar-0.1;push=0;if(gektar<0){gektar=100.0;}}
 if(kp==3){page=15;push=0;Lcd_Custom_Cmd(Lcd_Clear);}
 if(kp==4){page=20;push=0;Lcd_Custom_Cmd(Lcd_Clear);}
 if(kp==6){page=14;push=0;Lcd_Custom_Cmd(Lcd_Clear);}
 if(kp==5){gektar==gektar;push=0;}
 break;
 case 22:
 strcp_c(txt_msg, "O≤op. ≥eΩø∏ª.1" ); LCD_Custom_Out(1,1,txt_msg);
 sprintf(txt_msg, "%5.0f", Ob_vent); LCD_Custom_Out(2,1,txt_msg);
 strcp_c(txt_msg, "O≤/º∏Ω" ); LCD_Custom_Out(2,10,txt_msg);
 if(kp==3){page=14; push=0;Lcd_Custom_Cmd(Lcd_Clear);}
 if(kp==4){page=14;push=0;Lcd_Custom_Cmd(Lcd_Clear);}
 if(kp==6){page=3; push=0;Lcd_Custom_Cmd(Lcd_Clear);}
 break;
 case 23:
 if( kurs.F5 ==0) {  kurs.F5 =1;
 strcp_c(txt_msg, cca_e70); LCD_Custom_Out(2,1,txt_msg);
 LCD_Custom_Chr(2,16,252);
 Lcd_Custom_Out(1, 3, ".");
 Lcd_Custom_Out(1, 6, "."); Lcd_Custom_Chr_Cp('2'); Lcd_Custom_Chr_Cp('0');
 Lcd_Custom_Out(1, 14, ":"); }
 if( kurs.F0 ==0){  kurs.F0 =1;
 ShortToStr(n_date,txt5);
 Lcd_Custom_Chr(1, 1, txt5[2]);
 Lcd_Custom_Chr_Cp(txt5[3]);
 Lcd_Custom_Cmd(LCD_MOVE_CURSOR_LEFT);}
 if( kurs.F1 ==0){  kurs.F1 =1;
 ShortToStr(n_month,txt5); if(txt5[2]==32){txt5[2]=48;}
 Lcd_Custom_Chr(1,4,txt5[2]);
 Lcd_Custom_Chr_Cp(txt5[3]);
 Lcd_Custom_Cmd(LCD_MOVE_CURSOR_LEFT);}
 if( kurs.F2 ==0){  kurs.F2 =1;
 ShortToStr (n_year,txt5); if(txt5[2]==32){txt5[2]=48;}
 Lcd_Custom_Chr(1,9,txt5[2]);
 Lcd_Custom_Chr_Cp(txt5[3]);
 Lcd_Custom_Cmd(LCD_MOVE_CURSOR_LEFT);}
 if( kurs.F3 ==0){  kurs.F3 =1;
 ShortToStr(n_hours,txt5);
 Lcd_Custom_Chr(1,12,txt5[2]);
 Lcd_Custom_Chr_Cp(txt5[3]);
 Lcd_Custom_Cmd(LCD_MOVE_CURSOR_LEFT);}
 if( kurs.F4 ==0){  kurs.F4 =1;
 ShortToStr(n_minutes,txt5); if(txt5[2]==32){txt5[2]=48;}
 Lcd_Custom_Chr(1,15,txt5[2]);
 Lcd_Custom_Chr_Cp(txt5[3]);
 Lcd_Custom_Cmd(LCD_MOVE_CURSOR_LEFT);}
 if( kurs.F6 ==1){ kurs.F6 =0;Lcd_Custom_Cmd(LCD_MOVE_CURSOR_LEFT);}
 if(kp==5){page=2;push=0;Lcd_Custom_Cmd(Lcd_Clear);}
 if(kp==3){if (poz_kur<16){poz_kur++;Lcd_Custom_Cmd(LCD_MOVE_CURSOR_RIGHT);push=0;}}
 if(kp==4){if (poz_kur>1) {poz_kur--;Lcd_Custom_Cmd(LCD_MOVE_CURSOR_LEFT); push=0;}}
 if(kp==1){ switch(poz_kur){
 case 1:
 if (n_date<22){n_date+=10;push=0; kurs.F0 =0; kurs.F6 =1;}
 break;
 case 2:
 if (n_date<31){n_date++;push=0; kurs.F0 =0;}
 break;
 case 4:
 if (n_month<3){n_month+=10;push=0; kurs.F1 =0; kurs.F6 =1;}
 break;
 case 5:
 if (n_month<12){n_month++;push=0; kurs.F1 =0;}
 break;
 case 9:
 if (n_year<89){n_year+=10;push=0; kurs.F2 =0; kurs.F6 =1;}
 break;
 case 10:
 if (n_year<99){n_year++;push=0; kurs.F2 =0;}
 break;
 case 12:
 if (n_hours<14){n_hours+=10;push=0; kurs.F3 =0; kurs.F6 =1;}
 break;
 case 13:
 if (n_hours<23){n_hours++;push=0; kurs.F3 =0;}
 break;
 case 15:
 if (n_minutes<49){n_minutes+=10;push=0; kurs.F4 =0; kurs.F6 =1;}
 break;
 case 16:
 if (n_minutes<59){n_minutes++;push=0; kurs.F4 =0;}
 break;
 push=0;}}
 if(kp==2){ switch(poz_kur){
 case 1:
 if (n_date>10){n_date-=10;push=0; kurs.F0 =0; kurs.F6 =1;}
 break;
 case 2:
 if (n_date>1){n_date--;push=0; kurs.F0 =0;}
 break;
 case 4:
 if (n_month>10){n_month-=10;push=0; kurs.F1 =0; kurs.F6 =1;}
 break;
 case 5:
 if (n_month>1){n_month--;push=0; kurs.F1 =0;}
 break;
 case 9:
 if (n_year>10){n_year-=10;push=0; kurs.F2 =0; kurs.F6 =1;}
 break;
 case 10:
 if (n_year>0){n_year--;push=0; kurs.F2 =0;}
 break;
 case 12:
 if (n_hours>9){n_hours-=10;push=0; kurs.F3 =0; kurs.F6 =1;}
 break;
 case 13:
 if (n_hours>0){n_hours--;push=0; kurs.F3 =0;}
 break;
 case 15:
 if (n_minutes>9){n_minutes-=10;push=0; kurs.F4 =0; kurs.F6 =1;}
 break;
 case 16:
 if (n_minutes>0){n_minutes--;push=0; kurs.F4 =0;}
 break;
 push=0;}}
 if(kp==6) {ds1307_init() ; day=1; seconds=0;
 Delay_ms(100); ds1307_set_date_time();
 push=0;}

 break;

 }
kp=keypad();

goto start;
}
