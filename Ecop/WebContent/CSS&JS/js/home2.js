//Create browser object

	function GetXmlHttpObject() {
	
	if (window.XMLHttpRequest) {
  // code for IE7+, Firefox, Chrome, Opera, Safari
		return new XMLHttpRequest();
	}
	if (window.ActiveXObject) {
  // code for IE6, IE5
		return new ActiveXObject("Microsoft.XMLHTTP");
	}
	return null;
}


function noBack(){
	 window.history.forward()
 }
noBack(); 
window.onload=noBack; 
window.onpageshow=function(evt){
	if(evt.persisted){
		noBack()}
} 
window.onunload=function(){void(0)}

var link = null;
var please_wait = null;



function open_url2(){
	var url='checkout1.jsp';
	var target='centerPan';
	if ( ! document.getElementById) {
  		return false;
 	}

 	if (please_wait !== null) {
  		document.getElementById(target).innerHTML = please_wait;
 	}

 	if (window.ActiveXObject) {
  		link = new ActiveXObject("Microsoft.XMLHTTP");
 	} else if (window.XMLHttpRequest) {
  		link = new XMLHttpRequest();
 	}

 	if (link == undefined) {
  		return false;
 	}
 	link.onreadystatechange = function() { response(url, target); }
 	link.open("GET", url, true);
 	link.send(null);
	
}


function open_url1(){
	var url='checkout.jsp';
	var target='centerPan';
	if ( ! document.getElementById) {
  		return false;
 	}

 	if (please_wait !== null) {
  		document.getElementById(target).innerHTML = please_wait;
 	}

 	if (window.ActiveXObject) {
  		link = new ActiveXObject("Microsoft.XMLHTTP");
 	} else if (window.XMLHttpRequest) {
  		link = new XMLHttpRequest();
 	}

 	if (link == undefined) {
  		return false;
 	}
 	link.onreadystatechange = function() { response(url, target); }
 	link.open("GET", url, true);
 	link.send(null);
	
}

function open_url(url, target) {
	
 	if ( ! document.getElementById) {
  		return false;
 	}

 	if (please_wait !== null) {
  		document.getElementById(target).innerHTML = please_wait;
 	}

 	if (window.ActiveXObject) {
  		link = new ActiveXObject("Microsoft.XMLHTTP");
 	} else if (window.XMLHttpRequest) {
  		link = new XMLHttpRequest();
 	}

 	if (link == undefined) {
  		return false;
 	}
 	link.onreadystatechange = function() { response(url, target); }
 	link.open("GET", url, true);
 	link.send(null);
}

function response(url, target) {
 	if (link.readyState == 4) {
	 	document.getElementById(target).innerHTML = (link.status ==200) ? link.responseText : "Ooops!! A broken link! Please contact the webmaster of this website ASAP and give him the fallowing errorcode: " + link.status;
	}
}

function validateCheckFrom(){
	var address = document.checkForm.address;
    var cardType = document.checkForm.cardType;
    var cardNumber = document.checkForm.cardNumber;
    var cardHolderName = document.checkForm.cardHolderName;
    var cvv = document.checkForm.cvv;
     if (address.value == "")
    {
        window.alert("address required.");
        address.focus();
        return false;
    }
     if (cardType.value == "")
    {
        window.alert("cardType required.");
        cardType.focus();
        return false;
    }
     if (cardNumber.value == "")
    {
        window.alert("cardNumber required.");
        cardNumber.focus();
        return false;
    }
     if (cardHolderName.value == "")
    {
        window.alert("cardHolderName required.");
        cardHolderName.focus();
        return false;
    }
     if (cvv.value == "")
    {
        window.alert("cvv required.");
        cvv.focus();
        return false;
    }
    return true;
}


function validateItemFrom(){
	var category = document.itemForm.category;
    var companyName = document.itemForm.companyName;
    var product = document.itemForm.product;
    var retailPrice = document.itemForm.retailPrice;
   
     
     if (category.value == "")
    {
        window.alert("category required.");
        category.focus();
        return false;
    }
     if (companyName.value == "")
    {
        window.alert("companyName required.");
        companyName.focus();
        return false;
    }
     if (product.value == "")
    {
        window.alert("product required.");
        product.focus();
        return false;
    }
     if (retailPrice.value == "")
    {
        window.alert("retailPrice required.");
        retailPrice.focus();
        return false;
    }else{
    	 c1="0123456789.";
       inputval=retailPrice.value;
        for(i=0;i<=inputval.length;i++)
   		{
	         if(c1.indexOf(inputval.charAt(i))==-1){
	        	window.alert("Not a valid price.");
	        	return false;
	          }
	    }
    }
       return true;
}




