#pragma once
// MESSAGE FUEL_CELL_STATUS PACKING

#define MAVLINK_MSG_ID_FUEL_CELL_STATUS 61000


typedef struct __mavlink_fuel_cell_status_t {
 uint32_t time_boot_ms; /*< [ms] Measurement timestamp in AI-box monotonic time since its OS boot, modulo 2^32. Not Unix time. Do not refresh this timestamp when repeating stale data.*/
 uint32_t valid_flags; /*<  Bitmask of valid business values. Unconfirmed source units, ambiguous source offsets and stale readings must have their bits clear.*/
 float inlet_temperature; /*< [degC] Stack air-inlet temperature, described as ambient temperature in the FCS document.*/
 float outlet_temperature; /*< [degC] Stack air-outlet temperature.*/
 float fan_duty; /*< [%] Fan duty cycle, 0 to 100 percent, not a fraction from 0 to 1.*/
 float inlet_pressure; /*< [kPa] Stack gas-inlet pressure. Do not substitute gas-tank pressure from standard FUEL_STATUS.*/
 float stack_voltage; /*< [V] Fuel-cell stack voltage.*/
 float stack_current; /*< [A] Fuel-cell stack current normalized to amperes. Source table says V, a contradiction; do not convert or mark valid until vendor confirmation.*/
 float dcdc_voltage; /*< [V] DC/DC output voltage.*/
 float dcdc_current; /*< [A] DC/DC output current.*/
 uint8_t id; /*<  Fuel-cell instance ID, initially 0. Source system/component IDs identify the aircraft and AI box separately.*/
 uint8_t inlet_valve_state; /*<  Inlet valve raw state code. The source document does not define code meanings. Ignore if its valid bit is clear.*/
 uint8_t purge_valve_state; /*<  Purge valve raw state code. No open/closed enum is assumed.*/
 uint8_t dcdc_state; /*<  DC/DC raw state code; source enum is pending.*/
 uint8_t dcdc_fault; /*<  DC/DC raw fault code; source enum is pending.*/
 uint8_t dcdc_temperature_raw; /*<  Unmodified Byte22 value, not a Celsius value. Unit, sign and scaling are unconfirmed. Add a new physical-temperature extension later instead of reinterpreting this byte.*/
} mavlink_fuel_cell_status_t;

#define MAVLINK_MSG_ID_FUEL_CELL_STATUS_LEN 46
#define MAVLINK_MSG_ID_FUEL_CELL_STATUS_MIN_LEN 46
#define MAVLINK_MSG_ID_61000_LEN 46
#define MAVLINK_MSG_ID_61000_MIN_LEN 46

