#ifndef __TIGINFO_HPP_
#define __TIGINFO_HPP_

#include <string>

namespace TigData
{
  struct TigInfo
  {
    std::string url, launch, version, title, desc,
      shot300x260, devname, homepage, tags;

    bool isDemo, hasPaypal;
  };
}
#endif
