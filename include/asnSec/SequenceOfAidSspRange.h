/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "SecurityBaseDataTypes"
 * 	found in "SecurityBaseDataTypes.asn"
 * 	`asn1c -fcompound-names`
 */

#ifndef	_SequenceOfAidSspRange_H_
#define	_SequenceOfAidSspRange_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct AidSspRange;

/* SequenceOfAidSspRange */
typedef struct SequenceOfAidSspRange {
	A_SEQUENCE_OF(struct AidSspRange) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SequenceOfAidSspRange_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SequenceOfAidSspRange;
extern asn_SET_OF_specifics_t asn_SPC_SequenceOfAidSspRange_specs_1;
extern asn_TYPE_member_t asn_MBR_SequenceOfAidSspRange_1[1];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "AidSspRange.h"

#endif	/* _SequenceOfAidSspRange_H_ */
#include <asn_internal.h>
