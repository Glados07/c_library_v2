#pragma once
// MESSAGE FUEL_CELL_STATUS PACKING

#define MAVLINK_MSG_ID_FUEL_CELL_STATUS 61001


typedef struct __mavlink_fuel_cell_status_t {
 uint32_t response_request_id; /*<  Request ID associated with control_result. Zero means no request has been processed.*/
 uint16_t requested_power; /*< [W] Flight-controller-owned requested power currently used in CAN control frames. Read-only telemetry, not a device acknowledgement.*/
 uint16_t soc; /*< [c%] Last valid device lithium battery state of charge, in 0.01 percent. Valid only while connection_state is OK.*/
 uint16_t dcdc_output_current; /*< [cA] Last valid device DCDC output current, in 0.01 A. All raw values from 0 to 65535 are valid. Read-only telemetry independent of the PMU bus current. Retained after disconnection and valid only while connection_state is OK.*/
 uint8_t device_state; /*<  Last valid raw 4-bit FCS system state. States 0-13 are defined; unknown states 14-15 are forwarded without changing connection health or control permissions. Valid only while connection_state is OK.*/
 uint8_t control_command; /*<  FCS command currently saved and sent by the flight controller. Actual device operation is reported by device_state.*/
 uint8_t control_result; /*<  Processing result for response_request_id. ACCEPTED means that the flight controller saved the command or started the reset pulse, not that the device completed the operation. TEMPORARILY_REJECTED means that the CAN device is not connected or a start/stop request arrived during a reset pulse. DENIED means that a cached request identifier was reused with different control fields. UNSUPPORTED means that a control field is invalid.*/
 uint8_t connection_state; /*<  Current fuel cell controller connection state.*/
} mavlink_fuel_cell_status_t;

#define MAVLINK_MSG_ID_FUEL_CELL_STATUS_LEN 14
#define MAVLINK_MSG_ID_FUEL_CELL_STATUS_MIN_LEN 14
#define MAVLINK_MSG_ID_61001_LEN 14
#define MAVLINK_MSG_ID_61001_MIN_LEN 14

