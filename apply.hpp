#ifndef fake_apply_hpp_20200815_173903_PDT
#define fake_apply_hpp_20200815_173903_PDT

#include "cpp.hpp"
#include <utility>
#include <tuple>

#if __cplusplus == 201103L
namespace cpp {
  namespace impl 
  {
    template <typename FnT, typename TupleT, bool Done, int Total, int... N>
    struct apply
    {
      static void invoke(FnT&& fn, TupleT&& t)
      {
        return apply<FnT, TupleT, Total == 1 + sizeof...(N), Total, N..., sizeof...(N)>::invoke(std::forward<FnT>(fn), std::forward<TupleT>(t));
      }
    };

    template <typename FnT, typename TupleT, int Total, int... N>
    struct apply<FnT, TupleT, true, Total, N...>
    {
      static void invoke(FnT& fn, TupleT&& t)
      {
        return fn(std::get<N>(std::forward<TupleT>(t))...);
      }
    };
  }

  template <typename FnT, typename TupleT>
  void apply(FnT&& fn, TupleT&& t)
  {
    typedef typename std::decay<TupleT>::type ttype;
    return impl::apply<FnT, TupleT, 0 == std::tuple_size<ttype>::value, std::tuple_size<ttype>::value>::invoke(std::forward<FnT>(fn), std::forward<TupleT>(t));
  }
} /* namespace cpp */
#endif


#endif//fake_apply_hpp_20200815_173903_PDT
