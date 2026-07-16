"# Estrutura-de-Dados" 

Isso é um teste de como funciona o Git e GitHub.
Estou colocando algumas implementações que fiz durante a matéria de 
Algoritmos e Estrutura de Dados.

-- Problemas para resolver:

In file included from main.cpp:1:0:
ArrayDinamico.cpp: In member function 'int ArrayDinamico::Adicionar(int, int)':
ArrayDinamico.cpp:30:53: error: 'erro' was not declared in this scope
             if(posicao < 0 || posicao > tam){return erro;}
                                                     ^~~~
ArrayDinamico.cpp: In member function 'int ArrayDinamico::Remover(int)':
ArrayDinamico.cpp:42:39: error: 'erro' was not declared in this scope
             if(posicao >= tam){return erro;}
                                       ^~~~
ArrayDinamico.cpp: In member function 'int ArrayDinamico::Get(int)':
ArrayDinamico.cpp:51:39: error: 'erro' was not declared in this scope
             if(posicao >= tam){return erro;}
                                       ^~~~
ArrayDinamico.cpp: In member function 'int ArrayDinamico::Set(int, int)':
ArrayDinamico.cpp:56:40: error: 'erro' was not declared in this scope
             if(posicao >= tam) {return erro;}
                                        ^~~~
In file included from heap.cpp:1:0,
                 from main.cpp:3:
ArrayDinamico.cpp: At global scope:
ArrayDinamico.cpp:5:7: error: redefinition of 'class ArrayDinamico'
 class ArrayDinamico{
       ^~~~~~~~~~~~~
In file included from main.cpp:1:0:
ArrayDinamico.cpp:5:7: error: previous definition of 'class ArrayDinamico'
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
merge.cpp:8:13: error: declaration of 'int l [nL]' shadows a parameter
     int l[nL], r[nR];
             ^
merge.cpp:8:20: error: declaration of 'int r [nR]' shadows a parameter
     int l[nL], r[nR];
                    ^
merge.cpp:14:22: error: ISO C++ forbids comparison between pointer and integer [-fpermissive]
             if(r[j] <l<i){
                      ^
merge.cpp:15:20: error: invalid types 'int*[int [nL]]' for array subscript
                 a[l] = r[j];
                    ^
merge.cpp:19:20: error: invalid types 'int*[int [nL]]' for array subscript
                 a[l] = l[i];
                    ^
merge.cpp:22:14: error: lvalue required as increment operand
             l++;
              ^~
merge.cpp:25:16: error: lvalue required as increment operand
             a[l++] = r[j++];
                ^~
merge.cpp: In function 'void merge_sort(int*, int, int)':
merge.cpp:33:22: error: expected primary-expression before ']' token
         merge_sort(a[], l, m);
                      ^
merge.cpp:34:22: error: expected primary-expression before ']' token
         merge_sort(a[], m+1, r);
                      ^
merge.cpp:35:17: error: expected primary-expression before ']' token
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
SinglyLinkedList.cpp: In member function 'int SinglyLinkedList::insere(int, int)':
SinglyLinkedList.cpp:72:39: error: 'erro' was not declared in this scope
         if(idx<0 || idx > tam){return erro;}
                                       ^~~~
In file included from sorts.cpp:2:0,
                 from main.cpp:7:
ArrayDinamico.cpp: At global scope:
ArrayDinamico.cpp:5:7: error: redefinition of 'class ArrayDinamico'
 class ArrayDinamico{
       ^~~~~~~~~~~~~
In file included from main.cpp:1:0:
ArrayDinamico.cpp:5:7: error: previous definition of 'class ArrayDinamico'
 class ArrayDinamico{
       ^~~~~~~~~~~~~
In file included from sorts2.cpp:2:0,
                 from main.cpp:8:
no.cpp:4:8: error: redefinition of 'struct No'
 struct No {
        ^~
In file included from CircularlyLinkedList.cpp:2:0,
                 from main.cpp:2:
no.cpp:4:8: error: previous definition of 'struct No'
 struct No {
        ^~
In file included from sorts2.cpp:2:0,
                 from main.cpp:8:
no.cpp:13:8: error: redefinition of 'struct No_DE'
 struct No_DE{
        ^~~~~
In file included from CircularlyLinkedList.cpp:2:0,
                 from main.cpp:2:
no.cpp:13:8: error: previous definition of 'struct No_DE'
 struct No_DE{
        ^~~~~
In file included from sorts2.cpp:2:0,
                 from main.cpp:8:
no.cpp:25:8: error: redefinition of 'struct Node'
 struct Node {
        ^~~~
In file included from CircularlyLinkedList.cpp:2:0,
                 from main.cpp:2:
no.cpp:25:8: error: previous definition of 'struct Node'
 struct Node {
        ^~~~
In file included from sorts2.cpp:3:0,
                 from main.cpp:8:
ArrayDinamico.cpp:5:7: error: redefinition of 'class ArrayDinamico'
 class ArrayDinamico{
       ^~~~~~~~~~~~~
In file included from main.cpp:1:0:
ArrayDinamico.cpp:5:7: error: previous definition of 'class ArrayDinamico'
 class ArrayDinamico{
       ^~~~~~~~~~~~~
In file included from CircularlyLinkedList.cpp:2:0,
                 from sorts2.cpp:4,
                 from main.cpp:8:
no.cpp:4:8: error: redefinition of 'struct No'
 struct No {
        ^~
In file included from CircularlyLinkedList.cpp:2:0,
                 from main.cpp:2:
no.cpp:4:8: error: previous definition of 'struct No'
 struct No {
        ^~
In file included from CircularlyLinkedList.cpp:2:0,
                 from sorts2.cpp:4,
                 from main.cpp:8:
no.cpp:13:8: error: redefinition of 'struct No_DE'
 struct No_DE{
        ^~~~~
In file included from CircularlyLinkedList.cpp:2:0,
                 from main.cpp:2:
no.cpp:13:8: error: previous definition of 'struct No_DE'
 struct No_DE{
        ^~~~~
In file included from CircularlyLinkedList.cpp:2:0,
                 from sorts2.cpp:4,
                 from main.cpp:8:
no.cpp:25:8: error: redefinition of 'struct Node'
 struct Node {
        ^~~~
In file included from CircularlyLinkedList.cpp:2:0,
                 from main.cpp:2:
no.cpp:25:8: error: previous definition of 'struct Node'
 struct Node {
        ^~~~
In file included from sorts2.cpp:4:0,
                 from main.cpp:8:
CircularlyLinkedList.cpp:5:7: error: redefinition of 'class CircularlyLinkedList'
 class CircularlyLinkedList{
       ^~~~~~~~~~~~~~~~~~~~
In file included from main.cpp:2:0:
CircularlyLinkedList.cpp:5:7: error: previous definition of 'class CircularlyLinkedList'
 class CircularlyLinkedList{
       ^~~~~~~~~~~~~~~~~~~~
In file included from DoublyLinkedList.cpp:2:0,
                 from sorts2.cpp:5,
                 from main.cpp:8:
no.cpp:4:8: error: redefinition of 'struct No'
 struct No {
        ^~
In file included from CircularlyLinkedList.cpp:2:0,
                 from main.cpp:2:
no.cpp:4:8: error: previous definition of 'struct No'
 struct No {
        ^~
In file included from DoublyLinkedList.cpp:2:0,
                 from sorts2.cpp:5,
                 from main.cpp:8:
no.cpp:13:8: error: redefinition of 'struct No_DE'
 struct No_DE{
        ^~~~~
In file included from CircularlyLinkedList.cpp:2:0,
                 from main.cpp:2:
no.cpp:13:8: error: previous definition of 'struct No_DE'
 struct No_DE{
        ^~~~~
In file included from DoublyLinkedList.cpp:2:0,
                 from sorts2.cpp:5,
                 from main.cpp:8:
no.cpp:25:8: error: redefinition of 'struct Node'
 struct Node {
        ^~~~
In file included from CircularlyLinkedList.cpp:2:0,
                 from main.cpp:2:
no.cpp:25:8: error: previous definition of 'struct Node'
 struct Node {
        ^~~~
In file included from SinglyLinkedList.cpp:2:0,
                 from sorts2.cpp:6,
                 from main.cpp:8:
no.cpp:4:8: error: redefinition of 'struct No'
 struct No {
        ^~
In file included from CircularlyLinkedList.cpp:2:0,
                 from main.cpp:2:
no.cpp:4:8: error: previous definition of 'struct No'
 struct No {
        ^~
In file included from SinglyLinkedList.cpp:2:0,
                 from sorts2.cpp:6,
                 from main.cpp:8:
no.cpp:13:8: error: redefinition of 'struct No_DE'
 struct No_DE{
        ^~~~~
In file included from CircularlyLinkedList.cpp:2:0,
                 from main.cpp:2:
no.cpp:13:8: error: previous definition of 'struct No_DE'
 struct No_DE{
        ^~~~~
In file included from SinglyLinkedList.cpp:2:0,
                 from sorts2.cpp:6,
                 from main.cpp:8:
no.cpp:25:8: error: redefinition of 'struct Node'
 struct Node {
        ^~~~
In file included from CircularlyLinkedList.cpp:2:0,
                 from main.cpp:2:
no.cpp:25:8: error: previous definition of 'struct Node'
 struct Node {
        ^~~~
In file included from sorts2.cpp:6:0,
                 from main.cpp:8:
SinglyLinkedList.cpp:5:7: error: redefinition of 'class SinglyLinkedList'
 class SinglyLinkedList {
       ^~~~~~~~~~~~~~~~
In file included from main.cpp:6:0:
SinglyLinkedList.cpp:5:7: error: previous definition of 'class SinglyLinkedList'
 class SinglyLinkedList {
       ^~~~~~~~~~~~~~~~
In file included from main.cpp:8:0:
sorts2.cpp: In function 'void insertion_sort(ArrayDinamico&)':
sorts2.cpp:10:6: error: redefinition of 'void insertion_sort(ArrayDinamico&)'
 void insertion_sort (ArrayDinamico& a){
      ^~~~~~~~~~~~~~
In file included from main.cpp:7:0:
sorts.cpp:6:6: note: 'void insertion_sort(ArrayDinamico&)' previously defined here
 void insertion_sort (ArrayDinamico& a){
      ^~~~~~~~~~~~~~
In file included from main.cpp:8:0:
sorts2.cpp: In function 'void insertion_sort(CircularlyLinkedList&)':
sorts2.cpp:44:24: error: expected primary-expression before ')' token
     while(j>= 0 && k < )
                        ^
sorts2.cpp:45:5: error: expected primary-expression before '}' token
     }
     ^
sorts2.cpp: In function 'ArrayDinamico selection_sort(ArrayDinamico&)':
sorts2.cpp:50:15: error: ambiguating new declaration of 'ArrayDinamico selection_sort(ArrayDinamico&)'
 ArrayDinamico selection_sort(ArrayDinamico& a){
               ^~~~~~~~~~~~~~
In file included from main.cpp:7:0:
sorts.cpp:18:6: note: old declaration 'void selection_sort(ArrayDinamico&)'
 void selection_sort(ArrayDinamico& a){
      ^~~~~~~~~~~~~~
In file included from main.cpp:8:0:
sorts2.cpp: In function 'ArrayDinamico bubble_sort(ArrayDinamico&)':
sorts2.cpp:70:15: error: ambiguating new declaration of 'ArrayDinamico bubble_sort(ArrayDinamico&)'
 ArrayDinamico bubble_sort (ArrayDinamico& a){
               ^~~~~~~~~~~
In file included from main.cpp:7:0:
sorts.cpp:37:6: note: old declaration 'void bubble_sort(ArrayDinamico&)'
 void bubble_sort (ArrayDinamico& a){
      ^~~~~~~~~~~
In file included from main.cpp:8:0:
sorts2.cpp: In function 'ArrayDinamico merge(ArrayDinamico&, ArrayDinamico&)':
sorts2.cpp:91:15: error: redefinition of 'ArrayDinamico merge(ArrayDinamico&, ArrayDinamico&)'
 ArrayDinamico merge(ArrayDinamico& a, ArrayDinamico& b){
               ^~~~~
In file included from main.cpp:7:0:
sorts.cpp:57:15: note: 'ArrayDinamico merge(ArrayDinamico&, ArrayDinamico&)' previously defined here
 ArrayDinamico merge(ArrayDinamico& a, ArrayDinamico& b){
               ^~~~~
In file included from main.cpp:8:0:
sorts2.cpp: In function 'ArrayDinamico merge_sort(ArrayDinamico&)':
sorts2.cpp:123:15: error: redefinition of 'ArrayDinamico merge_sort(ArrayDinamico&)'
 ArrayDinamico merge_sort(ArrayDinamico& a){
               ^~~~~~~~~~
In file included from main.cpp:7:0:
sorts.cpp:89:15: note: 'ArrayDinamico merge_sort(ArrayDinamico&)' previously defined here
 ArrayDinamico merge_sort(ArrayDinamico& a){
               ^~~~~~~~~~
In file included from main.cpp:8:0:
sorts2.cpp: In function 'int partition(ArrayDinamico&, int, int)':
sorts2.cpp:150:5: error: redefinition of 'int partition(ArrayDinamico&, int, int)'
 int partition (ArrayDinamico& a, int l, int r){
     ^~~~~~~~~
In file included from main.cpp:7:0:
sorts.cpp:119:5: note: 'int partition(ArrayDinamico&, int, int)' previously defined here
 int partition (ArrayDinamico& a, int l, int r){
     ^~~~~~~~~
In file included from main.cpp:8:0:
sorts2.cpp: In function 'ArrayDinamico quick_sort(ArrayDinamico&, int, int)':
sorts2.cpp:163:15: error: ambiguating new declaration of 'ArrayDinamico quick_sort(ArrayDinamico&, int, int)'
 ArrayDinamico quick_sort (ArrayDinamico& a, int l, int r){
               ^~~~~~~~~~
In file included from main.cpp:7:0:
sorts.cpp:132:6: note: old declaration 'void quick_sort(ArrayDinamico&, int, int)'
 void quick_sort (ArrayDinamico& a, int l, int r){
      ^~~~~~~~~~
In file included from main.cpp:8:0:
sorts2.cpp: In function 'ArrayDinamico counting_sort(ArrayDinamico&, int)':
sorts2.cpp:172:15: error: ambiguating new declaration of 'ArrayDinamico counting_sort(ArrayDinamico&, int)'
 ArrayDinamico counting_sort (ArrayDinamico& a, int k){
               ^~~~~~~~~~~~~
In file included from main.cpp:7:0:
sorts.cpp:140:6: note: old declaration 'void counting_sort(ArrayDinamico&, int)'
 void counting_sort (ArrayDinamico& a, int k){
      ^~~~~~~~~~~~~
In file included from main.cpp:8:0:
sorts2.cpp: In function 'void radix_sort(ArrayDinamico&)':
sorts2.cpp:193:6: error: redefinition of 'void radix_sort(ArrayDinamico&)'
 void radix_sort(ArrayDinamico& a){
      ^~~~~~~~~~
In file included from main.cpp:7:0:
sorts.cpp:160:6: note: 'void radix_sort(ArrayDinamico&)' previously defined here
 void radix_sort(ArrayDinamico& a){
      ^~~~~~~~~~
In file included from main.cpp:8:0:
sorts2.cpp: In function 'void bucket_sort(ArrayDinamico&)':
sorts2.cpp:199:6: error: ambiguating new declaration of 'void bucket_sort(ArrayDinamico&)'
 void bucket_sort(ArrayDinamico& a){
      ^~~~~~~~~~~
In file included from main.cpp:7:0:
sorts.cpp:166:15: note: old declaration 'ArrayDinamico bucket_sort(ArrayDinamico&)'
 ArrayDinamico bucket_sort(ArrayDinamico& a){
               ^~~~~~~~~~~
In file included from SinglyLinkedList.cpp:2:0,
                 from hashtable.cpp:2,
                 from main.cpp:9:
no.cpp: At global scope:
no.cpp:4:8: error: redefinition of 'struct No'
 struct No {
        ^~
In file included from CircularlyLinkedList.cpp:2:0,
                 from main.cpp:2:
no.cpp:4:8: error: previous definition of 'struct No'
 struct No {
        ^~
In file included from SinglyLinkedList.cpp:2:0,
                 from hashtable.cpp:2,
                 from main.cpp:9:
no.cpp:13:8: error: redefinition of 'struct No_DE'
 struct No_DE{
        ^~~~~
In file included from CircularlyLinkedList.cpp:2:0,
                 from main.cpp:2:
no.cpp:13:8: error: previous definition of 'struct No_DE'
 struct No_DE{
        ^~~~~
In file included from SinglyLinkedList.cpp:2:0,
                 from hashtable.cpp:2,
                 from main.cpp:9:
no.cpp:25:8: error: redefinition of 'struct Node'
 struct Node {
        ^~~~
In file included from CircularlyLinkedList.cpp:2:0,
                 from main.cpp:2:
no.cpp:25:8: error: previous definition of 'struct Node'
 struct Node {
        ^~~~
In file included from hashtable.cpp:2:0,
                 from main.cpp:9:
SinglyLinkedList.cpp:5:7: error: redefinition of 'class SinglyLinkedList'
 class SinglyLinkedList {
       ^~~~~~~~~~~~~~~~
In file included from main.cpp:6:0:
SinglyLinkedList.cpp:5:7: error: previous definition of 'class SinglyLinkedList'
 class SinglyLinkedList {
       ^~~~~~~~~~~~~~~~

c:\Users\conta\OneDrive\Documentos\Faculdade\Códigos\AED\Implementação\Implementação>