#define MAVLINK_MSG_ID_FUEL_CELL_STATUS_CRC 218
#define MAVLINK_MSG_ID_61001_CRC 218



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_FUEL_CELL_STATUS { \
    61001, \
    "FUEL_CELL_STATUS", \
    8, \
    {  { "response_request_id", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_fuel_cell_status_t, response_request_id) }, \
         { "requested_power", NULL, MAVLINK_TYPE_UINT16_T, 0, 4, offsetof(mavlink_fuel_cell_status_t, requested_power) }, \
         { "soc", NULL, MAVLINK_TYPE_UINT16_T, 0, 6, offsetof(mavlink_fuel_cell_status_t, soc) }, \
         { "dcdc_output_current", NULL, MAVLINK_TYPE_UINT16_T, 0, 8, offsetof(mavlink_fuel_cell_status_t, dcdc_output_current) }, \
         { "device_state", NULL, MAVLINK_TYPE_UINT8_T, 0, 10, offsetof(mavlink_fuel_cell_status_t, device_state) }, \
         { "control_command", NULL, MAVLINK_TYPE_UINT8_T, 0, 11, offsetof(mavlink_fuel_cell_status_t, control_command) }, \
         { "control_result", NULL, MAVLINK_TYPE_UINT8_T, 0, 12, offsetof(mavlink_fuel_cell_status_t, control_result) }, \
         { "connection_state", NULL, MAVLINK_TYPE_UINT8_T, 0, 13, offsetof(mavlink_fuel_cell_status_t, connection_state) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_FUEL_CELL_STATUS { \
    "FUEL_CELL_STATUS", \
    8, \
    {  { "response_request_id", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_fuel_cell_status_t, response_request_id) }, \
         { "requested_power", NULL, MAVLINK_TYPE_UINT16_T, 0, 4, offsetof(mavlink_fuel_cell_status_t, requested_power) }, \
         { "soc", NULL, MAVLINK_TYPE_UINT16_T, 0, 6, offsetof(mavlink_fuel_cell_status_t, soc) }, \
         { "dcdc_output_current", NULL, MAVLINK_TYPE_UINT16_T, 0, 8, offsetof(mavlink_fuel_cell_status_t, dcdc_output_current) }, \
         { "device_state", NULL, MAVLINK_TYPE_UINT8_T, 0, 10, offsetof(mavlink_fuel_cell_status_t, device_state) }, \
         { "control_command", NULL, MAVLINK_TYPE_UINT8_T, 0, 11, offsetof(mavlink_fuel_cell_status_t, control_command) }, \
         { "control_result", NULL, MAVLINK_TYPE_UINT8_T, 0, 12, offsetof(mavlink_fuel_cell_status_t, control_result) }, \
         { "connection_state", NULL, MAVLINK_TYPE_UINT8_T, 0, 13, offsetof(mavlink_fuel_cell_status_t, connection_state) }, \
         } \
}
#endif

/**
 * @brief Pack a fuel_cell_status message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param response_request_id  Request ID associated with control_result. Zero means no request has been processed.
 * @param requested_power [W] Flight-controller-owned requested power currently used in CAN control frames. Read-only telemetry, not a device acknowledgement.
 * @param soc [c%] Last valid device lithium battery state of charge, in 0.01 percent. Valid only while connection_state is OK.
 * @param dcdc_output_current [cA] Last valid device DCDC output current, in 0.01 A. All raw values from 0 to 65535 are valid. Read-only telemetry independent of the PMU bus current. Retained after disconnection and valid only while connection_state is OK.
 * @param device_state  Last valid raw 4-bit FCS system state. States 0-13 are defined; unknown states 14-15 are forwarded without changing connection health or control permissions. Valid only while connection_state is OK.
 * @param control_command  FCS command currently saved and sent by the flight controller. Actual device operation is reported by device_state.
 * @param control_result  Processing result for response_request_id. ACCEPTED means that the flight controller saved the command or started the reset pulse, not that the device completed the operation. TEMPORARILY_REJECTED means that the CAN device is not connected or a start/stop request arrived during a reset pulse. DENIED means that a cached request identifier was reused with different control fields. UNSUPPORTED means that a control field is invalid.
 * @param connection_state  Current fuel cell controller connection state.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_fuel_cell_status_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint32_t response_request_id, uint16_t requested_power, uint16_t soc, uint16_t dcdc_output_current, uint8_t device_state, uint8_t control_command, uint8_t control_result, uint8_t connection_state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_FUEL_CELL_STATUS_LEN];
    _mav_put_uint32_t(buf, 0, response_request_id);
    _mav_put_uint16_t(buf, 4, requested_power);
    _mav_put_uint16_t(buf, 6, soc);
    _mav_put_uint16_t(buf, 8, dcdc_output_current);
    _mav_put_uint8_t(buf, 10, device_state);
    _mav_put_uint8_t(buf, 11, control_command);
    _mav_put_uint8_t(buf, 12, control_result);
    _mav_put_uint8_t(buf, 13, connection_state);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_FUEL_CELL_STATUS_LEN);
#else
    mavlink_fuel_cell_status_t packet;
    packet.response_request_id = response_request_id;
    packet.requested_power = requested_power;
    packet.soc = soc;
    packet.dcdc_output_current = dcdc_output_current;
    packet.device_state = device_state;
    packet.control_command = control_command;
    packet.control_result = control_result;
    packet.connection_state = connection_state;

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
 * @param response_request_id  Request ID associated with control_result. Zero means no request has been processed.
 * @param requested_power [W] Flight-controller-owned requested power currently used in CAN control frames. Read-only telemetry, not a device acknowledgement.
 * @param soc [c%] Last valid device lithium battery state of charge, in 0.01 percent. Valid only while connection_state is OK.
 * @param dcdc_output_current [cA] Last valid device DCDC output current, in 0.01 A. All raw values from 0 to 65535 are valid. Read-only telemetry independent of the PMU bus current. Retained after disconnection and valid only while connection_state is OK.
 * @param device_state  Last valid raw 4-bit FCS system state. States 0-13 are defined; unknown states 14-15 are forwarded without changing connection health or control permissions. Valid only while connection_state is OK.
 * @param control_command  FCS command currently saved and sent by the flight controller. Actual device operation is reported by device_state.
 * @param control_result  Processing result for response_request_id. ACCEPTED means that the flight controller saved the command or started the reset pulse, not that the device completed the operation. TEMPORARILY_REJECTED means that the CAN device is not connected or a start/stop request arrived during a reset pulse. DENIED means that a cached request identifier was reused with different control fields. UNSUPPORTED means that a control field is invalid.
 * @param connection_state  Current fuel cell controller connection state.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_fuel_cell_status_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint32_t response_request_id, uint16_t requested_power, uint16_t soc, uint16_t dcdc_output_current, uint8_t device_state, uint8_t control_command, uint8_t control_result, uint8_t connection_state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_FUEL_CELL_STATUS_LEN];
    _mav_put_uint32_t(buf, 0, response_request_id);
    _mav_put_uint16_t(buf, 4, requested_power);
    _mav_put_uint16_t(buf, 6, soc);
    _mav_put_uint16_t(buf, 8, dcdc_output_current);
    _mav_put_uint8_t(buf, 10, device_state);
    _mav_put_uint8_t(buf, 11, control_command);
    _mav_put_uint8_t(buf, 12, control_result);
    _mav_put_uint8_t(buf, 13, connection_state);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_FUEL_CELL_STATUS_LEN);
#else
    mavlink_fuel_cell_status_t packet;
    packet.response_request_id = response_request_id;
    packet.requested_power = requested_power;
    packet.soc = soc;
    packet.dcdc_output_current = dcdc_output_current;
    packet.device_state = device_state;
    packet.control_command = control_command;
    packet.control_result = control_result;
    packet.connection_state = connection_state;

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
 * @param response_request_id  Request ID associated with control_result. Zero means no request has been processed.
 * @param requested_power [W] Flight-controller-owned requested power currently used in CAN control frames. Read-only telemetry, not a device acknowledgement.
 * @param soc [c%] Last valid device lithium battery state of charge, in 0.01 percent. Valid only while connection_state is OK.
 * @param dcdc_output_current [cA] Last valid device DCDC output current, in 0.01 A. All raw values from 0 to 65535 are valid. Read-only telemetry independent of the PMU bus current. Retained after disconnection and valid only while connection_state is OK.
 * @param device_state  Last valid raw 4-bit FCS system state. States 0-13 are defined; unknown states 14-15 are forwarded without changing connection health or control permissions. Valid only while connection_state is OK.
 * @param control_command  FCS command currently saved and sent by the flight controller. Actual device operation is reported by device_state.
 * @param control_result  Processing result for response_request_id. ACCEPTED means that the flight controller saved the command or started the reset pulse, not that the device completed the operation. TEMPORARILY_REJECTED means that the CAN device is not connected or a start/stop request arrived during a reset pulse. DENIED means that a cached request identifier was reused with different control fields. UNSUPPORTED means that a control field is invalid.
 * @param connection_state  Current fuel cell controller connection state.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_fuel_cell_status_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint32_t response_request_id,uint16_t requested_power,uint16_t soc,uint16_t dcdc_output_current,uint8_t device_state,uint8_t control_command,uint8_t control_result,uint8_t connection_state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_FUEL_CELL_STATUS_LEN];
    _mav_put_uint32_t(buf, 0, response_request_id);
    _mav_put_uint16_t(buf, 4, requested_power);
    _mav_put_uint16_t(buf, 6, soc);
    _mav_put_uint16_t(buf, 8, dcdc_output_current);
    _mav_put_uint8_t(buf, 10, device_state);
    _mav_put_uint8_t(buf, 11, control_command);
    _mav_put_uint8_t(buf, 12, control_result);
    _mav_put_uint8_t(buf, 13, connection_state);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_FUEL_CELL_STATUS_LEN);
#else
    mavlink_fuel_cell_status_t packet;
    packet.response_request_id = response_request_id;
    packet.requested_power = requested_power;
    packet.soc = soc;
    packet.dcdc_output_current = dcdc_output_current;
    packet.device_state = device_state;
    packet.control_command = control_command;
    packet.control_result = control_result;
    packet.connection_state = connection_state;

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
    return mavlink_msg_fuel_cell_status_pack(system_id, component_id, msg, fuel_cell_status->response_request_id, fuel_cell_status->requested_power, fuel_cell_status->soc, fuel_cell_status->dcdc_output_current, fuel_cell_status->device_state, fuel_cell_status->control_command, fuel_cell_status->control_result, fuel_cell_status->connection_state);
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
    return mavlink_msg_fuel_cell_status_pack_chan(system_id, component_id, chan, msg, fuel_cell_status->response_request_id, fuel_cell_status->requested_power, fuel_cell_status->soc, fuel_cell_status->dcdc_output_current, fuel_cell_status->device_state, fuel_cell_status->control_command, fuel_cell_status->control_result, fuel_cell_status->connection_state);
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
    return mavlink_msg_fuel_cell_status_pack_status(system_id, component_id, _status, msg,  fuel_cell_status->response_request_id, fuel_cell_status->requested_power, fuel_cell_status->soc, fuel_cell_status->dcdc_output_current, fuel_cell_status->device_state, fuel_cell_status->control_command, fuel_cell_status->control_result, fuel_cell_status->connection_state);
}

/**
 * @brief Send a fuel_cell_status message
 * @param chan MAVLink channel to send the message
 *
 * @param response_request_id  Request ID associated with control_result. Zero means no request has been processed.
 * @param requested_power [W] Flight-controller-owned requested power currently used in CAN control frames. Read-only telemetry, not a device acknowledgement.
 * @param soc [c%] Last valid device lithium battery state of charge, in 0.01 percent. Valid only while connection_state is OK.
 * @param dcdc_output_current [cA] Last valid device DCDC output current, in 0.01 A. All raw values from 0 to 65535 are valid. Read-only telemetry independent of the PMU bus current. Retained after disconnection and valid only while connection_state is OK.
 * @param device_state  Last valid raw 4-bit FCS system state. States 0-13 are defined; unknown states 14-15 are forwarded without changing connection health or control permissions. Valid only while connection_state is OK.
 * @param control_command  FCS command currently saved and sent by the flight controller. Actual device operation is reported by device_state.
 * @param control_result  Processing result for response_request_id. ACCEPTED means that the flight controller saved the command or started the reset pulse, not that the device completed the operation. TEMPORARILY_REJECTED means that the CAN device is not connected or a start/stop request arrived during a reset pulse. DENIED means that a cached request identifier was reused with different control fields. UNSUPPORTED means that a control field is invalid.
 * @param connection_state  Current fuel cell controller connection state.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_fuel_cell_status_send(mavlink_channel_t chan, uint32_t response_request_id, uint16_t requested_power, uint16_t soc, uint16_t dcdc_output_current, uint8_t device_state, uint8_t control_command, uint8_t control_result, uint8_t connection_state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_FUEL_CELL_STATUS_LEN];
    _mav_put_uint32_t(buf, 0, response_request_id);
    _mav_put_uint16_t(buf, 4, requested_power);
    _mav_put_uint16_t(buf, 6, soc);
    _mav_put_uint16_t(buf, 8, dcdc_output_current);
    _mav_put_uint8_t(buf, 10, device_state);
    _mav_put_uint8_t(buf, 11, control_command);
    _mav_put_uint8_t(buf, 12, control_result);
    _mav_put_uint8_t(buf, 13, connection_state);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FUEL_CELL_STATUS, buf, MAVLINK_MSG_ID_FUEL_CELL_STATUS_MIN_LEN, MAVLINK_MSG_ID_FUEL_CELL_STATUS_LEN, MAVLINK_MSG_ID_FUEL_CELL_STATUS_CRC);
#else
    mavlink_fuel_cell_status_t packet;
    packet.response_request_id = response_request_id;
    packet.requested_power = requested_power;
    packet.soc = soc;
    packet.dcdc_output_current = dcdc_output_current;
    packet.device_state = device_state;
    packet.control_command = control_command;
    packet.control_result = control_result;
    packet.connection_state = connection_state;

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
    mavlink_msg_fuel_cell_status_send(chan, fuel_cell_status->response_request_id, fuel_cell_status->requested_power, fuel_cell_status->soc, fuel_cell_status->dcdc_output_current, fuel_cell_status->device_state, fuel_cell_status->control_command, fuel_cell_status->control_result, fuel_cell_status->connection_state);
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
static inline void mavlink_msg_fuel_cell_status_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint32_t response_request_id, uint16_t requested_power, uint16_t soc, uint16_t dcdc_output_current, uint8_t device_state, uint8_t control_command, uint8_t control_result, uint8_t connection_state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint32_t(buf, 0, response_request_id);
    _mav_put_uint16_t(buf, 4, requested_power);
    _mav_put_uint16_t(buf, 6, soc);
    _mav_put_uint16_t(buf, 8, dcdc_output_current);
    _mav_put_uint8_t(buf, 10, device_state);
    _mav_put_uint8_t(buf, 11, control_command);
    _mav_put_uint8_t(buf, 12, control_result);
    _mav_put_uint8_t(buf, 13, connection_state);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FUEL_CELL_STATUS, buf, MAVLINK_MSG_ID_FUEL_CELL_STATUS_MIN_LEN, MAVLINK_MSG_ID_FUEL_CELL_STATUS_LEN, MAVLINK_MSG_ID_FUEL_CELL_STATUS_CRC);
#else
    mavlink_fuel_cell_status_t *packet = (mavlink_fuel_cell_status_t *)msgbuf;
    packet->response_request_id = response_request_id;
    packet->requested_power = requested_power;
    packet->soc = soc;
    packet->dcdc_output_current = dcdc_output_current;
    packet->device_state = device_state;
    packet->control_command = control_command;
    packet->control_result = control_result;
    packet->connection_state = connection_state;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FUEL_CELL_STATUS, (const char *)packet, MAVLINK_MSG_ID_FUEL_CELL_STATUS_MIN_LEN, MAVLINK_MSG_ID_FUEL_CELL_STATUS_LEN, MAVLINK_MSG_ID_FUEL_CELL_STATUS_CRC);
#endif
}
#endif

#endif

// MESSAGE FUEL_CELL_STATUS UNPACKING


/**
 * @brief Get field response_request_id from fuel_cell_status message
 *
 * @return  Request ID associated with control_result. Zero means no request has been processed.
 */
static inline uint32_t mavlink_msg_fuel_cell_status_get_response_request_id(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field requested_power from fuel_cell_status message
 *
 * @return [W] Flight-controller-owned requested power currently used in CAN control frames. Read-only telemetry, not a device acknowledgement.
 */
static inline uint16_t mavlink_msg_fuel_cell_status_get_requested_power(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  4);
}

/**
 * @brief Get field soc from fuel_cell_status message
 *
 * @return [c%] Last valid device lithium battery state of charge, in 0.01 percent. Valid only while connection_state is OK.
 */
static inline uint16_t mavlink_msg_fuel_cell_status_get_soc(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  6);
}

