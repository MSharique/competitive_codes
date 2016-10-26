
<%@page import="java.sql.Connection"%>
<%@page import="com.service.ConnectionMaker"%>
<%@page import="java.sql.Statement"%>
<%@page import="java.sql.ResultSet"%><%
	String emailId=(String)session.getAttribute("emailId");
	String psId="";
	Connection con=ConnectionMaker.getConnection();
	Statement st=con.createStatement();
	ResultSet rs=st.executeQuery("select psId from assignpost where officerEmailid='"+emailId+"'");
	
	if(rs.next()){
		psId=rs.getString(1);
		
	}
	rs.close();
	ResultSet efir=st.executeQuery("select * from emergancycomplaint where psId='"+psId+"'");
%>



<div class="center_title_bar">Emergency Complaint Detail</div>
<div class="header_092">
    <div class="login_box">
    <form action='empoyeeAction' method='get'>
    <input type="hidden" name="action" value="deleteEmergancyComplaintInfo">
    	<table id='newspaper-c' summary='Personal Movie Rating'>
    	<thead>
    	<tr>
   			<th scope='col' colspan='2'><strong>Delete complaint select checkbox and click on delete button</strong></th>
   		</tr>
   		</thead>
    	<%while(efir.next()){ String id=efir.getString(1);%>
    	<thead>
    		<tr>
    			<th scope='col' colspan='2'><strong></strong></th>
    		</tr>
    		<tr>
    				<td><input type="checkbox" name="id" value="<%=id %>"> </td>
    		</tr>
    		<tr>
    			<td scope='col'><b>IP Address</b></td>
    			<td><%=efir.getString(3) %></td>
    		</tr>
    		<tr>
    			<td scope='col'><b>Crime Detail</b></td>
    			<td><textarea rows="7" cols="30" readonly="readonly"><%=efir.getString(5) %></textarea> </td>
    		</tr>
    		<tr>
    			<td scope='col'><b>Complaint Date</b></td>
    			<td><%=efir.getString(6) %></td>
    		</tr>
    		<tr>
    			<td scope='col'><b>Citizen E-mail id</b></td>
    			<td><%=efir.getString(2) %></td>
    		</tr>
    		</thead>
    		
    		<%} %>
    		
    	<tr><td colspan='2'><input type='submit' value='Delete'> </td> </tr>
    	</table>
	</form>
    </div>
   </div>