#define MAVLINK_MSG_ID_FUEL_CELL_STATUS_CRC 102
#define MAVLINK_MSG_ID_61000_CRC 102



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_FUEL_CELL_STATUS { \
    61000, \
    "FUEL_CELL_STATUS", \
    16, \
    {  { "time_boot_ms", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_fuel_cell_status_t, time_boot_ms) }, \
         { "valid_flags", NULL, MAVLINK_TYPE_UINT32_T, 0, 4, offsetof(mavlink_fuel_cell_status_t, valid_flags) }, \
         { "id", NULL, MAVLINK_TYPE_UINT8_T, 0, 40, offsetof(mavlink_fuel_cell_status_t, id) }, \
         { "inlet_temperature", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_fuel_cell_status_t, inlet_temperature) }, \
         { "outlet_temperature", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_fuel_cell_status_t, outlet_temperature) }, \
         { "fan_duty", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_fuel_cell_status_t, fan_duty) }, \
         { "inlet_valve_state", NULL, MAVLINK_TYPE_UINT8_T, 0, 41, offsetof(mavlink_fuel_cell_status_t, inlet_valve_state) }, \
         { "inlet_pressure", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_fuel_cell_status_t, inlet_pressure) }, \
         { "purge_valve_state", NULL, MAVLINK_TYPE_UINT8_T, 0, 42, offsetof(mavlink_fuel_cell_status_t, purge_valve_state) }, \
         { "stack_voltage", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_fuel_cell_status_t, stack_voltage) }, \
         { "stack_current", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_fuel_cell_status_t, stack_current) }, \
         { "dcdc_voltage", NULL, MAVLINK_TYPE_FLOAT, 0, 32, offsetof(mavlink_fuel_cell_status_t, dcdc_voltage) }, \
         { "dcdc_current", NULL, MAVLINK_TYPE_FLOAT, 0, 36, offsetof(mavlink_fuel_cell_status_t, dcdc_current) }, \
         { "dcdc_state", NULL, MAVLINK_TYPE_UINT8_T, 0, 43, offsetof(mavlink_fuel_cell_status_t, dcdc_state) }, \
         { "dcdc_fault", NULL, MAVLINK_TYPE_UINT8_T, 0, 44, offsetof(mavlink_fuel_cell_status_t, dcdc_fault) }, \
         { "dcdc_temperature_raw", NULL, MAVLINK_TYPE_UINT8_T, 0, 45, offsetof(mavlink_fuel_cell_status_t, dcdc_temperature_raw) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_FUEL_CELL_STATUS { \
    "FUEL_CELL_STATUS", \
    16, \
    {  { "time_boot_ms", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_fuel_cell_status_t, time_boot_ms) }, \
         { "valid_flags", NULL, MAVLINK_TYPE_UINT32_T, 0, 4, offsetof(mavlink_fuel_cell_status_t, valid_flags) }, \
         { "id", NULL, MAVLINK_TYPE_UINT8_T, 0, 40, offsetof(mavlink_fuel_cell_status_t, id) }, \
         { "inlet_temperature", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_fuel_cell_status_t, inlet_temperature) }, \
         { "outlet_temperature", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_fuel_cell_status_t, outlet_temperature) }, \
         { "fan_duty", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_fuel_cell_status_t, fan_duty) }, \
         { "inlet_valve_state", NULL, MAVLINK_TYPE_UINT8_T, 0, 41, offsetof(mavlink_fuel_cell_status_t, inlet_valve_state) }, \
         { "inlet_pressure", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_fuel_cell_status_t, inlet_pressure) }, \
         { "purge_valve_state", NULL, MAVLINK_TYPE_UINT8_T, 0, 42, offsetof(mavlink_fuel_cell_status_t, purge_valve_state) }, \
         { "stack_voltage", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_fuel_cell_status_t, stack_voltage) }, \
         { "stack_current", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_fuel_cell_status_t, stack_current) }, \
         { "dcdc_voltage", NULL, MAVLINK_TYPE_FLOAT, 0, 32, offsetof(mavlink_fuel_cell_status_t, dcdc_voltage) }, \
         { "dcdc_current", NULL, MAVLINK_TYPE_FLOAT, 0, 36, offsetof(mavlink_fuel_cell_status_t, dcdc_current) }, \
         { "dcdc_state", NULL, MAVLINK_TYPE_UINT8_T, 0, 43, offsetof(mavlink_fuel_cell_status_t, dcdc_state) }, \
         { "dcdc_fault", NULL, MAVLINK_TYPE_UINT8_T, 0, 44, offsetof(mavlink_fuel_cell_status_t, dcdc_fault) }, \
         { "dcdc_temperature_raw", NULL, MAVLINK_TYPE_UINT8_T, 0, 45, offsetof(mavlink_fuel_cell_status_t, dcdc_temperature_raw) }, \
         } \
}
#endif

