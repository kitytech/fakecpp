#ifndef cpp_tuple_hpp_20200905_125402_PDT
#define cpp_tuple_hpp_20200905_125402_PDT

#include <cstddef>
#include <tuple>

#if __cplusplus == 201103L
namespace cpp {
  template<size_t I, typename T>
    using tuple_element_t = typename std::tuple_element<I, T>::type;
} /* namespace cpp */
#endif

#endif//cpp_tuple_hpp_20200905_125402_PDT
