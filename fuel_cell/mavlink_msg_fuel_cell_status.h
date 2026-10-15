#pragma once
// MESSAGE FUEL_CELL_STATUS PACKING

#define MAVLINK_MSG_ID_FUEL_CELL_STATUS 61001


typedef struct __mavlink_fuel_cell_status_t {
 uint32_t time_boot_ms; /*< [ms] Time since system boot.*/
 uint32_t response_request_id; /*<  Request ID associated with control_result. Zero means no request has been processed.*/
 uint16_t voltage_setpoint; /*<  Currently accepted voltage setpoint in 0.1 V.*/
 uint16_t current_setpoint; /*<  Currently accepted current setpoint in 0.1 A.*/
 uint16_t power_setpoint; /*< [W] Currently accepted power setpoint.*/
 uint16_t soc; /*< [d%] Last valid device state of charge.*/
 uint8_t device_state; /*<  Last valid device state defined by the fuel cell controller protocol.*/
 uint8_t control_command; /*<  Currently accepted fuel cell controller command.*/
 uint8_t control_result; /*<  Processing result for response_request_id.*/
 uint8_t connection_state; /*<  Current fuel cell controller connection state.*/
 uint8_t rx_life; /*<  Life counter from the last valid device status frame.*/
} mavlink_fuel_cell_status_t;

#define MAVLINK_MSG_ID_FUEL_CELL_STATUS_LEN 21
#define MAVLINK_MSG_ID_FUEL_CELL_STATUS_MIN_LEN 21
#define MAVLINK_MSG_ID_61001_LEN 21
#define MAVLINK_MSG_ID_61001_MIN_LEN 21

