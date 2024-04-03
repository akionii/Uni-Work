#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Post
{
private:
    string fecha;
    string contenido;
    int likes;
    vector<string> comentarios;
    int compartidos;

public:
    Post(string fecha, string contenido) : fecha(fecha), contenido(contenido), likes(0), compartidos(0) {}

    void setContenido(const string &nuevoContenido) { contenido = nuevoContenido; }
    string getContenido() const { return contenido; }

    void like() { ++likes; }
    int getLikes() const { return likes; }

    void agregarComentario(const string &comentario) { comentarios.push_back(comentario); }
    vector<string> getComentarios() const { return comentarios; }

    void compartir() { ++compartidos; }
    int getCompartidos() const { return compartidos; }
};

int main()
{
    Post miPost("15.03.2024", "Buneos dias");
    miPost.like();
    miPost.like();
    miPost.agregarComentario("Este es un comentario.");
    miPost.compartir();

    cout << "Contenido del post: " << miPost.getContenido() << endl;
    cout << "Likes: " << miPost.getLikes() << ", Comentarios: " << miPost.getComentarios().size() << ", Compartidos: " << miPost.getCompartidos() << endl;
    return 0;
}
