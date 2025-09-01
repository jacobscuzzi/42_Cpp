/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaumfal <jbaumfal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 12:57:23 by jbaumfal          #+#    #+#             */
/*   Updated: 2025/09/01 16:46:24 by jbaumfal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Fixed.hpp"

int main(void) {
	std::cout << "=== EX02 COMPREHENSIVE TESTING ===" << std::endl << std::endl;
	
	// Create test objects
	Fixed a;                    // Default constructor (0)
	Fixed b(10);			   // Int constructor
	Fixed c(42.42f);		   // Float constructor
	Fixed d(b);				// Copy constructor
	
	std::cout << "Initial values:" << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << "c = " << c << std::endl;
	std::cout << "d = " << d << std::endl;
	std::cout << std::endl;

	// ===== COMPARISON OPERATORS TESTING =====
	std::cout << "=== COMPARISON OPERATORS ===" << std::endl;
	
	// Test == operator
	std::cout << "Equality tests (==):" << std::endl;
	std::cout << "b == d: " << (b == d) << " (should be 1/true)" << std::endl;
	std::cout << "a == b: " << (a == b) << " (should be 0/false)" << std::endl;
	std::cout << "c == Fixed(42.42f): " << (c == Fixed(42.42f)) << " (should be 1/true)" << std::endl;
	std::cout << "Fixed(5) == Fixed(5): " << (Fixed(5) == Fixed(5)) << " (should be 1/true)" << std::endl;
	std::cout << std::endl;
	
	// Test != operator
	std::cout << "Inequality tests (!=):" << std::endl;
	std::cout << "a != b: " << (a != b) << " (should be 1/true)" << std::endl;
	std::cout << "b != d: " << (b != d) << " (should be 0/false)" << std::endl;
	std::cout << "c != Fixed(42.42f): " << (c != Fixed(42.42f)) << " (should be 0/false)" << std::endl;
	std::cout << std::endl;
	
	// Test < operator
	std::cout << "Less than tests (<):" << std::endl;
	std::cout << "a < b: " << (a < b) << " (should be 1/true)" << std::endl;
	std::cout << "b < a: " << (b < a) << " (should be 0/false)" << std::endl;
	std::cout << "b < c: " << (b < c) << " (should be 1/true)" << std::endl;
	std::cout << std::endl;
	
	// Test > operator
	std::cout << "Greater than tests (>):" << std::endl;
	std::cout << "c > b: " << (c > b) << " (should be 1/true)" << std::endl;
	std::cout << "a > b: " << (a > b) << " (should be 0/false)" << std::endl;
	std::cout << std::endl;
	
	// Test <= operator
	std::cout << "Less than or equal tests (<=):" << std::endl;
	std::cout << "a <= b: " << (a <= b) << " (should be 1/true)" << std::endl;
	std::cout << "b <= d: " << (b <= d) << " (should be 1/true)" << std::endl;
	std::cout << "c <= b: " << (c <= b) << " (should be 0/false)" << std::endl;
	std::cout << std::endl;
	
	// Test >= operator
	std::cout << "Greater than or equal tests (>=):" << std::endl;
	std::cout << "c >= b: " << (c >= b) << " (should be 1/true)" << std::endl;
	std::cout << "b >= d: " << (b >= d) << " (should be 1/true)" << std::endl;
	std::cout << "a >= b: " << (a >= b) << " (should be 0/false)" << std::endl;
	std::cout << std::endl;

	// ===== ARITHMETIC OPERATORS TESTING =====
	std::cout << "=== ARITHMETIC OPERATORS ===" << std::endl;
	
	// // Test + operator
	// std::cout << "Addition tests (+):" << std::endl;
	// Fixed sum1 = b + Fixed(5);
	// Fixed sum2 = Fixed(1.5f) + Fixed(2.5f);
	// std::cout << "b + Fixed(5) = " << b << " + " << Fixed(5) << " = " << sum1 << std::endl;
	// std::cout << "Fixed(1.5f) + Fixed(2.5f) = " << Fixed(1.5f) << " + " << Fixed(2.5f) << " = " << sum2 << std::endl;
	// std::cout << std::endl;
	
	// // Test - operator
	// std::cout << "Subtraction tests (-):" << std::endl;
	// Fixed diff1 = c - b;
	// Fixed diff2 = Fixed(10) - Fixed(3);
	// std::cout << "c - b = " << c << " - " << b << " = " << diff1 << std::endl;
	// std::cout << "Fixed(10) - Fixed(3) = " << Fixed(10) << " - " << Fixed(3) << " = " << diff2 << std::endl;
	// std::cout << std::endl;
	
	// // Test * operator
	// std::cout << "Multiplication tests (*):" << std::endl;
	// Fixed mult1 = Fixed(3) * Fixed(4);
	// Fixed mult2 = Fixed(2.5f) * Fixed(2);
	// std::cout << "Fixed(3) * Fixed(4) = " << Fixed(3) << " * " << Fixed(4) << " = " << mult1 << std::endl;
	// std::cout << "Fixed(2.5f) * Fixed(2) = " << Fixed(2.5f) << " * " << Fixed(2) << " = " << mult2 << std::endl;
	// std::cout << std::endl;
	
	// // Test / operator
	// std::cout << "Division tests (/):" << std::endl;
	// Fixed div1 = Fixed(10) / Fixed(2);
	// Fixed div2 = Fixed(7.5f) / Fixed(1.5f);
	// std::cout << "Fixed(10) / Fixed(2) = " << Fixed(10) << " / " << Fixed(2) << " = " << div1 << std::endl;
	// std::cout << "Fixed(7.5f) / Fixed(1.5f) = " << Fixed(7.5f) << " / " << Fixed(1.5f) << " = " << div2 << std::endl;
	// std::cout << std::endl;
	
	// ===== INCREMENT/DECREMENT OPERATORS TESTING =====
	std::cout << "=== INCREMENT/DECREMENT OPERATORS ===" << std::endl;
	
	// Fixed testIncDec(5.5f);
	// std::cout << "Starting value: " << testIncDec << std::endl;
	
	// // Test pre-increment
	// std::cout << "Pre-increment tests (++obj):" << std::endl;
	// std::cout << "++testIncDec = " << ++testIncDec << " (value is now " << testIncDec << ")" << std::endl;
	// std::cout << std::endl;
	
	// // Test post-increment
	// std::cout << "Post-increment tests (obj++):" << std::endl;
	// Fixed temp = testIncDec++;
	// std::cout << "testIncDec++ returned " << temp << " (value is now " << testIncDec << ")" << std::endl;
	// std::cout << std::endl;
	
	// // Test pre-decrement
	// std::cout << "Pre-decrement tests (--obj):" << std::endl;
	// std::cout << "--testIncDec = " << --testIncDec << " (value is now " << testIncDec << ")" << std::endl;
	// std::cout << std::endl;
	
	// // Test post-decrement
	// std::cout << "Post-decrement tests (obj--):" << std::endl;
	// temp = testIncDec--;
	// std::cout << "testIncDec-- returned " << temp << " (value is now " << testIncDec << ")" << std::endl;
	// std::cout << std::endl;

	// ===== MIN/MAX STATIC FUNCTIONS TESTING =====
	std::cout << "=== MIN/MAX STATIC FUNCTIONS ===" << std::endl;
	
	// // Test min functions
	// std::cout << "Min function tests:" << std::endl;
	// Fixed minVal1 = Fixed::min(b, c);
	// std::cout << "Fixed::min(" << b << ", " << c << ") = " << minVal1 << std::endl;
	
	// Fixed minVal2 = Fixed::min(Fixed(100), Fixed(50));
	// std::cout << "Fixed::min(Fixed(100), Fixed(50)) = " << minVal2 << std::endl;
	
	// // Test const version
	// const Fixed constB(10);
	// const Fixed constC(42.42f);
	// Fixed minConstVal = Fixed::min(constB, constC);
	// std::cout << "Fixed::min(const Fixed(10), const Fixed(42.42f)) = " << minConstVal << std::endl;
	// std::cout << std::endl;
	
	// // Test max functions
	// std::cout << "Max function tests:" << std::endl;
	// Fixed maxVal1 = Fixed::max(b, c);
	// std::cout << "Fixed::max(" << b << ", " << c << ") = " << maxVal1 << std::endl;
	
	// Fixed maxVal2 = Fixed::max(Fixed(25), Fixed(75));
	// std::cout << "Fixed::max(Fixed(25), Fixed(75)) = " << maxVal2 << std::endl;
	
	// // Test const version
	// Fixed maxConstVal = Fixed::max(constB, constC);
	// std::cout << "Fixed::max(const Fixed(10), const Fixed(42.42f)) = " << maxConstVal << std::endl;
	// std::cout << std::endl;

	// ===== COMPLEX EXPRESSIONS TESTING =====
	std::cout << "=== COMPLEX EXPRESSIONS ===" << std::endl;
	
	// // Test complex arithmetic
	// std::cout << "Complex arithmetic:" << std::endl;
	// Fixed result1 = (Fixed(10) + Fixed(5)) * Fixed(2);
	// std::cout << "(Fixed(10) + Fixed(5)) * Fixed(2) = " << result1 << std::endl;
	
	// Fixed result2 = Fixed(20) / (Fixed(4) - Fixed(2));
	// std::cout << "Fixed(20) / (Fixed(4) - Fixed(2)) = " << result2 << std::endl;
	// std::cout << std::endl;
	
	// // Test chained comparisons and logic
	// std::cout << "Chained comparisons:" << std::endl;
	// bool chainResult1 = (Fixed(5) < Fixed(10)) && (Fixed(10) < Fixed(15));
	// std::cout << "(Fixed(5) < Fixed(10)) && (Fixed(10) < Fixed(15)) = " << chainResult1 << std::endl;
	
	// bool chainResult2 = (Fixed(100) > Fixed(50)) || (Fixed(10) == Fixed(5));
	// std::cout << "(Fixed(100) > Fixed(50)) || (Fixed(10) == Fixed(5)) = " << chainResult2 << std::endl;
	// std::cout << std::endl;

	// ===== EDGE CASE TESTING =====
	std::cout << "=== EDGE CASE TESTING ===" << std::endl;
	
	// // Test with zero
	// std::cout << "Operations with zero:" << std::endl;
	// Fixed zero;
	// Fixed five(5);
	// std::cout << "Fixed(0) + Fixed(5) = " << (zero + five) << std::endl;
	// std::cout << "Fixed(5) - Fixed(5) = " << (five - five) << std::endl;
	// std::cout << "Fixed(0) == Fixed(0) = " << (zero == Fixed(0)) << std::endl;
	// std::cout << std::endl;
	
	// // Test with negative numbers
	// std::cout << "Operations with negative numbers:" << std::endl;
	// Fixed neg(-5.5f);
	// Fixed pos(5.5f);
	// std::cout << "Fixed(-5.5f) + Fixed(5.5f) = " << (neg + pos) << std::endl;
	// std::cout << "Fixed(-5.5f) * Fixed(-2) = " << (neg * Fixed(-2)) << std::endl;
	// std::cout << "Fixed(-5.5f) < Fixed(0) = " << (neg < zero) << std::endl;
	// std::cout << std::endl;
	
	// // Test increment/decrement with zero and small values
	// Fixed smallTest(0.0f);
	// std::cout << "Increment/decrement near zero:" << std::endl;
	// std::cout << "Starting with: " << smallTest << std::endl;
	// std::cout << "After ++: " << ++smallTest << std::endl;
	// std::cout << "After --: " << --smallTest << std::endl;
	// std::cout << std::endl;

	// ===== PROVIDED EXAMPLE FROM SUBJECT =====
	std::cout << "=== PROVIDED EXAMPLE FROM SUBJECT ===" << std::endl;
	
	// This is the exact example from the PDF
	//Fixed testA;
	//Fixed const testB( Fixed( 5.05f ) * Fixed( 2 ) );
	
	//std::cout << testA << std::endl;
	// std::cout << ++testA << std::endl;
	// std::cout << testA << std::endl;
	// std::cout << testA++ << std::endl;
	// std::cout << testA << std::endl;
	
	//std::cout << testB << std::endl;
	
	// std::cout << Fixed::max( testA, testB ) << std::endl;

	std::cout << std::endl << "=== END OF TESTING ===" << std::endl;
	
	return 0;
}


// int main( void ) {
// 	Fixed a;
// 	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
// 	std::cout << a << std::endl;
// 	std::cout << ++a << std::endl;
// 	std::cout << a << std::endl;
// 	std::cout << a++ << std::endl;
// 	std::cout << a << std::endl;
// 	std::cout << b << std::endl;
// 	std::cout << Fixed::max( a, b ) << std::endl;
// 	return 0;
// }