#define MAVLINK_MSG_ID_FUEL_CELL_STATUS_CRC 43
#define MAVLINK_MSG_ID_61001_CRC 43



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_FUEL_CELL_STATUS { \
    61001, \
    "FUEL_CELL_STATUS", \
    11, \
    {  { "time_boot_ms", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_fuel_cell_status_t, time_boot_ms) }, \
         { "response_request_id", NULL, MAVLINK_TYPE_UINT32_T, 0, 4, offsetof(mavlink_fuel_cell_status_t, response_request_id) }, \
         { "voltage_setpoint", NULL, MAVLINK_TYPE_UINT16_T, 0, 8, offsetof(mavlink_fuel_cell_status_t, voltage_setpoint) }, \
         { "current_setpoint", NULL, MAVLINK_TYPE_UINT16_T, 0, 10, offsetof(mavlink_fuel_cell_status_t, current_setpoint) }, \
         { "power_setpoint", NULL, MAVLINK_TYPE_UINT16_T, 0, 12, offsetof(mavlink_fuel_cell_status_t, power_setpoint) }, \
         { "soc", NULL, MAVLINK_TYPE_UINT16_T, 0, 14, offsetof(mavlink_fuel_cell_status_t, soc) }, \
         { "device_state", NULL, MAVLINK_TYPE_UINT8_T, 0, 16, offsetof(mavlink_fuel_cell_status_t, device_state) }, \
         { "control_command", NULL, MAVLINK_TYPE_UINT8_T, 0, 17, offsetof(mavlink_fuel_cell_status_t, control_command) }, \
         { "control_result", NULL, MAVLINK_TYPE_UINT8_T, 0, 18, offsetof(mavlink_fuel_cell_status_t, control_result) }, \
         { "connection_state", NULL, MAVLINK_TYPE_UINT8_T, 0, 19, offsetof(mavlink_fuel_cell_status_t, connection_state) }, \
         { "rx_life", NULL, MAVLINK_TYPE_UINT8_T, 0, 20, offsetof(mavlink_fuel_cell_status_t, rx_life) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_FUEL_CELL_STATUS { \
    "FUEL_CELL_STATUS", \
    11, \
    {  { "time_boot_ms", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_fuel_cell_status_t, time_boot_ms) }, \
         { "response_request_id", NULL, MAVLINK_TYPE_UINT32_T, 0, 4, offsetof(mavlink_fuel_cell_status_t, response_request_id) }, \
         { "voltage_setpoint", NULL, MAVLINK_TYPE_UINT16_T, 0, 8, offsetof(mavlink_fuel_cell_status_t, voltage_setpoint) }, \
         { "current_setpoint", NULL, MAVLINK_TYPE_UINT16_T, 0, 10, offsetof(mavlink_fuel_cell_status_t, current_setpoint) }, \
         { "power_setpoint", NULL, MAVLINK_TYPE_UINT16_T, 0, 12, offsetof(mavlink_fuel_cell_status_t, power_setpoint) }, \
         { "soc", NULL, MAVLINK_TYPE_UINT16_T, 0, 14, offsetof(mavlink_fuel_cell_status_t, soc) }, \
         { "device_state", NULL, MAVLINK_TYPE_UINT8_T, 0, 16, offsetof(mavlink_fuel_cell_status_t, device_state) }, \
         { "control_command", NULL, MAVLINK_TYPE_UINT8_T, 0, 17, offsetof(mavlink_fuel_cell_status_t, control_command) }, \
         { "control_result", NULL, MAVLINK_TYPE_UINT8_T, 0, 18, offsetof(mavlink_fuel_cell_status_t, control_result) }, \
         { "connection_state", NULL, MAVLINK_TYPE_UINT8_T, 0, 19, offsetof(mavlink_fuel_cell_status_t, connection_state) }, \
         { "rx_life", NULL, MAVLINK_TYPE_UINT8_T, 0, 20, offsetof(mavlink_fuel_cell_status_t, rx_life) }, \
         } \
}
#endif

/**
 * @brief Pack a fuel_cell_status message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_boot_ms [ms] Time since system boot.
 * @param response_request_id  Request ID associated with control_result. Zero means no request has been processed.
 * @param voltage_setpoint  Currently accepted voltage setpoint in 0.1 V.
 * @param current_setpoint  Currently accepted current setpoint in 0.1 A.
 * @param power_setpoint [W] Currently accepted power setpoint.
 * @param soc [d%] Last valid device state of charge.
 * @param device_state  Last valid device state defined by the fuel cell controller protocol.
 * @param control_command  Currently accepted fuel cell controller command.
 * @param control_result  Processing result for response_request_id.
 * @param connection_state  Current fuel cell controller connection state.
 * @param rx_life  Life counter from the last valid device status frame.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_fuel_cell_status_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint32_t time_boot_ms, uint32_t response_request_id, uint16_t voltage_setpoint, uint16_t current_setpoint, uint16_t power_setpoint, uint16_t soc, uint8_t device_state, uint8_t control_command, uint8_t control_result, uint8_t connection_state, uint8_t rx_life)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_FUEL_CELL_STATUS_LEN];
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_uint32_t(buf, 4, response_request_id);
    _mav_put_uint16_t(buf, 8, voltage_setpoint);
    _mav_put_uint16_t(buf, 10, current_setpoint);
    _mav_put_uint16_t(buf, 12, power_setpoint);
    _mav_put_uint16_t(buf, 14, soc);
    _mav_put_uint8_t(buf, 16, device_state);
    _mav_put_uint8_t(buf, 17, control_command);
    _mav_put_uint8_t(buf, 18, control_result);
    _mav_put_uint8_t(buf, 19, connection_state);
    _mav_put_uint8_t(buf, 20, rx_life);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_FUEL_CELL_STATUS_LEN);
#else
    mavlink_fuel_cell_status_t packet;
    packet.time_boot_ms = time_boot_ms;
    packet.response_request_id = response_request_id;
    packet.voltage_setpoint = voltage_setpoint;
    packet.current_setpoint = current_setpoint;
    packet.power_setpoint = power_setpoint;
    packet.soc = soc;
    packet.device_state = device_state;
    packet.control_command = control_command;
    packet.control_result = control_result;
    packet.connection_state = connection_state;
    packet.rx_life = rx_life;

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
 * @param time_boot_ms [ms] Time since system boot.
 * @param response_request_id  Request ID associated with control_result. Zero means no request has been processed.
 * @param voltage_setpoint  Currently accepted voltage setpoint in 0.1 V.
 * @param current_setpoint  Currently accepted current setpoint in 0.1 A.
 * @param power_setpoint [W] Currently accepted power setpoint.
 * @param soc [d%] Last valid device state of charge.
 * @param device_state  Last valid device state defined by the fuel cell controller protocol.
 * @param control_command  Currently accepted fuel cell controller command.
 * @param control_result  Processing result for response_request_id.
 * @param connection_state  Current fuel cell controller connection state.
 * @param rx_life  Life counter from the last valid device status frame.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_fuel_cell_status_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint32_t time_boot_ms, uint32_t response_request_id, uint16_t voltage_setpoint, uint16_t current_setpoint, uint16_t power_setpoint, uint16_t soc, uint8_t device_state, uint8_t control_command, uint8_t control_result, uint8_t connection_state, uint8_t rx_life)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_FUEL_CELL_STATUS_LEN];
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_uint32_t(buf, 4, response_request_id);
    _mav_put_uint16_t(buf, 8, voltage_setpoint);
    _mav_put_uint16_t(buf, 10, current_setpoint);
    _mav_put_uint16_t(buf, 12, power_setpoint);
    _mav_put_uint16_t(buf, 14, soc);
    _mav_put_uint8_t(buf, 16, device_state);
    _mav_put_uint8_t(buf, 17, control_command);
    _mav_put_uint8_t(buf, 18, control_result);
    _mav_put_uint8_t(buf, 19, connection_state);
    _mav_put_uint8_t(buf, 20, rx_life);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_FUEL_CELL_STATUS_LEN);
#else
    mavlink_fuel_cell_status_t packet;
    packet.time_boot_ms = time_boot_ms;
    packet.response_request_id = response_request_id;
    packet.voltage_setpoint = voltage_setpoint;
    packet.current_setpoint = current_setpoint;
    packet.power_setpoint = power_setpoint;
    packet.soc = soc;
    packet.device_state = device_state;
    packet.control_command = control_command;
    packet.control_result = control_result;
    packet.connection_state = connection_state;
    packet.rx_life = rx_life;

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
 * @param time_boot_ms [ms] Time since system boot.
 * @param response_request_id  Request ID associated with control_result. Zero means no request has been processed.
 * @param voltage_setpoint  Currently accepted voltage setpoint in 0.1 V.
 * @param current_setpoint  Currently accepted current setpoint in 0.1 A.
 * @param power_setpoint [W] Currently accepted power setpoint.
 * @param soc [d%] Last valid device state of charge.
 * @param device_state  Last valid device state defined by the fuel cell controller protocol.
 * @param control_command  Currently accepted fuel cell controller command.
 * @param control_result  Processing result for response_request_id.
 * @param connection_state  Current fuel cell controller connection state.
 * @param rx_life  Life counter from the last valid device status frame.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_fuel_cell_status_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint32_t time_boot_ms,uint32_t response_request_id,uint16_t voltage_setpoint,uint16_t current_setpoint,uint16_t power_setpoint,uint16_t soc,uint8_t device_state,uint8_t control_command,uint8_t control_result,uint8_t connection_state,uint8_t rx_life)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_FUEL_CELL_STATUS_LEN];
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_uint32_t(buf, 4, response_request_id);
    _mav_put_uint16_t(buf, 8, voltage_setpoint);
    _mav_put_uint16_t(buf, 10, current_setpoint);
    _mav_put_uint16_t(buf, 12, power_setpoint);
    _mav_put_uint16_t(buf, 14, soc);
    _mav_put_uint8_t(buf, 16, device_state);
    _mav_put_uint8_t(buf, 17, control_command);
    _mav_put_uint8_t(buf, 18, control_result);
    _mav_put_uint8_t(buf, 19, connection_state);
    _mav_put_uint8_t(buf, 20, rx_life);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_FUEL_CELL_STATUS_LEN);
#else
    mavlink_fuel_cell_status_t packet;
    packet.time_boot_ms = time_boot_ms;
    packet.response_request_id = response_request_id;
    packet.voltage_setpoint = voltage_setpoint;
    packet.current_setpoint = current_setpoint;
    packet.power_setpoint = power_setpoint;
    packet.soc = soc;
    packet.device_state = device_state;
    packet.control_command = control_command;
    packet.control_result = control_result;
    packet.connection_state = connection_state;
    packet.rx_life = rx_life;

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
    return mavlink_msg_fuel_cell_status_pack(system_id, component_id, msg, fuel_cell_status->time_boot_ms, fuel_cell_status->response_request_id, fuel_cell_status->voltage_setpoint, fuel_cell_status->current_setpoint, fuel_cell_status->power_setpoint, fuel_cell_status->soc, fuel_cell_status->device_state, fuel_cell_status->control_command, fuel_cell_status->control_result, fuel_cell_status->connection_state, fuel_cell_status->rx_life);
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
    return mavlink_msg_fuel_cell_status_pack_chan(system_id, component_id, chan, msg, fuel_cell_status->time_boot_ms, fuel_cell_status->response_request_id, fuel_cell_status->voltage_setpoint, fuel_cell_status->current_setpoint, fuel_cell_status->power_setpoint, fuel_cell_status->soc, fuel_cell_status->device_state, fuel_cell_status->control_command, fuel_cell_status->control_result, fuel_cell_status->connection_state, fuel_cell_status->rx_life);
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
    return mavlink_msg_fuel_cell_status_pack_status(system_id, component_id, _status, msg,  fuel_cell_status->time_boot_ms, fuel_cell_status->response_request_id, fuel_cell_status->voltage_setpoint, fuel_cell_status->current_setpoint, fuel_cell_status->power_setpoint, fuel_cell_status->soc, fuel_cell_status->device_state, fuel_cell_status->control_command, fuel_cell_status->control_result, fuel_cell_status->connection_state, fuel_cell_status->rx_life);
}

/**
 * @brief Send a fuel_cell_status message
 * @param chan MAVLink channel to send the message
 *
 * @param time_boot_ms [ms] Time since system boot.
 * @param response_request_id  Request ID associated with control_result. Zero means no request has been processed.
 * @param voltage_setpoint  Currently accepted voltage setpoint in 0.1 V.
 * @param current_setpoint  Currently accepted current setpoint in 0.1 A.
 * @param power_setpoint [W] Currently accepted power setpoint.
 * @param soc [d%] Last valid device state of charge.
 * @param device_state  Last valid device state defined by the fuel cell controller protocol.
 * @param control_command  Currently accepted fuel cell controller command.
 * @param control_result  Processing result for response_request_id.
 * @param connection_state  Current fuel cell controller connection state.
 * @param rx_life  Life counter from the last valid device status frame.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_fuel_cell_status_send(mavlink_channel_t chan, uint32_t time_boot_ms, uint32_t response_request_id, uint16_t voltage_setpoint, uint16_t current_setpoint, uint16_t power_setpoint, uint16_t soc, uint8_t device_state, uint8_t control_command, uint8_t control_result, uint8_t connection_state, uint8_t rx_life)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_FUEL_CELL_STATUS_LEN];
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_uint32_t(buf, 4, response_request_id);
    _mav_put_uint16_t(buf, 8, voltage_setpoint);
    _mav_put_uint16_t(buf, 10, current_setpoint);
    _mav_put_uint16_t(buf, 12, power_setpoint);
    _mav_put_uint16_t(buf, 14, soc);
    _mav_put_uint8_t(buf, 16, device_state);
    _mav_put_uint8_t(buf, 17, control_command);
    _mav_put_uint8_t(buf, 18, control_result);
    _mav_put_uint8_t(buf, 19, connection_state);
    _mav_put_uint8_t(buf, 20, rx_life);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FUEL_CELL_STATUS, buf, MAVLINK_MSG_ID_FUEL_CELL_STATUS_MIN_LEN, MAVLINK_MSG_ID_FUEL_CELL_STATUS_LEN, MAVLINK_MSG_ID_FUEL_CELL_STATUS_CRC);
#else
    mavlink_fuel_cell_status_t packet;
    packet.time_boot_ms = time_boot_ms;
    packet.response_request_id = response_request_id;
    packet.voltage_setpoint = voltage_setpoint;
    packet.current_setpoint = current_setpoint;
    packet.power_setpoint = power_setpoint;
    packet.soc = soc;
    packet.device_state = device_state;
    packet.control_command = control_command;
    packet.control_result = control_result;
    packet.connection_state = connection_state;
    packet.rx_life = rx_life;

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
    mavlink_msg_fuel_cell_status_send(chan, fuel_cell_status->time_boot_ms, fuel_cell_status->response_request_id, fuel_cell_status->voltage_setpoint, fuel_cell_status->current_setpoint, fuel_cell_status->power_setpoint, fuel_cell_status->soc, fuel_cell_status->device_state, fuel_cell_status->control_command, fuel_cell_status->control_result, fuel_cell_status->connection_state, fuel_cell_status->rx_life);
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
static inline void mavlink_msg_fuel_cell_status_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint32_t time_boot_ms, uint32_t response_request_id, uint16_t voltage_setpoint, uint16_t current_setpoint, uint16_t power_setpoint, uint16_t soc, uint8_t device_state, uint8_t control_command, uint8_t control_result, uint8_t connection_state, uint8_t rx_life)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_uint32_t(buf, 4, response_request_id);
    _mav_put_uint16_t(buf, 8, voltage_setpoint);
    _mav_put_uint16_t(buf, 10, current_setpoint);
    _mav_put_uint16_t(buf, 12, power_setpoint);
    _mav_put_uint16_t(buf, 14, soc);
    _mav_put_uint8_t(buf, 16, device_state);
    _mav_put_uint8_t(buf, 17, control_command);
    _mav_put_uint8_t(buf, 18, control_result);
    _mav_put_uint8_t(buf, 19, connection_state);
    _mav_put_uint8_t(buf, 20, rx_life);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FUEL_CELL_STATUS, buf, MAVLINK_MSG_ID_FUEL_CELL_STATUS_MIN_LEN, MAVLINK_MSG_ID_FUEL_CELL_STATUS_LEN, MAVLINK_MSG_ID_FUEL_CELL_STATUS_CRC);
#else
    mavlink_fuel_cell_status_t *packet = (mavlink_fuel_cell_status_t *)msgbuf;
    packet->time_boot_ms = time_boot_ms;
    packet->response_request_id = response_request_id;
    packet->voltage_setpoint = voltage_setpoint;
    packet->current_setpoint = current_setpoint;
    packet->power_setpoint = power_setpoint;
    packet->soc = soc;
    packet->device_state = device_state;
    packet->control_command = control_command;
    packet->control_result = control_result;
    packet->connection_state = connection_state;
    packet->rx_life = rx_life;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FUEL_CELL_STATUS, (const char *)packet, MAVLINK_MSG_ID_FUEL_CELL_STATUS_MIN_LEN, MAVLINK_MSG_ID_FUEL_CELL_STATUS_LEN, MAVLINK_MSG_ID_FUEL_CELL_STATUS_CRC);
#endif
}
#endif

#endif

// MESSAGE FUEL_CELL_STATUS UNPACKING


/**
 * @brief Get field time_boot_ms from fuel_cell_status message
 *
 * @return [ms] Time since system boot.
 */
static inline uint32_t mavlink_msg_fuel_cell_status_get_time_boot_ms(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field response_request_id from fuel_cell_status message
 *
 * @return  Request ID associated with control_result. Zero means no request has been processed.
 */
static inline uint32_t mavlink_msg_fuel_cell_status_get_response_request_id(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  4);
}

/**
 * @brief Get field voltage_setpoint from fuel_cell_status message
 *
 * @return  Currently accepted voltage setpoint in 0.1 V.
 */
static inline uint16_t mavlink_msg_fuel_cell_status_get_voltage_setpoint(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  8);
}

