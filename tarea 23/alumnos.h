struct alumnos
	{
		int edad;
		char nombre[60];
		char genero;
		char carrera[25];
		char ncuenta[10];
	};
	
	typedef struct alumnos ALUMNO;	
	
	ALUMNO nuevoAlumno(){
		ALUMNO tmp;
		printf ("introduce la edad:"); 
		scanf("%d", &tmp.edad);
		
		printf("Introduce el nombre:");
		fflush(stdin);
		gets(tmp.nombre);
		
		printf ("introduce el genero:"); 
		scanf("%c", &tmp.genero);
		
		printf("Introduce carrera:");
		fflush(stdin);
		gets(tmp.carrera);

		printf("Introduce numero de cuenta:");
		fflush(stdin);
		gets(tmp.ncuenta);			
		return tmp;
	}
	void imprimeAlumno(ALUMNO al){
		printf("*******************************\n");
		printf("Nombre:%s\n",al.nombre);
		printf("Edad:%d\n",al.edad);
		printf("genero:%c\n",al.genero);
		printf("carrera:%s\n",al.carrera);
		printf("ncuenta:%s\n",al.ncuenta);
					}