/**
 * @brief Pack a fuel_cell_status message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_boot_ms [ms] Measurement timestamp in AI-box monotonic time since its OS boot, modulo 2^32. Not Unix time. Do not refresh this timestamp when repeating stale data.
 * @param valid_flags  Bitmask of valid business values. Unconfirmed source units, ambiguous source offsets and stale readings must have their bits clear.
 * @param id  Fuel-cell instance ID, initially 0. Source system/component IDs identify the aircraft and AI box separately.
 * @param inlet_temperature [degC] Stack air-inlet temperature, described as ambient temperature in the FCS document.
 * @param outlet_temperature [degC] Stack air-outlet temperature.
 * @param fan_duty [%] Fan duty cycle, 0 to 100 percent, not a fraction from 0 to 1.
 * @param inlet_valve_state  Inlet valve raw state code. The source document does not define code meanings. Ignore if its valid bit is clear.
 * @param inlet_pressure [kPa] Stack gas-inlet pressure. Do not substitute gas-tank pressure from standard FUEL_STATUS.
 * @param purge_valve_state  Purge valve raw state code. No open/closed enum is assumed.
 * @param stack_voltage [V] Fuel-cell stack voltage.
 * @param stack_current [A] Fuel-cell stack current normalized to amperes. Source table says V, a contradiction; do not convert or mark valid until vendor confirmation.
 * @param dcdc_voltage [V] DC/DC output voltage.
 * @param dcdc_current [A] DC/DC output current.
 * @param dcdc_state  DC/DC raw state code; source enum is pending.
 * @param dcdc_fault  DC/DC raw fault code; source enum is pending.
 * @param dcdc_temperature_raw  Unmodified Byte22 value, not a Celsius value. Unit, sign and scaling are unconfirmed. Add a new physical-temperature extension later instead of reinterpreting this byte.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_fuel_cell_status_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint32_t time_boot_ms, uint32_t valid_flags, uint8_t id, float inlet_temperature, float outlet_temperature, float fan_duty, uint8_t inlet_valve_state, float inlet_pressure, uint8_t purge_valve_state, float stack_voltage, float stack_current, float dcdc_voltage, float dcdc_current, uint8_t dcdc_state, uint8_t dcdc_fault, uint8_t dcdc_temperature_raw)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_FUEL_CELL_STATUS_LEN];
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_uint32_t(buf, 4, valid_flags);
    _mav_put_float(buf, 8, inlet_temperature);
    _mav_put_float(buf, 12, outlet_temperature);
    _mav_put_float(buf, 16, fan_duty);
    _mav_put_float(buf, 20, inlet_pressure);
    _mav_put_float(buf, 24, stack_voltage);
    _mav_put_float(buf, 28, stack_current);
    _mav_put_float(buf, 32, dcdc_voltage);
    _mav_put_float(buf, 36, dcdc_current);
    _mav_put_uint8_t(buf, 40, id);
    _mav_put_uint8_t(buf, 41, inlet_valve_state);
    _mav_put_uint8_t(buf, 42, purge_valve_state);
    _mav_put_uint8_t(buf, 43, dcdc_state);
    _mav_put_uint8_t(buf, 44, dcdc_fault);
    _mav_put_uint8_t(buf, 45, dcdc_temperature_raw);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_FUEL_CELL_STATUS_LEN);
#else
    mavlink_fuel_cell_status_t packet;
    packet.time_boot_ms = time_boot_ms;
    packet.valid_flags = valid_flags;
    packet.inlet_temperature = inlet_temperature;
    packet.outlet_temperature = outlet_temperature;
    packet.fan_duty = fan_duty;
    packet.inlet_pressure = inlet_pressure;
    packet.stack_voltage = stack_voltage;
    packet.stack_current = stack_current;
    packet.dcdc_voltage = dcdc_voltage;
    packet.dcdc_current = dcdc_current;
    packet.id = id;
    packet.inlet_valve_state = inlet_valve_state;
    packet.purge_valve_state = purge_valve_state;
    packet.dcdc_state = dcdc_state;
    packet.dcdc_fault = dcdc_fault;
    packet.dcdc_temperature_raw = dcdc_temperature_raw;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_FUEL_CELL_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_FUEL_CELL_STATUS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_FUEL_CELL_STATUS_MIN_LEN, MAVLINK_MSG_ID_FUEL_CELL_STATUS_LEN, MAVLINK_MSG_ID_FUEL_CELL_STATUS_CRC);
}

/**
 * @brief Pack a fuel_cell_status message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_boot_ms [ms] Measurement timestamp in AI-box monotonic time since its OS boot, modulo 2^32. Not Unix time. Do not refresh this timestamp when repeating stale data.
 * @param valid_flags  Bitmask of valid business values. Unconfirmed source units, ambiguous source offsets and stale readings must have their bits clear.
 * @param id  Fuel-cell instance ID, initially 0. Source system/component IDs identify the aircraft and AI box separately.
 * @param inlet_temperature [degC] Stack air-inlet temperature, described as ambient temperature in the FCS document.
 * @param outlet_temperature [degC] Stack air-outlet temperature.
 * @param fan_duty [%] Fan duty cycle, 0 to 100 percent, not a fraction from 0 to 1.
 * @param inlet_valve_state  Inlet valve raw state code. The source document does not define code meanings. Ignore if its valid bit is clear.
 * @param inlet_pressure [kPa] Stack gas-inlet pressure. Do not substitute gas-tank pressure from standard FUEL_STATUS.
 * @param purge_valve_state  Purge valve raw state code. No open/closed enum is assumed.
 * @param stack_voltage [V] Fuel-cell stack voltage.
 * @param stack_current [A] Fuel-cell stack current normalized to amperes. Source table says V, a contradiction; do not convert or mark valid until vendor confirmation.
 * @param dcdc_voltage [V] DC/DC output voltage.
 * @param dcdc_current [A] DC/DC output current.
 * @param dcdc_state  DC/DC raw state code; source enum is pending.
 * @param dcdc_fault  DC/DC raw fault code; source enum is pending.
 * @param dcdc_temperature_raw  Unmodified Byte22 value, not a Celsius value. Unit, sign and scaling are unconfirmed. Add a new physical-temperature extension later instead of reinterpreting this byte.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_fuel_cell_status_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint32_t time_boot_ms, uint32_t valid_flags, uint8_t id, float inlet_temperature, float outlet_temperature, float fan_duty, uint8_t inlet_valve_state, float inlet_pressure, uint8_t purge_valve_state, float stack_voltage, float stack_current, float dcdc_voltage, float dcdc_current, uint8_t dcdc_state, uint8_t dcdc_fault, uint8_t dcdc_temperature_raw)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_FUEL_CELL_STATUS_LEN];
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_uint32_t(buf, 4, valid_flags);
    _mav_put_float(buf, 8, inlet_temperature);
    _mav_put_float(buf, 12, outlet_temperature);
    _mav_put_float(buf, 16, fan_duty);
    _mav_put_float(buf, 20, inlet_pressure);
    _mav_put_float(buf, 24, stack_voltage);
    _mav_put_float(buf, 28, stack_current);
    _mav_put_float(buf, 32, dcdc_voltage);
    _mav_put_float(buf, 36, dcdc_current);
    _mav_put_uint8_t(buf, 40, id);
    _mav_put_uint8_t(buf, 41, inlet_valve_state);
    _mav_put_uint8_t(buf, 42, purge_valve_state);
    _mav_put_uint8_t(buf, 43, dcdc_state);
    _mav_put_uint8_t(buf, 44, dcdc_fault);
    _mav_put_uint8_t(buf, 45, dcdc_temperature_raw);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_FUEL_CELL_STATUS_LEN);
#else
    mavlink_fuel_cell_status_t packet;
    packet.time_boot_ms = time_boot_ms;
    packet.valid_flags = valid_flags;
    packet.inlet_temperature = inlet_temperature;
    packet.outlet_temperature = outlet_temperature;
    packet.fan_duty = fan_duty;
    packet.inlet_pressure = inlet_pressure;
    packet.stack_voltage = stack_voltage;
    packet.stack_current = stack_current;
    packet.dcdc_voltage = dcdc_voltage;
    packet.dcdc_current = dcdc_current;
    packet.id = id;
    packet.inlet_valve_state = inlet_valve_state;
    packet.purge_valve_state = purge_valve_state;
    packet.dcdc_state = dcdc_state;
    packet.dcdc_fault = dcdc_fault;
    packet.dcdc_temperature_raw = dcdc_temperature_raw;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_FUEL_CELL_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_FUEL_CELL_STATUS;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_FUEL_CELL_STATUS_MIN_LEN, MAVLINK_MSG_ID_FUEL_CELL_STATUS_LEN, MAVLINK_MSG_ID_FUEL_CELL_STATUS_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_FUEL_CELL_STATUS_MIN_LEN, MAVLINK_MSG_ID_FUEL_CELL_STATUS_LEN);
#endif
}

/**
 * @brief Pack a fuel_cell_status message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param time_boot_ms [ms] Measurement timestamp in AI-box monotonic time since its OS boot, modulo 2^32. Not Unix time. Do not refresh this timestamp when repeating stale data.
 * @param valid_flags  Bitmask of valid business values. Unconfirmed source units, ambiguous source offsets and stale readings must have their bits clear.
 * @param id  Fuel-cell instance ID, initially 0. Source system/component IDs identify the aircraft and AI box separately.
 * @param inlet_temperature [degC] Stack air-inlet temperature, described as ambient temperature in the FCS document.
 * @param outlet_temperature [degC] Stack air-outlet temperature.
 * @param fan_duty [%] Fan duty cycle, 0 to 100 percent, not a fraction from 0 to 1.
 * @param inlet_valve_state  Inlet valve raw state code. The source document does not define code meanings. Ignore if its valid bit is clear.
 * @param inlet_pressure [kPa] Stack gas-inlet pressure. Do not substitute gas-tank pressure from standard FUEL_STATUS.
 * @param purge_valve_state  Purge valve raw state code. No open/closed enum is assumed.
 * @param stack_voltage [V] Fuel-cell stack voltage.
 * @param stack_current [A] Fuel-cell stack current normalized to amperes. Source table says V, a contradiction; do not convert or mark valid until vendor confirmation.
 * @param dcdc_voltage [V] DC/DC output voltage.
 * @param dcdc_current [A] DC/DC output current.
 * @param dcdc_state  DC/DC raw state code; source enum is pending.
 * @param dcdc_fault  DC/DC raw fault code; source enum is pending.
 * @param dcdc_temperature_raw  Unmodified Byte22 value, not a Celsius value. Unit, sign and scaling are unconfirmed. Add a new physical-temperature extension later instead of reinterpreting this byte.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_fuel_cell_status_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint32_t time_boot_ms,uint32_t valid_flags,uint8_t id,float inlet_temperature,float outlet_temperature,float fan_duty,uint8_t inlet_valve_state,float inlet_pressure,uint8_t purge_valve_state,float stack_voltage,float stack_current,float dcdc_voltage,float dcdc_current,uint8_t dcdc_state,uint8_t dcdc_fault,uint8_t dcdc_temperature_raw)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_FUEL_CELL_STATUS_LEN];
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_uint32_t(buf, 4, valid_flags);
    _mav_put_float(buf, 8, inlet_temperature);
    _mav_put_float(buf, 12, outlet_temperature);
    _mav_put_float(buf, 16, fan_duty);
    _mav_put_float(buf, 20, inlet_pressure);
    _mav_put_float(buf, 24, stack_voltage);
    _mav_put_float(buf, 28, stack_current);
    _mav_put_float(buf, 32, dcdc_voltage);
    _mav_put_float(buf, 36, dcdc_current);
    _mav_put_uint8_t(buf, 40, id);
    _mav_put_uint8_t(buf, 41, inlet_valve_state);
    _mav_put_uint8_t(buf, 42, purge_valve_state);
    _mav_put_uint8_t(buf, 43, dcdc_state);
    _mav_put_uint8_t(buf, 44, dcdc_fault);
    _mav_put_uint8_t(buf, 45, dcdc_temperature_raw);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_FUEL_CELL_STATUS_LEN);
#else
    mavlink_fuel_cell_status_t packet;
    packet.time_boot_ms = time_boot_ms;
    packet.valid_flags = valid_flags;
    packet.inlet_temperature = inlet_temperature;
    packet.outlet_temperature = outlet_temperature;
    packet.fan_duty = fan_duty;
    packet.inlet_pressure = inlet_pressure;
    packet.stack_voltage = stack_voltage;
    packet.stack_current = stack_current;
    packet.dcdc_voltage = dcdc_voltage;
    packet.dcdc_current = dcdc_current;
    packet.id = id;
    packet.inlet_valve_state = inlet_valve_state;
    packet.purge_valve_state = purge_valve_state;
    packet.dcdc_state = dcdc_state;
    packet.dcdc_fault = dcdc_fault;
    packet.dcdc_temperature_raw = dcdc_temperature_raw;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_FUEL_CELL_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_FUEL_CELL_STATUS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_FUEL_CELL_STATUS_MIN_LEN, MAVLINK_MSG_ID_FUEL_CELL_STATUS_LEN, MAVLINK_MSG_ID_FUEL_CELL_STATUS_CRC);
}

/**
 * @brief Encode a fuel_cell_status struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param fuel_cell_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_fuel_cell_status_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_fuel_cell_status_t* fuel_cell_status)
{
    return mavlink_msg_fuel_cell_status_pack(system_id, component_id, msg, fuel_cell_status->time_boot_ms, fuel_cell_status->valid_flags, fuel_cell_status->id, fuel_cell_status->inlet_temperature, fuel_cell_status->outlet_temperature, fuel_cell_status->fan_duty, fuel_cell_status->inlet_valve_state, fuel_cell_status->inlet_pressure, fuel_cell_status->purge_valve_state, fuel_cell_status->stack_voltage, fuel_cell_status->stack_current, fuel_cell_status->dcdc_voltage, fuel_cell_status->dcdc_current, fuel_cell_status->dcdc_state, fuel_cell_status->dcdc_fault, fuel_cell_status->dcdc_temperature_raw);
}

/**
 * @brief Encode a fuel_cell_status struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param fuel_cell_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_fuel_cell_status_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_fuel_cell_status_t* fuel_cell_status)
{
    return mavlink_msg_fuel_cell_status_pack_chan(system_id, component_id, chan, msg, fuel_cell_status->time_boot_ms, fuel_cell_status->valid_flags, fuel_cell_status->id, fuel_cell_status->inlet_temperature, fuel_cell_status->outlet_temperature, fuel_cell_status->fan_duty, fuel_cell_status->inlet_valve_state, fuel_cell_status->inlet_pressure, fuel_cell_status->purge_valve_state, fuel_cell_status->stack_voltage, fuel_cell_status->stack_current, fuel_cell_status->dcdc_voltage, fuel_cell_status->dcdc_current, fuel_cell_status->dcdc_state, fuel_cell_status->dcdc_fault, fuel_cell_status->dcdc_temperature_raw);
}

/**
 * @brief Encode a fuel_cell_status struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param fuel_cell_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_fuel_cell_status_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_fuel_cell_status_t* fuel_cell_status)
{
    return mavlink_msg_fuel_cell_status_pack_status(system_id, component_id, _status, msg,  fuel_cell_status->time_boot_ms, fuel_cell_status->valid_flags, fuel_cell_status->id, fuel_cell_status->inlet_temperature, fuel_cell_status->outlet_temperature, fuel_cell_status->fan_duty, fuel_cell_status->inlet_valve_state, fuel_cell_status->inlet_pressure, fuel_cell_status->purge_valve_state, fuel_cell_status->stack_voltage, fuel_cell_status->stack_current, fuel_cell_status->dcdc_voltage, fuel_cell_status->dcdc_current, fuel_cell_status->dcdc_state, fuel_cell_status->dcdc_fault, fuel_cell_status->dcdc_temperature_raw);
}

/**
 * @brief Send a fuel_cell_status message
 * @param chan MAVLink channel to send the message
 *
 * @param time_boot_ms [ms] Measurement timestamp in AI-box monotonic time since its OS boot, modulo 2^32. Not Unix time. Do not refresh this timestamp when repeating stale data.
 * @param valid_flags  Bitmask of valid business values. Unconfirmed source units, ambiguous source offsets and stale readings must have their bits clear.
 * @param id  Fuel-cell instance ID, initially 0. Source system/component IDs identify the aircraft and AI box separately.
 * @param inlet_temperature [degC] Stack air-inlet temperature, described as ambient temperature in the FCS document.
 * @param outlet_temperature [degC] Stack air-outlet temperature.
 * @param fan_duty [%] Fan duty cycle, 0 to 100 percent, not a fraction from 0 to 1.
 * @param inlet_valve_state  Inlet valve raw state code. The source document does not define code meanings. Ignore if its valid bit is clear.
 * @param inlet_pressure [kPa] Stack gas-inlet pressure. Do not substitute gas-tank pressure from standard FUEL_STATUS.
 * @param purge_valve_state  Purge valve raw state code. No open/closed enum is assumed.
 * @param stack_voltage [V] Fuel-cell stack voltage.
 * @param stack_current [A] Fuel-cell stack current normalized to amperes. Source table says V, a contradiction; do not convert or mark valid until vendor confirmation.
 * @param dcdc_voltage [V] DC/DC output voltage.
 * @param dcdc_current [A] DC/DC output current.
 * @param dcdc_state  DC/DC raw state code; source enum is pending.
 * @param dcdc_fault  DC/DC raw fault code; source enum is pending.
 * @param dcdc_temperature_raw  Unmodified Byte22 value, not a Celsius value. Unit, sign and scaling are unconfirmed. Add a new physical-temperature extension later instead of reinterpreting this byte.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_fuel_cell_status_send(mavlink_channel_t chan, uint32_t time_boot_ms, uint32_t valid_flags, uint8_t id, float inlet_temperature, float outlet_temperature, float fan_duty, uint8_t inlet_valve_state, float inlet_pressure, uint8_t purge_valve_state, float stack_voltage, float stack_current, float dcdc_voltage, float dcdc_current, uint8_t dcdc_state, uint8_t dcdc_fault, uint8_t dcdc_temperature_raw)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_FUEL_CELL_STATUS_LEN];
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_uint32_t(buf, 4, valid_flags);
    _mav_put_float(buf, 8, inlet_temperature);
    _mav_put_float(buf, 12, outlet_temperature);
    _mav_put_float(buf, 16, fan_duty);
    _mav_put_float(buf, 20, inlet_pressure);
    _mav_put_float(buf, 24, stack_voltage);
    _mav_put_float(buf, 28, stack_current);
    _mav_put_float(buf, 32, dcdc_voltage);
    _mav_put_float(buf, 36, dcdc_current);
    _mav_put_uint8_t(buf, 40, id);
    _mav_put_uint8_t(buf, 41, inlet_valve_state);
    _mav_put_uint8_t(buf, 42, purge_valve_state);
    _mav_put_uint8_t(buf, 43, dcdc_state);
    _mav_put_uint8_t(buf, 44, dcdc_fault);
    _mav_put_uint8_t(buf, 45, dcdc_temperature_raw);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FUEL_CELL_STATUS, buf, MAVLINK_MSG_ID_FUEL_CELL_STATUS_MIN_LEN, MAVLINK_MSG_ID_FUEL_CELL_STATUS_LEN, MAVLINK_MSG_ID_FUEL_CELL_STATUS_CRC);
#else
    mavlink_fuel_cell_status_t packet;
    packet.time_boot_ms = time_boot_ms;
    packet.valid_flags = valid_flags;
    packet.inlet_temperature = inlet_temperature;
    packet.outlet_temperature = outlet_temperature;
    packet.fan_duty = fan_duty;
    packet.inlet_pressure = inlet_pressure;
    packet.stack_voltage = stack_voltage;
    packet.stack_current = stack_current;
    packet.dcdc_voltage = dcdc_voltage;
    packet.dcdc_current = dcdc_current;
    packet.id = id;
    packet.inlet_valve_state = inlet_valve_state;
    packet.purge_valve_state = purge_valve_state;
    packet.dcdc_state = dcdc_state;
    packet.dcdc_fault = dcdc_fault;
    packet.dcdc_temperature_raw = dcdc_temperature_raw;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FUEL_CELL_STATUS, (const char *)&packet, MAVLINK_MSG_ID_FUEL_CELL_STATUS_MIN_LEN, MAVLINK_MSG_ID_FUEL_CELL_STATUS_LEN, MAVLINK_MSG_ID_FUEL_CELL_STATUS_CRC);
#endif
}

/**
 * @brief Send a fuel_cell_status message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_fuel_cell_status_send_struct(mavlink_channel_t chan, const mavlink_fuel_cell_status_t* fuel_cell_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_fuel_cell_status_send(chan, fuel_cell_status->time_boot_ms, fuel_cell_status->valid_flags, fuel_cell_status->id, fuel_cell_status->inlet_temperature, fuel_cell_status->outlet_temperature, fuel_cell_status->fan_duty, fuel_cell_status->inlet_valve_state, fuel_cell_status->inlet_pressure, fuel_cell_status->purge_valve_state, fuel_cell_status->stack_voltage, fuel_cell_status->stack_current, fuel_cell_status->dcdc_voltage, fuel_cell_status->dcdc_current, fuel_cell_status->dcdc_state, fuel_cell_status->dcdc_fault, fuel_cell_status->dcdc_temperature_raw);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FUEL_CELL_STATUS, (const char *)fuel_cell_status, MAVLINK_MSG_ID_FUEL_CELL_STATUS_MIN_LEN, MAVLINK_MSG_ID_FUEL_CELL_STATUS_LEN, MAVLINK_MSG_ID_FUEL_CELL_STATUS_CRC);
#endif
}

#if MAVLINK_MSG_ID_FUEL_CELL_STATUS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_fuel_cell_status_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint32_t time_boot_ms, uint32_t valid_flags, uint8_t id, float inlet_temperature, float outlet_temperature, float fan_duty, uint8_t inlet_valve_state, float inlet_pressure, uint8_t purge_valve_state, float stack_voltage, float stack_current, float dcdc_voltage, float dcdc_current, uint8_t dcdc_state, uint8_t dcdc_fault, uint8_t dcdc_temperature_raw)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_uint32_t(buf, 4, valid_flags);
    _mav_put_float(buf, 8, inlet_temperature);
    _mav_put_float(buf, 12, outlet_temperature);
    _mav_put_float(buf, 16, fan_duty);
    _mav_put_float(buf, 20, inlet_pressure);
    _mav_put_float(buf, 24, stack_voltage);
    _mav_put_float(buf, 28, stack_current);
    _mav_put_float(buf, 32, dcdc_voltage);
    _mav_put_float(buf, 36, dcdc_current);
    _mav_put_uint8_t(buf, 40, id);
    _mav_put_uint8_t(buf, 41, inlet_valve_state);
    _mav_put_uint8_t(buf, 42, purge_valve_state);
    _mav_put_uint8_t(buf, 43, dcdc_state);
    _mav_put_uint8_t(buf, 44, dcdc_fault);
    _mav_put_uint8_t(buf, 45, dcdc_temperature_raw);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FUEL_CELL_STATUS, buf, MAVLINK_MSG_ID_FUEL_CELL_STATUS_MIN_LEN, MAVLINK_MSG_ID_FUEL_CELL_STATUS_LEN, MAVLINK_MSG_ID_FUEL_CELL_STATUS_CRC);
#else
    mavlink_fuel_cell_status_t *packet = (mavlink_fuel_cell_status_t *)msgbuf;
    packet->time_boot_ms = time_boot_ms;
    packet->valid_flags = valid_flags;
    packet->inlet_temperature = inlet_temperature;
    packet->outlet_temperature = outlet_temperature;
    packet->fan_duty = fan_duty;
    packet->inlet_pressure = inlet_pressure;
    packet->stack_voltage = stack_voltage;
    packet->stack_current = stack_current;
    packet->dcdc_voltage = dcdc_voltage;
    packet->dcdc_current = dcdc_current;
    packet->id = id;
    packet->inlet_valve_state = inlet_valve_state;
    packet->purge_valve_state = purge_valve_state;
    packet->dcdc_state = dcdc_state;
    packet->dcdc_fault = dcdc_fault;
    packet->dcdc_temperature_raw = dcdc_temperature_raw;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FUEL_CELL_STATUS, (const char *)packet, MAVLINK_MSG_ID_FUEL_CELL_STATUS_MIN_LEN, MAVLINK_MSG_ID_FUEL_CELL_STATUS_LEN, MAVLINK_MSG_ID_FUEL_CELL_STATUS_CRC);
#endif
}
#endif

#endif

// MESSAGE FUEL_CELL_STATUS UNPACKING


/**
 * @brief Get field time_boot_ms from fuel_cell_status message
 *
 * @return [ms] Measurement timestamp in AI-box monotonic time since its OS boot, modulo 2^32. Not Unix time. Do not refresh this timestamp when repeating stale data.
 */