/**
 * @brief Get field current_setpoint from fuel_cell_status message
 *
 * @return  Currently accepted current setpoint in 0.1 A.
 */
static inline uint16_t mavlink_msg_fuel_cell_status_get_current_setpoint(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  10);
}

/**
 * @brief Get field power_setpoint from fuel_cell_status message
 *
 * @return [W] Currently accepted power setpoint.
 */
static inline uint16_t mavlink_msg_fuel_cell_status_get_power_setpoint(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  12);
}

/**
 * @brief Get field soc from fuel_cell_status message
 *
 * @return [d%] Last valid device state of charge.
 */
static inline uint16_t mavlink_msg_fuel_cell_status_get_soc(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  14);
}

/**
 * @brief Get field device_state from fuel_cell_status message
 *
 * @return  Last valid device state defined by the fuel cell controller protocol.
 */
static inline uint8_t mavlink_msg_fuel_cell_status_get_device_state(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  16);
}

/**
 * @brief Get field control_command from fuel_cell_status message
 *
 * @return  Currently accepted fuel cell controller command.
 */
static inline uint8_t mavlink_msg_fuel_cell_status_get_control_command(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  17);
}

/**
 * @brief Get field control_result from fuel_cell_status message
 *
 * @return  Processing result for response_request_id.
 */
