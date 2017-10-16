//lindos valores para hash
#define MOD 1000000000000000009LL
#define PRIME 1009LL

ll mul(ll a, ll b, ll m) { //hace (a*b)%m
	ll q = (ll)((long double)a*b/m);
	ll r = a*b-m*q;
	while(r<0) r += m;
	while(r>=m) r -= m;
	return r;	
}

struct mnum{
	static const tipo mod=MOD;
	tipo v;
	mnum(tipo v=0): v(v%mod) {}
	mnum operator+(mnum b){return v+b.v;}
	mnum operator-(mnum b){return ((v-b.v)%mod)+mod;}
	//mnum operator*(mnum b){return v*b.v;} //Si mod<=1e9+9
	mnum operator*(mnum b){return mul(v,b.v,mod);} //Si mod<=1e18+9
	mnum operator^(int n){
		if(!n) return 1;
		return n%2 ? ((*this)^(n/2))*(*this) : (*this)^(n/2);}
};

/*
DIVISIÓN MODULAR
Para dividir hay que multiplicar por el inverso multiplicativo. x/y = x*(y^-1).
El inverso multiplicativo de y módulo n es y^-1 tal que y*(y^-1) = 1 mod n.
Por ejemplo, si n=7, y=2, o sea que quiero dividir por y,
y^-1 = 4 porque y*(y^-1) = 8 = 1 mod 7.
*/

//ejemplos de primo y mod=1e9+9 con inverso multiplicativo INV. x/PRIME = x*INV.
#define MOD 1000000009LL
#define PRIME 1009LL
#define INV 598612493LL

#define MOD 100000000003LL
#define PRIME 1009LL
#define INV 53815659070LL
