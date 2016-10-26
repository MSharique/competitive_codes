<%@ page language="java" import="java.util.*" pageEncoding="ISO-8859-1"%>
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
                         <li><a href="citizenHome.jsp" class="nav1">  Home </a></li>
                         <li class="divider"></li>
                         <li><a href="logout.jsp" class="nav4">Sign-out</a></li>
                        
                        
                         
                    </ul>

             <div class="right_menu_corner"></div>
            </div><!-- end of menu tab -->
            
            
    
    
   <div class="left_content">
    
        
        <div class="title_box">Navigation</div>  
     <div class="border_box">&nbsp; 
		<a href="javascript:;" onclick="javaScript:return  open_url('fir.jsp','centerPan');" class="join"><b>First Information Report</b> </a><br/>
		<a href="javascript:;" onclick="javaScript:return  open_url('crimeDetail.jsp','centerPan');" class="join"><b>Crime Detail Form</b> </a><br/>
		<a href="javascript:;" onclick="javaScript:return  open_url('arrestCourt.jsp','centerPan');" class="join"><b>Arrest/Court Surrender Form</b> </a><br/>
		<a href="javascript:;" onclick="javaScript:return  open_url('finaleReport.jsp','centerPan');" class="join"><b>Final Form/Report</b> </a><br/>
		<a href="javascript:;" onclick="javaScript:return  open_url('viewFIR.jsp','centerPan');" class="join"><b>View FIR</b> </a><br/>
		<a href="javascript:;" onclick="javaScript:return  open_url('viewEmergencyFIR.jsp','centerPan');" class="join"><b>View Emergency Complaint</b> </a>
	 </div>
     
	 <div class="title_box">Emergency Phone Numbers</div>  
     <div class="border_box">&nbsp; 
		
		<a href="#" class="join">To Report Traffic violation <b>[103]</b> </a>
		<a href="#" class="join">Ambulance <b>[108]</b> </a>
		<a href="#" class="join">Child-Line <b>[1098]</b> </a>
		<a href="#" class="join">Women help Line <b>[1091]</b> </a>
		<a href="#" class="join">Senior Citizen Line  <b>[1253]</b> </a>
		<a href="#" class="join">Blue Line <b>[12700]</b> </a>
     </div>  
     
     <div class="banner_adds">
     
     <a href="#"><img src="images/31.jpg" alt="" title="" border="0" /></a>
     </div>    
        
    
   </div><!-- end of left content -->
   
   
   <div class="center_content" id="centerPan">
   	<div class="center_title_bar">Message from Director General of Police</div>
   	
   	<div class="header_09">
   	<%
   		String msg=null;
   		msg=(String)request.getAttribute("msg");
   		if(msg!=null){
   	 %>
   	 <font color="red"> <strong><%=msg %></strong></font>
   	 <%} %>
   			<br/><br/>
   			<b>We will remain committed to maintaining public order, preventing and detecting crime,<br/> 
   			 maintaining and promoting communal harmony., ensuring a smo<br/>
   			 
   			  </b>  
    </div>
    
    	 
	
 
 
    
    
   
   </div><!-- end of center content -->
   
   <div class="right_content">
   		
   
     <div class="title_box"></div>  
     <div class="border_box">
         <div class="product_title"><a href="javascript:;" onclick="javaScript:return  open_url('viewEmergencyFIR.jsp','centerPan');">View Emergency Complaint</a></div>
         <div class="product_img"><a href="javascript:;" onclick="javaScript:return  open_url('viewEmergencyFIR.jsp','centerPan');"><img src="images/Siren.gif" alt="" title="" border="0" /></a></div>
         
     </div>  
     
      <div class="title_box">Wanted Criminals</div>  
     <div class="border_box">
         
         <div class="product_img"><img src="images/criminal.jpg" alt="" title="" border="0" /></div>
         <div class="product_title">Report about him/his identity if you know</div>
         
     </div> 
     
    
     
     <div class="banner_adds">
     
     <a href="#"><img src="images/bann1.jpg" alt="" title="" border="0" /></a>
     </div>        
     
   </div><!-- end of right content -->   
   
            
   </div><!-- end of main content --><div class="footer"><div class="center_footer"><br />
        <br />
        </div>
        
        <div class="right_footer">
        <a href="index.html"></a><a href="contact.html"><br /></a>
        </div>   
   
   </div>                 


</div>
<!-- end of main_container -->
</body>
</html>