/**
 * @brief Get field dcdc_output_current from fuel_cell_status message
 *
 * @return [cA] Last valid device DCDC output current, in 0.01 A. All raw values from 0 to 65535 are valid. Read-only telemetry independent of the PMU bus current. Retained after disconnection and valid only while connection_state is OK.
 */
static inline uint16_t mavlink_msg_fuel_cell_status_get_dcdc_output_current(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  8);
}

/**
 * @brief Get field device_state from fuel_cell_status message
 *
 * @return  Last valid raw 4-bit FCS system state. States 0-13 are defined; unknown states 14-15 are forwarded without changing connection health or control permissions. Valid only while connection_state is OK.
 */
static inline uint8_t mavlink_msg_fuel_cell_status_get_device_state(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  10);
}

/**
 * @brief Get field control_command from fuel_cell_status message
 *
 * @return  FCS command currently saved and sent by the flight controller. Actual device operation is reported by device_state.
 */
static inline uint8_t mavlink_msg_fuel_cell_status_get_control_command(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  11);
}

/**
 * @brief Get field control_result from fuel_cell_status message
 *
 * @return  Processing result for response_request_id. ACCEPTED means that the flight controller saved the command or started the reset pulse, not that the device completed the operation. TEMPORARILY_REJECTED means that the CAN device is not connected or a start/stop request arrived during a reset pulse. DENIED means that a cached request identifier was reused with different control fields. UNSUPPORTED means that a control field is invalid.
 */