function validateUserForm()
{
    var loginId = document.userForm.loginId;
    var password = document.userForm.password;
    var repwd = document.userForm.repwd;
     
    var name = document.userForm.name;
    var contact = document.userForm.contact; 
    var email = document.userForm.email;
    var address = document.userForm.address;
    
       if (loginId.value == "")
    {
        window.alert("Login Id Required.");
        loginId.focus();
        return false;
    }
    
    if (password.value == "")
    {
        window.alert("Password Required");
        password.focus();
        return false;
    }
    
    if (repwd.value == "")
    {
        window.alert("Re-Password Required");
        repwd.focus();
        return false;
    }
    
    if(password.value != repwd.value){
    	window.alert("password and retype password doesn't match");
        password.focus();
        return false;
    }
    
    if (name.value == "")
    {
        window.alert("Name Required");
        name.focus();
        return false;
    }
    
    if (contact.value == "")
    {
        window.alert("contact required");
        contact.focus();
        return false;
    }else{
    	 c1="0123456789.";
       inputval=contact.value;
        for(i=0;i<=inputval.length;i++)
   		{
	         if(c1.indexOf(inputval.charAt(i))==-1){
	        	window.alert("Not a valid Mobile No.");
	        	contact.focus();
	        	return false;
	          }
	    }
    }
    
    if (email.value == "")
    {
        window.alert("Please enter your employee email");
        email.focus();
        return false;
    }else{
    	  apos=email.value.indexOf("@");
		  dotpos=email.value.lastIndexOf(".");
		  if (apos<1||dotpos-apos<2)
		    {window.alert("Email is not valid:exp-fname.lname@compnany.com");return false;}
    }
    
    if (address.value == "")
    {
        window.alert("address Required");
        address.focus();
        return false;
    }
    
      return true;
}





function validatePwdFrom(){
	var oldPwd = document.pwdForm.oldPwd;
    var newPwd = document.pwdForm.newPwd; 
    var rePwd = document.pwdForm.rePwd;
    
      if (oldPwd.value == "")
    {
        window.alert("Old passwarod required.");
        oldPwd.focus();
        return false;
    }
    
     if (newPwd.value == "")
    {
        window.alert("New passwarod required.");
        newPwd.focus();
        return false;
    }
    
     if (rePwd.value == "")
    {
        window.alert("Re-type passwarod required.");
        rePwd.focus();
        return false;
    }
    
    if(newPwd.value != rePwd.value){
    	 window.alert("password and retype password doesn't match");
        rePwd.focus();
        return false;
    }
    return true;
}


function getCompanyName(){
		category=document.getElementById('category').value;
		var url = "/Eshop/ajaxUtilInfo?action=getCompanyName&category="+category;
		
		xmlhttp = GetXmlHttpObject();
		if (xmlhttp === null) {
			alert('Your browser does not support XMLHTTP!');
			return;
		}
		xmlhttp.open("GET", url, true);
		xmlhttp.onreadystatechange = stateChangedCMPName;
		xmlhttp.send(null);
}
	
function stateChangedCMPName() {
   if(xmlhttp.readyState==4)
    {
        if(xmlhttp.status==200)
            {
                 document.getElementById('cmpName').innerHTML=xmlhttp.responseText;;
            }
        else
        {
           alert("Error loading pagen"+ xmlhttp.status +":"+xmlhttp.statusText);
        }
    }

}


function getProductList(){
		var url = "/Eshop/ajaxUtilInfo?action=getProductList";
		
		xmlhttp = GetXmlHttpObject();
		if (xmlhttp === null) {
			alert('Your browser does not support XMLHTTP!');
			return;
		}
		xmlhttp.open("GET", url, true);
		xmlhttp.onreadystatechange = stateChangedProList;
		xmlhttp.send(null);
}

function getShippingInfo(){
		dd=document.getElementById('dd').value;
		mm=document.getElementById('mm').value;
		yy=document.getElementById('yy').value;
		var url = "/Eshop/ajaxUtilInfo?action=getShippingInfo&date="+dd+"/"+mm+"/"+yy;
		xmlhttp = GetXmlHttpObject();
		if (xmlhttp === null) {
			alert('Your browser does not support XMLHTTP!');
			return;
		}
		xmlhttp.open("GET", url, true);
		xmlhttp.onreadystatechange = stateChangedProList;
		xmlhttp.send(null);
}
	
