
<%@page import="java.sql.Connection"%>
<%@page import="com.service.ConnectionMaker"%>
<%@page import="java.sql.Statement"%>
<%@page import="java.sql.ResultSet"%>

		
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
		
		<%Connection con=ConnectionMaker.getConnection();
			Statement st=con.createStatement();
			ResultSet rs=st.executeQuery("select * from missingperson");
			
		 %>
		<div class="content">
			<div id="myGallery">
			<%while(rs.next()){ String id=rs.getString(1); System.out.print("abc");%>
			
				<div class="imageElement">
					<h3><%=rs.getString(3) %> </h3>
					<p><%=id %></p>
					<a href="#" title="open image" class="open"></a>
					<img class="full" src="viewMissingPersonAction?id=<%=id %>"></img>
					<img class="thumbnail" src="viewMissingPersonAction?id=<%=id %>"></img>
				</div>
			<%} %>
			</div>
		</div>
