class ComplexNumber {
private:
    double m_real {}, m_imag {};
public:
    ComplexNumber(double r = 0.0, double i = 0.0) : m_real(r), m_imag(i) {}

    void setReal(double r) {
        m_real = r;
    }

    void setImag(double i) {
        m_real = i;
    }
    
    double getReal() const {
        return m_real;
    }

    double getImag() const {
        return m_imag;
    }



    
};