function stateChangedProList() {
   if(xmlhttp.readyState==4)
    {
        if(xmlhttp.status==200)
            {
                 document.getElementById('centerPan').innerHTML=xmlhttp.responseText;;
            }
        else
        {
           alert("Error loading pagen"+ xmlhttp.status +":"+xmlhttp.statusText);
        }
    }

}


function checkLoginId(){
		var loginId=document.getElementById('loginId').value;
		if(loginId == ""){
			window.alert('Login id required');
			loginId.focus();
			return false;
		}
		var url = "/Eshop/ajaxUtilInfo?action=checkLoginId&loginId="+loginId;
		xmlhttp = GetXmlHttpObject();
	if (xmlhttp === null) {
		alert('Your browser does not support XMLHTTP!');
		return;
	}
	
	
	
	xmlhttp.open("GET", url, true);
	
	xmlhttp.onreadystatechange = changeStateCheckLoginId;
	xmlhttp.send(null);
	}
	
	function changeStateCheckLoginId() {
	   if(xmlhttp.readyState==4)
    {
        if(xmlhttp.status==200)
            {
                 document.getElementById('checkId').innerHTML=xmlhttp.responseText;;
            }
        else
        {
           alert("Error loading pagen"+ xmlhttp.status +":"+xmlhttp.statusText);
        }
    }

}


function getCompanyNameAccCat(){
		category=document.getElementById('category').value;
		var url = "/Eshop/ajaxUtilInfo?action=getCompanyNameAccCat&category="+category;
		
		xmlhttp = GetXmlHttpObject();
		if (xmlhttp === null) {
			alert('Your browser does not support XMLHTTP!');
			return;
		}
		xmlhttp.open("GET", url, true);
		xmlhttp.onreadystatechange = stateChangedCMPName1;
		xmlhttp.send(null);
}
	
function stateChangedCMPName1() {
   if(xmlhttp.readyState==4)
    {
        if(xmlhttp.status==200)
            {
                 document.getElementById('cmpName1').innerHTML=xmlhttp.responseText;;
            }
        else
        {
           alert("Error loading pagen"+ xmlhttp.status +":"+xmlhttp.statusText);
        }
    }

}

function getProductAccCon(){
		category=document.getElementById('category').value;
		companyName=document.getElementById('companyName').value;
		var url = "/Eshop/ajaxUtilInfo?action=getProductList1&category="+category+"&companyName="+companyName;
			
		xmlhttp = GetXmlHttpObject();
		if (xmlhttp === null) {
			alert('Your browser does not support XMLHTTP!');
			return;
		}
		xmlhttp.open("GET", url, true);
		xmlhttp.onreadystatechange = stateChangedProList;
		xmlhttp.send(null);
}
	
	
	
function addToCart(id){
		var url = "/Eshop/ajaxUtilInfo?action=addToCart&id="+id;
			
		xmlhttp = GetXmlHttpObject();
		if (xmlhttp === null) {
			alert('Your browser does not support XMLHTTP!');
			return;
		}
		xmlhttp.open("GET", url, true);
		xmlhttp.onreadystatechange = stateChangedAddToCart;
		xmlhttp.send(null);

}


function stateChangedAddToCart() {
   if(xmlhttp.readyState==4)
    {
        if(xmlhttp.status==200)
            {
                 document.getElementById('sc').innerHTML=xmlhttp.responseText;;
            }
        else
        {
           alert("Error loading pagen"+ xmlhttp.status +":"+xmlhttp.statusText);
        }
    }

}


function removeItem(){

	var id;
	var ins = document.cs.id;
	for(i=0;i<ins.length;i++)
	{
		if(ins[i].checked){
			id=ins[i].value;
		}
	}
	var url = "/Eshop/ajaxUtilInfo?action=removeItemFromCart&id="+id;
			
		xmlhttp = GetXmlHttpObject();
		if (xmlhttp === null) {
			alert('Your browser does not support XMLHTTP!');
			return;
		}
		xmlhttp.open("GET", url, true);
		xmlhttp.onreadystatechange = stateChangedProList;
		xmlhttp.send(null);
}





