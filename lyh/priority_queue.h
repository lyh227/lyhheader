#ifndef lyh_priority_queue_h
#define lyh_priority_queue_h
#include"vector.h"
#include"algorithm.h"
#define use_bigger_root false
#define use_lower_root true
namespace lyh
{
	template<typename tn,typename jg=vector<tn>,bool type=use_bigger_root>
	class priority_queue
	{
		public:
			void push(tn x)
			{
				if(len==0)
				{
					tn nullt;
					heap.push_back(nullt);
				}
				heap.push_back(x);
				len++;
				up(len);
			}
			tn top()
			{
				return heap[1];
			}
			bool pop()
			{
				if(len==0) return false;
				swap(heap[1],heap[len]);
				heap.pop_back();
				len--;
				down(1);
				return true;
			}
			unsigned long long size()
			{
				return len;
			}
			bool empty()
			{
				return len==0;
			}
			void clear()
			{
				len=0;
				heap.clear();
			}
		private:
			jg heap;
			unsigned long long len=0;
			void down(unsigned long long t)
			{
				unsigned long long u=t;
				if(type==use_bigger_root)
				{
					if(t*2<=len&&heap[t*2]>heap[u]) u=t*2;
					if(t*2+1<=len&&heap[t*2+1]>heap[u]) u=t*2+1;
					if(t!=u)
					{
						swap(heap[t],heap[u]);
						down(u);
					}
				}
				if(type==use_lower_root)
				{
					if(t*2<=len&&heap[t*2]<heap[u]) u=t*2;
					if(t*2+1<=len&&heap[t*2+1]<heap[u]) u=t*2+1;
					if(t!=u)
					{
						swap(heap[t],heap[u]);
						down(u);
					}
				}
			}
			void up(unsigned long long t)
			{
				if(type==use_bigger_root)
				{
					while(t/2!=0&&heap[t]>heap[t/2])
					{
						swap(heap[t],heap[t/2]);
						t/=2;
					}
				}
				if(type==use_lower_root)
				{
					while(t/2!=0&&heap[t]<heap[t/2])
					{
						swap(heap[t],heap[t/2]);
						t/=2;
					}
				}
			}
	};
}
#endif