static inline uint32_t mavlink_msg_fuel_cell_status_get_time_boot_ms(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field valid_flags from fuel_cell_status message
 *
 * @return  Bitmask of valid business values. Unconfirmed source units, ambiguous source offsets and stale readings must have their bits clear.
 */
static inline uint32_t mavlink_msg_fuel_cell_status_get_valid_flags(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  4);
}

/**
 * @brief Get field id from fuel_cell_status message
 *
 * @return  Fuel-cell instance ID, initially 0. Source system/component IDs identify the aircraft and AI box separately.
 */
static inline uint8_t mavlink_msg_fuel_cell_status_get_id(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  40);
}

/**
 * @brief Get field inlet_temperature from fuel_cell_status message
 *
 * @return [degC] Stack air-inlet temperature, described as ambient temperature in the FCS document.
 */
static inline float mavlink_msg_fuel_cell_status_get_inlet_temperature(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field outlet_temperature from fuel_cell_status message
 *
 * @return [degC] Stack air-outlet temperature.
 */
static inline float mavlink_msg_fuel_cell_status_get_outlet_temperature(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field fan_duty from fuel_cell_status message
 *
 * @return [%] Fan duty cycle, 0 to 100 percent, not a fraction from 0 to 1.
 */
static inline float mavlink_msg_fuel_cell_status_get_fan_duty(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Get field inlet_valve_state from fuel_cell_status message
 *
 * @return  Inlet valve raw state code. The source document does not define code meanings. Ignore if its valid bit is clear.
 */
static inline uint8_t mavlink_msg_fuel_cell_status_get_inlet_valve_state(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  41);
}

/**
 * @brief Get field inlet_pressure from fuel_cell_status message
 *
 * @return [kPa] Stack gas-inlet pressure. Do not substitute gas-tank pressure from standard FUEL_STATUS.
 */
static inline float mavlink_msg_fuel_cell_status_get_inlet_pressure(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  20);
}

/**
 * @brief Get field purge_valve_state from fuel_cell_status message
 *
 * @return  Purge valve raw state code. No open/closed enum is assumed.
 */
static inline uint8_t mavlink_msg_fuel_cell_status_get_purge_valve_state(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  42);
}

