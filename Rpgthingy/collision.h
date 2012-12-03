void collision2(BITMAP *buffer)
{
     
     
      if (actor[cAct].y>=y1+cam2-actor[cAct].r && actor[cAct].y<=y2+cam2+actor[cAct].r && actor[cAct].x>=x1+cam-actor[cAct].r && actor[cAct].x <=x2+cam+actor[cAct].r && collide!=true 
      || (SSY1==87 && actor[cAct].x>=x1-15+cam && actor[cAct].x<=x1+15+cam && actor[cAct].y>=y1+cam2 && actor[cAct].y<=y1+SSY+cam2 && isopen!=true && isdoor==true)
      ||(SSY1==0 && actor[cAct].x>=x1+cam && actor[cAct].x<=x1+SSX+cam && actor[cAct].y>=y1-15+cam2 && actor[cAct].y<=y1+15+cam2 && isopen!=true && isdoor==true)
      ||(actor[cAct].x>=x1+cam-10 && actor[cAct].x<=x1+SSX+10+cam && actor[cAct].y>=y1-10+cam2 && actor[cAct].y<=y1+SSY+10+cam2 && collide==true))
    {
                              
                                  
                                  if (actor[cAct].isNPC==true)
                                  {
                                                              
                                                       
           if (actor[cAct].dir==1)
    actor[cAct].y+=actor[cAct].speed;
    else if (actor[cAct].dir==3)
    actor[cAct].y-=actor[cAct].speed;
    else if (actor[cAct].dir==2)
    actor[cAct].x+=actor[cAct].speed;
    else if (actor[cAct].dir==4)
    actor[cAct].x-=actor[cAct].speed;
}

    if (actor[cAct].isNPC!=true)
    {                 
    if (player.dir==1)
    ofY+=player.speed;
    else if (player.dir==3)
    ofY-=player.speed;
    else if (player.dir==2)
    ofX+=player.speed;
    else if (player.dir==4)
    ofX-=player.speed;
}
}
}
