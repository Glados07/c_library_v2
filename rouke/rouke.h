/** @file
 *  @brief MAVLink comm protocol generated from rouke.xml
 *  @see http://mavlink.org
 */
#pragma once
#ifndef MAVLINK_ROUKE_H
#define MAVLINK_ROUKE_H

#ifndef MAVLINK_H
    #error Wrong include order: MAVLINK_ROUKE.H MUST NOT BE DIRECTLY USED. Include mavlink.h from the same directory instead or set ALL AND EVERY defines from MAVLINK.H manually accordingly, including the #define MAVLINK_H call.
#endif

#define MAVLINK_ROUKE_XML_HASH 4071060979016741811

#ifdef __cplusplus
extern "C" {
#endif

// MESSAGE LENGTHS AND CRCS

#ifndef MAVLINK_MESSAGE_LENGTHS
#define MAVLINK_MESSAGE_LENGTHS {}
#endif

#ifndef MAVLINK_MESSAGE_CRCS
#define MAVLINK_MESSAGE_CRCS {{53022, 37, 132, 132, 0, 0, 0}}
#endif

#include "../protocol.h"

#define MAVLINK_ENABLED_ROUKE

// ENUM DEFINITIONS



// MAVLINK VERSION

#ifndef MAVLINK_VERSION
#define MAVLINK_VERSION 2
#endif

#if (MAVLINK_VERSION == 0)
#undef MAVLINK_VERSION
#define MAVLINK_VERSION 2
#endif

// MESSAGE DEFINITIONS
#include "./mavlink_msg_vk_payload_data_relay.h"

// base include



#if MAVLINK_ROUKE_XML_HASH == MAVLINK_PRIMARY_XML_HASH
# define MAVLINK_MESSAGE_INFO {MAVLINK_MESSAGE_INFO_VK_PAYLOAD_DATA_RELAY}
# define MAVLINK_MESSAGE_NAMES {{ "VK_PAYLOAD_DATA_RELAY", 53022 }}
# if MAVLINK_COMMAND_24BIT
#  include "../mavlink_get_info.h"
# endif
#endif

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // MAVLINK_ROUKE_H
