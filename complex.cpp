class complex
{
	public:
		complex (double r=0, double i=0): re(r), im(i){
		}
	double real() const {
	return re;
	}

	double imag() const{
		return im;
	}

	private:
	double re, im;


};

int main(){
	const complex c(2, 4);
	c.real();


}
