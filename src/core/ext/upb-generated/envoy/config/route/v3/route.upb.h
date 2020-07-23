/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/config/route/v3/route.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#ifndef ENVOY_CONFIG_ROUTE_V3_ROUTE_PROTO_UPB_H_
#define ENVOY_CONFIG_ROUTE_V3_ROUTE_PROTO_UPB_H_

#include "upb/msg.h"
#include "upb/decode.h"
#include "upb/encode.h"

#include "upb/port_def.inc"

#ifdef __cplusplus
extern "C" {
#endif

struct envoy_config_route_v3_RouteConfiguration;
struct envoy_config_route_v3_Vhds;
typedef struct envoy_config_route_v3_RouteConfiguration envoy_config_route_v3_RouteConfiguration;
typedef struct envoy_config_route_v3_Vhds envoy_config_route_v3_Vhds;
extern const upb_msglayout envoy_config_route_v3_RouteConfiguration_msginit;
extern const upb_msglayout envoy_config_route_v3_Vhds_msginit;
struct envoy_config_core_v3_ConfigSource;
struct envoy_config_core_v3_HeaderValueOption;
struct envoy_config_route_v3_VirtualHost;
struct google_protobuf_BoolValue;
extern const upb_msglayout envoy_config_core_v3_ConfigSource_msginit;
extern const upb_msglayout envoy_config_core_v3_HeaderValueOption_msginit;
extern const upb_msglayout envoy_config_route_v3_VirtualHost_msginit;
extern const upb_msglayout google_protobuf_BoolValue_msginit;


/* envoy.config.route.v3.RouteConfiguration */

UPB_INLINE envoy_config_route_v3_RouteConfiguration *envoy_config_route_v3_RouteConfiguration_new(upb_arena *arena) {
  return (envoy_config_route_v3_RouteConfiguration *)_upb_msg_new(&envoy_config_route_v3_RouteConfiguration_msginit, arena);
}
UPB_INLINE envoy_config_route_v3_RouteConfiguration *envoy_config_route_v3_RouteConfiguration_parse(const char *buf, size_t size,
                        upb_arena *arena) {
  envoy_config_route_v3_RouteConfiguration *ret = envoy_config_route_v3_RouteConfiguration_new(arena);
  return (ret && upb_decode(buf, size, ret, &envoy_config_route_v3_RouteConfiguration_msginit, arena)) ? ret : NULL;
}
UPB_INLINE char *envoy_config_route_v3_RouteConfiguration_serialize(const envoy_config_route_v3_RouteConfiguration *msg, upb_arena *arena, size_t *len) {
  return upb_encode(msg, &envoy_config_route_v3_RouteConfiguration_msginit, arena, len);
}

UPB_INLINE upb_strview envoy_config_route_v3_RouteConfiguration_name(const envoy_config_route_v3_RouteConfiguration *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(4, 8), upb_strview); }
UPB_INLINE bool envoy_config_route_v3_RouteConfiguration_has_virtual_hosts(const envoy_config_route_v3_RouteConfiguration *msg) { return _upb_has_submsg_nohasbit(msg, UPB_SIZE(20, 40)); }
UPB_INLINE const struct envoy_config_route_v3_VirtualHost* const* envoy_config_route_v3_RouteConfiguration_virtual_hosts(const envoy_config_route_v3_RouteConfiguration *msg, size_t *len) { return (const struct envoy_config_route_v3_VirtualHost* const*)_upb_array_accessor(msg, UPB_SIZE(20, 40), len); }
UPB_INLINE upb_strview const* envoy_config_route_v3_RouteConfiguration_internal_only_headers(const envoy_config_route_v3_RouteConfiguration *msg, size_t *len) { return (upb_strview const*)_upb_array_accessor(msg, UPB_SIZE(24, 48), len); }
UPB_INLINE bool envoy_config_route_v3_RouteConfiguration_has_response_headers_to_add(const envoy_config_route_v3_RouteConfiguration *msg) { return _upb_has_submsg_nohasbit(msg, UPB_SIZE(28, 56)); }
UPB_INLINE const struct envoy_config_core_v3_HeaderValueOption* const* envoy_config_route_v3_RouteConfiguration_response_headers_to_add(const envoy_config_route_v3_RouteConfiguration *msg, size_t *len) { return (const struct envoy_config_core_v3_HeaderValueOption* const*)_upb_array_accessor(msg, UPB_SIZE(28, 56), len); }
UPB_INLINE upb_strview const* envoy_config_route_v3_RouteConfiguration_response_headers_to_remove(const envoy_config_route_v3_RouteConfiguration *msg, size_t *len) { return (upb_strview const*)_upb_array_accessor(msg, UPB_SIZE(32, 64), len); }
UPB_INLINE bool envoy_config_route_v3_RouteConfiguration_has_request_headers_to_add(const envoy_config_route_v3_RouteConfiguration *msg) { return _upb_has_submsg_nohasbit(msg, UPB_SIZE(36, 72)); }
UPB_INLINE const struct envoy_config_core_v3_HeaderValueOption* const* envoy_config_route_v3_RouteConfiguration_request_headers_to_add(const envoy_config_route_v3_RouteConfiguration *msg, size_t *len) { return (const struct envoy_config_core_v3_HeaderValueOption* const*)_upb_array_accessor(msg, UPB_SIZE(36, 72), len); }
UPB_INLINE bool envoy_config_route_v3_RouteConfiguration_has_validate_clusters(const envoy_config_route_v3_RouteConfiguration *msg) { return _upb_has_submsg_nohasbit(msg, UPB_SIZE(12, 24)); }
UPB_INLINE const struct google_protobuf_BoolValue* envoy_config_route_v3_RouteConfiguration_validate_clusters(const envoy_config_route_v3_RouteConfiguration *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(12, 24), const struct google_protobuf_BoolValue*); }
UPB_INLINE upb_strview const* envoy_config_route_v3_RouteConfiguration_request_headers_to_remove(const envoy_config_route_v3_RouteConfiguration *msg, size_t *len) { return (upb_strview const*)_upb_array_accessor(msg, UPB_SIZE(40, 80), len); }
UPB_INLINE bool envoy_config_route_v3_RouteConfiguration_has_vhds(const envoy_config_route_v3_RouteConfiguration *msg) { return _upb_has_submsg_nohasbit(msg, UPB_SIZE(16, 32)); }
UPB_INLINE const envoy_config_route_v3_Vhds* envoy_config_route_v3_RouteConfiguration_vhds(const envoy_config_route_v3_RouteConfiguration *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(16, 32), const envoy_config_route_v3_Vhds*); }
UPB_INLINE bool envoy_config_route_v3_RouteConfiguration_most_specific_header_mutations_wins(const envoy_config_route_v3_RouteConfiguration *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(0, 0), bool); }

