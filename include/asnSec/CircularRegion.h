/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "SecurityBaseDataTypes"
 * 	found in "SecurityBaseDataTypes.asn"
 * 	`asn1c -fcompound-names`
 */

#ifndef	_CircularRegion_H_
#define	_CircularRegion_H_


#include <asn_application.h>

/* Including external dependencies */
#include "TwoDLocation.h"
#include "Uint16.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* CircularRegion */
typedef struct CircularRegion {
	TwoDLocation_t	 center;
	Uint16_t	 radius;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CircularRegion_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CircularRegion;
extern asn_SEQUENCE_specifics_t asn_SPC_CircularRegion_specs_1;
extern asn_TYPE_member_t asn_MBR_CircularRegion_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _CircularRegion_H_ */
#include <asn_internal.h>
