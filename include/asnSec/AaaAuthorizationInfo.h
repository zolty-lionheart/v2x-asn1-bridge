/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EeRaInterfacePdu"
 * 	found in "EeRaInterfacePdu.asn"
 * 	`asn1c -fcompound-names`
 */

#ifndef	_AaaAuthorizationInfo_H_
#define	_AaaAuthorizationInfo_H_


#include <asn_application.h>

/* Including external dependencies */
#include "Opaque.h"
#include <UTF8String.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* AaaAuthorizationInfo */
typedef struct AaaAuthorizationInfo {
	Opaque_t	 aaaAuthorizationInfo;
	UTF8String_t	*aaaUrl	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} AaaAuthorizationInfo_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_AaaAuthorizationInfo;
extern asn_SEQUENCE_specifics_t asn_SPC_AaaAuthorizationInfo_specs_1;
extern asn_TYPE_member_t asn_MBR_AaaAuthorizationInfo_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _AaaAuthorizationInfo_H_ */
#include <asn_internal.h>