/**
 * @brief Get field stack_voltage from fuel_cell_status message
 *
 * @return [V] Fuel-cell stack voltage.
 */
static inline float mavlink_msg_fuel_cell_status_get_stack_voltage(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  24);
}

/**
 * @brief Get field stack_current from fuel_cell_status message
 *
 * @return [A] Fuel-cell stack current normalized to amperes. Source table says V, a contradiction; do not convert or mark valid until vendor confirmation.
 */
static inline float mavlink_msg_fuel_cell_status_get_stack_current(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  28);
}

/**
 * @brief Get field dcdc_voltage from fuel_cell_status message
 *
 * @return [V] DC/DC output voltage.
 */
static inline float mavlink_msg_fuel_cell_status_get_dcdc_voltage(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  32);
}

/**
 * @brief Get field dcdc_current from fuel_cell_status message
 *
 * @return [A] DC/DC output current.
 */
static inline float mavlink_msg_fuel_cell_status_get_dcdc_current(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  36);
}

/**
 * @brief Get field dcdc_state from fuel_cell_status message
 *
 * @return  DC/DC raw state code; source enum is pending.
 */
static inline uint8_t mavlink_msg_fuel_cell_status_get_dcdc_state(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  43);
}

/**
 * @brief Get field dcdc_fault from fuel_cell_status message
 *
 * @return  DC/DC raw fault code; source enum is pending.
 */