UPB_INLINE void envoy_config_route_v3_RouteConfiguration_set_name(envoy_config_route_v3_RouteConfiguration *msg, upb_strview value) {
  *UPB_PTR_AT(msg, UPB_SIZE(4, 8), upb_strview) = value;
}
UPB_INLINE struct envoy_config_route_v3_VirtualHost** envoy_config_route_v3_RouteConfiguration_mutable_virtual_hosts(envoy_config_route_v3_RouteConfiguration *msg, size_t *len) {
  return (struct envoy_config_route_v3_VirtualHost**)_upb_array_mutable_accessor(msg, UPB_SIZE(20, 40), len);
}
UPB_INLINE struct envoy_config_route_v3_VirtualHost** envoy_config_route_v3_RouteConfiguration_resize_virtual_hosts(envoy_config_route_v3_RouteConfiguration *msg, size_t len, upb_arena *arena) {
  return (struct envoy_config_route_v3_VirtualHost**)_upb_array_resize_accessor(msg, UPB_SIZE(20, 40), len, UPB_TYPE_MESSAGE, arena);
}
UPB_INLINE struct envoy_config_route_v3_VirtualHost* envoy_config_route_v3_RouteConfiguration_add_virtual_hosts(envoy_config_route_v3_RouteConfiguration *msg, upb_arena *arena) {
  struct envoy_config_route_v3_VirtualHost* sub = (struct envoy_config_route_v3_VirtualHost*)_upb_msg_new(&envoy_config_route_v3_VirtualHost_msginit, arena);
  bool ok = _upb_array_append_accessor(
      msg, UPB_SIZE(20, 40), UPB_SIZE(4, 8), UPB_TYPE_MESSAGE, &sub, arena);
  if (!ok) return NULL;
  return sub;
}
UPB_INLINE upb_strview* envoy_config_route_v3_RouteConfiguration_mutable_internal_only_headers(envoy_config_route_v3_RouteConfiguration *msg, size_t *len) {
  return (upb_strview*)_upb_array_mutable_accessor(msg, UPB_SIZE(24, 48), len);
}
UPB_INLINE upb_strview* envoy_config_route_v3_RouteConfiguration_resize_internal_only_headers(envoy_config_route_v3_RouteConfiguration *msg, size_t len, upb_arena *arena) {
  return (upb_strview*)_upb_array_resize_accessor(msg, UPB_SIZE(24, 48), len, UPB_TYPE_STRING, arena);
}
UPB_INLINE bool envoy_config_route_v3_RouteConfiguration_add_internal_only_headers(envoy_config_route_v3_RouteConfiguration *msg, upb_strview val, upb_arena *arena) {
  return _upb_array_append_accessor(msg, UPB_SIZE(24, 48), UPB_SIZE(8, 16), UPB_TYPE_STRING, &val,
      arena);
}
UPB_INLINE struct envoy_config_core_v3_HeaderValueOption** envoy_config_route_v3_RouteConfiguration_mutable_response_headers_to_add(envoy_config_route_v3_RouteConfiguration *msg, size_t *len) {
  return (struct envoy_config_core_v3_HeaderValueOption**)_upb_array_mutable_accessor(msg, UPB_SIZE(28, 56), len);
}
UPB_INLINE struct envoy_config_core_v3_HeaderValueOption** envoy_config_route_v3_RouteConfiguration_resize_response_headers_to_add(envoy_config_route_v3_RouteConfiguration *msg, size_t len, upb_arena *arena) {
  return (struct envoy_config_core_v3_HeaderValueOption**)_upb_array_resize_accessor(msg, UPB_SIZE(28, 56), len, UPB_TYPE_MESSAGE, arena);
}
UPB_INLINE struct envoy_config_core_v3_HeaderValueOption* envoy_config_route_v3_RouteConfiguration_add_response_headers_to_add(envoy_config_route_v3_RouteConfiguration *msg, upb_arena *arena) {
  struct envoy_config_core_v3_HeaderValueOption* sub = (struct envoy_config_core_v3_HeaderValueOption*)_upb_msg_new(&envoy_config_core_v3_HeaderValueOption_msginit, arena);
  bool ok = _upb_array_append_accessor(
      msg, UPB_SIZE(28, 56), UPB_SIZE(4, 8), UPB_TYPE_MESSAGE, &sub, arena);
  if (!ok) return NULL;
  return sub;
}
UPB_INLINE upb_strview* envoy_config_route_v3_RouteConfiguration_mutable_response_headers_to_remove(envoy_config_route_v3_RouteConfiguration *msg, size_t *len) {
  return (upb_strview*)_upb_array_mutable_accessor(msg, UPB_SIZE(32, 64), len);
}
UPB_INLINE upb_strview* envoy_config_route_v3_RouteConfiguration_resize_response_headers_to_remove(envoy_config_route_v3_RouteConfiguration *msg, size_t len, upb_arena *arena) {
  return (upb_strview*)_upb_array_resize_accessor(msg, UPB_SIZE(32, 64), len, UPB_TYPE_STRING, arena);
}
UPB_INLINE bool envoy_config_route_v3_RouteConfiguration_add_response_headers_to_remove(envoy_config_route_v3_RouteConfiguration *msg, upb_strview val, upb_arena *arena) {
  return _upb_array_append_accessor(msg, UPB_SIZE(32, 64), UPB_SIZE(8, 16), UPB_TYPE_STRING, &val,
      arena);
}
UPB_INLINE struct envoy_config_core_v3_HeaderValueOption** envoy_config_route_v3_RouteConfiguration_mutable_request_headers_to_add(envoy_config_route_v3_RouteConfiguration *msg, size_t *len) {
  return (struct envoy_config_core_v3_HeaderValueOption**)_upb_array_mutable_accessor(msg, UPB_SIZE(36, 72), len);
}
UPB_INLINE struct envoy_config_core_v3_HeaderValueOption** envoy_config_route_v3_RouteConfiguration_resize_request_headers_to_add(envoy_config_route_v3_RouteConfiguration *msg, size_t len, upb_arena *arena) {
  return (struct envoy_config_core_v3_HeaderValueOption**)_upb_array_resize_accessor(msg, UPB_SIZE(36, 72), len, UPB_TYPE_MESSAGE, arena);
}
UPB_INLINE struct envoy_config_core_v3_HeaderValueOption* envoy_config_route_v3_RouteConfiguration_add_request_headers_to_add(envoy_config_route_v3_RouteConfiguration *msg, upb_arena *arena) {
  struct envoy_config_core_v3_HeaderValueOption* sub = (struct envoy_config_core_v3_HeaderValueOption*)_upb_msg_new(&envoy_config_core_v3_HeaderValueOption_msginit, arena);
  bool ok = _upb_array_append_accessor(
      msg, UPB_SIZE(36, 72), UPB_SIZE(4, 8), UPB_TYPE_MESSAGE, &sub, arena);
  if (!ok) return NULL;
  return sub;
}
UPB_INLINE void envoy_config_route_v3_RouteConfiguration_set_validate_clusters(envoy_config_route_v3_RouteConfiguration *msg, struct google_protobuf_BoolValue* value) {
  *UPB_PTR_AT(msg, UPB_SIZE(12, 24), struct google_protobuf_BoolValue*) = value;
}
UPB_INLINE struct google_protobuf_BoolValue* envoy_config_route_v3_RouteConfiguration_mutable_validate_clusters(envoy_config_route_v3_RouteConfiguration *msg, upb_arena *arena) {
  struct google_protobuf_BoolValue* sub = (struct google_protobuf_BoolValue*)envoy_config_route_v3_RouteConfiguration_validate_clusters(msg);
  if (sub == NULL) {
    sub = (struct google_protobuf_BoolValue*)_upb_msg_new(&google_protobuf_BoolValue_msginit, arena);
    if (!sub) return NULL;
    envoy_config_route_v3_RouteConfiguration_set_validate_clusters(msg, sub);
  }
  return sub;
}
UPB_INLINE upb_strview* envoy_config_route_v3_RouteConfiguration_mutable_request_headers_to_remove(envoy_config_route_v3_RouteConfiguration *msg, size_t *len) {
  return (upb_strview*)_upb_array_mutable_accessor(msg, UPB_SIZE(40, 80), len);
}
UPB_INLINE upb_strview* envoy_config_route_v3_RouteConfiguration_resize_request_headers_to_remove(envoy_config_route_v3_RouteConfiguration *msg, size_t len, upb_arena *arena) {
  return (upb_strview*)_upb_array_resize_accessor(msg, UPB_SIZE(40, 80), len, UPB_TYPE_STRING, arena);
}
UPB_INLINE bool envoy_config_route_v3_RouteConfiguration_add_request_headers_to_remove(envoy_config_route_v3_RouteConfiguration *msg, upb_strview val, upb_arena *arena) {
  return _upb_array_append_accessor(msg, UPB_SIZE(40, 80), UPB_SIZE(8, 16), UPB_TYPE_STRING, &val,
      arena);
}
UPB_INLINE void envoy_config_route_v3_RouteConfiguration_set_vhds(envoy_config_route_v3_RouteConfiguration *msg, envoy_config_route_v3_Vhds* value) {
  *UPB_PTR_AT(msg, UPB_SIZE(16, 32), envoy_config_route_v3_Vhds*) = value;
}
UPB_INLINE struct envoy_config_route_v3_Vhds* envoy_config_route_v3_RouteConfiguration_mutable_vhds(envoy_config_route_v3_RouteConfiguration *msg, upb_arena *arena) {
  struct envoy_config_route_v3_Vhds* sub = (struct envoy_config_route_v3_Vhds*)envoy_config_route_v3_RouteConfiguration_vhds(msg);
  if (sub == NULL) {
    sub = (struct envoy_config_route_v3_Vhds*)_upb_msg_new(&envoy_config_route_v3_Vhds_msginit, arena);
    if (!sub) return NULL;
    envoy_config_route_v3_RouteConfiguration_set_vhds(msg, sub);
  }
  return sub;
}
UPB_INLINE void envoy_config_route_v3_RouteConfiguration_set_most_specific_header_mutations_wins(envoy_config_route_v3_RouteConfiguration *msg, bool value) {
  *UPB_PTR_AT(msg, UPB_SIZE(0, 0), bool) = value;
}

