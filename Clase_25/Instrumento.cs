using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace practica1
{
    class Instrumento
    {
        public string nombre;
        public  tipoInstrumento instrumento;

        public enum tipoInstrumento{ viento, cuerda, tambor}

        public Instrumento() { }

        public Instrumento(string nombre,  string tipo)
        {
            this.nombre = nombre;
            this.tipo = tipo;
        }
    }
}
