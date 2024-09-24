/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "SecurityBaseDataTypes"
 * 	found in "SecurityBaseDataTypes.asn"
 * 	`asn1c -fcompound-names`
 */

#ifndef	_BitmapSspRange_H_
#define	_BitmapSspRange_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* BitmapSspRange */
typedef struct BitmapSspRange {
	OCTET_STRING_t	 sspValue;
	OCTET_STRING_t	 sspBitmask;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} BitmapSspRange_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_BitmapSspRange;
extern asn_SEQUENCE_specifics_t asn_SPC_BitmapSspRange_specs_1;
extern asn_TYPE_member_t asn_MBR_BitmapSspRange_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _BitmapSspRange_H_ */
#include <asn_internal.h>
