#pragma once
template<typename T>
bool is_sorted(T& a) {
	int length = sizeof(a) / sizeof(*a);
	for (int i = 1; i < length; i++) {
		if (a[i] < a[i - 1])
			return false;
	}
	return true;
}