#pragma once
template <typename T>
T min(T value1, T value2) {
	T minimumVal = value1;
	if (value2 < minimumVal)
		minimumVal = value2;
	return minimumVal;
}