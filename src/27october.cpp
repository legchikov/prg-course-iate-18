// #include <iostream>
// using namespace std;

// int main(){
//     cout << "Hello 27 October!" << endl;
//     return 0;
// }



// Что выведет на экран программа?
// #include <iostream> 
// using namespace std; 

// int main() { 
//     unsigned int x = 3; 
//     while (x-- >= 0) { 
//         cout << x;
//     } 
//     return 0; 
// } 


// Варианты ответов:

// a) 3 2 1 0
// b) 2 1 0 -1
// c) infinite loop
// d) -65535


// Объяснение:

// х - беззнаковая целая переменная, она не может стать отрицательной.
// Поэтому выражение (x–- >= 0) всегда будет true, поэтому будет бесконечный цикл.

// Ответ c




// Что выведет на экран программа?
// #include <iostream> 
// using namespace std; 

// int main() { 
//     int x = 3, k; 
//     while (--x >= 0) { 
//         cout << x << endl;
//     } 
//     return 0; 
// } 

// Варианты ответа:

// a) 3 2 1 0
// b) 2 1 0 -1
// c) infinite loop
// d) -65535



// Объяснение:

// Here x is an integer with value 3. 
// Loop runs till (x >= 0) ; 2, 1, 0 will be printed and after x >= 0, 
// condition becomes true again and print -1 after false.

// Ответ b





// Что выведет на экран программа?
// #include <iostream> 
// using namespace std; 

// int main() { 
//     int x = -10; 
//     while (x++ != 0) 
//         ; 
//     cout << x;
//     return 0; 
// } 



// Варианты ответа:

// a) 0
// b) 1
// c) -1
// d) infinite


// Объяснение:

// The semicolon is after the while loop. 
// while the value of x become 0, it comes out of while loop. 
// Due to post-increment on x the value of x while printing becomes 1.


// Ответ b




// Что выведет на экран программа?
// #include <iostream> 
// using namespace std; 

// int main() { 
//     if (!(cout << "hello")) 
//         cout << "world" << endl; 
//     else
//         cout << " else part" << endl; 
  
//     return 0; 
// } 



// Что выведет на экран программа?
// #include <iostream> 

// int main() { 
//     int a = 014; 
//     std::cout << a << std::endl; 
//     ; 
//     return 0; 
// } 



// Что выведет на экран программа?
// #include <iostream> 

// int main() { 
//     if (int q = -1) 
//         std::cout << "if part"; 
//     else
//         std::cout << "else part"; 
//     return 0; 
// }





// Что выведет на экран программа?
// #include <iostream> 
// using namespace std; 

// int main() { 
//     int a = 0xC; 
//     std::cout << std::dec << a << std::endl; 
//     ; 
//     return 0; 
// } 



// Что выведет на экран программа?
// #include <iostream> 

// int main() { 
//     if (float q = 0.0) 
//         std::cout << "if part"; 
//     else
//         std::cout << "else part"; 
//     return 0; 
// } 




// Что выведет на экран программа?
// #include <iostream> 

// int main() { 
//     int a, b; 
//     if ((a = 5) || (b = 0)) 
//         std::cout << "if part"; 
//     else
//         std::cout << "else part"; 
//     return 0; 
// } 



// Что выведет на экран программа?
// #include <iostream> 
// using namespace std; 

// int main() { 
//     int arr[] = { 4, 5, 6, 7 }; 
//     int* p = (arr + 1); 
//     cout << *arr + 10; 
//     return 0; 
// } 


// Варианты ответов:
// a. 12
// b. 15
// c. 14
// d. error


// Ответ c















// Дано два отсортированных массива размера N и M.
// Необходимо сделать слияние (merge) двух отсортированных массива в один размера N+M.

// Input:  arr1[] = {1, 3, 4, 5}  
//         arr2[] = {2, 4, 6, 8}
// Output: arr3[] = {1, 2, 3, 4, 5, 6, 7, 8}

// Input:  arr1[] = {5, 8, 9}  
//         arr2[] = {4, 7, 8}
// Output: arr3[] = {4, 5, 7, 8, 8, 9}

// Продолжение 1:
// Переписать программу с использованием указателей (оператор обращения по индексу [] запрещен)

// Продолжение 2:
// Выделить фрагмент кода отвечающий за за слияние в отдельную функцию mergeArrays,
// на вход которой подаются указатели на входные массивы, размеры массивов и указатель на выходной массив.
// Функция не должна возвращать никакого значения.