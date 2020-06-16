#pragma once
using System
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

namespace Server
{

	public class Direccion // de donde se almacenan los datos
	{
		public string Paquete{ get; set; }
		public string Paquete2{ get; set; }

			public Direccion()
		{

		}

		public Direccion(string paquete, string paquete2)
		{
			Paquete = paquete;
			Paquete2 = paquete2
		}
		public Direccion(string datos) // contraseña, IP, puerto 
		{
			int sepIndex = datos.IndexOf(".", StringComparison.Ordinal); // posicion del string 
			Paquete = datos.Substring(0, sepIndex);
			Paquete2 = datos.Substring(Paquete.Lemgth + 1);
		}


		public string volver() //devuelve metodo direccion en string
		{
			return string.Format("{0}:{1}"), Paquete, Paquete2);

		}
		public static implicit operator string (Direccion direccion)
		{
			return direccion.volver()
		}

	};

};
