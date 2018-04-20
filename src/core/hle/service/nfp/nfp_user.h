// Copyright 2018 yuzu emulator team
// Licensed under GPLv2 or any later version
// Refer to the license.txt file included.

#pragma once

#include "core/hle/service/nfp/nfp.h"

namespace Service::NFP {

class NFP_User final : public Module::Interface {
public:
    explicit NFP_User(std::shared_ptr<Module> module);
};

} // namespace Service::NFP
