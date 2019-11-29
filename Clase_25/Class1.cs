using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace practica1
{
    class Class1
    {
        private int edad;
        public string nombre;
        public string apellido;
        public Instrumento instrumento;
        public orquesta orquesta;

        public Class1(string nombre,string apellido,int edad, Instrumento instrumento,orquesta orquesta)
        {
            this.nombre = nombre;
            this.apellido = apellido;
            this.edad = edad;
            this.instrumento = instrumento;
            this.orquesta = orquesta;
        }

       public void setEdad(int edad)
        {
            this.edad = edad;
        }

        public int getEdad()
        {
            return this.edad;
        }

        public void cumplirAnios()
        {
            this.edad++;
        }
    }
}
