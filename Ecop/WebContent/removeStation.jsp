
<%@page import="java.sql.Connection"%>
<%@page import="com.service.ConnectionMaker"%>
<%@page import="java.sql.Statement"%>
<%@page import="java.sql.ResultSet"%>
 <div class="header_091">  
 <%
    	Connection con=ConnectionMaker.getConnection();
    	Statement st=con.createStatement();
    	ResultSet rs=st.executeQuery("select * from policestationinfo");
     %>
    <div class="center_title_bar">Remove Police Station</div>
    <div class="login_box2">
    <form action="adminAction" method="get">
    <input type="hidden" name="action" value="deletePoliceStation">
    <table id='newspaper-c' summary='Personal Movie Rating'>
    	<thead>
    		<tr>
    			<th scope='col' colspan='5'><strong>Select check box and click on delete button.</strong></th>
    		</tr>
    		<tr>
    			<th><strong></strong></th>
				<th><strong>Police Station Name</strong></th>
				<th><strong>Area</strong></th>
				<th><strong>City</strong></th>
			</tr>
		</thead>
		<tbody>
		<%while(rs.next()){ %>
			<tr>
				<td><strong><input type="checkbox" name="psCode" value="<%=rs.getString(1) %>"> </strong></td>
				<td><strong><%=rs.getString(2) %></strong></td>
				<td><strong><%=rs.getString(3) %></strong></td>
				<td><strong><%=rs.getString(4) %></strong></td>
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
