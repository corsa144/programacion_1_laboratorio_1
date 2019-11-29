using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace practica1
{
    class orquesta
    {
       public  string nombre;
        public string lugar;
        public tipoOrquesta tipo;

        public enum tipoOrquesta { Sinfonica,Camara,Filarmonica}

        public orquesta() { }

        public orquesta(string nombre, string lugar, string tipo)
        {
            this.nombre = nombre;
            this.lugar = lugar;
            this.tipo = tipo;
        }

        public string getOrquestaToString() {
            StringBuilder sb = new StringBuilder();
            sb.AppendFormat("Nombre Orquesta: {0},lugar: {1},Tipo:{2}\n", this.nombre, this.lugar, this.tipo);

            return sb.ToString();
        }

    }
}
