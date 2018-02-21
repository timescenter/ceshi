<?php
$z[0]=Array("global","",259,285);
$z[0][4]['name']="cfg_cmspath";
$z[1]=Array("field","",762,781);
$z[1][4]['name']="title";
$z[2]=Array("global","",782,808);
$z[2][4]['name']="cfg_webname";
$z[3]=Array("field","",849,878);
$z[3][4]['name']="keywords";
$z[4]=Array("field","",918,976);
$z[4][4]['name']="description";
$z[4][4]['function']="html2text(@me)";
$z[5]=Array("include","",1112,1147);
$z[5][4]['filename']="head.htm";
$z[6]=Array("channel","\r\n      <a href='[field:typeurl/]'>[field:typename/]</a>\r\n      ",1471,1655);
$z[6][4]['type']="son";
$z[6][4]['currentstyle']="<a href='~typelink~' class='curr'>~typename~</a>";
$z[7]=Array("list","             \r\n            <li>\r\n              <div class=\"img\"><img src=\"[field:litpic/]\" onload=\"loadImage(this,165,123)\" alt=\"[field:fulltitle/]\" onerror=\"loadImageError(this,'.img')\"></div>\r\n              <div class=\"t-content\">\r\n                <div class=\"name\"><a href=\"[field:arcurl/]\" title=\"[field:fulltitle/]\" target=\"_blank\">[field:title/]</a></div>\r\n                <p class=\"txt\">[field:description/]</p>\r\n                <div class=\"time\">[field:pubdate function=\"MyDate('Y-m-d',@me)\"/]</div>\r\n              </div>\r\n            </li>\r\n  ",1733,2321);
$z[7][4]['pagesize']="8";
$z[8]=Array("pagelist","",2407,2463);
$z[8][4]['listitem']="pre,next,pageno";
$z[8][4]['listsize']="5";
$z[9]=Array("include","",2670,2707);
$z[9][4]['filename']="footer.htm";

?>