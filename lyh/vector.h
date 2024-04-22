#ifndef lyh_vector_h
#define lyh_vector_h
#include<string.h> 
namespace lyh
{
	template<typename tn>
	class vector
	{
		public:
			class iterator 
			{
				private:
					tn *p;
				public:
					friend vector;
					void operator ++()
					{
					    p++;
					}
					void operator --()
					{
						p--;
					}
					tn operator *()
					{
						return *p;
					}
			};
			iterator & begin()
			{
				ofrt.p=p;
				return ofrt;
			}
			iterator & end()
			{
				ofrt.p=p+idx+1;
				return ofrt;
			}
			tn & operator [](unsigned long long i)
			{
				return *(p+i);
			}
			void push_back(tn x)
			{
				idx++;
				p[idx]=x;
				if(idx==len-1)
				{
					pp=new tn[len];
					memcpy(pp,p,sizeof(tn[len]));
					delete[] p;
					p=new tn[len*2];
					memcpy(p,pp,sizeof(tn[len]));
					len*=2;
					delete[] pp;
				}
			}
			bool pop_back()
			{
				if(idx==-1) return false;
				idx--;
				if(idx<=len/4&&len/4>1)
				{
					pp=new tn[len/4];
					memcpy(pp,p,sizeof(tn[len/4]));
					delete[] p;
					p=new tn[len/2];
					memcpy(p,pp,sizeof(tn[len/4]));
					len/=2;
					delete[] pp;
				}
				return true;
			}
			bool erase(unsigned long long x)
			{
				if(idx==-1||x>idx) return false;
				memcpy(p+x,p+x+1,sizeof(tn[idx-x]));
				idx--;
				if(idx<=len/4&&len/4>1)
				{
					pp=new tn[len/4];
					memcpy(pp,p,sizeof(tn[len/4]));
					delete[] p;
					p=new tn[len/2];
					memcpy(p,pp,sizeof(tn[len/4]));
					len/=2;
					delete[] pp;
				}
				return true;
			}
			unsigned long long size()
			{
				return idx+1;
			}
			bool empty()
			{
				return idx==-1;
			}
			void clear()
			{
				len=1;
				idx=-1;
				delete[] p;
			}
		private:
			unsigned long long len=1,idx=-1;
			tn *p=new tn[1],*pp;
			iterator ofrt;
	};
}
#endif
