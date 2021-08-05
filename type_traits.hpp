#ifndef cpp_type_traits_hpp_20200905_125225_PDT
#define cpp_type_traits_hpp_20200905_125225_PDT

#include <type_traits>

namespace cpp {
#if __cplusplus < 201402L
  template<bool B, typename T = void>
    using enable_if_t = typename std::enable_if<B, T>::type;
  template<typename T>
    using make_unsigned_t = typename std::make_unsigned<T>::type;
  template<typename T>
    using remove_const_t = typename std::remove_const<T>::type;
  template<typename t>
    using remove_reference_t = typename std::remove_reference<t>::type;
  template<typename t>
    using underlying_type_t = typename std::underlying_type<t>::type;
  template< class T >
    using decay_t = typename std::decay<T>::type;
#endif
#if __cplusplus < 202002L
  template<typename T>
    struct type_identity { using type = T; };

  template<typename T>
    using type_identity_t = typename type_identity<T>::type;
#endif
} /* namespace cpp */

#endif//cpp_type_traits_hpp_20200905_125225_PDT
