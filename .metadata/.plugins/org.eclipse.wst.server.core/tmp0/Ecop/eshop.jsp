<%@ page language="java" import="java.util.*" pageEncoding="ISO-8859-1"%>
<%
String path = request.getContextPath();
String basePath = request.getScheme()+"://"+request.getServerName()+":"+request.getServerPort()+path+"/";
%>

<!DOCTYPE HTML PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN">
<html>
  <head>
    <base href="<%=basePath%>">
    
    <title>Online Shop</title>
	<meta http-equiv="pragma" content="no-cache">
	<meta http-equiv="cache-control" content="no-cache">
	<meta http-equiv="expires" content="0">    
	<meta http-equiv="keywords" content="keyword1,keyword2,keyword3">
	<meta http-equiv="description" content="This is my page">
	<!--
	<link rel="stylesheet" type="text/css" href="styles.css">
	-->
	<link rel="stylesheet" type="text/css" href="CSS&JS/style.css" />
	<link rel="stylesheet" type="text/css" href="CSS&JS/table.css" />
	<script type="text/javascript" src="CSS&JS/js/boxOver.js"></script>
	<script type="text/javascript" src="CSS&JS/js/home.js"></script>
  </head>
  
 <body><div id="content"><div class="inner_copy"><a href="http://www.freetemplatesonline.com/">Free Web Templates</a> <a href="http://www.websitetemplates.org/">Website Templates</a> <a href="http://www.webdesign.org/website-design">Website Design</a></div></div>

<div id="main_container">
	<div class="top_bar"><br><div class="languages"><a href="#" class="lang"><br></a>       
        </div>
    
    </div>
	<div id="header">
        
        <div id="logo">
            <a href="index.html"><img src="images/logo.png" alt="" title="" border="0" width="237" height="140" /></a>
	    </div>
        
        <div class="oferte_content">
        	<div class="top_divider"><img src="images/header_divider.png" alt="" title="" width="1" height="164" /></div>
        	<div class="oferta">
            
           		<div class="oferta_content">
                	<br>
                	<div class="oferta_details"><div class="oferta_text"><br> 
                	<%
                		String name=(String)session.getAttribute("name");
                	 %>
                	 	<h3><font color="black">Welcome [</font><%=name %><font color="black">]</font></h3>
                            </div>
                            <br></div>
                </div>
                <div class="oferta_pagination">&nbsp;&nbsp;&nbsp; <br>
                             
                </div>        

            </div>
            <div class="top_divider"><img src="images/header_divider.png" alt="" title="" width="1" height="164" /></div>
        	
        </div> <!-- end of oferte_content-->
        

    </div>
    
   <div id="main_content"> 
   
            <div id="menu_tab">
            <div class="left_menu_corner"></div>
                    <ul class="menu">
                         <li><a href="javascript:;" onclick="javaScript:return  open_url('userHome.jsp','centerPan');" class="nav1">  Home </a></li>
                         <li class="divider"></li>
                         <li><a href="javascript:;" onclick="javaScript:return  open_url('userProfile.jsp','centerPan');" class="nav4">Profile</a></li>
                         <li class="divider"></li>
                         <li><a href="javascript:;" onclick="javaScript:return  open_url('userChangePwd.jsp','centerPan');" class="nav6">Change Password</a></li>
                         <li class="divider"></li>
                         <li><a href="logout.jsp" class="nav4">Signout</a></li>
                    
                                                  
                    </ul>

             <div class="right_menu_corner"></div>
            </div><!-- end of menu tab -->
            
    <div class="crumb_navigation">
    </div>        
    
    
   <div class="left_content">
    <div class="title_box">Categories</div>
    
        <ul class="left_menu">
        <li class="odd"><a href="javascript:;" onclick="javaScript:return  open_url('processors.jsp','centerPan');">Processors</a></li>
        <li class="even"><a href="javascript:;" onclick="javaScript:return  open_url('motherboard.jsp','centerPan');">Motherboards</a></li>
         <li class="odd"><a href="javascript:;" onclick="javaScript:return  open_url('desktop.jsp','centerPan');">Desktops</a></li>
        <li class="even"><a href="javascript:;" onclick="javaScript:return  open_url('lapi.jsp','centerPan');">Laptops & Notebooks</a></li>
         <li class="odd"><a href="javascript:;" onclick="javaScript:return  open_url('mobileShop.jsp','centerPan');">Mobiles</a></li>
        </ul> 
        
     <div class="title_box">Search Products</div>  
     <div class="border_box">
         <div class="product_title"><a>Search by company & category</a></div>
        	<div class="product_img"><a><img src="images/Search1.jpg" alt="" title="" border="0" /></a></div>
	        <table id='newspaper-c1' summary='Personal Movie Rating'>
	         	<tr>
	         		<td><strong>Category</strong></td>
	         	</tr>
	         	<tr>
	         		<td><select name="category" id="category" onclick="javascript:return getCompanyNameAccCat();">
	         				<option value="All">All</option> 
							<option value="Mobile">Mobile</option>
							<option value="Motherboard">Motherboard</option>
							<option value="Desktop">Desktop</option>
							<option value="Lapi">Lapi</option>
							<option value="Processor">Processor</option>
						</select>
					</td>
				</tr>
				<tr>
					<td><strong>Company Name</strong></td>
				</tr>
				<tr>
	         		<td id="cmpName1"><select name="companyName" id="companyName">
	         				<option value="">Select Company</option> 
						</select>
					</td>
	         				
	         	</tr>
	         </table>
	         <div class="prod_price"><input type="button" value="search" onclick="javascript:return getProductAccCon();">  </div>
     </div>  
        
        
        
     
   </div><!-- end of left content -->
   
   
   <div class="center_content" id="centerPan">
   	
   	<div class="center_title_bar">Welcome</div>
   	<br><%String msg=null;
        		msg=(String)request.getAttribute("msg");
        		if(msg!=null){
        	 %>
        	 <ul><li><font color="red"><b><%=msg %></b></font> </li></ul>
        	 <%} %>
   	<div class="header_09">
   
    </div>
 
    </div><!-- end of center content -->
   
   <div class="right_content">
   		<div class="shopping_cart" id="sc">
        	<div class="cart_title">Shopping cart</div>
            
            <div class="cart_details">
            
            <span class="border_cart"></span>
            
            </div>
            
            <div class="cart_icon"><a href="#" title="header=[Checkout] body=[&nbsp;] fade=[on]"><img src="images/shoppingcart.png" alt="" title="" width="48" height="48" border="0" /></a></div>
        
        </div><br>  
     
     
     
            
     
   </div><!-- end of right content -->   
   
            
   </div><!-- end of main content -->
   
   
   
   <div class="footer">
   
		
        <div class="left_footer">
        <img src="images/footer_logo.png" alt="" title="" width="170" height="49"/>
        </div>
        
        <div class="center_footer">
       All Rights Reserved 2011<br />
        <img src="images/payment.gif" alt="" title="" />
        </div>
        
        <div class="right_footer">
       
        </div>   
   
   </div>                 


</div>
<!-- end of main_container -->
</body>
</html>