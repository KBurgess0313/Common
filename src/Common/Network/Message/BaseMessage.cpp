#include "Common/Network/Message/BaseMessage.h"

#include <ostream>

#include <boost/property_tree/xml_parser.hpp>

namespace common {
namespace network {
namespace message {

  Base::Base(const boost::property_tree::ptree& aMessage) :
    mMessage(aMessage)
  {
  }

  Base::Base() :
    mMessage()
  {
  }

  std::string Base::constructMessage()
  {
    std::ostringstream out;

    boost::property_tree::write_xml(out, mMessage);

    std::string temp = out.str();
    return temp;
  }
} //namespace message
} //namespace network
} //namespace common
