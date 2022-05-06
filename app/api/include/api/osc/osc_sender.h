//--
// This file is part of Sonic Pi: http://sonic-pi.net
// Full project source: https://github.com/sonic-pi-net/sonic-pi
// License: https://github.com/sonic-pi-net/sonic-pi/blob/main/LICENSE.md
//
// Copyright 2013, 2014, 2015, 2016 by Sam Aaron (http://sam.aaron.name).
// All rights reserved.
//
// Permission is granted for use, copying, modification, and
// distribution of modified versions of this work as long as this
// notice is included.
//++

#ifndef OSCSENDER_H
#define OSCSENDER_H

#include "osc_pkt.hh"

namespace SonicPi
{

class OscSender
{

public:
    OscSender(int port);
    bool sendOSC(oscpkt::Message m);
    void bufferNewlineAndIndent(int point_line, int point_index, int first_line, std::string code, std::string fileName, std::string id);

private:
    int port;
};

} // namespace SonicPi

#endif // OSCSENDER_H