/* envoy.config.route.v3.Vhds */

UPB_INLINE envoy_config_route_v3_Vhds *envoy_config_route_v3_Vhds_new(upb_arena *arena) {
  return (envoy_config_route_v3_Vhds *)_upb_msg_new(&envoy_config_route_v3_Vhds_msginit, arena);
}
UPB_INLINE envoy_config_route_v3_Vhds *envoy_config_route_v3_Vhds_parse(const char *buf, size_t size,
                        upb_arena *arena) {
  envoy_config_route_v3_Vhds *ret = envoy_config_route_v3_Vhds_new(arena);
  return (ret && upb_decode(buf, size, ret, &envoy_config_route_v3_Vhds_msginit, arena)) ? ret : NULL;
}
UPB_INLINE char *envoy_config_route_v3_Vhds_serialize(const envoy_config_route_v3_Vhds *msg, upb_arena *arena, size_t *len) {
  return upb_encode(msg, &envoy_config_route_v3_Vhds_msginit, arena, len);
}

UPB_INLINE bool envoy_config_route_v3_Vhds_has_config_source(const envoy_config_route_v3_Vhds *msg) { return _upb_has_submsg_nohasbit(msg, UPB_SIZE(0, 0)); }
UPB_INLINE const struct envoy_config_core_v3_ConfigSource* envoy_config_route_v3_Vhds_config_source(const envoy_config_route_v3_Vhds *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(0, 0), const struct envoy_config_core_v3_ConfigSource*); }

UPB_INLINE void envoy_config_route_v3_Vhds_set_config_source(envoy_config_route_v3_Vhds *msg, struct envoy_config_core_v3_ConfigSource* value) {
  *UPB_PTR_AT(msg, UPB_SIZE(0, 0), struct envoy_config_core_v3_ConfigSource*) = value;
}
UPB_INLINE struct envoy_config_core_v3_ConfigSource* envoy_config_route_v3_Vhds_mutable_config_source(envoy_config_route_v3_Vhds *msg, upb_arena *arena) {
  struct envoy_config_core_v3_ConfigSource* sub = (struct envoy_config_core_v3_ConfigSource*)envoy_config_route_v3_Vhds_config_source(msg);
  if (sub == NULL) {
    sub = (struct envoy_config_core_v3_ConfigSource*)_upb_msg_new(&envoy_config_core_v3_ConfigSource_msginit, arena);
    if (!sub) return NULL;
    envoy_config_route_v3_Vhds_set_config_source(msg, sub);
  }
  return sub;
}

#ifdef __cplusplus
}  /* extern "C" */
#endif

#include "upb/port_undef.inc"

#endif  /* ENVOY_CONFIG_ROUTE_V3_ROUTE_PROTO_UPB_H_ */
