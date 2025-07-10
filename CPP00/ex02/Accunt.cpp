// ************************************************************************** //
//                                                                            //
//                Account.hpp for GlobalBanksters United                	  //
//                Created on  : Thu Nov 20 19:43:15 1989                      //
//                Last update : Wed Jan 04 14:54:06 1992                      //
//                Made by : Brad "Buddy" McLane <bm@gbu.com>                  //
//                                                                            //
// ************************************************************************** //

#include "Account.hpp"
#include <iostream>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
    _accountIndex = _nbAccounts;
	_amount = initial_deposit;
	_nbDeposits = 1;
	_nbWithdrawals = 0;

    _nbAccounts++;
	_totalAmount += initial_deposit;
	_totalNbDeposits++;
	_totalNbWithdrawals;
    _displayTimestamp();
    std::cout   << "index:" << _accountIndex
                << ";ammount:" << _amount
                << ";created:" << std::endl;
}

Account::~Account(void)
{

}


int Account::getNbAccounts (void)
{
    return (_nbAccounts);
}

int Account::getTotalAmount (void)
{
    return (_totalAmount);
}

int Account::getNbDeposits (void)
{
    return (_totalNbDeposits);
}

int Account::getNbWithdrawals (void)
{
    return (_totalNbWithdrawals);
}

void Account::displayAccountsInfos(void)
{
    _displayTimestamp();
    std::cout << "accounts:" << _nbAccounts
              << ";total:" << _totalAmount
              << ";deposits:" << _totalNbDeposits
              << ";withdrawals:" << _totalNbWithdrawals
              << std::endl;
}

void    Account::makeDeposit(int deposit)
{
    _amount += deposit;
    _nbDeposits++;

    _totalAmount += deposit;
    _totalNbDeposits ++;
    _displayTimestamp();
    std::cout   << "index:" << _accountIndex
                << ";p_amount:" << _amount - deposit
                << ";deposit:" << deposit
                << ";amount:" << amount
                << "nb_deposits" << nbDeposits
                << std::endl;
}

bool    Account::makeWithdrawal(int withdrawal)
{
    if (withdrawal > _amount)
    {
        _displayTimestamp();
        std::cout   << "index:" << _accountIndex
                    << ";p_amount:" << _amount
                    << ";withdrawal:refused"
                    << std::endl;
        return false;
    }
    _amount -= withdrawal;
    _nbWithdrawals++;
    
    _totalAmount -= withdrawal;
    _totalNbWithdrawals++;
    
    _displayTimestamp();
    std::cout   << "index:" << _accountIndex
                << ";p_amount:" << _amount + withdrawal
                << ";withdrawal:" << withdrawal
                << ";amount:" << _amount
                << ";nb_withdrawals:" << _nbWithdrawals
                << std::endl;
    return true;
}

int checkAmount(void) const
{
    return (_amount);
}

void displayStatus (void) const
{
			std::cout   << "index:" << _accountIndex
			<< ";amount:" << _amount + withdrawal
			<< ";deposits:" << withdrawal
			<< ";withdrawals:" << _amount
			<< std::endl;
}