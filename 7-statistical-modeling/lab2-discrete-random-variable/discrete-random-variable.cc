#include <iostream>

#include "../common/discrete.cc"

using namespace std;

int main() {
  srand(time(NULL));

  try {
    cout << "---------- RUN Bernoulli Distribution ----------" << endl;
    BernoulliDistribution(0.2).RunTests();
    cout << endl;

    cout << "---------- RUN Binomial Distribution ----------" << endl;
    BinomialDistribution(10, 0.5).RunTests();
    cout << endl;

    cout << "---------- RUN Geometric Distribution ----------" << endl;
    GeometricDistribution(0.5).RunTests();
    cout << endl;

    cout << "---------- RUN Uniform Discrete Distribution ----------" << endl;
    UniformDiscreteDistribution(1, 8).RunTests();
    cout << endl;

    cout << "---------- RUN Poisson Distribution ----------" << endl;
    PoissonDistribution(4).RunTests();
    cout << endl;
  }
  catch (const exception& e) {
    cout << e.what() << endl;
  }

  return 0;
}
