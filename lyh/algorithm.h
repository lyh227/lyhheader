#ifndef lyh_algorithm_h
#define lyh_algorithm_h
namespace lyh
{
	template<typename tn>
	void swap(tn &a,tn &b)
	{
		tn c=a;
		a=b;
		b=c;
	}
}
#endif
