
<%@page import="java.sql.Connection"%>
<%@page import="com.service.ConnectionMaker"%>
<%@page import="java.sql.Statement"%>
<%@page import="java.sql.ResultSet"%>

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
	
	
	
	
		<link rel="stylesheet" href="css/jd.gallery.css" type="text/css" media="screen" charset="utf-8" />
		<link rel="stylesheet" href="css/ReMooz.css" type="text/css" media="screen" charset="utf-8" />
		<script src="scripts/mootools-1.2.1-core-yc.js" type="text/javascript"></script>
		<script src="scripts/mootools-1.2-more.js" type="text/javascript"></script>
		<script src="scripts/ReMooz.js" type="text/javascript"></script>
		<script src="scripts/jd.gallery.js" type="text/javascript"></script>
		
		<script type="text/javascript">
			function startGallery() {
				var myGallery = new gallery($('myGallery'), {
					timed: false,
					useReMooz: false,
					embedLinks: false
				});
			}
			window.addEvent('domready',startGallery);
		</script>
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
                         <li><a href="index.jsp" class="nav1">  Home </a></li>
                         <li class="divider"></li>
                         <li><a href="javascript:;" onclick="javaScript:return  open_url('detective.jsp','centerPan');" class="nav3">Detective</a></li>
                         <li class="divider"></li>
                         <li><a href="javascript:;" onclick="javaScript:return  open_url('policeDept.jsp','centerPan');" class="nav2">Police Department</a></li>
                         <li class="divider"></li>
                         <li><a href="javascript:;" onclick="javaScript:return  open_url('adminLogin.jsp','centerPan');" class="nav4">Administrator Login</a></li>
                         <li class="divider"></li>
                         <li><a href="javascript:;" onclick="javaScript:return  open_url('empLogin.jsp','centerPan');" class="nav4">Officers Login</a></li>
                         <li class="divider"></li>
                         <li><a href="javascript:;" onclick="javaScript:return  open_url('showRules.jsp','centerPan');" class="nav4">Law & Acts</a></li>
                         
                         
                         
                    </ul>

             <div class="right_menu_corner"></div>
            </div><!-- end of menu tab -->
            
            
    
    
   <div class="left_content">
    
        
      <div class="title_box">Citizen Login</div>  
     <div class="border_box">
         <div class="product_title"><a></a></div>
        	<div class="product_img"><a><img src="images/Search1.jpg" alt="" title="" border="0" /></a></div>
        	<form action="citizenAction" method="get" name='citizenLoginForm' onsubmit='return validateCitizenLoginFrom()'>
	        <table id='newspaper-c1' summary='Personal Movie Rating'>
	         	<tr>
	         		<td><strong>Email-id</strong></td>
	         	</tr>
	         	<tr>
	         		<td>
	         			<input type="text" name="emailId">
					</td>
				</tr>
				<tr>
					<td><strong>Password</strong></td>
				</tr>
				<tr>
	         		<td>
	         			<input type="password" name="password">
					</td>
	         				
	         	</tr>
	         	<tr>
	         		<td>
	         			<input type="submit" name="action" value="Sign-In">
					</td>
	         				
	         	</tr>
	         </table>
	         </form>
	         <div class="prod_price"><a class="join" href="javascript:;" onclick="javaScript:return  open_url('citizenReg.jsp','centerPan');"><b>Sign Up Now Free!</b></a>  </div>
	         
     </div>  
     
     
     <div class="title_box">Emergency Phone Numbers</div>  
     <div class="border_box">&nbsp; 
		<a href="#" class="join">Emergency-Control Room <b>[100]</b> </a>
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
   	
   	<div class="header_092">
   	<%
   		String msg=null;
   		msg=(String)request.getAttribute("msg");
   		if(msg!=null){
   	 %>
   	 <font color="red"> <strong><%=msg %></strong></font>
   	 <%} %>
   	 
   			<img alt="" src="images/NewDGP1.jpg"><br/><br/>
   			<b>

<br/>
We will remain committed to maintaining public order, preventing and detecting crime,<br/>

maintaining and promoting communal harmony, ensuring a smoooth flow of traffic ,<br/>

and taking strong action against terriorism, organised crime, anti- social illicit activities/elements.<br/><br/>



We shall ensure the Rule of Law,enforce the Law of land impartially and firmly without fear<br/>

or favour and strive to create fear free environment that is conducive to growth and development.<br/><br/>



We will serve and protect all, particularly the downtrodden, the weak, women, minorities, senior<br/>

citizen's , slum dwellers, the poor and other marginalised sections of society. Prompt and<br/>

compassionate response to every call of citizen's in distress.<br/>
<br/>


We will keep out personal integrity high, work as a team to make the force corruption-free,<br/>

bring in transparency in our functioning, strive continuously to raise the professional skills<br/>

and work for the welfare of our force. <br/>

   			 
   			  </b>  
   		
   			  	<%Connection con=ConnectionMaker.getConnection();
			Statement st=con.createStatement();
			ResultSet rs=st.executeQuery("select * from missingperson");
			
		 %>
		 <div class="center_title_bar">Missing Persons</div><br/><br/><br/>
		
			<div id="myGallery">
			<%while(rs.next()){ String id=rs.getString(1);%>
			
				<div class="imageElement">
					<h3><font color='red'>Name/Height/Weight:</font><%=rs.getString(3) %>/ <%=rs.getString(5) %>/ <%=rs.getString(6) %><br>
					<font color='red'>Lost Date and Time:</font><%=rs.getString(8) %>--<%=rs.getString(9) %>
					 </h3>
					
					<p></p>
					<a href="#" title="open image" class="open"></a>
					<img class="full" src="viewMissingPersonAction?id=<%=id %>"></img>
					<img class="thumbnail" src="viewMissingPersonAction?id=<%=id %>"></img>
				</div>
			<%} %>
			</div>
		
		
   			  	
   			 
    </div>
    
    	 
	
 
 
    
    
   
   </div><!-- end of center content -->
   
   <div class="right_content">
   		
   
     <div class="title_box"></div>  
     <div class="border_box">
         <div class="product_title"><a>Make An Emergency Complaint</a></div>
         <div class="product_img"><a><img src="images/Siren.gif" alt="" title="" border="0" /></a></div>
         
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