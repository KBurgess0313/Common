#ifndef COMMON_POD_ACCOUNTS_HPP
#define COMMON_POD_ACCOUNTS_HPP

#include "Common/Network/Message/LoginMessage.h"

#include <string.h>
#include <vector>

#include <boost/shared_ptr.hpp>
#include <boost/property_tree/ptree.hpp>

namespace {
  namespace bp = boost::property_tree;
} // end namespace

namespace common {
namespace pod {

  namespace privelages{
    enum Type {
      INVALID = 0,
      USER,
      ADMIN
    };

    Type fromString(const std::string& aType);
    std::string toString(const Type aType);

  } //namespace Privelages

  struct Account
  {
  public:
    Account(const std::string& aFirstName,
            const std::string& aLastName,
            const std::string& aLogin,
            const std::string& aPassword,
            const privelages::Type& aPrivelages,
            std::vector<std::string> aPictures);

    Account(const bp::ptree::value_type& accountTree);
    Account();

    bp::ptree toXml();

    privelages::Type getPrivelages();

    bool isLogin(common::network::message::LoginMessage& aLogin);

  private:
    std::string mFirstName;
    std::string mLastName;
    std::string mLogin;
    std::string mPassword;

    privelages::Type mPrivelages;

    std::vector<std::string> mPictures;
  };

  typedef std::shared_ptr<Account> AccountPtr;
  typedef std::vector<AccountPtr> AccountPtrList;

} //namespace pod
} //namespace common
#endif // COMMON_POD_ACCOUNTS_HPP
