#ifndef SEA_MD_OPTIONS_HH
#define SEA_MD_OPTIONS_HH

#include "soil/Config.hh"

#include <string>

namespace sea
{
namespace po = boost::program_options;

class MDOptions : public soil::Options
{
 public:

  MDOptions();
  
  virtual ~MDOptions();

  virtual po::options_description* configOptions();

  std::string eqs_ip;
  unsigned short eqs_port;
  
  std::string user_id;
  std::string password;

 private:

  boost::program_options::options_description options_;
};

}  


#endif 