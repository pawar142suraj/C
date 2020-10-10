x=*ptr++ => *(ptr)++ => x=*ptr; 
			ptr=ptr+1;

x=*++ptr => *(++ptr) => ptr=ptr+1;
			x=*ptr; 

x=(*ptr)++ => (*ptr)++ => x=*ptr;
				*ptr=*ptr+1;

x=++*ptr => ++(*ptr) => *ptr=*ptr+1; 
			x=*ptr;		
		

