/** @file
 *    @brief MAVLink comm protocol testsuite generated from fuel_cell.xml
 *    @see https://mavlink.io/en/
 */
#pragma once
#ifndef FUEL_CELL_TESTSUITE_H
#define FUEL_CELL_TESTSUITE_H

#ifdef __cplusplus
extern "C" {
#endif

#ifndef MAVLINK_TEST_ALL
#define MAVLINK_TEST_ALL
static void mavlink_test_common(uint8_t, uint8_t, mavlink_message_t *last_msg);
static void mavlink_test_fuel_cell(uint8_t, uint8_t, mavlink_message_t *last_msg);

static void mavlink_test_all(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
    mavlink_test_common(system_id, component_id, last_msg);
    mavlink_test_fuel_cell(system_id, component_id, last_msg);
}
#endif

#include "../common/testsuite.h"


static void mavlink_test_fuel_cell_control(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_FUEL_CELL_CONTROL >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_fuel_cell_control_t packet_in = {
        963497464,17,84,151
    };
    mavlink_fuel_cell_control_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.request_id = packet_in.request_id;
        packet1.target_system = packet_in.target_system;
        packet1.target_component = packet_in.target_component;
        packet1.control_command = packet_in.control_command;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_FUEL_CELL_CONTROL_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_FUEL_CELL_CONTROL_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_fuel_cell_control_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_fuel_cell_control_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_fuel_cell_control_pack(system_id, component_id, &msg , packet1.request_id , packet1.target_system , packet1.target_component , packet1.control_command );
    mavlink_msg_fuel_cell_control_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_fuel_cell_control_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.request_id , packet1.target_system , packet1.target_component , packet1.control_command );
    mavlink_msg_fuel_cell_control_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_fuel_cell_control_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_fuel_cell_control_send(MAVLINK_COMM_1 , packet1.request_id , packet1.target_system , packet1.target_component , packet1.control_command );
    mavlink_msg_fuel_cell_control_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("FUEL_CELL_CONTROL") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_FUEL_CELL_CONTROL) != NULL);
#endif
}

static void mavlink_test_fuel_cell_status(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_FUEL_CELL_STATUS >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_fuel_cell_status_t packet_in = {
        963497464,17443,17547,17651,17755,41,108,175,242
    };
    mavlink_fuel_cell_status_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.response_request_id = packet_in.response_request_id;
        packet1.bus_voltage = packet_in.bus_voltage;
        packet1.bus_current = packet_in.bus_current;
        packet1.requested_power = packet_in.requested_power;
        packet1.soc = packet_in.soc;
        packet1.device_state = packet_in.device_state;
        packet1.control_command = packet_in.control_command;
        packet1.control_result = packet_in.control_result;
        packet1.connection_state = packet_in.connection_state;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_FUEL_CELL_STATUS_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_FUEL_CELL_STATUS_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_fuel_cell_status_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_fuel_cell_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_fuel_cell_status_pack(system_id, component_id, &msg , packet1.response_request_id , packet1.bus_voltage , packet1.bus_current , packet1.requested_power , packet1.soc , packet1.device_state , packet1.control_command , packet1.control_result , packet1.connection_state );
    mavlink_msg_fuel_cell_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_fuel_cell_status_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.response_request_id , packet1.bus_voltage , packet1.bus_current , packet1.requested_power , packet1.soc , packet1.device_state , packet1.control_command , packet1.control_result , packet1.connection_state );
    mavlink_msg_fuel_cell_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_fuel_cell_status_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_fuel_cell_status_send(MAVLINK_COMM_1 , packet1.response_request_id , packet1.bus_voltage , packet1.bus_current , packet1.requested_power , packet1.soc , packet1.device_state , packet1.control_command , packet1.control_result , packet1.connection_state );
    mavlink_msg_fuel_cell_status_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("FUEL_CELL_STATUS") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_FUEL_CELL_STATUS) != NULL);
#endif
}

static void mavlink_test_fuel_cell(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
    mavlink_test_fuel_cell_control(system_id, component_id, last_msg);
    mavlink_test_fuel_cell_status(system_id, component_id, last_msg);
}

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // FUEL_CELL_TESTSUITE_H
