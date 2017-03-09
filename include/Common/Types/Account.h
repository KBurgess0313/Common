#ifndef COMMON_ACCOUNTS_HPP
#define COMMON_ACCOUNTS_HPP

#include <string.h>
#include <vector>

#include <boost/shared_ptr.hpp>
#include <boost/property_tree/ptree.hpp>

namespace {
  namespace bp = boost::property_tree;
} //namespace

namespace Common {
namespace Types {

  namespace Privelages{
    enum Type {
      INVALID = 0,
      USER,
      ADMIN
    };

    Type fromString(const std::string& aType);
    std::string toString(const Type aType);

  } //namespace Privelages

  //Forward Declare & Typedefs.
  struct Account;

  typedef boost::shared_ptr<Account> AccountPtr;
  typedef std::vector<AccountPtr> AccountPtrList;

  struct Account
  {
  public:

    Account(const std::string& aFirstName,
            const std::string& aLastName,
            const std::string& aLogin,
            const std::string& aPassword,
            const Privelages::Type& aPrivelages,
            std::vector<std::string> aPictures);

    Account(const bp::ptree::value_type& accountTree);

    bp::ptree toXml();

    bool isValidLogin(const std::string aLogin,
                      const std::string aPass);

  private:
    std::string mFirstName;
    std::string mLastName;
    std::string mLogin;
    std::string mPassword;

    Privelages::Type mAccountPrivelages;

    std::vector<std::string> mPictures;

    Account();
  };
} //namespace Types
} //namespace Common
#endif // ACCOUNTS_HPP
