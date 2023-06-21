# Язык программирования C

##### Компилятор gcc GNU Compiler Collection

Программа-установщик компилятора <b>minGW</b>
(Добавить в Path путь C:\MinGW\bin)

Для запуска программы на C в PowerShell ввести:
> gcc hello_world.C
> .\a

##### Расширения для VS Code:
* C/C++
* Code Runner (после установки программа компилируется нажатием CTRL + Alt + N)

В .vscode/tasks.json в список args добавить "-std=c99", после этого программа запускается CTRL + Shift + B