
<%@page import="java.sql.Connection"%>
<%@page import="com.service.ConnectionMaker"%>
<%@page import="java.sql.Statement"%>
<%@page import="java.sql.ResultSet"%>    <div class="center_title_bar">Law & Acts</div>
    
    <div class="header_092">
    <%
    	Connection con=ConnectionMaker.getConnection();
    	Statement st=con.createStatement();
    	ResultSet rs=st.executeQuery("select * from ruleslaws");
    	while(rs.next()){
     %>
    <table id='newspaper-c' summary='Personal Movie Rating'>
    	<thead>
    		<tr>
    			<th scope='col' colspan='7'><strong><%=rs.getString(1) %> </strong></th>
    		</tr>
    		<tr>
    			<th scope='col' colspan='7'><strong><%=rs.getString(2) %> </strong></th>
    		</tr>
		</thead>
		<tbody>
			<tr>
				<td scope="col" colspan="7"><%=rs.getString(3) %></td>
			</tr>
			<tr>
				
			</tr>
		</tbody>
	</table>
	<%} %>
	</div><br/>
     <div class="login_box" id="stDetails">
    	
    </div>