static inline uint8_t mavlink_msg_fuel_cell_status_get_control_result(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  18);
}

/**
 * @brief Get field connection_state from fuel_cell_status message
 *
 * @return  Current fuel cell controller connection state.
 */
static inline uint8_t mavlink_msg_fuel_cell_status_get_connection_state(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  19);
}

/**
 * @brief Get field rx_life from fuel_cell_status message
 *
 * @return  Life counter from the last valid device status frame.
 */
static inline uint8_t mavlink_msg_fuel_cell_status_get_rx_life(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  20);
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
    fuel_cell_status->response_request_id = mavlink_msg_fuel_cell_status_get_response_request_id(msg);
    fuel_cell_status->voltage_setpoint = mavlink_msg_fuel_cell_status_get_voltage_setpoint(msg);
    fuel_cell_status->current_setpoint = mavlink_msg_fuel_cell_status_get_current_setpoint(msg);
    fuel_cell_status->power_setpoint = mavlink_msg_fuel_cell_status_get_power_setpoint(msg);
    fuel_cell_status->soc = mavlink_msg_fuel_cell_status_get_soc(msg);
    fuel_cell_status->device_state = mavlink_msg_fuel_cell_status_get_device_state(msg);
    fuel_cell_status->control_command = mavlink_msg_fuel_cell_status_get_control_command(msg);
    fuel_cell_status->control_result = mavlink_msg_fuel_cell_status_get_control_result(msg);
    fuel_cell_status->connection_state = mavlink_msg_fuel_cell_status_get_connection_state(msg);
    fuel_cell_status->rx_life = mavlink_msg_fuel_cell_status_get_rx_life(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_FUEL_CELL_STATUS_LEN? msg->len : MAVLINK_MSG_ID_FUEL_CELL_STATUS_LEN;
        memset(fuel_cell_status, 0, MAVLINK_MSG_ID_FUEL_CELL_STATUS_LEN);
    memcpy(fuel_cell_status, _MAV_PAYLOAD(msg), len);
#endif
}
