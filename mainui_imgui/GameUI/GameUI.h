/*
GameUI.h
Copyright (C) 2020 Moemod Hymei

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.
*/

#pragma once

#include <memory>

#include "IGameDialog.h"

namespace ui{

    class GameUI
    {
    public:
        GameUI(); // Init
        ~GameUI(); // Shutdown

        void VidInit();
        void OnGUI();
        void SetActivate(bool x);

    public:
        void OpenCreateGameDialog();
        void OpenServerBrowser();
        void OpenOptionsDialog();

        void PushDialog(std::string name, std::shared_ptr<IGameDialog> dialog);

    protected:
        void OnDrawBackground();

    private:
        struct impl_t;
        const std::unique_ptr<impl_t> pimpl;
    };

}