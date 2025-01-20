# CPP Module 07
42 project

## Topics
- template <typename T>
- グローバルスコープ
- .tppファイル
- explicitキーワード

## Exercises
### Exercise 00: Start with a few functions
- swap, min, max のテンプレートをヘッダー内に定義する
- どのようなargumentにも対応できるようにする（ただし左右の型は同一とする）
- ::swap はグローバルスコープ

### Exercise 01: Iter
- 配列のアドレス、配列サイズ、関数を仮引数にもつtemplate関数を用意する
- 各要素を関数の実引数として渡す

### Exercise 02: Array
- main.cppはファイルとして与えられる
- templateは、Array.hpp (+Array.tppも可) に実装
- Arrayを作るtemplateの実装
- []のoverload, size()メンバ関数

## References

[CPP Module 07(For 42 École Students Only)](https://projects.intra.42.fr/projects/cpp-module-07)

[テンプレート (C++)](https://learn.microsoft.com/ja-jp/cpp/cpp/templates-cpp?view=msvc-170)

[Scope](https://en.cppreference.com/w/cpp/language/scope)

[Templates in C++ with Examples](https://www.geeksforgeeks.org/templates-cpp/)

[std::out_of_range](https://en.cppreference.com/w/cpp/error/out_of_range)

[explicit specifier](https://en.cppreference.com/w/cpp/language/explicit)
