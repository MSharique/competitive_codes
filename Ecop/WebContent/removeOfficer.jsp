
<%@page import="java.sql.Connection"%>
<%@page import="com.service.ConnectionMaker"%>
<%@page import="java.sql.Statement"%>
<%@page import="java.sql.ResultSet"%>
 <div class="header_091">  
 <%
    	Connection con=ConnectionMaker.getConnection();
    	Statement st=con.createStatement();
    	ResultSet rs=st.executeQuery("select * from Officers");
     %>
    <div class="center_title_bar">Remove Officers</div>
    <div class="login_box2">
    <form action="adminAction" method="get">
    <input type="hidden" name="action" value="deleteOfficers">
    <table id='newspaper-c' summary='Personal Movie Rating'>
    	<thead>
    		<tr>
    			<th scope='col' colspan='5'><strong>Select check box and click on delete button.</strong></th>
    		</tr>
    		<tr>
    			<th><strong></strong></th>
				<th><strong>Name</strong></th>
				<th><strong>DOB/Gender</strong></th>
				<th><strong>Contact</strong></th>
				<th><strong>Designation</strong></th>
			</tr>
		</thead>
		<tbody>
		<%while(rs.next()){ %>
			<tr>
				<td><strong><input type="checkbox" name="emailId" value="<%=rs.getString(1) %>"> </strong></td>
				<td><strong><%=rs.getString(3) %></strong></td>
				<td><strong><%=rs.getString(4) %>[<%=rs.getString(5) %>/<%=rs.getString(6) %>/<%= rs.getString(7)%>]</strong></td>
				<td><strong><%=rs.getString(8) %></strong></td>
				<td><strong><%=rs.getString(10) %></strong></td>
			</tr>
			<%} %>
		</tbody>
			<tr>
				<td colspan="5"><input type="submit" value="Delete"></td>
			</tr>
			<tr>
				
			</tr>
		</tbody>
	</table>
	</form>
    </div>
    </div>
