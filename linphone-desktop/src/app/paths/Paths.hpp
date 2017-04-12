/*
 * Paths.hpp
 * Copyright (C) 2017  Belledonne Communications, Grenoble, France
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 *
 *  Created on: February 2, 2017
 *      Author: Ronan Abhamon
 */

#ifndef PATHS_H_
#define PATHS_H_

#include <string>

#include <QString>

// =============================================================================

namespace Paths {
  std::string getAvatarsDirpath ();
  std::string getCallHistoryFilepath ();
  std::string getCapturesDirpath ();
  std::string getConfigFilepath (const QString &config_path = QString());
  std::string getFactoryConfigFilepath ();
  std::string getFriendsListFilepath ();
  std::string getLogsDirpath ();
  std::string getMessageHistoryFilepath ();
  std::string getPackageDataDirpath ();
  std::string getPackageMsPluginsDirpath ();
  std::string getRootCaFilepath ();
  std::string getThumbnailsDirpath ();
  std::string getUserCertificatesDirpath ();
  std::string getZrtpDataFilepath ();
  std::string getZrtpSecretsFilepath ();

  void migrate ();
}

#endif // PATHS_H_
