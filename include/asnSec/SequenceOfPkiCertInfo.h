/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "CTL"
 * 	found in "CTL.asn"
 * 	`asn1c -fcompound-names`
 */

#ifndef	_SequenceOfPkiCertInfo_H_
#define	_SequenceOfPkiCertInfo_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct PkiCertInfo;

/* SequenceOfPkiCertInfo */
typedef struct SequenceOfPkiCertInfo {
	A_SEQUENCE_OF(struct PkiCertInfo) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SequenceOfPkiCertInfo_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SequenceOfPkiCertInfo;
extern asn_SET_OF_specifics_t asn_SPC_SequenceOfPkiCertInfo_specs_1;
extern asn_TYPE_member_t asn_MBR_SequenceOfPkiCertInfo_1[1];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "PkiCertInfo.h"

#endif	/* _SequenceOfPkiCertInfo_H_ */
#include <asn_internal.h>
