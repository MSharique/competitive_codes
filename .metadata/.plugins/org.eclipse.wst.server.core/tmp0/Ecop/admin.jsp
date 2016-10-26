<%@ page language="java" import="java.util.*" pageEncoding="ISO-8859-1"%>
<%@page import="java.net.InetAddress"%>
<%
String path = request.getContextPath();
String basePath = request.getScheme()+"://"+request.getServerName()+":"+request.getServerPort()+path+"/";
%>

<!DOCTYPE HTML PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN">
<html>
 <head>
<meta http-equiv="Content-Type" content="text/html; charset=windows-1252" />
<title>Electronix Store</title>
<link rel="stylesheet" type="text/css" href="CSS&JS/style.css" />
<!--[if IE 6]>
<link rel="stylesheet" type="text/css" href="iecss.css" />
<![endif]-->
<link rel="stylesheet" type="text/css" href="CSS&JS/style.css" />
	<link rel="stylesheet" type="text/css" href="CSS&JS/table.css" />
	<script type="text/javascript" src="CSS&JS/js/boxOver.js"></script>
	<script type="text/javascript" src="CSS&JS/js/home.js"></script>
</head>
<body><div id="content"><div class="inner_copy"><a href="http://www.freetemplatesonline.com/">Free Web Templates</a> <a href="http://www.websitetemplates.org/">Website Templates</a> <a href="http://www.webdesign.org/website-design">Website Design</a></div></div>

<div id="main_container"><div class="top_bar"><br /></div>
	<div id="header">
        
        <div id="logo">
            <a href="index.html"><img src="images/logo.png" alt="" title="" border="0" width="237" height="140" /></a>
	    </div>
        
        <div class="oferte_content">
        	<div class="top_divider"><img src="images/header_divider.png" alt="" title="" width="1" height="164" /></div>
        	<div class="oferta">
            
           		<div class="oferta_content">
                	<img src="images/3.jpg" height="150" border="0" class="oferta_img" />
                	<div class="oferta_details"><br /></div>
                </div>
                <div class="oferta_pagination">
                
                   
                             
                </div>        

            </div>
            <div class="top_divider"><img src="images/header_divider.png" alt="" title="" width="1" height="164" /></div>
        	
        </div> <!-- end of oferte_content-->
        

    </div>
    
   <div id="main_content"> 
   
            <div id="menu_tab">
            <div class="left_menu_corner"></div>
                    <ul class="menu">
                         <li><a href="admin.jsp" class="nav1">  Home </a></li>
                         <li class="divider"></li>
                         <li><a href="javascript:;" onclick="javaScript:return  open_url('addPoliceStation.jsp','centerPan');" class="nav2">Add Police Station</a></li>
                         <li class="divider"></li>
                         <li><a href="javascript:;" onclick="javaScript:return  open_url('addPoliceOfficer.jsp','centerPan');" class="nav3">Add Officer</a></li>
                         <li class="divider"></li>
                         <li><a href="javascript:;" onclick="javaScript:return  open_url('assignPosting.jsp','centerPan');" class="nav4">Assign Posting</a></li>
                         <li class="divider"></li>
                         <li><a href="javascript:;" onclick="javaScript:return  open_url('psDetails.jsp','centerPan');" class="nav1"> <b>Police Station Details</b> </a></li>
                         <li class="divider"></li>
                         <li><a href="logout.jsp" class="nav4">Sign out</a></li>
                    </ul>

             <div class="right_menu_corner"></div>
            </div><!-- end of menu tab -->
            
            
    
    
   <div class="left_content">
    
        
      
   
     
     
     <div class="title_box">Manage</div>  
     <div class="border_box">&nbsp; 
		<a href="javascript:;" onclick="javaScript:return  open_url('getUserRequest.jsp','centerPan');" class="join"> <b>[User Request]</b> </a><br/>
		<a href="javascript:;" onclick="javaScript:return  open_url('addRulsOrLaw.jsp','centerPan');" class="join"> <b>[Add Rules/Laws]</b> </a><br/>
		<a href="javascript:;" onclick="javaScript:return  open_url('removeOfficer.jsp','centerPan');" class="join"><b>[Remove Police Officer]</b> </a><br/>
		<a href="javascript:;" onclick="javaScript:return  open_url('removeStation.jsp','centerPan');" class="join"><b>[Remove Police Station]</b> </a><br/>
	 </div>  
     
     <div class="banner_adds">
     
     <a href="#"><img src="images/31.jpg" alt="" title="" border="0" /></a>
     </div>    
        
    
   </div><!-- end of left content -->
   
   
   <div class="center_content_admin" id="centerPan">
   	<div class="center_title_bar_admin">Administrator</div>
   	
   	<div class="header_091">
   	<%
   		String msg=null;
   		msg=(String)request.getAttribute("msg");
   		if(!msg.equalsIgnoreCase("null")){
   	 %>
   	 <font color="red"> <strong><%=msg %></strong></font>
   	 <%} %>
   			<br/><br/>
   			
   	
    </div>
    
    	 
	
 
 
    
    
   
   </div><!-- end of center content -->
   
  <div class="border_box">
         
   </div> 
     
    
     
     
   </div><!-- end of right content -->   
   
            
   </div><!-- end of main content -->
<!-- end of main_container -->
</body>
</html>