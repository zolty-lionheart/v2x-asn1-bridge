/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "SecurityDataTypes"
 * 	found in "SecurityDataTypes.asn"
 * 	`asn1c -fcompound-names`
 */

#ifndef	_CertificateBase_H_
#define	_CertificateBase_H_


#include <asn_application.h>

/* Including external dependencies */
#include "Uint8.h"
#include "CertificateType.h"
#include "IssuerIdentifier.h"
#include "ToBeSignedCertificate.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct Signature;

/* CertificateBase */
typedef struct CertificateBase {
	Uint8_t	 version;
	CertificateType_t	 type;
	IssuerIdentifier_t	 issuer;
	ToBeSignedCertificate_t	 toBeSigned;
	struct Signature	*signature	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CertificateBase_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CertificateBase;
extern asn_SEQUENCE_specifics_t asn_SPC_CertificateBase_specs_1;
extern asn_TYPE_member_t asn_MBR_CertificateBase_1[5];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "Signature.h"

#endif	/* _CertificateBase_H_ */
#include <asn_internal.h>
