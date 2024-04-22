#ifndef lyh_math_h
#define lyh_math_h
namespace lyh
{
	double none;
	double & abs(double a)
	{
		none=a;
		if(none<0) none=-none;
		return none;
	}
	double & floor(double a)
	{
		long long b=a-0.5;
		while(b+1<=a) b++;
		none=b;
		return none;
	}
	int d_intpow(int a,int n,int mod=0)
	{
		if(n==1)
		{
			if(mod==0) return a;
			else return a%mod;
		}
		int k=d_intpow(a,n/2,mod);
		if(n%2==1)
		{
			if(mod==0) return k*k*a;
			else return k*k%mod*a%mod;
		}
		else
		{
			if(mod==0) return k*k;
			else return k*k%mod;
		}
	}
	long long d_llpow(long long a,long long n,long long mod=0)
	{
		if(n==1)
		{
			if(mod==0) return a;
			else return a%mod;
		}
		long long k=d_llpow(a,n/2,mod);
		if(n%2==1)
		{
			if(mod==0) return k*k*a;
			else return k*k%mod*a%mod;
		}
		else
		{
			if(mod==0) return k*k;
			else return k*k%mod;
		}
	}
	unsigned int d_uipow(unsigned int a,unsigned int n)
	{
		if(n==1) return a;
		unsigned int k=d_uipow(a,n/2);
		if(n%2==1) return k*k*a;
		else return k*k;
	}
	unsigned long long d_ullpow(unsigned long long a,unsigned long long n)
	{
		if(n==1) return a;
		unsigned long long k=d_ullpow(a,n/2);
		if(n%2==1) return k*k*a;
		else return k*k;
	}
	long long zpow(long long a,long long n,long long mod=0)
	{
		return d_llpow(a,n,mod);
	}
	unsigned long long uzpow(unsigned long long a,unsigned long long n)
	{
		return d_ullpow(a,n);
	}
}
#endif
