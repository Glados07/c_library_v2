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
        963497464,963497672,73.0,101.0,129.0,157.0,185.0,213.0,241.0,269.0,125,192,3,70,137,204
    };
    mavlink_fuel_cell_status_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.time_boot_ms = packet_in.time_boot_ms;
        packet1.valid_flags = packet_in.valid_flags;
        packet1.inlet_temperature = packet_in.inlet_temperature;
        packet1.outlet_temperature = packet_in.outlet_temperature;
        packet1.fan_duty = packet_in.fan_duty;
        packet1.inlet_pressure = packet_in.inlet_pressure;
        packet1.stack_voltage = packet_in.stack_voltage;
        packet1.stack_current = packet_in.stack_current;
        packet1.dcdc_voltage = packet_in.dcdc_voltage;
        packet1.dcdc_current = packet_in.dcdc_current;
        packet1.id = packet_in.id;
        packet1.inlet_valve_state = packet_in.inlet_valve_state;
        packet1.purge_valve_state = packet_in.purge_valve_state;
        packet1.dcdc_state = packet_in.dcdc_state;
        packet1.dcdc_fault = packet_in.dcdc_fault;
        packet1.dcdc_temperature_raw = packet_in.dcdc_temperature_raw;
        
        
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
    mavlink_msg_fuel_cell_status_pack(system_id, component_id, &msg , packet1.time_boot_ms , packet1.valid_flags , packet1.id , packet1.inlet_temperature , packet1.outlet_temperature , packet1.fan_duty , packet1.inlet_valve_state , packet1.inlet_pressure , packet1.purge_valve_state , packet1.stack_voltage , packet1.stack_current , packet1.dcdc_voltage , packet1.dcdc_current , packet1.dcdc_state , packet1.dcdc_fault , packet1.dcdc_temperature_raw );
    mavlink_msg_fuel_cell_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_fuel_cell_status_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.time_boot_ms , packet1.valid_flags , packet1.id , packet1.inlet_temperature , packet1.outlet_temperature , packet1.fan_duty , packet1.inlet_valve_state , packet1.inlet_pressure , packet1.purge_valve_state , packet1.stack_voltage , packet1.stack_current , packet1.dcdc_voltage , packet1.dcdc_current , packet1.dcdc_state , packet1.dcdc_fault , packet1.dcdc_temperature_raw );
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
    mavlink_msg_fuel_cell_status_send(MAVLINK_COMM_1 , packet1.time_boot_ms , packet1.valid_flags , packet1.id , packet1.inlet_temperature , packet1.outlet_temperature , packet1.fan_duty , packet1.inlet_valve_state , packet1.inlet_pressure , packet1.purge_valve_state , packet1.stack_voltage , packet1.stack_current , packet1.dcdc_voltage , packet1.dcdc_current , packet1.dcdc_state , packet1.dcdc_fault , packet1.dcdc_temperature_raw );
    mavlink_msg_fuel_cell_status_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("FUEL_CELL_STATUS") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_FUEL_CELL_STATUS) != NULL);
#endif
}

static void mavlink_test_fuel_cell(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
    mavlink_test_fuel_cell_status(system_id, component_id, last_msg);
}

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // FUEL_CELL_TESTSUITE_H
