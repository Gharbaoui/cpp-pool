#include "Account.hpp"
#include <iostream>
int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
    _nbDeposits = 0;
    _nbWithdrawals = 0;
    _accountIndex = _nbAccounts;
    _nbAccounts++;
    _totalAmount += initial_deposit;
    _amount = initial_deposit;
    std::cout << "index:" << _accountIndex <<
    ";amount:" << _amount << ";created" << std::endl;
}

Account::~Account()
{

    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
    _totalAmount -= _amount;
    _nbAccounts--;
    //// later
}

void    Account::displayAccountsInfos()
{
    std::cout << "accounts:" << _nbAccounts <<
    ";total:" << _totalAmount << ";deposits:" <<
    _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals
    << std::endl;
}

void    Account::displayStatus() const
{
    std::cout << "index:" << _accountIndex <<
    ";amount:" << _amount << ";deposits:" << _nbDeposits
    << ";withdrawals:" << _nbWithdrawals << std::endl;
}

void    Account::makeDeposit(int deposit)
{
    std::cout << "index:" << _accountIndex <<
    ";p_amount:" << _amount << ";deposit:" << deposit <<
    ";amount:" << _amount + deposit <<";nb_deposits:"
    << _nbDeposits + 1 << std::endl;
    _totalNbDeposits++;
    _nbDeposits++;
    _amount += deposit;
    _totalAmount += deposit;
}

bool    Account::makeWithdrawal(int withdrawal)
{
    if (_amount >= withdrawal)
    {
        std::cout << "index:" << _accountIndex <<
        ";p_amount:" << _amount << ";withdrawal:" << withdrawal << ";amount:" <<
        _amount - withdrawal << ";nb_withdrawals:" << _nbWithdrawals + 1 << std::endl;
        _amount -= withdrawal;
        _totalNbWithdrawals++;
        _totalAmount -= withdrawal;
        _nbWithdrawals++;
        return true;
    }else{
       std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:refused"
        << std::endl;
        return false;
    }
}

int Account::getNbAccounts()
{
    return _nbAccounts;
}


int Account::getTotalAmount()
{
    return _totalAmount;
}


int Account::getNbDeposits()
{
    return _totalNbDeposits;
}

int Account::getNbWithdrawals()
{
    return _totalNbWithdrawals;
}

int Account::checkAmount() const
{
    return _amount;
}
