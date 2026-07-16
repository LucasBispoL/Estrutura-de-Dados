"# Estrutura-de-Dados" 

Isso é um teste de como funciona o Git e GitHub.
Estou colocando algumas implementações que fiz durante a matéria de 
Algoritmos e Estrutura de Dados.

-- Problemas para resolver:

In file included from sorts.cpp:2:0,
                 from main.cpp:7:
classes.cpp:448:13: error: stray '\303' in program
 int buscaBinÃ¡riaLista (int x, DoublyLinkedList C){
             ^
classes.cpp:448:14: error: stray '\241' in program
 int buscaBinÃ¡riaLista (int x, DoublyLinkedList C){
              ^
In file included from main.cpp:2:0:
CircularlyLinkedList.cpp:5:11: error: redefinition of 'const int erro'
 const int erro = -1;
           ^~~~
In file included from main.cpp:1:0:
ArrayDinamico.cpp:4:11: note: 'const int erro' previously defined here
 const int erro = -1;
           ^~~~
In file included from main.cpp:2:0:
CircularlyLinkedList.cpp:6:11: error: redefinition of 'const int aceita'
 const int aceita = 0;
           ^~~~~~
In file included from main.cpp:1:0:
ArrayDinamico.cpp:5:11: note: 'const int aceita' previously defined here
 const int aceita = 0;
           ^~~~~~
In file included from heap.cpp:1:0,
                 from main.cpp:3:
ArrayDinamico.cpp:4:11: error: redefinition of 'const int erro'
 const int erro = -1;
           ^~~~
In file included from main.cpp:1:0:
ArrayDinamico.cpp:4:11: note: 'const int erro' previously defined here
 const int erro = -1;
           ^~~~
In file included from heap.cpp:1:0,
                 from main.cpp:3:
ArrayDinamico.cpp:5:11: error: redefinition of 'const int aceita'
 const int aceita = 0;
           ^~~~~~
In file included from main.cpp:1:0:
ArrayDinamico.cpp:5:11: note: 'const int aceita' previously defined here
 const int aceita = 0;
           ^~~~~~
In file included from heap.cpp:1:0,
                 from main.cpp:3:
ArrayDinamico.cpp:7:7: error: redefinition of 'class ArrayDinamico'
 class ArrayDinamico{
       ^~~~~~~~~~~~~
In file included from main.cpp:1:0:
ArrayDinamico.cpp:7:7: error: previous definition of 'class ArrayDinamico'
 class ArrayDinamico{
       ^~~~~~~~~~~~~
In file included from heap.cpp:2:0,
                 from main.cpp:3:
no.cpp:4:8: error: redefinition of 'struct No'
 struct No {
        ^~
In file included from CircularlyLinkedList.cpp:2:0,
                 from main.cpp:2:
no.cpp:4:8: error: previous definition of 'struct No'
 struct No {
        ^~
In file included from heap.cpp:2:0,
                 from main.cpp:3:
no.cpp:13:8: error: redefinition of 'struct No_DE'
 struct No_DE{
        ^~~~~
In file included from CircularlyLinkedList.cpp:2:0,
                 from main.cpp:2:
no.cpp:13:8: error: previous definition of 'struct No_DE'
 struct No_DE{
        ^~~~~
In file included from heap.cpp:2:0,
                 from main.cpp:3:
no.cpp:25:8: error: redefinition of 'struct Node'
 struct Node {
        ^~~~
In file included from CircularlyLinkedList.cpp:2:0,
                 from main.cpp:2:
no.cpp:25:8: error: previous definition of 'struct Node'
 struct Node {
        ^~~~
In file included from main.cpp:3:0:
heap.cpp:21:9: error: 'int heap::pai(int)' conflicts with a previous declaration
         };
         ^
heap.cpp:14:13: note: previous declaration 'int heap::pai'
         int pai; // Pai do nÃ³ i
             ^~~
heap.cpp:25:9: error: 'int heap::esq(int)' conflicts with a previous declaration
         };
         ^
heap.cpp:15:13: note: previous declaration 'int heap::esq'
         int esq; // Filho esquerdo do nÃ³ i
             ^~~
heap.cpp:29:9: error: 'int heap::dir(int)' conflicts with a previous declaration
         };
         ^
heap.cpp:16:13: note: previous declaration 'int heap::dir'
         int dir; // Filho direito do nÃ³ i
             ^~~
heap.cpp:59:1: error: expected ';' after class definition
 }
 ^
heap.cpp: In member function 'void heap::heapify(int)':
heap.cpp:32:27: error: lvalue required as unary '&' operand
             int e = &esq(i);
                           ^
heap.cpp:33:27: error: lvalue required as unary '&' operand
             int d = &dir(i);
                           ^
In file included from main.cpp:4:0:
merge.cpp: In function 'void merge(int*, int, int, int)':
merge.cpp:6:13: error: declaration of 'int l [nL]' shadows a parameter
     int l[nL], r[nR];
             ^
merge.cpp:6:20: error: declaration of 'int r [nR]' shadows a parameter
     int l[nL], r[nR];
                    ^
merge.cpp:12:22: error: ISO C++ forbids comparison between pointer and integer [-fpermissive]
             if(r[j] <l<i){
                      ^
merge.cpp:13:20: error: invalid types 'int*[int [nL]]' for array subscript
                 a[l] = r[j];
                    ^
merge.cpp:17:20: error: invalid types 'int*[int [nL]]' for array subscript
                 a[l] = l[i];
                    ^
merge.cpp:20:14: error: lvalue required as increment operand
             l++;
              ^~
merge.cpp:23:16: error: lvalue required as increment operand
             a[l++] = r[j++];
                ^~
merge.cpp: In function 'void merge_sort(int*, int, int)':
merge.cpp:31:22: error: expected primary-expression before ']' token
         merge_sort(a[], l, m);
                      ^
merge.cpp:32:22: error: expected primary-expression before ']' token
         merge_sort(a[], m+1, r);
                      ^
merge.cpp:33:17: error: expected primary-expression before ']' token
         merge(a[],l,m,r);
                 ^
In file included from main.cpp:5:0:
no.cpp: At global scope:
no.cpp:4:8: error: redefinition of 'struct No'
 struct No {
        ^~
In file included from CircularlyLinkedList.cpp:2:0,
                 from main.cpp:2:
no.cpp:4:8: error: previous definition of 'struct No'
 struct No {
        ^~
In file included from main.cpp:5:0:
no.cpp:13:8: error: redefinition of 'struct No_DE'
 struct No_DE{
        ^~~~~
In file included from CircularlyLinkedList.cpp:2:0,
                 from main.cpp:2:
no.cpp:13:8: error: previous definition of 'struct No_DE'
 struct No_DE{
        ^~~~~
In file included from main.cpp:5:0:
no.cpp:25:8: error: redefinition of 'struct Node'
 struct Node {
        ^~~~
In file included from CircularlyLinkedList.cpp:2:0,
                 from main.cpp:2:
no.cpp:25:8: error: previous definition of 'struct Node'
 struct Node {
        ^~~~
In file included from SinglyLinkedList.cpp:2:0,
                 from main.cpp:6:
no.cpp:4:8: error: redefinition of 'struct No'
 struct No {
        ^~
In file included from CircularlyLinkedList.cpp:2:0,
                 from main.cpp:2:
no.cpp:4:8: error: previous definition of 'struct No'
 struct No {
        ^~
In file included from SinglyLinkedList.cpp:2:0,
                 from main.cpp:6:
no.cpp:13:8: error: redefinition of 'struct No_DE'
 struct No_DE{
        ^~~~~
In file included from CircularlyLinkedList.cpp:2:0,
                 from main.cpp:2:
no.cpp:13:8: error: previous definition of 'struct No_DE'
 struct No_DE{
        ^~~~~
In file included from SinglyLinkedList.cpp:2:0,
                 from main.cpp:6:
no.cpp:25:8: error: redefinition of 'struct Node'
 struct Node {
        ^~~~
In file included from CircularlyLinkedList.cpp:2:0,
                 from main.cpp:2:
no.cpp:25:8: error: previous definition of 'struct Node'
 struct Node {
        ^~~~
In file included from main.cpp:6:0:
SinglyLinkedList.cpp:5:11: error: redefinition of 'const int erro'
 const int erro = -1;
           ^~~~
In file included from main.cpp:1:0:
ArrayDinamico.cpp:4:11: note: 'const int erro' previously defined here
 const int erro = -1;
           ^~~~
In file included from main.cpp:6:0:
SinglyLinkedList.cpp:6:11: error: redefinition of 'const int aceita'
 const int aceita = 0;
           ^~~~~~
In file included from main.cpp:1:0:
ArrayDinamico.cpp:5:11: note: 'const int aceita' previously defined here
 const int aceita = 0;
           ^~~~~~
In file included from sorts.cpp:2:0,
                 from main.cpp:7:
classes.cpp:9:11: error: redefinition of 'const int erro'
 const int erro = -1;
           ^~~~
In file included from main.cpp:1:0:
ArrayDinamico.cpp:4:11: note: 'const int erro' previously defined here
 const int erro = -1;
           ^~~~
In file included from sorts.cpp:2:0,
                 from main.cpp:7:
classes.cpp:10:11: error: redefinition of 'const int aceita'
 const int aceita = 0;
           ^~~~~~
In file included from main.cpp:1:0:
ArrayDinamico.cpp:5:11: note: 'const int aceita' previously defined here
 const int aceita = 0;
           ^~~~~~
In file included from sorts.cpp:2:0,
                 from main.cpp:7:
classes.cpp:15:7: error: redefinition of 'class ArrayDinamico'
 class ArrayDinamico{
       ^~~~~~~~~~~~~
In file included from main.cpp:1:0:
ArrayDinamico.cpp:7:7: error: previous definition of 'class ArrayDinamico'
 class ArrayDinamico{
       ^~~~~~~~~~~~~
In file included from sorts.cpp:2:0,
                 from main.cpp:7:
classes.cpp:72:8: error: redefinition of 'struct No'
 struct No {
        ^~
In file included from CircularlyLinkedList.cpp:2:0,
                 from main.cpp:2:
no.cpp:4:8: error: previous definition of 'struct No'
 struct No {
        ^~
In file included from sorts.cpp:2:0,
                 from main.cpp:7:
classes.cpp:82:7: error: redefinition of 'class SinglyLinkedList'
 class SinglyLinkedList {
       ^~~~~~~~~~~~~~~~
In file included from main.cpp:6:0:
SinglyLinkedList.cpp:8:7: error: previous definition of 'class SinglyLinkedList'
 class SinglyLinkedList {
       ^~~~~~~~~~~~~~~~
In file included from sorts.cpp:2:0,
                 from main.cpp:7:
classes.cpp:185:7: error: redefinition of 'class CircularlyLinkedList'
 class CircularlyLinkedList{
       ^~~~~~~~~~~~~~~~~~~~
In file included from main.cpp:2:0:
CircularlyLinkedList.cpp:8:7: error: previous definition of 'class CircularlyLinkedList'
 class CircularlyLinkedList{
       ^~~~~~~~~~~~~~~~~~~~
In file included from sorts.cpp:2:0,
                 from main.cpp:7:
classes.cpp:254:8: error: redefinition of 'struct No_DE'
 struct No_DE{
        ^~~~~
In file included from CircularlyLinkedList.cpp:2:0,
                 from main.cpp:2:
no.cpp:13:8: error: previous definition of 'struct No_DE'
 struct No_DE{
        ^~~~~
In file included from sorts.cpp:2:0,
                 from main.cpp:7:
classes.cpp: In constructor 'DoublyLinkedList::DoublyLinkedList()':
classes.cpp:288:52: warning: passing NULL to non-pointer argument 1 of 'No_DE::No_DE(int, No_DE*, No_DE*)' [-Wconversion-null]
             header = new No_DE(NULL,nullptr,nullptr);
                                                    ^
classes.cpp:289:52: warning: passing NULL to non-pointer argument 1 of 'No_DE::No_DE(int, No_DE*, No_DE*)' [-Wconversion-null]
             trailer = new No_DE(NULL,header,nullptr);
                                                    ^
classes.cpp: At global scope:
classes.cpp:448:15: error: expected initializer before 'riaLista'
 int buscaBinÃ¡riaLista (int x, DoublyLinkedList C){
               ^~~~~~~~