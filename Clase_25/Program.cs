using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace practica1
{
    class Program
    {
        static void Main(string[] args)
        {
            Class1 p = new Class1("Carla","Perez","26",instrumento,orquesta);
            Console.WriteLine("Nombre:{0 },Apellido: {1},Edad:{2},\nInstrumento{3} orquesta{4}", p.nombre, p.apellido, p.getEdad(),Class1.Instrumento.viento,Class1.orquesta.Sinfonica);
            Console.ReadLine();

            Class1 p2 = new Class1();
            Console.WriteLine("Nombre:{0 },Apellido: {1},Edad:{2}", p2.nombre, p2.apellido, p2.getEdad());
            Console.ReadLine();

           orquesta p3 = new orquesta();
            Console.WriteLine("Nombre:{0 },Lugar: {1},Tipo:{2}", p3.nombre, p3.lugar, p3.tipo);
            Console.ReadLine();

            Instrumento p4 = new Instrumento();
            Console.WriteLine("Nombre:{0 },Tipo: {1}", p4.nombre, p4.instrumento);
            Console.ReadLine();
        }
    }
}
