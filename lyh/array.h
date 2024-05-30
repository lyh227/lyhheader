#ifndef lyh_array_h
#define lyh_array_h
#include<string.h>
namespace lyh
{
	template<typename tn,unsigned long long siz>
	class array
	{
		private:
			tn a[siz];
			unsigned long long p=-1;
		public:
			tn & operator [](unsigned long long i)
			{
				return a[i];
			}
			void push_back(tn x)
			{
				a[++p]=x;
			}
			void pop()
			{
				p--;
			}
			unsigned long long size()
			{
				return p;
			}
			void clear()
			{
				p=-1;
			}
			void clear_val()
			{
				memset(a,0,sizeof(a));
			}
	};
}
#endif
