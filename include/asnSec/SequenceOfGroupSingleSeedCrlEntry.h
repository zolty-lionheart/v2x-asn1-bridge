/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "CRLBaseTypes"
 * 	found in "CRLBaseTypes.asn"
 * 	`asn1c -fcompound-names`
 */

#ifndef	_SequenceOfGroupSingleSeedCrlEntry_H_
#define	_SequenceOfGroupSingleSeedCrlEntry_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct GroupSingleSeedCrlEntry;

/* SequenceOfGroupSingleSeedCrlEntry */
typedef struct SequenceOfGroupSingleSeedCrlEntry {
	A_SEQUENCE_OF(struct GroupSingleSeedCrlEntry) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SequenceOfGroupSingleSeedCrlEntry_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SequenceOfGroupSingleSeedCrlEntry;
extern asn_SET_OF_specifics_t asn_SPC_SequenceOfGroupSingleSeedCrlEntry_specs_1;
extern asn_TYPE_member_t asn_MBR_SequenceOfGroupSingleSeedCrlEntry_1[1];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "GroupSingleSeedCrlEntry.h"

#endif	/* _SequenceOfGroupSingleSeedCrlEntry_H_ */
#include <asn_internal.h>
