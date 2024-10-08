/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "SecurityBaseDataTypes"
 * 	found in "SecurityBaseDataTypes.asn"
 * 	`asn1c -fcompound-names`
 */

#ifndef	_EcdsaP384Signature_H_
#define	_EcdsaP384Signature_H_


#include <asn_application.h>

/* Including external dependencies */
#include "EccP384CurvePoint.h"
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* EcdsaP384Signature */
typedef struct EcdsaP384Signature {
	EccP384CurvePoint_t	 rSig;
	OCTET_STRING_t	 sSig;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} EcdsaP384Signature_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_EcdsaP384Signature;
extern asn_SEQUENCE_specifics_t asn_SPC_EcdsaP384Signature_specs_1;
extern asn_TYPE_member_t asn_MBR_EcdsaP384Signature_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _EcdsaP384Signature_H_ */
#include <asn_internal.h>