static inline uint8_t mavlink_msg_fuel_cell_status_get_dcdc_fault(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  44);
}

/**
 * @brief Get field dcdc_temperature_raw from fuel_cell_status message
 *
 * @return  Unmodified Byte22 value, not a Celsius value. Unit, sign and scaling are unconfirmed. Add a new physical-temperature extension later instead of reinterpreting this byte.
 */
static inline uint8_t mavlink_msg_fuel_cell_status_get_dcdc_temperature_raw(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  45);
}

/**
 * @brief Decode a fuel_cell_status message into a struct
 *
 * @param msg The message to decode
 * @param fuel_cell_status C-struct to decode the message contents into
 */
static inline void mavlink_msg_fuel_cell_status_decode(const mavlink_message_t* msg, mavlink_fuel_cell_status_t* fuel_cell_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    fuel_cell_status->time_boot_ms = mavlink_msg_fuel_cell_status_get_time_boot_ms(msg);
    fuel_cell_status->valid_flags = mavlink_msg_fuel_cell_status_get_valid_flags(msg);
    fuel_cell_status->inlet_temperature = mavlink_msg_fuel_cell_status_get_inlet_temperature(msg);
    fuel_cell_status->outlet_temperature = mavlink_msg_fuel_cell_status_get_outlet_temperature(msg);
    fuel_cell_status->fan_duty = mavlink_msg_fuel_cell_status_get_fan_duty(msg);
    fuel_cell_status->inlet_pressure = mavlink_msg_fuel_cell_status_get_inlet_pressure(msg);
    fuel_cell_status->stack_voltage = mavlink_msg_fuel_cell_status_get_stack_voltage(msg);
    fuel_cell_status->stack_current = mavlink_msg_fuel_cell_status_get_stack_current(msg);
    fuel_cell_status->dcdc_voltage = mavlink_msg_fuel_cell_status_get_dcdc_voltage(msg);
    fuel_cell_status->dcdc_current = mavlink_msg_fuel_cell_status_get_dcdc_current(msg);
    fuel_cell_status->id = mavlink_msg_fuel_cell_status_get_id(msg);
    fuel_cell_status->inlet_valve_state = mavlink_msg_fuel_cell_status_get_inlet_valve_state(msg);
    fuel_cell_status->purge_valve_state = mavlink_msg_fuel_cell_status_get_purge_valve_state(msg);
    fuel_cell_status->dcdc_state = mavlink_msg_fuel_cell_status_get_dcdc_state(msg);
    fuel_cell_status->dcdc_fault = mavlink_msg_fuel_cell_status_get_dcdc_fault(msg);
    fuel_cell_status->dcdc_temperature_raw = mavlink_msg_fuel_cell_status_get_dcdc_temperature_raw(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_FUEL_CELL_STATUS_LEN? msg->len : MAVLINK_MSG_ID_FUEL_CELL_STATUS_LEN;
        memset(fuel_cell_status, 0, MAVLINK_MSG_ID_FUEL_CELL_STATUS_LEN);
    memcpy(fuel_cell_status, _MAV_PAYLOAD(msg), len);
#endif
}
