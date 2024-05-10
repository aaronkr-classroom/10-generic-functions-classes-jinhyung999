// my_algs.h
#ifndef GAURD_my_algs_h
#define GAURD_my_algs_h

//최대값함수
template<class T>
T max(const T& left, const T& right) {
	return left > right ?
		left :
		right;
}

template<class T>
T min(const T& left, const T& right) {
	return left > right ?
		right :
		left;
}

template<class T>
bool equals(const T& left, const T& right) {
	return left == right ?
		true :
		false;
}
#endif

