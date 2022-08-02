#include <iostream>
#include <string>
#include <vector>

int main(int, char **) {
  try {
    // std::cout << "Success!\n";
    // std::cout << "Success!\n";
    // std::cout << "Success"
    //           << "!\n";
    // std::cout << "success" << '\n';

    // int res = 7;
    // std::vector<int> v(10);
    // v[5] = res;
    // std::cout << "Success!\n";

    // std::vector<int> v(10);
    // v[5] = 7;
    // if (v[5] == 7)
    //   std::cout << "Success"
    //             << "!\n";

    // constexpr bool cond = true;
    // if (cond)
    //   std::cout << "Success!\n";
    // else
    //   std::cout << "Fail!\n";

    // bool c = true;
    // if (c)
    //   std::cout << "Success!\n";
    // else
    //   std::cout << "Fail!\n";

    // std::string s = "ape";
    // bool c = "fool" > s;
    // if (c)
    //   std::cout << "Success!\n";

    // std::string s = "ape";
    // if (s == "ape")
    //   std::cout << "Success!\n";

    // std::string s = "ape";
    // if (s == "ape")
    //   std::cout << "Success!\n";

    // std::string s = "ape";
    // if (s == "ape")
    //   std::cout << "Success!\n";

    // std::vector<char> v(5);
    // for (int i = 0; i < v.size(); i++) {
    //   std::cout << "Success!\n";
    // }

    // std::vector<char> v(5);
    // for (int i = 0; i <= v.size(); i++) {
    //   std::cout << "Success!\n";
    // }

    // std::string s = "Success!\n";
    // for (int i = 0; i < s.size(); i++) {
    //   std::cout << s[i];
    // }

    // if (true)
    //   std::cout << "Success!\n";
    // else
    //   std::cout << "Fail!\n";

    // int x = 2000;
    // int c = x;
    // if (c == 2000)
    //   std::cout << "Success!\n";

    // std::string s = "Success!\n";
    // for (int i = 0; i < s.size(); i++) {
    //   std::cout << s.at(i);
    // }

    // std::vector<int> v(5);
    // for (int i = 0; i <= v.size(); i++) {
    //   std::cout << "Success!\n";
    // }

    // int i = 0;
    // int j = 9;
    // while (i <= j)
    //   ++i;
    // if (j < i)
    //   std::cout << "Success!\n";

    // int x = 2;
    // double d = 2 * double(x) + 0.5;
    // if (d == 2 * x + 0.5)
    //   std::cout << "Success!\n";

    // std::string s = "Success!\n";
    // for (int i = 0; i < s.size(); i++) {
    //   std::cout << s.at(i);
    // }

    // int i = 0;
    // int j = 9;
    // while (i <= j)
    //   ++i;
    // if (j < i)
    //   std::t << "Success!\n";

    // int x = 4;
    // double d = 2 * double(x) + 0.5;
    // if (d == 2 * x + 0.5)
    //   std::cout << "Success!\n";

    // std::cout << "Success!\n";

    return 0;
  } catch (std::exception &e) {
    std::cerr << "error: " << e.what() << '\n';
    return 1;
  } catch (...) {
    std::cerr << "Oops: unknown exception!\n";
    return 2;
  }
}
