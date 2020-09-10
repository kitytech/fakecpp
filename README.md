# fakecpp

A little project to bandage standard library features that are missing in certain embedded toolchains.  This library does not aim to provide compliance with any particular C++ standard, but is intended to make C++11 easier to work with by (hopefully) adding some things that are present in later versions.  

This library is intended mainly for use with and support of the `kity` and related projects, but is being published in case anyone else might find it useful as a quick band-aid solution for their own projects.

### Prerequisites


A modern-ish C++ compiler that is at least compatible with the C++11 standard.

### Installing

A symbolic link, `cpp`, exists in the source directory; just add the source directory as a search path for your build system and then:

```
#include <cpp/cpp.hpp>      // alias the "std" namespace as "cpp"
#include <cpp/memory.hpp>   // same name as standard header, but with "hpp" extension;
                            // this header will include <memory> and also define any
                            // bandaid code, depending on your compiler's "std" setting.

class Foo {};
int main()
{
  auto unique_foo = cpp::make_unique<Foo>();      // using "cpp" instead of "std";
                                                  // if you're using c++14 (or later), this will be
                                                  // the version shipped with your standard
                                                  // library; if using c++11, this will be the
                                                  // fakecpp version.
  return 0;
}
```

This library will be header-only for as long as I can pull it off.

## Running the tests

No tests right now!  Living dangerously and rapid-developing it as necessary for other libraries to function properly.

## License

This project is licensed under the LGPL v2.1 - see the [LICENSE.md](LICENSE.md) file for details
