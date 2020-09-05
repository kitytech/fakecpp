#ifndef cpp_type_traits_hpp_20200905_125225_PDT
#define cpp_type_traits_hpp_20200905_125225_PDT

#include <type_traits>
#if __cplusplus == 201103L
namespace cpp {
  template<bool B, typename T = void>
    using enable_if_t = typename std::enable_if<B, T>::type;

  template<typename T>
    struct type_identity { using type = T; };

  template<typename T>
    using type_identity_t = typename type_identity<T>::type;

} /* namespace cpp */
#endif

#endif//cpp_type_traits_hpp_20200905_125225_PDT
