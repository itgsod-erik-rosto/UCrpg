void menuF(BITMAP *buffer)
{
if (menu.RUNNING==true && GAME.RUNNING!=true)
                    {        
                             if (menu.NEW==true)
                             {
                                                
                                                GAME.NEW=true;
                             }
                             if (menu.LOAD==true)
            {   
  GAME.LOAD=true;
  
}           
                          if (key[KEY_L])
                          {
                                         menu.LOAD=true;
                                         }
                                         if (key[KEY_N])
                          {
                                         menu.NEW=true;
                                         }


if (menu.LOAD==true || menu.NEW==true)
{       
                    menu.RUNNING=false;
                    GAME.RUNNING=true;  
                    menu.LOAD=false;
                    }
                    
                    
                     blit (menuscreen, buffer, 0, 0, 0, 0, SW, SH);     
                     
                          }
                          }
