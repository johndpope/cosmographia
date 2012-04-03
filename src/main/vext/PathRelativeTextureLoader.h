// This file is part of Cosmographia.
// Copyright (C) 2012 Chris Laurel <claurel@gmail.com>
//
// Cosmographia is free software; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public
// License as published by the Free Software Foundation; either
// version 2 of the License, or (at your option) any later version.
//
// Cosmographia is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public
// License along with Cosmographia. If not, see <http://www.gnu.org/licenses/>.

#ifndef _PATH_RELATIVE_TEXTURE_LOADER_H_
#define _PATH_RELATIVE_TEXTURE_LOADER_H_

#include <vesta/TextureMapLoader.h>

class PathRelativeTextureLoader : public vesta::TextureMapLoader
{
public:
    PathRelativeTextureLoader();
    virtual ~PathRelativeTextureLoader();

    virtual std::string searchPath() const = 0;
    virtual void setSearchPath(const std::string& path) = 0;

    virtual bool handleMakeResident(vesta::TextureMap* texture) = 0;

protected:
    virtual std::string resolveResourceName(const std::string& resourceName) = 0;
};

#endif // _PATH_RELATIVE_TEXTURE_LOADER_H_
