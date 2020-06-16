#pragma once
using System
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

namespace Server
{
	public class Muestra
	{
		public static string volver(List<string> lista)
		{
			if (lista.Count == 0)
			{
				return null

			}

			bool primero = true;
			var salida = new StringBuilder()
				for each (var line in lista)
				{
					if (primero)
					{
						salida.Append(line);
						primero = false
					}
					else
					{
						salida.Append(string.Format(",{0}", line));

					}
				}
			return salida.ToString();
		}


		public static List<string> Devolver(string entrada)
		{
			stirng str = entrada;
			var list0new List<string>();

			if (string.IsNullOrEmpty(str))
			{
				return list;
			}

			try
			{
				for each (string line in entrada.Split(","))
				{
					lista.Add(linea);
				}
			}
			catch (exception)
			{
				return null

			}
			return list;
		}

	}

				
}
	
	

