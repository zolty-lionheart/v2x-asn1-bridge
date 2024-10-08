/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "SecurityBaseDataTypes"
 * 	found in "SecurityBaseDataTypes.asn"
 * 	`asn1c -fcompound-names`
 */

#ifndef	_EcencP256EncryptedKey_H_
#define	_EcencP256EncryptedKey_H_


#include <asn_application.h>

/* Including external dependencies */
#include "EccP256CurvePoint.h"
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* EcencP256EncryptedKey */
typedef struct EcencP256EncryptedKey {
	EccP256CurvePoint_t	 v;
	OCTET_STRING_t	 t;
	OCTET_STRING_t	 c;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} EcencP256EncryptedKey_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_EcencP256EncryptedKey;
extern asn_SEQUENCE_specifics_t asn_SPC_EcencP256EncryptedKey_specs_1;
extern asn_TYPE_member_t asn_MBR_EcencP256EncryptedKey_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _EcencP256EncryptedKey_H_ */
#include <asn_internal.h>
