#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.String SR::Format(System.String,System.Object)
extern void SR_Format_m70EC8FB39078414D221479390E0E37253EF2D015 (void);
// 0x00000002 System.Exception System.Linq.Error::ArgumentNull(System.String)
extern void Error_ArgumentNull_mC405D19505CA250B5C731803400D8DAF963F0DCD (void);
// 0x00000003 System.Exception System.Linq.Error::ArgumentOutOfRange(System.String)
extern void Error_ArgumentOutOfRange_mBF9354F0EDEE6E4BA57F3DA1663A91A5B61CEB9D (void);
// 0x00000004 System.Exception System.Linq.Error::MoreThanOneMatch()
extern void Error_MoreThanOneMatch_mEC48ECB89552B91EFD9669763848BA1DB97E991D (void);
// 0x00000005 System.Exception System.Linq.Error::NoElements()
extern void Error_NoElements_mE25C4D4F2FE86A32704624613D751BE305953E49 (void);
// 0x00000006 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000007 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
// 0x00000008 System.Func`2<TSource,System.Boolean> System.Linq.Enumerable::CombinePredicates(System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,System.Boolean>)
// 0x00000009 System.Func`2<TSource,TResult> System.Linq.Enumerable::CombineSelectors(System.Func`2<TSource,TMiddle>,System.Func`2<TMiddle,TResult>)
// 0x0000000A System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::SelectMany(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>>)
// 0x0000000B System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::SelectManyIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>>)
// 0x0000000C System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Take(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
// 0x0000000D System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::TakeIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
// 0x0000000E System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::OrderBy(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x0000000F System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::OrderByDescending(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x00000010 System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::ThenBy(System.Linq.IOrderedEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x00000011 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Distinct(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000012 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::DistinctIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000013 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Union(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000014 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::UnionIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000015 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Intersect(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000016 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::IntersectIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000017 System.Boolean System.Linq.Enumerable::SequenceEqual(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000018 System.Boolean System.Linq.Enumerable::SequenceEqual(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000019 TSource[] System.Linq.Enumerable::ToArray(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000001A System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000001B System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::OfType(System.Collections.IEnumerable)
// 0x0000001C System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::OfTypeIterator(System.Collections.IEnumerable)
// 0x0000001D TSource System.Linq.Enumerable::First(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000001E TSource System.Linq.Enumerable::FirstOrDefault(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000001F TSource System.Linq.Enumerable::Last(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000020 TSource System.Linq.Enumerable::SingleOrDefault(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000021 TSource System.Linq.Enumerable::ElementAt(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
// 0x00000022 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Empty()
// 0x00000023 System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000024 System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000025 System.Boolean System.Linq.Enumerable::All(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000026 System.Int32 System.Linq.Enumerable::Count(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000027 System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource)
// 0x00000028 System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000029 TAccumulate System.Linq.Enumerable::Aggregate(System.Collections.Generic.IEnumerable`1<TSource>,TAccumulate,System.Func`3<TAccumulate,TSource,TAccumulate>)
// 0x0000002A System.Int32 System.Linq.Enumerable::Sum(System.Collections.Generic.IEnumerable`1<System.Int32>)
extern void Enumerable_Sum_mCC08CB5DDD498532C9E9D72D8132EFE5B8E034FD (void);
// 0x0000002B System.Void System.Linq.Enumerable/Iterator`1::.ctor()
// 0x0000002C TSource System.Linq.Enumerable/Iterator`1::get_Current()
// 0x0000002D System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/Iterator`1::Clone()
// 0x0000002E System.Void System.Linq.Enumerable/Iterator`1::Dispose()
// 0x0000002F System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/Iterator`1::GetEnumerator()
// 0x00000030 System.Boolean System.Linq.Enumerable/Iterator`1::MoveNext()
// 0x00000031 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/Iterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000032 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/Iterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000033 System.Object System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.get_Current()
// 0x00000034 System.Collections.IEnumerator System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000035 System.Void System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.Reset()
// 0x00000036 System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000037 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Clone()
// 0x00000038 System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::Dispose()
// 0x00000039 System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1::MoveNext()
// 0x0000003A System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereEnumerableIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x0000003B System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x0000003C System.Void System.Linq.Enumerable/WhereArrayIterator`1::.ctor(TSource[],System.Func`2<TSource,System.Boolean>)
// 0x0000003D System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Clone()
// 0x0000003E System.Boolean System.Linq.Enumerable/WhereArrayIterator`1::MoveNext()
// 0x0000003F System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereArrayIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000040 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000041 System.Void System.Linq.Enumerable/WhereListIterator`1::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000042 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Clone()
// 0x00000043 System.Boolean System.Linq.Enumerable/WhereListIterator`1::MoveNext()
// 0x00000044 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereListIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000045 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000046 System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000047 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Clone()
// 0x00000048 System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Dispose()
// 0x00000049 System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2::MoveNext()
// 0x0000004A System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x0000004B System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x0000004C System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x0000004D System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Clone()
// 0x0000004E System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2::MoveNext()
// 0x0000004F System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectArrayIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000050 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000051 System.Void System.Linq.Enumerable/WhereSelectListIterator`2::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000052 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Clone()
// 0x00000053 System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2::MoveNext()
// 0x00000054 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectListIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000055 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000056 System.Void System.Linq.Enumerable/<>c__DisplayClass6_0`1::.ctor()
// 0x00000057 System.Boolean System.Linq.Enumerable/<>c__DisplayClass6_0`1::<CombinePredicates>b__0(TSource)
// 0x00000058 System.Void System.Linq.Enumerable/<>c__DisplayClass7_0`3::.ctor()
// 0x00000059 TResult System.Linq.Enumerable/<>c__DisplayClass7_0`3::<CombineSelectors>b__0(TSource)
// 0x0000005A System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::.ctor(System.Int32)
// 0x0000005B System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.IDisposable.Dispose()
// 0x0000005C System.Boolean System.Linq.Enumerable/<SelectManyIterator>d__17`2::MoveNext()
// 0x0000005D System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>m__Finally1()
// 0x0000005E System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>m__Finally2()
// 0x0000005F TResult System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.Generic.IEnumerator<TResult>.get_Current()
// 0x00000060 System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerator.Reset()
// 0x00000061 System.Object System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerator.get_Current()
// 0x00000062 System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator()
// 0x00000063 System.Collections.IEnumerator System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerable.GetEnumerator()
// 0x00000064 System.Void System.Linq.Enumerable/<TakeIterator>d__25`1::.ctor(System.Int32)
// 0x00000065 System.Void System.Linq.Enumerable/<TakeIterator>d__25`1::System.IDisposable.Dispose()
// 0x00000066 System.Boolean System.Linq.Enumerable/<TakeIterator>d__25`1::MoveNext()
// 0x00000067 System.Void System.Linq.Enumerable/<TakeIterator>d__25`1::<>m__Finally1()
// 0x00000068 TSource System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x00000069 System.Void System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.IEnumerator.Reset()
// 0x0000006A System.Object System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.IEnumerator.get_Current()
// 0x0000006B System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x0000006C System.Collections.IEnumerator System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000006D System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::.ctor(System.Int32)
// 0x0000006E System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::System.IDisposable.Dispose()
// 0x0000006F System.Boolean System.Linq.Enumerable/<DistinctIterator>d__68`1::MoveNext()
// 0x00000070 System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::<>m__Finally1()
// 0x00000071 TSource System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x00000072 System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerator.Reset()
// 0x00000073 System.Object System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerator.get_Current()
// 0x00000074 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x00000075 System.Collections.IEnumerator System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000076 System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::.ctor(System.Int32)
// 0x00000077 System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::System.IDisposable.Dispose()
// 0x00000078 System.Boolean System.Linq.Enumerable/<UnionIterator>d__71`1::MoveNext()
// 0x00000079 System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::<>m__Finally1()
// 0x0000007A System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::<>m__Finally2()
// 0x0000007B TSource System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x0000007C System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.IEnumerator.Reset()
// 0x0000007D System.Object System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.IEnumerator.get_Current()
// 0x0000007E System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x0000007F System.Collections.IEnumerator System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000080 System.Void System.Linq.Enumerable/<IntersectIterator>d__74`1::.ctor(System.Int32)
// 0x00000081 System.Void System.Linq.Enumerable/<IntersectIterator>d__74`1::System.IDisposable.Dispose()
// 0x00000082 System.Boolean System.Linq.Enumerable/<IntersectIterator>d__74`1::MoveNext()
// 0x00000083 System.Void System.Linq.Enumerable/<IntersectIterator>d__74`1::<>m__Finally1()
// 0x00000084 TSource System.Linq.Enumerable/<IntersectIterator>d__74`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x00000085 System.Void System.Linq.Enumerable/<IntersectIterator>d__74`1::System.Collections.IEnumerator.Reset()
// 0x00000086 System.Object System.Linq.Enumerable/<IntersectIterator>d__74`1::System.Collections.IEnumerator.get_Current()
// 0x00000087 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<IntersectIterator>d__74`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x00000088 System.Collections.IEnumerator System.Linq.Enumerable/<IntersectIterator>d__74`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000089 System.Void System.Linq.Enumerable/<OfTypeIterator>d__97`1::.ctor(System.Int32)
// 0x0000008A System.Void System.Linq.Enumerable/<OfTypeIterator>d__97`1::System.IDisposable.Dispose()
// 0x0000008B System.Boolean System.Linq.Enumerable/<OfTypeIterator>d__97`1::MoveNext()
// 0x0000008C System.Void System.Linq.Enumerable/<OfTypeIterator>d__97`1::<>m__Finally1()
// 0x0000008D TResult System.Linq.Enumerable/<OfTypeIterator>d__97`1::System.Collections.Generic.IEnumerator<TResult>.get_Current()
// 0x0000008E System.Void System.Linq.Enumerable/<OfTypeIterator>d__97`1::System.Collections.IEnumerator.Reset()
// 0x0000008F System.Object System.Linq.Enumerable/<OfTypeIterator>d__97`1::System.Collections.IEnumerator.get_Current()
// 0x00000090 System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<OfTypeIterator>d__97`1::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator()
// 0x00000091 System.Collections.IEnumerator System.Linq.Enumerable/<OfTypeIterator>d__97`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000092 System.Void System.Linq.EmptyEnumerable`1::.cctor()
// 0x00000093 System.Linq.IOrderedEnumerable`1<TElement> System.Linq.IOrderedEnumerable`1::CreateOrderedEnumerable(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x00000094 System.Void System.Linq.Set`1::.ctor(System.Collections.Generic.IEqualityComparer`1<TElement>)
// 0x00000095 System.Boolean System.Linq.Set`1::Add(TElement)
// 0x00000096 System.Boolean System.Linq.Set`1::Remove(TElement)
// 0x00000097 System.Boolean System.Linq.Set`1::Find(TElement,System.Boolean)
// 0x00000098 System.Void System.Linq.Set`1::Resize()
// 0x00000099 System.Int32 System.Linq.Set`1::InternalGetHashCode(TElement)
// 0x0000009A System.Collections.Generic.IEnumerator`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerator()
// 0x0000009B System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x0000009C System.Collections.IEnumerator System.Linq.OrderedEnumerable`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000009D System.Linq.IOrderedEnumerable`1<TElement> System.Linq.OrderedEnumerable`1::System.Linq.IOrderedEnumerable<TElement>.CreateOrderedEnumerable(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x0000009E System.Void System.Linq.OrderedEnumerable`1::.ctor()
// 0x0000009F System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::.ctor(System.Int32)
// 0x000000A0 System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.IDisposable.Dispose()
// 0x000000A1 System.Boolean System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::MoveNext()
// 0x000000A2 TElement System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.Generic.IEnumerator<TElement>.get_Current()
// 0x000000A3 System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.Reset()
// 0x000000A4 System.Object System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.get_Current()
// 0x000000A5 System.Void System.Linq.OrderedEnumerable`2::.ctor(System.Collections.Generic.IEnumerable`1<TElement>,System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x000000A6 System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`2::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x000000A7 System.Void System.Linq.EnumerableSorter`1::ComputeKeys(TElement[],System.Int32)
// 0x000000A8 System.Int32 System.Linq.EnumerableSorter`1::CompareKeys(System.Int32,System.Int32)
// 0x000000A9 System.Int32[] System.Linq.EnumerableSorter`1::Sort(TElement[],System.Int32)
// 0x000000AA System.Void System.Linq.EnumerableSorter`1::QuickSort(System.Int32[],System.Int32,System.Int32)
// 0x000000AB System.Void System.Linq.EnumerableSorter`1::.ctor()
// 0x000000AC System.Void System.Linq.EnumerableSorter`2::.ctor(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean,System.Linq.EnumerableSorter`1<TElement>)
// 0x000000AD System.Void System.Linq.EnumerableSorter`2::ComputeKeys(TElement[],System.Int32)
// 0x000000AE System.Int32 System.Linq.EnumerableSorter`2::CompareKeys(System.Int32,System.Int32)
// 0x000000AF System.Void System.Linq.Buffer`1::.ctor(System.Collections.Generic.IEnumerable`1<TElement>)
// 0x000000B0 TElement[] System.Linq.Buffer`1::ToArray()
// 0x000000B1 System.Linq.Expressions.ExpressionType System.Linq.Expressions.Expression::get_NodeType()
extern void Expression_get_NodeType_m46D2F5DD4F481536355CF1096212D8BD011EFA6A (void);
// 0x000000B2 System.Void System.Linq.Expressions.Expression::.cctor()
extern void Expression__cctor_m2A3A9925C45A620D65CDAB448E78F96F6D1399BC (void);
// 0x000000B3 System.Exception System.Linq.Expressions.Error::ExtensionNodeMustOverrideProperty(System.Object)
extern void Error_ExtensionNodeMustOverrideProperty_mFED05679017FEB8E36E9A205F447C80DC82397CD (void);
// 0x000000B4 System.Linq.Expressions.Expression System.Linq.Expressions.LambdaExpression::get_Body()
extern void LambdaExpression_get_Body_m595A485419E2F0AA13FC2695DEBD99ED9712D042 (void);
// 0x000000B5 System.Reflection.MemberInfo System.Linq.Expressions.MemberExpression::get_Member()
extern void MemberExpression_get_Member_m42D967F01204B3337C76BC2C679C42922ACF2D2C (void);
// 0x000000B6 System.Reflection.MemberInfo System.Linq.Expressions.MemberExpression::GetMember()
extern void MemberExpression_GetMember_mC6C63FFBC40F36F3C693E15A7CFB8EBCEBCE0D87 (void);
// 0x000000B7 System.String System.Linq.Expressions.Strings::ExtensionNodeMustOverrideProperty(System.Object)
extern void Strings_ExtensionNodeMustOverrideProperty_mC172EE71CBF1DF8690C7B4D39E14FC93B80062E4 (void);
// 0x000000B8 System.Linq.Expressions.Expression System.Linq.Expressions.UnaryExpression::get_Operand()
extern void UnaryExpression_get_Operand_m08244426ECF6990AD49742ECE8273F599B648B3F (void);
// 0x000000B9 System.Void System.Dynamic.Utils.CacheDict`2::.ctor(System.Int32)
// 0x000000BA System.Int32 System.Dynamic.Utils.CacheDict`2::AlignSize(System.Int32)
// 0x000000BB System.Exception System.Dynamic.Utils.ContractUtils::get_Unreachable()
extern void ContractUtils_get_Unreachable_m1BAFF1BD51707EFF0385DFC088AA21DA02352619 (void);
// 0x000000BC System.Void System.Collections.Generic.HashSet`1::.ctor()
// 0x000000BD System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEqualityComparer`1<T>)
// 0x000000BE System.Void System.Collections.Generic.HashSet`1::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x000000BF System.Void System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.Add(T)
// 0x000000C0 System.Void System.Collections.Generic.HashSet`1::Clear()
// 0x000000C1 System.Boolean System.Collections.Generic.HashSet`1::Contains(T)
// 0x000000C2 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32)
// 0x000000C3 System.Boolean System.Collections.Generic.HashSet`1::Remove(T)
// 0x000000C4 System.Int32 System.Collections.Generic.HashSet`1::get_Count()
// 0x000000C5 System.Boolean System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// 0x000000C6 System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1::GetEnumerator()
// 0x000000C7 System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x000000C8 System.Collections.IEnumerator System.Collections.Generic.HashSet`1::System.Collections.IEnumerable.GetEnumerator()
// 0x000000C9 System.Void System.Collections.Generic.HashSet`1::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x000000CA System.Void System.Collections.Generic.HashSet`1::OnDeserialization(System.Object)
// 0x000000CB System.Boolean System.Collections.Generic.HashSet`1::Add(T)
// 0x000000CC System.Void System.Collections.Generic.HashSet`1::UnionWith(System.Collections.Generic.IEnumerable`1<T>)
// 0x000000CD System.Void System.Collections.Generic.HashSet`1::CopyTo(T[])
// 0x000000CE System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32,System.Int32)
// 0x000000CF System.Void System.Collections.Generic.HashSet`1::Initialize(System.Int32)
// 0x000000D0 System.Void System.Collections.Generic.HashSet`1::IncreaseCapacity()
// 0x000000D1 System.Void System.Collections.Generic.HashSet`1::SetCapacity(System.Int32)
// 0x000000D2 System.Boolean System.Collections.Generic.HashSet`1::AddIfNotPresent(T)
// 0x000000D3 System.Int32 System.Collections.Generic.HashSet`1::InternalGetHashCode(T)
// 0x000000D4 System.Void System.Collections.Generic.HashSet`1/Enumerator::.ctor(System.Collections.Generic.HashSet`1<T>)
// 0x000000D5 System.Void System.Collections.Generic.HashSet`1/Enumerator::Dispose()
// 0x000000D6 System.Boolean System.Collections.Generic.HashSet`1/Enumerator::MoveNext()
// 0x000000D7 T System.Collections.Generic.HashSet`1/Enumerator::get_Current()
// 0x000000D8 System.Object System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.get_Current()
// 0x000000D9 System.Void System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.Reset()
static Il2CppMethodPointer s_methodPointers[217] = 
{
	SR_Format_m70EC8FB39078414D221479390E0E37253EF2D015,
	Error_ArgumentNull_mC405D19505CA250B5C731803400D8DAF963F0DCD,
	Error_ArgumentOutOfRange_mBF9354F0EDEE6E4BA57F3DA1663A91A5B61CEB9D,
	Error_MoreThanOneMatch_mEC48ECB89552B91EFD9669763848BA1DB97E991D,
	Error_NoElements_mE25C4D4F2FE86A32704624613D751BE305953E49,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	Enumerable_Sum_mCC08CB5DDD498532C9E9D72D8132EFE5B8E034FD,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	Expression_get_NodeType_m46D2F5DD4F481536355CF1096212D8BD011EFA6A,
	Expression__cctor_m2A3A9925C45A620D65CDAB448E78F96F6D1399BC,
	Error_ExtensionNodeMustOverrideProperty_mFED05679017FEB8E36E9A205F447C80DC82397CD,
	LambdaExpression_get_Body_m595A485419E2F0AA13FC2695DEBD99ED9712D042,
	MemberExpression_get_Member_m42D967F01204B3337C76BC2C679C42922ACF2D2C,
	MemberExpression_GetMember_mC6C63FFBC40F36F3C693E15A7CFB8EBCEBCE0D87,
	Strings_ExtensionNodeMustOverrideProperty_mC172EE71CBF1DF8690C7B4D39E14FC93B80062E4,
	UnaryExpression_get_Operand_m08244426ECF6990AD49742ECE8273F599B648B3F,
	NULL,
	NULL,
	ContractUtils_get_Unreachable_m1BAFF1BD51707EFF0385DFC088AA21DA02352619,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
};
static const int32_t s_InvokerIndices[217] = 
{
	6619,
	7162,
	7162,
	7469,
	7469,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	7056,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	4948,
	7504,
	7162,
	4984,
	4984,
	4984,
	7162,
	4984,
	-1,
	-1,
	7469,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
};
static const Il2CppTokenRangePair s_rgctxIndices[69] = 
{
	{ 0x02000005, { 102, 4 } },
	{ 0x02000006, { 106, 9 } },
	{ 0x02000007, { 117, 7 } },
	{ 0x02000008, { 126, 10 } },
	{ 0x02000009, { 138, 11 } },
	{ 0x0200000A, { 152, 9 } },
	{ 0x0200000B, { 164, 12 } },
	{ 0x0200000C, { 179, 1 } },
	{ 0x0200000D, { 180, 2 } },
	{ 0x0200000E, { 182, 12 } },
	{ 0x0200000F, { 194, 8 } },
	{ 0x02000010, { 202, 11 } },
	{ 0x02000011, { 213, 12 } },
	{ 0x02000012, { 225, 12 } },
	{ 0x02000013, { 237, 6 } },
	{ 0x02000014, { 243, 2 } },
	{ 0x02000016, { 245, 8 } },
	{ 0x02000018, { 253, 3 } },
	{ 0x02000019, { 258, 5 } },
	{ 0x0200001A, { 263, 7 } },
	{ 0x0200001B, { 270, 3 } },
	{ 0x0200001C, { 273, 7 } },
	{ 0x0200001D, { 280, 4 } },
	{ 0x0200002A, { 284, 3 } },
	{ 0x0200002D, { 287, 23 } },
	{ 0x0200002F, { 310, 2 } },
	{ 0x06000006, { 0, 10 } },
	{ 0x06000007, { 10, 10 } },
	{ 0x06000008, { 20, 5 } },
	{ 0x06000009, { 25, 5 } },
	{ 0x0600000A, { 30, 1 } },
	{ 0x0600000B, { 31, 2 } },
	{ 0x0600000C, { 33, 1 } },
	{ 0x0600000D, { 34, 2 } },
	{ 0x0600000E, { 36, 2 } },
	{ 0x0600000F, { 38, 2 } },
	{ 0x06000010, { 40, 1 } },
	{ 0x06000011, { 41, 1 } },
	{ 0x06000012, { 42, 2 } },
	{ 0x06000013, { 44, 1 } },
	{ 0x06000014, { 45, 2 } },
	{ 0x06000015, { 47, 1 } },
	{ 0x06000016, { 48, 2 } },
	{ 0x06000017, { 50, 1 } },
	{ 0x06000018, { 51, 5 } },
	{ 0x06000019, { 56, 3 } },
	{ 0x0600001A, { 59, 2 } },
	{ 0x0600001B, { 61, 1 } },
	{ 0x0600001C, { 62, 2 } },
	{ 0x0600001D, { 64, 4 } },
	{ 0x0600001E, { 68, 4 } },
	{ 0x0600001F, { 72, 4 } },
	{ 0x06000020, { 76, 3 } },
	{ 0x06000021, { 79, 3 } },
	{ 0x06000022, { 82, 1 } },
	{ 0x06000023, { 83, 1 } },
	{ 0x06000024, { 84, 3 } },
	{ 0x06000025, { 87, 3 } },
	{ 0x06000026, { 90, 2 } },
	{ 0x06000027, { 92, 2 } },
	{ 0x06000028, { 94, 5 } },
	{ 0x06000029, { 99, 3 } },
	{ 0x0600003A, { 115, 2 } },
	{ 0x0600003F, { 124, 2 } },
	{ 0x06000044, { 136, 2 } },
	{ 0x0600004A, { 149, 3 } },
	{ 0x0600004F, { 161, 3 } },
	{ 0x06000054, { 176, 3 } },
	{ 0x0600009D, { 256, 2 } },
};
static const Il2CppRGCTXDefinition s_rgctxValues[312] = 
{
	{ (Il2CppRGCTXDataType)2, 7031 },
	{ (Il2CppRGCTXDataType)3, 26693 },
	{ (Il2CppRGCTXDataType)2, 11012 },
	{ (Il2CppRGCTXDataType)2, 10267 },
	{ (Il2CppRGCTXDataType)3, 45936 },
	{ (Il2CppRGCTXDataType)2, 7730 },
	{ (Il2CppRGCTXDataType)2, 10299 },
	{ (Il2CppRGCTXDataType)3, 45985 },
	{ (Il2CppRGCTXDataType)2, 10280 },
	{ (Il2CppRGCTXDataType)3, 45952 },
	{ (Il2CppRGCTXDataType)2, 7032 },
	{ (Il2CppRGCTXDataType)3, 26694 },
	{ (Il2CppRGCTXDataType)2, 11048 },
	{ (Il2CppRGCTXDataType)2, 10315 },
	{ (Il2CppRGCTXDataType)3, 46004 },
	{ (Il2CppRGCTXDataType)2, 7755 },
	{ (Il2CppRGCTXDataType)2, 10347 },
	{ (Il2CppRGCTXDataType)3, 46221 },
	{ (Il2CppRGCTXDataType)2, 10331 },
	{ (Il2CppRGCTXDataType)3, 46103 },
	{ (Il2CppRGCTXDataType)2, 1253 },
	{ (Il2CppRGCTXDataType)3, 177 },
	{ (Il2CppRGCTXDataType)3, 178 },
	{ (Il2CppRGCTXDataType)2, 4007 },
	{ (Il2CppRGCTXDataType)3, 16714 },
	{ (Il2CppRGCTXDataType)2, 1255 },
	{ (Il2CppRGCTXDataType)3, 193 },
	{ (Il2CppRGCTXDataType)3, 194 },
	{ (Il2CppRGCTXDataType)2, 4030 },
	{ (Il2CppRGCTXDataType)3, 16721 },
	{ (Il2CppRGCTXDataType)3, 51444 },
	{ (Il2CppRGCTXDataType)2, 1301 },
	{ (Il2CppRGCTXDataType)3, 426 },
	{ (Il2CppRGCTXDataType)3, 51455 },
	{ (Il2CppRGCTXDataType)2, 1309 },
	{ (Il2CppRGCTXDataType)3, 462 },
	{ (Il2CppRGCTXDataType)2, 8403 },
	{ (Il2CppRGCTXDataType)3, 36418 },
	{ (Il2CppRGCTXDataType)2, 8404 },
	{ (Il2CppRGCTXDataType)3, 36419 },
	{ (Il2CppRGCTXDataType)3, 22008 },
	{ (Il2CppRGCTXDataType)3, 51378 },
	{ (Il2CppRGCTXDataType)2, 1258 },
	{ (Il2CppRGCTXDataType)3, 254 },
	{ (Il2CppRGCTXDataType)3, 51494 },
	{ (Il2CppRGCTXDataType)2, 1312 },
	{ (Il2CppRGCTXDataType)3, 485 },
	{ (Il2CppRGCTXDataType)3, 51394 },
	{ (Il2CppRGCTXDataType)2, 1290 },
	{ (Il2CppRGCTXDataType)3, 384 },
	{ (Il2CppRGCTXDataType)3, 51448 },
	{ (Il2CppRGCTXDataType)3, 15464 },
	{ (Il2CppRGCTXDataType)2, 3801 },
	{ (Il2CppRGCTXDataType)2, 4565 },
	{ (Il2CppRGCTXDataType)2, 4913 },
	{ (Il2CppRGCTXDataType)2, 5162 },
	{ (Il2CppRGCTXDataType)2, 1643 },
	{ (Il2CppRGCTXDataType)3, 3207 },
	{ (Il2CppRGCTXDataType)3, 3208 },
	{ (Il2CppRGCTXDataType)2, 7731 },
	{ (Il2CppRGCTXDataType)3, 28930 },
	{ (Il2CppRGCTXDataType)3, 51401 },
	{ (Il2CppRGCTXDataType)2, 1293 },
	{ (Il2CppRGCTXDataType)3, 398 },
	{ (Il2CppRGCTXDataType)2, 6064 },
	{ (Il2CppRGCTXDataType)2, 4329 },
	{ (Il2CppRGCTXDataType)2, 4581 },
	{ (Il2CppRGCTXDataType)2, 4915 },
	{ (Il2CppRGCTXDataType)2, 6065 },
	{ (Il2CppRGCTXDataType)2, 4330 },
	{ (Il2CppRGCTXDataType)2, 4582 },
	{ (Il2CppRGCTXDataType)2, 4916 },
	{ (Il2CppRGCTXDataType)2, 6066 },
	{ (Il2CppRGCTXDataType)2, 4331 },
	{ (Il2CppRGCTXDataType)2, 4583 },
	{ (Il2CppRGCTXDataType)2, 4917 },
	{ (Il2CppRGCTXDataType)2, 4584 },
	{ (Il2CppRGCTXDataType)2, 4918 },
	{ (Il2CppRGCTXDataType)3, 16715 },
	{ (Il2CppRGCTXDataType)2, 6063 },
	{ (Il2CppRGCTXDataType)2, 4580 },
	{ (Il2CppRGCTXDataType)2, 4914 },
	{ (Il2CppRGCTXDataType)2, 2810 },
	{ (Il2CppRGCTXDataType)2, 4560 },
	{ (Il2CppRGCTXDataType)2, 4561 },
	{ (Il2CppRGCTXDataType)2, 4911 },
	{ (Il2CppRGCTXDataType)3, 16713 },
	{ (Il2CppRGCTXDataType)2, 4559 },
	{ (Il2CppRGCTXDataType)2, 4910 },
	{ (Il2CppRGCTXDataType)3, 16712 },
	{ (Il2CppRGCTXDataType)2, 4328 },
	{ (Il2CppRGCTXDataType)2, 4579 },
	{ (Il2CppRGCTXDataType)2, 4327 },
	{ (Il2CppRGCTXDataType)3, 51355 },
	{ (Il2CppRGCTXDataType)3, 15463 },
	{ (Il2CppRGCTXDataType)2, 3800 },
	{ (Il2CppRGCTXDataType)2, 4563 },
	{ (Il2CppRGCTXDataType)2, 4912 },
	{ (Il2CppRGCTXDataType)2, 5161 },
	{ (Il2CppRGCTXDataType)2, 4613 },
	{ (Il2CppRGCTXDataType)2, 4926 },
	{ (Il2CppRGCTXDataType)3, 16997 },
	{ (Il2CppRGCTXDataType)3, 26695 },
	{ (Il2CppRGCTXDataType)3, 26697 },
	{ (Il2CppRGCTXDataType)2, 899 },
	{ (Il2CppRGCTXDataType)3, 26696 },
	{ (Il2CppRGCTXDataType)3, 26705 },
	{ (Il2CppRGCTXDataType)2, 7035 },
	{ (Il2CppRGCTXDataType)2, 10281 },
	{ (Il2CppRGCTXDataType)3, 45953 },
	{ (Il2CppRGCTXDataType)3, 26706 },
	{ (Il2CppRGCTXDataType)2, 4675 },
	{ (Il2CppRGCTXDataType)2, 4973 },
	{ (Il2CppRGCTXDataType)3, 16729 },
	{ (Il2CppRGCTXDataType)3, 51310 },
	{ (Il2CppRGCTXDataType)2, 10332 },
	{ (Il2CppRGCTXDataType)3, 46104 },
	{ (Il2CppRGCTXDataType)3, 26698 },
	{ (Il2CppRGCTXDataType)2, 7034 },
	{ (Il2CppRGCTXDataType)2, 10268 },
	{ (Il2CppRGCTXDataType)3, 45937 },
	{ (Il2CppRGCTXDataType)3, 16728 },
	{ (Il2CppRGCTXDataType)3, 26699 },
	{ (Il2CppRGCTXDataType)3, 51309 },
	{ (Il2CppRGCTXDataType)2, 10316 },
	{ (Il2CppRGCTXDataType)3, 46005 },
	{ (Il2CppRGCTXDataType)3, 26712 },
	{ (Il2CppRGCTXDataType)2, 7036 },
	{ (Il2CppRGCTXDataType)2, 10300 },
	{ (Il2CppRGCTXDataType)3, 45986 },
	{ (Il2CppRGCTXDataType)3, 28989 },
	{ (Il2CppRGCTXDataType)3, 13444 },
	{ (Il2CppRGCTXDataType)3, 16730 },
	{ (Il2CppRGCTXDataType)3, 13443 },
	{ (Il2CppRGCTXDataType)3, 26713 },
	{ (Il2CppRGCTXDataType)3, 51311 },
	{ (Il2CppRGCTXDataType)2, 10348 },
	{ (Il2CppRGCTXDataType)3, 46222 },
	{ (Il2CppRGCTXDataType)3, 26726 },
	{ (Il2CppRGCTXDataType)2, 7038 },
	{ (Il2CppRGCTXDataType)2, 10334 },
	{ (Il2CppRGCTXDataType)3, 46106 },
	{ (Il2CppRGCTXDataType)3, 26727 },
	{ (Il2CppRGCTXDataType)2, 4678 },
	{ (Il2CppRGCTXDataType)2, 4976 },
	{ (Il2CppRGCTXDataType)3, 16734 },
	{ (Il2CppRGCTXDataType)3, 16733 },
	{ (Il2CppRGCTXDataType)2, 10283 },
	{ (Il2CppRGCTXDataType)3, 45955 },
	{ (Il2CppRGCTXDataType)3, 51318 },
	{ (Il2CppRGCTXDataType)2, 10333 },
	{ (Il2CppRGCTXDataType)3, 46105 },
	{ (Il2CppRGCTXDataType)3, 26719 },
	{ (Il2CppRGCTXDataType)2, 7037 },
	{ (Il2CppRGCTXDataType)2, 10318 },
	{ (Il2CppRGCTXDataType)3, 46007 },
	{ (Il2CppRGCTXDataType)3, 16732 },
	{ (Il2CppRGCTXDataType)3, 16731 },
	{ (Il2CppRGCTXDataType)3, 26720 },
	{ (Il2CppRGCTXDataType)2, 10282 },
	{ (Il2CppRGCTXDataType)3, 45954 },
	{ (Il2CppRGCTXDataType)3, 51317 },
	{ (Il2CppRGCTXDataType)2, 10317 },
	{ (Il2CppRGCTXDataType)3, 46006 },
	{ (Il2CppRGCTXDataType)3, 26733 },
	{ (Il2CppRGCTXDataType)2, 7039 },
	{ (Il2CppRGCTXDataType)2, 10350 },
	{ (Il2CppRGCTXDataType)3, 46224 },
	{ (Il2CppRGCTXDataType)3, 28990 },
	{ (Il2CppRGCTXDataType)3, 13446 },
	{ (Il2CppRGCTXDataType)3, 16736 },
	{ (Il2CppRGCTXDataType)3, 16735 },
	{ (Il2CppRGCTXDataType)3, 13445 },
	{ (Il2CppRGCTXDataType)3, 26734 },
	{ (Il2CppRGCTXDataType)2, 10284 },
	{ (Il2CppRGCTXDataType)3, 45956 },
	{ (Il2CppRGCTXDataType)3, 51319 },
	{ (Il2CppRGCTXDataType)2, 10349 },
	{ (Il2CppRGCTXDataType)3, 46223 },
	{ (Il2CppRGCTXDataType)3, 16725 },
	{ (Il2CppRGCTXDataType)3, 16726 },
	{ (Il2CppRGCTXDataType)3, 16740 },
	{ (Il2CppRGCTXDataType)3, 429 },
	{ (Il2CppRGCTXDataType)3, 428 },
	{ (Il2CppRGCTXDataType)2, 4664 },
	{ (Il2CppRGCTXDataType)2, 4965 },
	{ (Il2CppRGCTXDataType)3, 16727 },
	{ (Il2CppRGCTXDataType)2, 4707 },
	{ (Il2CppRGCTXDataType)2, 5009 },
	{ (Il2CppRGCTXDataType)3, 431 },
	{ (Il2CppRGCTXDataType)2, 1152 },
	{ (Il2CppRGCTXDataType)2, 1302 },
	{ (Il2CppRGCTXDataType)3, 427 },
	{ (Il2CppRGCTXDataType)3, 430 },
	{ (Il2CppRGCTXDataType)3, 464 },
	{ (Il2CppRGCTXDataType)2, 4667 },
	{ (Il2CppRGCTXDataType)2, 4967 },
	{ (Il2CppRGCTXDataType)3, 466 },
	{ (Il2CppRGCTXDataType)2, 895 },
	{ (Il2CppRGCTXDataType)2, 1310 },
	{ (Il2CppRGCTXDataType)3, 463 },
	{ (Il2CppRGCTXDataType)3, 465 },
	{ (Il2CppRGCTXDataType)3, 256 },
	{ (Il2CppRGCTXDataType)2, 9509 },
	{ (Il2CppRGCTXDataType)3, 42092 },
	{ (Il2CppRGCTXDataType)2, 4657 },
	{ (Il2CppRGCTXDataType)2, 4960 },
	{ (Il2CppRGCTXDataType)3, 42093 },
	{ (Il2CppRGCTXDataType)3, 258 },
	{ (Il2CppRGCTXDataType)2, 888 },
	{ (Il2CppRGCTXDataType)2, 1259 },
	{ (Il2CppRGCTXDataType)3, 255 },
	{ (Il2CppRGCTXDataType)3, 257 },
	{ (Il2CppRGCTXDataType)3, 487 },
	{ (Il2CppRGCTXDataType)3, 488 },
	{ (Il2CppRGCTXDataType)2, 9513 },
	{ (Il2CppRGCTXDataType)3, 42097 },
	{ (Il2CppRGCTXDataType)2, 4670 },
	{ (Il2CppRGCTXDataType)2, 4969 },
	{ (Il2CppRGCTXDataType)3, 42098 },
	{ (Il2CppRGCTXDataType)3, 490 },
	{ (Il2CppRGCTXDataType)2, 897 },
	{ (Il2CppRGCTXDataType)2, 1313 },
	{ (Il2CppRGCTXDataType)3, 486 },
	{ (Il2CppRGCTXDataType)3, 489 },
	{ (Il2CppRGCTXDataType)3, 386 },
	{ (Il2CppRGCTXDataType)2, 9511 },
	{ (Il2CppRGCTXDataType)3, 42094 },
	{ (Il2CppRGCTXDataType)2, 4660 },
	{ (Il2CppRGCTXDataType)2, 4962 },
	{ (Il2CppRGCTXDataType)3, 42095 },
	{ (Il2CppRGCTXDataType)3, 42096 },
	{ (Il2CppRGCTXDataType)3, 388 },
	{ (Il2CppRGCTXDataType)2, 890 },
	{ (Il2CppRGCTXDataType)2, 1291 },
	{ (Il2CppRGCTXDataType)3, 385 },
	{ (Il2CppRGCTXDataType)3, 387 },
	{ (Il2CppRGCTXDataType)3, 400 },
	{ (Il2CppRGCTXDataType)2, 892 },
	{ (Il2CppRGCTXDataType)3, 402 },
	{ (Il2CppRGCTXDataType)2, 1294 },
	{ (Il2CppRGCTXDataType)3, 399 },
	{ (Il2CppRGCTXDataType)3, 401 },
	{ (Il2CppRGCTXDataType)2, 11063 },
	{ (Il2CppRGCTXDataType)2, 2811 },
	{ (Il2CppRGCTXDataType)3, 15506 },
	{ (Il2CppRGCTXDataType)2, 3818 },
	{ (Il2CppRGCTXDataType)2, 11511 },
	{ (Il2CppRGCTXDataType)3, 42089 },
	{ (Il2CppRGCTXDataType)3, 42090 },
	{ (Il2CppRGCTXDataType)2, 5179 },
	{ (Il2CppRGCTXDataType)3, 42091 },
	{ (Il2CppRGCTXDataType)2, 800 },
	{ (Il2CppRGCTXDataType)2, 1263 },
	{ (Il2CppRGCTXDataType)3, 282 },
	{ (Il2CppRGCTXDataType)3, 36393 },
	{ (Il2CppRGCTXDataType)2, 8405 },
	{ (Il2CppRGCTXDataType)3, 36420 },
	{ (Il2CppRGCTXDataType)2, 1644 },
	{ (Il2CppRGCTXDataType)3, 3209 },
	{ (Il2CppRGCTXDataType)3, 36399 },
	{ (Il2CppRGCTXDataType)3, 13385 },
	{ (Il2CppRGCTXDataType)2, 938 },
	{ (Il2CppRGCTXDataType)3, 36394 },
	{ (Il2CppRGCTXDataType)2, 8400 },
	{ (Il2CppRGCTXDataType)3, 3751 },
	{ (Il2CppRGCTXDataType)2, 1698 },
	{ (Il2CppRGCTXDataType)2, 3005 },
	{ (Il2CppRGCTXDataType)3, 13403 },
	{ (Il2CppRGCTXDataType)3, 36395 },
	{ (Il2CppRGCTXDataType)3, 13380 },
	{ (Il2CppRGCTXDataType)3, 13381 },
	{ (Il2CppRGCTXDataType)3, 13379 },
	{ (Il2CppRGCTXDataType)3, 13382 },
	{ (Il2CppRGCTXDataType)2, 3001 },
	{ (Il2CppRGCTXDataType)2, 11123 },
	{ (Il2CppRGCTXDataType)3, 16723 },
	{ (Il2CppRGCTXDataType)3, 13384 },
	{ (Il2CppRGCTXDataType)2, 4488 },
	{ (Il2CppRGCTXDataType)3, 13383 },
	{ (Il2CppRGCTXDataType)2, 4336 },
	{ (Il2CppRGCTXDataType)2, 11057 },
	{ (Il2CppRGCTXDataType)2, 4616 },
	{ (Il2CppRGCTXDataType)2, 4928 },
	{ (Il2CppRGCTXDataType)3, 3230 },
	{ (Il2CppRGCTXDataType)2, 1646 },
	{ (Il2CppRGCTXDataType)2, 11150 },
	{ (Il2CppRGCTXDataType)3, 15485 },
	{ (Il2CppRGCTXDataType)2, 3811 },
	{ (Il2CppRGCTXDataType)3, 17711 },
	{ (Il2CppRGCTXDataType)3, 17712 },
	{ (Il2CppRGCTXDataType)3, 17717 },
	{ (Il2CppRGCTXDataType)2, 5173 },
	{ (Il2CppRGCTXDataType)3, 17714 },
	{ (Il2CppRGCTXDataType)3, 52546 },
	{ (Il2CppRGCTXDataType)2, 3009 },
	{ (Il2CppRGCTXDataType)3, 13433 },
	{ (Il2CppRGCTXDataType)1, 4479 },
	{ (Il2CppRGCTXDataType)2, 11069 },
	{ (Il2CppRGCTXDataType)3, 17713 },
	{ (Il2CppRGCTXDataType)1, 11069 },
	{ (Il2CppRGCTXDataType)1, 5173 },
	{ (Il2CppRGCTXDataType)2, 11509 },
	{ (Il2CppRGCTXDataType)2, 11069 },
	{ (Il2CppRGCTXDataType)2, 4622 },
	{ (Il2CppRGCTXDataType)2, 4932 },
	{ (Il2CppRGCTXDataType)3, 17718 },
	{ (Il2CppRGCTXDataType)3, 17716 },
	{ (Il2CppRGCTXDataType)3, 17715 },
	{ (Il2CppRGCTXDataType)2, 681 },
	{ (Il2CppRGCTXDataType)3, 13447 },
	{ (Il2CppRGCTXDataType)2, 910 },
};
extern const CustomAttributesCacheGenerator g_System_Core_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_System_Core_CodeGenModule;
const Il2CppCodeGenModule g_System_Core_CodeGenModule = 
{
	"System.Core.dll",
	217,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	69,
	s_rgctxIndices,
	312,
	s_rgctxValues,
	NULL,
	g_System_Core_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
