#ifndef io_h
#define io_h
#include<stdio.h>
#include"math.h"
namespace lyh
{
	class stdinput
	{
		public:
			template<typename tn>
			void getnum(tn &u)
			{
				u=0;
				bool f=false;
				char c=getchar();
				while((c>'9'||c<'0')&&c!='-') c=getchar();
				if(c=='-')
				{
					f=!f;
					c=getchar();
				}
				while(c<='9'&&c>='0')
				{
					u=u*10+c-'0';
					c=getchar();
				}
				if(f) u=-u;
			}
			template<typename tn>
			void getdouble(tn &u)
			{
				u=0.0;
				long double q=10.0;
				bool f=false;
				char c=getchar();
				while((c>'9'||c<'0')&&c!='-') c=getchar();
				if(c=='-')
				{
					f=!f;
					c=getchar();
				}
				while(c<='9'&&c>='0')
				{
					u=u*10+c-'0';
					c=getchar();
				}
				if(c=='.')
				{
					c=getchar();
					while(c<='9'&&c>='0')
					{
						u+=(c-'0')/q;
						q*=10;
						c=getchar();
					}
				}
				if(f) u=-u;
			}
			void getcstring(char ch[])
			{
				unsigned long long idx=0;
				char c=getchar();
				while(c==' ') c=getchar();
				while(c!=' ')
				{
					ch[idx++]=c;
					c=getchar();
				}
				ch[idx]='\0';
			}
			stdinput operator >>(short &a) {getnum(a);return *this;}
			stdinput operator >>(unsigned short &a) {getnum(a);return *this;}
			stdinput operator >>(int &a) {getnum(a);return *this;}
			stdinput operator >>(unsigned int &a) {getnum(a);return *this;}
			stdinput operator >>(long long &a) {getnum(a);return *this;}
			stdinput operator >>(unsigned long long &a) {getnum(a);return *this;}
			stdinput operator >>(float &a) {getdouble(a);return *this;}
			stdinput operator >>(double &a) {getdouble(a);return *this;}
			stdinput operator >>(long double &a) {getdouble(a);return *this;}
			stdinput operator >>(char c[]) {getcstring(c);return *this;}
			stdinput operator >>(char &c) {char ch=getchar();while(ch!=' '&&ch!='\n')c=ch,ch=getchar();return *this;}
	}cin;
	class stdoutput
	{
		private:
			unsigned long long bl=6;
			
		public:
			class fixbl
			{
				public:
					unsigned long long bl=6;
			};
			template<typename tn>
			void putnum(tn u)
			{
				if(u<0)
				{
					putchar('-');
					u=-u;
				}
				if(u>9) putnum(u/10);
				putchar(char(u%10+'0'));
			}
			template<typename tn>
			void putdouble(tn u,unsigned long long bl)
			{
				if(u<0)
				{
					putchar('-');
					u=-u;
				}
				unsigned long long z=floor(u);
				u-=z;
				putnum(z);
				putchar('.'); 
				while(bl--)
				{
					u*=10;
					z=floor(u);
					putchar(z+'0');
					u-=z;
				}
			}
			void putcstring(char ch[])
			{
				unsigned long long idx=0;
				while(ch[idx]!='\0')
				{
					putchar(ch[idx]);
					idx++;
				}
			}
			stdoutput operator <<(short a) {putnum(a);return *this;}
			stdoutput operator <<(unsigned short a) {putnum(a);return *this;}
			stdoutput operator <<(int a) {putnum(a);return *this;}
			stdoutput operator <<(unsigned int a) {putnum(a);return *this;}
			stdoutput operator <<(long long a) {putnum(a);return *this;}
			stdoutput operator <<(unsigned long long a) {putnum(a);return *this;}
			stdoutput operator <<(float a) {putdouble(a,bl);bl=6;return *this;}
			stdoutput operator <<(double a) {putdouble(a,bl);bl=6;return *this;}
			stdoutput operator <<(long double a) {putdouble(a,bl);bl=6;return *this;}
			stdoutput operator <<(char c[]) {putcstring(c);return *this;}
			stdoutput operator <<(char c) {putchar(c);return *this;}
			stdoutput operator <<(fixbl f) {bl=f.bl;return *this;}
	}cout;
	stdoutput::fixbl fix(unsigned long long w)
	{
		stdoutput::fixbl f;
		f.bl=w;
		return f;
	}
}
#endif
