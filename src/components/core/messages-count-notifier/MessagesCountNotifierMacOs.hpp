/*
 * MessagesCountNotifierMacOs.hpp
 * Copyright (C) 2017-2018  Belledonne Communications, Grenoble, France
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
 *  Created on: June 30, 2017
 *      Author: Ghislain MARY
 */

#ifndef MESSAGES_COUNT_NOTIFIER_MAC_OS_H_
#define MESSAGES_COUNT_NOTIFIER_MAC_OS_H_

#include "AbstractMessagesCountNotifier.hpp"

// =============================================================================

extern "C" void notifyUnreadMessagesCountMacOs (int n);

class MessagesCountNotifier : public AbstractMessagesCountNotifier {
public:
  MessagesCountNotifier (QObject *parent = Q_NULLPTR) : AbstractMessagesCountNotifier(parent) {}

  void notifyUnreadMessagesCount (int n) override {
    notifyUnreadMessagesCountMacOs(n);
  }
};

#endif // MESSAGES_COUNT_NOTIFIER_MAC_OS_H_
