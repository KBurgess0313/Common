#include "Common\Types\Account.h"

#include <iostream>

namespace Common {
namespace Types {

  namespace Privelages
  {
    Type fromString(const std::string& aType)
    {
      Type out = INVALID;

      if(aType == "USER")
      {
        out = USER;
      }
      else if(aType == "ADMIN")
      {
        out = ADMIN;
      }

      return out;
    }

    std::string toString(const Type aType)
    {
      std::string out = "";

      switch(aType)
      {
        case USER:
          out = "USER";
          break;
        case ADMIN:
          out = "ADMIN";
          break;
        default:
          out = "INVALID";
      };

      return out;
    }
  }

  Account::Account(const std::string& aFirstName,
                   const std::string& aLastName,
                   const std::string& aLogin,
                   const std::string& aPassword,
                   const Privelages::Type& aPrivelages,
                   std::vector<std::string> aPictures)  :
      mFirstName(aFirstName),
      mLastName(aLastName),
      mLogin(aLogin),
      mPassword(aPassword),
      mAccountPrivelages(aPrivelages),
      mPictures(aPictures)
  {
  }

  Account::Account(const boost::property_tree::ptree::value_type& accountTree) :
    mFirstName(accountTree.second.get<std::string>("FirstName")),
    mLastName(accountTree.second.get<std::string>("LastName")),
    mLogin(accountTree.second.get<std::string>("Login")),
    mPassword(accountTree.second.get<std::string>("Passwd")),
    mAccountPrivelages(Privelages::fromString(accountTree.second.get<std::string>("Privelages"))),
    mPictures(std::vector<std::string>())
  {
  }

  Account::Account()
  {

  }
  bp::ptree Account::toXml()
  {
    return bp::ptree();
  }

  bool Account::isValidLogin(const std::string aLogin,
                             const std::string aPass)
  {
    return ((mLogin == aLogin) && (mPassword == aPass));
  }
} //namespace Types
} //namespace Common