static inline uint8_t mavlink_msg_fuel_cell_status_get_control_result(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  12);
}

/**
 * @brief Get field connection_state from fuel_cell_status message
 *
 * @return  Current fuel cell controller connection state.
 */
static inline uint8_t mavlink_msg_fuel_cell_status_get_connection_state(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  13);
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
    fuel_cell_status->response_request_id = mavlink_msg_fuel_cell_status_get_response_request_id(msg);
    fuel_cell_status->requested_power = mavlink_msg_fuel_cell_status_get_requested_power(msg);
    fuel_cell_status->soc = mavlink_msg_fuel_cell_status_get_soc(msg);
    fuel_cell_status->dcdc_output_current = mavlink_msg_fuel_cell_status_get_dcdc_output_current(msg);
    fuel_cell_status->device_state = mavlink_msg_fuel_cell_status_get_device_state(msg);
    fuel_cell_status->control_command = mavlink_msg_fuel_cell_status_get_control_command(msg);
    fuel_cell_status->control_result = mavlink_msg_fuel_cell_status_get_control_result(msg);
    fuel_cell_status->connection_state = mavlink_msg_fuel_cell_status_get_connection_state(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_FUEL_CELL_STATUS_LEN? msg->len : MAVLINK_MSG_ID_FUEL_CELL_STATUS_LEN;
        memset(fuel_cell_status, 0, MAVLINK_MSG_ID_FUEL_CELL_STATUS_LEN);
    memcpy(fuel_cell_status, _MAV_PAYLOAD(msg), len);
#endif
}
