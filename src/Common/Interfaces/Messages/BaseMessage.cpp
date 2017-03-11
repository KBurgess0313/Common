#include "Common/Interfaces/Messages/BaseMessage.h"

#include <ostream>

#include <boost/property_tree/xml_parser.hpp>

namespace Common {
namespace Interfaces {
namespace Messages {

  Base::Base(const boost::property_tree::ptree& aMessage) :
    mMessage(aMessage)
  {
  }

  Base::Base() :
    mMessage()
  {
  }

  std::string& Base::constructMessage()
  {
    std::ostringstream out;

    boost::property_tree::write_xml(out, mMessage);

    return out.str();
  }
} //namespace Messages
} //namespace Interfaces
} //namespace Common