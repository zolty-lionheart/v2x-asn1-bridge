/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LaRaInterfacePdu"
 * 	found in "LaRaInterfacePdu.asn"
 * 	`asn1c -fcompound-names`
 */

#ifndef	_EncryptedGroupLV_H_
#define	_EncryptedGroupLV_H_


#include <asn_application.h>

/* Including external dependencies */
#include "Uint8.h"
#include "LaId.h"
#include "EncryptedData.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* EncryptedGroupLV */
typedef struct EncryptedGroupLV {
	Uint8_t	 version;
	LaId_t	 laId;
	EncryptedData_t	 enc_lv;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} EncryptedGroupLV_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_EncryptedGroupLV;
extern asn_SEQUENCE_specifics_t asn_SPC_EncryptedGroupLV_specs_1;
extern asn_TYPE_member_t asn_MBR_EncryptedGroupLV_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _EncryptedGroupLV_H_ */
#include <asn_internal.h>
