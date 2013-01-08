struct MSGBOX
{
      char* text;
      char* optiontext[5];
      int x_1;
      int y_1;
      
      int x_2;
      int y_2;
      
      char* ID;
      
       int textColor;
       int bgColor;
       int borderColor;
       
       int borderWidth;
       
      int option[100];
      
      int T;
      int T_max;
      int mtimer[100];
      
      bool MsgEnd;
      bool hasborder;
      bool hastimer;
      bool isrealtime;
      bool hasoptions;
      
      void load_options(BITMAP *buffer);
      void draw(BITMAP *buffer);
       }TEST, BED_msg;
       
       struct OPTIONS : MSGBOX
       {
             char* buttonID;
             char* OK;
             char* H6;
             
              bool ispressed;
              
              void buttonpress();
              }Option[100];
              
              void OPTIONS::buttonpress()
              {
                                         
                                         
                   if (mouse_b & 1)
                   if (mouse_x>=x_1 && mouse_x<=x_2 && mouse_y>=y_1 && mouse_y<=y_2)
                   {
                                  
                   ispressed=true;
                   }
                   if (ispressed==true)
                   {
                                       
                                       
                                       if (buttonID=="OK" || buttonID=="CANCEL")
                                        MsgEnd=true; 
                                        
                                        if (buttonID=="6H")
                                        {
                                                           
                   
                                                    if (MsgEnd!=true)
                                                    {
                                         tclockH+=6; 
                                         
                                         MsgEnd=true;
                                         
                                         }
                                                          
                                        
                                         ispressed=false;    
                                         }
                                         }
                                         
                                                  
                   
                   }
              void MSGBOX::load_options(BITMAP *buffer)
              {
                   Option[0].x_1=x_1+40;
                   Option[0].x_2=Option[0].x_1+40;
                   Option[0].y_1=y_2-50;
                   Option[0].y_2=y_2-10;
                   Option[0].hastimer=false;
                   Option[0].bgColor=makecol(255, 255, 255);
                   Option[0].text="OK";
                   Option[0].buttonID="OK";
                   
                   Option[1].x_1=x_1+60;
                   Option[1].x_2=Option[1].x_1+40;
                   Option[1].y_1=y_2-50;
                   Option[1].y_2=y_2-10;
                   Option[1].hastimer=false;
                   Option[1].bgColor=makecol(255, 255, 255);
                   Option[1].text="6";
                   Option[1].buttonID="6H";
                   
                   Option[2].x_1=x_1+100;
                   Option[2].x_2=Option[2].x_1+80;
                   Option[2].y_1=y_2-50;
                   Option[2].y_2=y_2-10;
                   Option[2].hastimer=false;
                   Option[2].bgColor=makecol(255, 255, 255);
                   Option[2].text="Cancel";
                   Option[2].buttonID="CANCEL";
                   
                   }
              
       void MSGBOX::draw(BITMAP *buffer)
       {
            load_options(buffer);
            
            Option[0].buttonpress();
            Option[1].buttonpress();
            if (Option[0].MsgEnd==true)
            MsgEnd=true;
            
            if (Option[1].MsgEnd==true)
            MsgEnd=true;
          
            
            
            
            if (hastimer==true)
            {
                               T++;
                               if (T>=T_max)
                               {
                               T=0;
                               MsgEnd=true;
                               }
                               }
                               if (MsgEnd!=true)
                               {
                                           rectfill(buffer, x_1, y_1, x_2, y_2, bgColor);
                                           rect(buffer, x_1, y_1, x_2, y_2, borderColor);
                               textprintf_ex(buffer,font, x_1+5, y_1+20, textColor, -1, "%s", text);
                                           
                                           if (hasoptions==true )
                                           {
                                                                if (ID=="BED1")
                                                                {
                                                                Option[1].draw(buffer);
                                                                Option[2].draw(buffer);
                                                                }
                                                                else
                                           Option[0].draw(buffer);
                                                                
                                                                }
                               }
            }

void load_messageboxes(BITMAP *buffer)
{
     TEST.hasoptions=true;
     TEST.textColor=makecol(0, 0, 0);
     TEST.bgColor=makecol(255, 255, 255);
     TEST.borderColor=makecol(0, 0, 0);
     TEST.hasborder=true;
     //TEST.hastimer=true;
     TEST.x_1=SW/2-100;
     TEST.x_2=SW/2+200;
     TEST.y_1=SH/2+50;
     TEST.y_2=SH/2+200;
     TEST.text="Testing messageboxes.";
     TEST.T_max=50;
     
     BED_msg.hasoptions=true;
     BED_msg.textColor=makecol(0, 0, 0);
     BED_msg.bgColor=makecol(255, 255, 255);
     BED_msg.borderColor=makecol(0, 0, 0);
     BED_msg.hasborder=true;
     BED_msg.hastimer=false;
     BED_msg.x_1=SW/2-160;
     BED_msg.x_2=SW/2+260;
     BED_msg.y_1=SH/2-110;
     BED_msg.y_2=SH/2+90;
     BED_msg.text="How long do you want to sleep? ";
     BED_msg.T_max=100;
     BED_msg.ID="BED1";
     }


